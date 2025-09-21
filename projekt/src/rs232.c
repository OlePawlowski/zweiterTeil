#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

// UART parameters from the assignment/screenshot
// Port settings: 115200 baud, 8 data bits, parity none, 1 stop bit
// Simulator clock: 90 MHz, simulator evaluates on both edges -> printOut is called at 180 MHz

static const uint32_t SIM_SAMPLE_HZ = 180000000u;   // calls to printOut per second
static const uint32_t BAUD_RATE     = 115200u;      // bits per second

// Fractional accumulators to realize 1562.5 and 781.25 using integers
static uint32_t frac_accum_bit = 0;   // accumulates 0.5 tick per bit
static uint8_t  frac_accum_half = 0;  // accumulates 0.25 tick per half-bit (mod 4)

static inline uint32_t ticks_for_one_bit(void) {
    uint32_t ticks = SIM_SAMPLE_HZ / BAUD_RATE;                 // 1562
    frac_accum_bit += SIM_SAMPLE_HZ % BAUD_RATE;                // +57600 each call
    if (frac_accum_bit >= BAUD_RATE) {                          // every 2 bits add +1
        frac_accum_bit -= BAUD_RATE;
        ticks += 1;                                             // 1563 on every second bit
    }
    return ticks;
}

static inline uint32_t ticks_for_half_bit(void) {
    uint32_t ticks = (SIM_SAMPLE_HZ / BAUD_RATE) / 2u;          // 781
    // Add one extra tick every 4 half-bits to achieve +0.25 on average
    frac_accum_half = (uint8_t)((frac_accum_half + 1u) & 0x3u); // 0..3
    if (frac_accum_half == 0u) {
        ticks += 1;                                             // 782 every 4th half-bit
    }
    return ticks;                                               // averages to 781.25
}

void printOut(uint8_t val) {
    static bool is_receiving = false;            // currently inside a frame
    static uint32_t ticks_until_sample = 0;      // down-counter until next sample instant
    static uint8_t bit_index = 0;                // 0..7 for data bits, 8 for stop
    static uint8_t rx_byte = 0;                  // assembled character
    static uint8_t last_val = 1u;                // remember previous TX level
    static bool seen_idle_one = false;           // have we observed idle '1' level yet?

    if (!is_receiving) {
        // Track if line has been idle high at least once to avoid false start at t=0
        if (val == 1u) {
            seen_idle_one = true;
        }
        // Detect proper falling edge from idle to start bit
        if (seen_idle_one && (last_val == 1u) && (val == 0u)) {
            is_receiving = true;
            bit_index = 0u;
            rx_byte = 0u;
            // Wait to the middle of the first data bit: 1.5 bit times
            ticks_until_sample = ticks_for_half_bit() + ticks_for_one_bit();
        }
        last_val = val;
        return;
    }

    // In receiving state: count down to next sample point
    if (ticks_until_sample > 0u) {
        ticks_until_sample--;
        return;
    }

    // Reached a sampling instant
    if (bit_index < 8u) {
        // Sample data bits LSB first
        if (val) {
            rx_byte |= (uint8_t)(1u << bit_index);
        }
        bit_index++;
        // Schedule next data-bit sample one bit later
        ticks_until_sample = ticks_for_one_bit();
        return;
    }

    // Stop bit: should be '1'
    if (val == 1u) {
        printf("%c", rx_byte);
        fflush(stdout);
    } else {
        printf("Stoppbit falsch!\n");
        fflush(stdout);
    }

    // Frame done; return to idle
    is_receiving = false;
    last_val = val;
}