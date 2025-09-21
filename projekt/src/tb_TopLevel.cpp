//
// Created by thorben on 4/29/25.
//

#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdint.h>
#include "VTopLevel.h"
#include "rs232.h"

#define MAX_SIM_TIME 200000000
#define VERIF_START_TIME 7
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

void dut_reset (VTopLevel *dut, vluint64_t &sim_time){
    dut->reset = 0;
    if(sim_time >= 3 && sim_time < 6){
        dut->reset = 1;
    }
}


int main(int argc, char** argv, char** env) {
    srand (time(NULL));
    Verilated::commandArgs(argc, argv);
    VTopLevel *dut = new VTopLevel;

    Verilated::traceEverOn(true);
    //VerilatedVcdC *m_trace = new VerilatedVcdC;
    //dut->trace(m_trace, 10);
    //m_trace->open("waveform.vcd");

    while (sim_time < MAX_SIM_TIME) {
        dut_reset(dut, sim_time);
        dut->clock ^= 1;
        dut->eval();
        printOut((uint32_t)(int)dut->io_RS232TX);
        sim_time++;
    }

    delete dut;
    exit(EXIT_SUCCESS);
}
