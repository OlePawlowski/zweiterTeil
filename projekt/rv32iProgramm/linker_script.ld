ENTRY(_start)
MEMORY
{
    iram (rx) : ORIGIN = 0x80000000, LENGTH = 0x7000
    dram (rw): ORIGIN = 0x00000000, LENGTH = 0xFFFF
}
SECTIONS
{
    .init : {*(.init*) } > iram
    .text : { *(.text*) } > iram
    .rodata : { *(.rodata*) } > dram
    .data : { *(.data*) } > dram
    .bss : { *(.sbss*) } > dram
}
__stack_top = 0x1000;
