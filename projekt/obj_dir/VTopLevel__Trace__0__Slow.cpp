// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopLevel__Syms.h"


VL_ATTR_COLD void VTopLevel___024root__trace_init_sub__TOP__0(VTopLevel___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBus(c+139,"io_GPO", false,-1, 15,0);
    tracep->declBus(c+140,"io_GPI", false,-1, 15,0);
    tracep->declBit(c+141,"io_RS232TX", false,-1);
    tracep->pushNamePrefix("TopLevel ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBus(c+139,"io_GPO", false,-1, 15,0);
    tracep->declBus(c+140,"io_GPI", false,-1, 15,0);
    tracep->declBit(c+141,"io_RS232TX", false,-1);
    tracep->declBus(c+6,"gpoValReg", false,-1, 15,0);
    tracep->declBus(c+7,"rs232txValReg", false,-1, 7,0);
    tracep->declBit(c+8,"rs232txValidReg", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBus(c+9,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+10,"io_imem_data", false,-1, 31,0);
    tracep->declBus(c+11,"io_dmem_req_addr", false,-1, 31,0);
    tracep->declBus(c+12,"io_dmem_req_data", false,-1, 31,0);
    tracep->declBit(c+13,"io_dmem_req_fcn", false,-1);
    tracep->declBus(c+14,"io_dmem_req_typ", false,-1, 2,0);
    tracep->declBit(c+15,"io_dmem_en", false,-1);
    tracep->declBus(c+1,"io_dmem_data", false,-1, 31,0);
    tracep->pushNamePrefix("c ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBus(c+10,"io_dat_dec_inst", false,-1, 31,0);
    tracep->declBit(c+16,"io_dat_dec_valid", false,-1);
    tracep->declBit(c+17,"io_dat_exe_br_eq", false,-1);
    tracep->declBit(c+18,"io_dat_exe_br_lt", false,-1);
    tracep->declBit(c+19,"io_dat_exe_br_ltu", false,-1);
    tracep->declBus(c+20,"io_dat_exe_br_type", false,-1, 3,0);
    tracep->declBit(c+21,"io_dat_exe_inst_misaligned", false,-1);
    tracep->declBit(c+22,"io_dat_mem_data_misaligned", false,-1);
    tracep->declBit(c+23,"io_ctl_dec_stall", false,-1);
    tracep->declBus(c+24,"io_ctl_exe_pc_sel", false,-1, 1,0);
    tracep->declBus(c+25,"io_ctl_br_type", false,-1, 3,0);
    tracep->declBit(c+26,"io_ctl_if_kill", false,-1);
    tracep->declBit(c+26,"io_ctl_dec_kill", false,-1);
    tracep->declBus(c+27,"io_ctl_op1_sel", false,-1, 1,0);
    tracep->declBus(c+28,"io_ctl_op2_sel", false,-1, 2,0);
    tracep->declBus(c+29,"io_ctl_alu_fun", false,-1, 3,0);
    tracep->declBus(c+30,"io_ctl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+31,"io_ctl_rf_wen", false,-1);
    tracep->declBit(c+32,"io_ctl_mem_val", false,-1);
    tracep->declBus(c+33,"io_ctl_mem_fcn", false,-1, 1,0);
    tracep->declBus(c+34,"io_ctl_mem_typ", false,-1, 2,0);
    tracep->declBit(c+35,"io_ctl_pipeline_kill", false,-1);
    tracep->declBit(c+35,"io_ctl_mem_exception", false,-1);
    tracep->declBit(c+35,"pipeline_kill_wire", false,-1);
    tracep->declBit(c+32,"csignals_9", false,-1);
    tracep->declBit(c+36,"csignals_10", false,-1);
    tracep->declBus(c+24,"pc_sel", false,-1, 1,0);
    tracep->declBus(c+37,"exe_reg_wbaddr", false,-1, 4,0);
    tracep->declBit(c+38,"exe_reg_illegal", false,-1);
    tracep->declBit(c+39,"exe_reg_is_csr", false,-1);
    tracep->declBit(c+40,"exe_inst_is_load", false,-1);
    tracep->declBit(c+23,"stall", false,-1);
    tracep->declBit(c+41,"io_ctl_mem_exception_REG", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBus(c+9,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+10,"io_imem_data", false,-1, 31,0);
    tracep->declBus(c+11,"io_dmem_req_addr", false,-1, 31,0);
    tracep->declBus(c+12,"io_dmem_req_data", false,-1, 31,0);
    tracep->declBit(c+13,"io_dmem_req_fcn", false,-1);
    tracep->declBus(c+14,"io_dmem_req_typ", false,-1, 2,0);
    tracep->declBit(c+15,"io_dmem_en", false,-1);
    tracep->declBus(c+1,"io_dmem_data", false,-1, 31,0);
    tracep->declBit(c+23,"io_ctl_dec_stall", false,-1);
    tracep->declBus(c+24,"io_ctl_exe_pc_sel", false,-1, 1,0);
    tracep->declBus(c+25,"io_ctl_br_type", false,-1, 3,0);
    tracep->declBit(c+26,"io_ctl_if_kill", false,-1);
    tracep->declBit(c+26,"io_ctl_dec_kill", false,-1);
    tracep->declBus(c+27,"io_ctl_op1_sel", false,-1, 1,0);
    tracep->declBus(c+28,"io_ctl_op2_sel", false,-1, 2,0);
    tracep->declBus(c+29,"io_ctl_alu_fun", false,-1, 3,0);
    tracep->declBus(c+30,"io_ctl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+31,"io_ctl_rf_wen", false,-1);
    tracep->declBit(c+32,"io_ctl_mem_val", false,-1);
    tracep->declBus(c+33,"io_ctl_mem_fcn", false,-1, 1,0);
    tracep->declBus(c+34,"io_ctl_mem_typ", false,-1, 2,0);
    tracep->declBit(c+35,"io_ctl_pipeline_kill", false,-1);
    tracep->declBit(c+35,"io_ctl_mem_exception", false,-1);
    tracep->declBus(c+10,"io_dat_dec_inst", false,-1, 31,0);
    tracep->declBit(c+16,"io_dat_dec_valid", false,-1);
    tracep->declBit(c+17,"io_dat_exe_br_eq", false,-1);
    tracep->declBit(c+18,"io_dat_exe_br_lt", false,-1);
    tracep->declBit(c+19,"io_dat_exe_br_ltu", false,-1);
    tracep->declBus(c+20,"io_dat_exe_br_type", false,-1, 3,0);
    tracep->declBit(c+21,"io_dat_exe_inst_misaligned", false,-1);
    tracep->declBit(c+22,"io_dat_mem_data_misaligned", false,-1);
    tracep->declBus(c+42,"if_reg_pc", false,-1, 31,0);
    tracep->declBit(c+16,"dec_reg_valid", false,-1);
    tracep->declBus(c+43,"dec_reg_pc", false,-1, 31,0);
    tracep->declBus(c+44,"exe_reg_inst", false,-1, 31,0);
    tracep->declBus(c+45,"exe_reg_pc", false,-1, 31,0);
    tracep->declBus(c+46,"exe_reg_wbaddr", false,-1, 4,0);
    tracep->declBus(c+47,"exe_reg_op1_data", false,-1, 31,0);
    tracep->declBus(c+48,"exe_reg_op2_data", false,-1, 31,0);
    tracep->declBus(c+12,"exe_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+20,"exe_reg_ctrl_br_type", false,-1, 3,0);
    tracep->declBus(c+49,"exe_reg_ctrl_alu_fun", false,-1, 3,0);
    tracep->declBus(c+50,"exe_reg_ctrl_wb_sel", false,-1, 1,0);
    tracep->declBit(c+51,"exe_reg_ctrl_rf_wen", false,-1);
    tracep->declBit(c+15,"exe_reg_ctrl_mem_val", false,-1);
    tracep->declBit(c+13,"exe_reg_ctrl_mem_fcn", false,-1);
    tracep->declBus(c+14,"exe_reg_ctrl_mem_typ", false,-1, 2,0);
    tracep->declBus(c+52,"mem_reg_alu_out", false,-1, 31,0);
    tracep->declBus(c+53,"mem_reg_wbaddr", false,-1, 4,0);
    tracep->declBit(c+54,"mem_reg_ctrl_rf_wen", false,-1);
    tracep->declBit(c+55,"mem_reg_ctrl_mem_val", false,-1);
    tracep->declBus(c+56,"mem_reg_ctrl_mem_typ", false,-1, 2,0);
    tracep->declBus(c+57,"mem_reg_ctrl_wb_sel", false,-1, 1,0);
    tracep->declBus(c+58,"wb_reg_wbaddr", false,-1, 4,0);
    tracep->declBus(c+59,"wb_reg_wbdata", false,-1, 31,0);
    tracep->declBit(c+60,"wb_reg_ctrl_rf_wen", false,-1);
    tracep->declBit(c+61,"dec_reg_stall", false,-1);
    tracep->declBus(c+62,"if_reg_pc_buffer", false,-1, 31,0);
    tracep->declBus(c+2,"mem_wbdata", false,-1, 31,0);
    tracep->pushNamePrefix("alu_module ");
    tracep->declBus(c+44,"io_default_alu_func", false,-1, 31,0);
    tracep->declBus(c+47,"io_op1_data", false,-1, 31,0);
    tracep->declBus(c+48,"io_op2_data", false,-1, 31,0);
    tracep->declBus(c+63,"io_alu_func", false,-1, 31,0);
    tracep->declBus(c+11,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+10,"io_dec_reg_inst", false,-1, 31,0);
    tracep->declBus(c+3,"io_dec_op1_data_out", false,-1, 31,0);
    tracep->declBus(c+4,"io_dec_op2_data_out", false,-1, 31,0);
    tracep->declBus(c+5,"io_dec_rs2_data_out", false,-1, 31,0);
    tracep->declBus(c+43,"io_dec_reg_pc", false,-1, 31,0);
    tracep->declBus(c+11,"io_exe_alu_out", false,-1, 31,0);
    tracep->declBus(c+2,"io_mem_wbdata", false,-1, 31,0);
    tracep->declBus(c+59,"io_wb_reg_wbdata", false,-1, 31,0);
    tracep->declBus(c+64,"io_rf_rs1_data", false,-1, 31,0);
    tracep->declBus(c+65,"io_rf_rs2_data", false,-1, 31,0);
    tracep->declBus(c+27,"io_op1_sel", false,-1, 1,0);
    tracep->declBus(c+28,"io_op2_sel", false,-1, 2,0);
    tracep->declBus(c+46,"io_exe_reg_wbaddr", false,-1, 4,0);
    tracep->declBus(c+53,"io_mem_reg_wbaddr", false,-1, 4,0);
    tracep->declBus(c+58,"io_wb_reg_wbaddr", false,-1, 4,0);
    tracep->declBit(c+51,"io_exe_reg_ctrl_rf_wen", false,-1);
    tracep->declBit(c+54,"io_mem_reg_ctrl_rf_wen", false,-1);
    tracep->declBit(c+60,"io_wb_reg_ctrl_rf_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBus(c+66,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+64,"io_rs1_data", false,-1, 31,0);
    tracep->declBus(c+67,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+65,"io_rs2_data", false,-1, 31,0);
    tracep->declBus(c+58,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+59,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+60,"io_wen", false,-1);
    tracep->pushNamePrefix("regfile_ext ");
    tracep->declBus(c+67,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+142,"R0_en", false,-1);
    tracep->declBit(c+137,"R0_clk", false,-1);
    tracep->declBus(c+68,"R0_data", false,-1, 31,0);
    tracep->declBus(c+66,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+142,"R1_en", false,-1);
    tracep->declBit(c+137,"R1_clk", false,-1);
    tracep->declBus(c+69,"R1_data", false,-1, 31,0);
    tracep->declBus(c+58,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+70,"W0_en", false,-1);
    tracep->declBit(c+137,"W0_clk", false,-1);
    tracep->declBus(c+59,"W0_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+71+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBus(c+11,"io_req_addr", false,-1, 31,0);
    tracep->declBus(c+12,"io_req_data", false,-1, 31,0);
    tracep->declBit(c+13,"io_req_fcn", false,-1);
    tracep->declBus(c+14,"io_req_typ", false,-1, 2,0);
    tracep->declBit(c+103,"io_en", false,-1);
    tracep->declBus(c+104,"io_data", false,-1, 31,0);
    tracep->declBus(c+105,"typeReg", false,-1, 2,0);
    tracep->declBus(c+106,"addrReg", false,-1, 1,0);
    tracep->declBit(c+107,"enReg", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBus(c+108,"io_address", false,-1, 12,0);
    tracep->declBus(c+109,"io_in_value", false,-1, 31,0);
    tracep->declBit(c+13,"io_wr", false,-1);
    tracep->declBus(c+110,"io_wrMask", false,-1, 3,0);
    tracep->declBus(c+111,"io_out_value", false,-1, 31,0);
    tracep->pushNamePrefix("memory_ext ");
    tracep->declBus(c+108,"R0_addr", false,-1, 12,0);
    tracep->declBit(c+142,"R0_en", false,-1);
    tracep->declBit(c+137,"R0_clk", false,-1);
    tracep->declBus(c+111,"R0_data", false,-1, 31,0);
    tracep->declBus(c+108,"W0_addr", false,-1, 12,0);
    tracep->declBit(c+13,"W0_en", false,-1);
    tracep->declBit(c+137,"W0_clk", false,-1);
    tracep->declBus(c+109,"W0_data", false,-1, 31,0);
    tracep->declBus(c+110,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memoryByteInputDistributer ");
    tracep->declBus(c+112,"io_in_value_0", false,-1, 7,0);
    tracep->declBus(c+113,"io_in_value_1", false,-1, 7,0);
    tracep->declBus(c+114,"io_in_value_2", false,-1, 7,0);
    tracep->declBus(c+115,"io_in_value_3", false,-1, 7,0);
    tracep->declBus(c+116,"io_address", false,-1, 1,0);
    tracep->declBus(c+14,"io_opTyp", false,-1, 2,0);
    tracep->declBus(c+117,"io_out_value_0", false,-1, 7,0);
    tracep->declBus(c+118,"io_out_value_1", false,-1, 7,0);
    tracep->declBus(c+119,"io_out_value_2", false,-1, 7,0);
    tracep->declBus(c+120,"io_out_value_3", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memoryByteOutputDistributer ");
    tracep->declBus(c+121,"io_in_value_0", false,-1, 7,0);
    tracep->declBus(c+122,"io_in_value_1", false,-1, 7,0);
    tracep->declBus(c+123,"io_in_value_2", false,-1, 7,0);
    tracep->declBus(c+124,"io_in_value_3", false,-1, 7,0);
    tracep->declBus(c+106,"io_address", false,-1, 1,0);
    tracep->declBus(c+105,"io_opTyp", false,-1, 2,0);
    tracep->declBus(c+125,"io_out_value4rd_0", false,-1, 7,0);
    tracep->declBus(c+126,"io_out_value4rd_1", false,-1, 7,0);
    tracep->declBus(c+127,"io_out_value4rd_2", false,-1, 7,0);
    tracep->declBus(c+128,"io_out_value4rd_3", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBus(c+9,"io_addr", false,-1, 31,0);
    tracep->declBus(c+10,"io_data", false,-1, 31,0);
    tracep->pushNamePrefix("memory_ext ");
    tracep->declBus(c+129,"R0_addr", false,-1, 12,0);
    tracep->declBit(c+142,"R0_en", false,-1);
    tracep->declBit(c+137,"R0_clk", false,-1);
    tracep->declBus(c+10,"R0_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBit(c+141,"io_txd", false,-1);
    tracep->declBit(c+8,"io_valid", false,-1);
    tracep->declBus(c+7,"io_value", false,-1, 7,0);
    tracep->pushNamePrefix("tx ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBit(c+141,"io_txd", false,-1);
    tracep->declBit(c+8,"io_channel_valid", false,-1);
    tracep->declBus(c+7,"io_channel_bits", false,-1, 7,0);
    tracep->pushNamePrefix("buf_0 ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBit(c+8,"io_in_valid", false,-1);
    tracep->declBus(c+7,"io_in_bits", false,-1, 7,0);
    tracep->declBit(c+130,"io_out_ready", false,-1);
    tracep->declBit(c+131,"io_out_valid", false,-1);
    tracep->declBus(c+132,"io_out_bits", false,-1, 7,0);
    tracep->declBit(c+131,"stateReg", false,-1);
    tracep->declBus(c+132,"dataReg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tx ");
    tracep->declBit(c+137,"clock", false,-1);
    tracep->declBit(c+138,"reset", false,-1);
    tracep->declBit(c+141,"io_txd", false,-1);
    tracep->declBit(c+130,"io_channel_ready", false,-1);
    tracep->declBit(c+131,"io_channel_valid", false,-1);
    tracep->declBus(c+132,"io_channel_bits", false,-1, 7,0);
    tracep->declBus(c+133,"shiftReg", false,-1, 10,0);
    tracep->declBus(c+134,"cntReg", false,-1, 19,0);
    tracep->declBus(c+135,"bitsReg", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+136,"rs232txValidWire", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTopLevel___024root__trace_init_top(VTopLevel___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_init_top\n"); );
    // Body
    VTopLevel___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTopLevel___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTopLevel___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTopLevel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTopLevel___024root__trace_register(VTopLevel___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTopLevel___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTopLevel___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTopLevel___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTopLevel___024root__trace_full_sub_0(VTopLevel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTopLevel___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_full_top_0\n"); );
    // Init
    VTopLevel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopLevel___024root*>(voidSelf);
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTopLevel___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTopLevel___024root__trace_full_sub_0(VTopLevel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h22c6fb85__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data),32);
    bufp->fullIData(oldp+2,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata),32);
    bufp->fullIData(oldp+3,(((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel))
                              ? (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)
                              : ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel))
                                  ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc
                                  : ((((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr) 
                                       == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                      & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                         & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen)))
                                      ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                                      : ((((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr) 
                                           == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                          & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                             & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen)))
                                          ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                                          : ((((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr) 
                                               == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                              & ((0U 
                                                  != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                                 & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen)))
                                              ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                                              : ((0U 
                                                  != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr))
                                                  ? 
                                                 vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                                                 [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]
                                                  : 0U))))))),32);
    __Vtemp_h22c6fb85__0[0U] = (IData)((((QData)((IData)(
                                                         (((- (IData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0))) 
                                                           << 0xcU) 
                                                          | ((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                              >> 0x14U)
                                                              : 0U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data))));
    __Vtemp_h22c6fb85__0[1U] = (IData)(((((QData)((IData)(
                                                          (((- (IData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0))) 
                                                            << 0xcU) 
                                                           | ((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                               >> 0x14U)
                                                               : 0U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data))) 
                                        >> 0x20U));
    __Vtemp_h22c6fb85__0[2U] = (((- (IData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0))) 
                                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hf2d73f0e__0) 
                                              << 5U) 
                                             | ((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                    >> 7U))
                                                 : 0U)));
    __Vtemp_h22c6fb85__0[3U] = (((- (IData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0))) 
                                 << 0xcU) | ((0xfffff800U 
                                              & (((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0) 
                                                  << 0xbU) 
                                                 & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                    << 4U))) 
                                             | ((((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (0x3fU 
                                                   & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                      >> 0x19U))
                                                   : 0U) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                        >> 8U))
                                                     : 0U) 
                                                   << 1U))));
    __Vtemp_h22c6fb85__0[4U] = (((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                  ? (vlSelf->__VdfgTmp_hb5e0a298__0 
                                     >> 0xcU) : 0U) 
                                << 0xcU);
    __Vtemp_h22c6fb85__0[5U] = (((- (IData)((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0))) 
                                 << 0x14U) | ((((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                    >> 0xcU))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((0x7ff800U 
                                                  & (((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0) 
                                                      << 0xbU) 
                                                     & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                        >> 9U))) 
                                                 | (((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (0x3ffU 
                                                      & (vlSelf->__VdfgTmp_hb5e0a298__0 
                                                         >> 0x15U))
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_h22c6fb85__0[6U] = 0U;
    __Vtemp_h22c6fb85__0[7U] = 0U;
    bufp->fullIData(oldp+4,((((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0) 
                              & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                              ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                              : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0) 
                                  & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                                  ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                                  : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0) 
                                      & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                                      ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                                      : (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_h22c6fb85__0[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                         << 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                        << 5U))))) 
                                         | (__Vtemp_h22c6fb85__0[
                                            (7U & (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                   << 5U)))))))),32);
    bufp->fullIData(oldp+5,(((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0)
                              ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                              : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0)
                                  ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                                  : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0)
                                      ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                                      : vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data)))),32);
    bufp->fullSData(oldp+6,(vlSelf->TopLevel__DOT__gpoValReg),16);
    bufp->fullCData(oldp+7,(vlSelf->TopLevel__DOT__rs232txValReg),8);
    bufp->fullBit(oldp+8,(vlSelf->TopLevel__DOT__rs232txValidReg));
    bufp->fullIData(oldp+9,(((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)
                              ? 0U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0)
                                       ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc
                                       : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1) 
                                           | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2))
                                           ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
                                              - (IData)(4U))
                                           : 0U)))),32);
    bufp->fullIData(oldp+10,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst),32);
    bufp->fullIData(oldp+11,(vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out),32);
    bufp->fullIData(oldp+12,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data),32);
    bufp->fullBit(oldp+13,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn));
    bufp->fullCData(oldp+14,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ),3);
    bufp->fullBit(oldp+15,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val));
    bufp->fullBit(oldp+16,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_valid));
    bufp->fullBit(oldp+17,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq));
    bufp->fullBit(oldp+18,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt));
    bufp->fullBit(oldp+19,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu));
    bufp->fullCData(oldp+20,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type),4);
    bufp->fullBit(oldp+21,((((0U != (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T)) 
                             & (1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel))) 
                            | ((vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T 
                                >> 1U) & (2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel))))));
    bufp->fullBit(oldp+22,(((0U != (7U & ((~ ((IData)(7U) 
                                              << (3U 
                                                  & ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ) 
                                                     - (IData)(1U))))) 
                                          & vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out))) 
                            & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val))));
    bufp->fullBit(oldp+23,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall));
    bufp->fullCData(oldp+24,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel),2);
    bufp->fullCData(oldp+25,((((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
                               | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5))
                               ? 0U : ((0x6fU == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))
                                        ? 7U : ((0x67U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                 ? 8U
                                                 : 
                                                ((0x63U 
                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0xe3U 
                                                   == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                   ? 1U
                                                   : 
                                                  ((0x2e3U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                    ? 3U
                                                    : 
                                                   ((0x3e3U 
                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                     ? 4U
                                                     : 
                                                    ((0x263U 
                                                      == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                      ? 5U
                                                      : 
                                                     ((0x363U 
                                                       == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                       ? 6U
                                                       : 0U)))))))))),4);
    bufp->fullBit(oldp+26,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill));
    bufp->fullCData(oldp+27,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel),2);
    bufp->fullCData(oldp+28,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel),3);
    bufp->fullCData(oldp+29,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_alu_fun),4);
    bufp->fullCData(oldp+30,(((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10)
                               ? 1U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5)
                                        ? 0U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11) 
                                                << 1U)))),2);
    bufp->fullBit(oldp+31,(((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
                            | ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6)) 
                               & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9) 
                                  | ((0x13U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                     | ((0x393U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                        | ((0x313U 
                                            == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                           | ((0x213U 
                                               == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                              | ((0x113U 
                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                 | ((0x193U 
                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                    | ((0x93U 
                                                        == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                       | ((0x8293U 
                                                           == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                          | ((0x293U 
                                                              == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                             | ((0xb3U 
                                                                 == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                | ((0x33U 
                                                                    == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                   | ((0x8033U 
                                                                       == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                      | ((0x133U 
                                                                          == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                         | ((0x1b3U 
                                                                             == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                            | ((0x3b3U 
                                                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                               | ((0x333U 
                                                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                                | ((0x233U 
                                                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                                | ((0x82b3U 
                                                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                                | ((0x2b3U 
                                                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0) 
                                                                                | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11)))))))))))))))))))))))));
    bufp->fullBit(oldp+32,(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7));
    bufp->fullCData(oldp+33,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10),2);
    bufp->fullCData(oldp+34,(((0x103U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                               ? 3U : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                        ? 1U : ((0x203U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                 ? 5U
                                                 : 
                                                ((0x83U 
                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0x283U 
                                                   == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                   ? 6U
                                                   : 
                                                  ((0x123U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                    ? 3U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                     ? 1U
                                                     : 
                                                    ((0xa3U 
                                                      == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                     << 1U))))))))),3);
    bufp->fullBit(oldp+35,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire));
    bufp->fullBit(oldp+36,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10));
    bufp->fullCData(oldp+37,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr),5);
    bufp->fullBit(oldp+38,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal));
    bufp->fullBit(oldp+39,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr));
    bufp->fullBit(oldp+40,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load));
    bufp->fullBit(oldp+41,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG));
    bufp->fullIData(oldp+42,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc),32);
    bufp->fullIData(oldp+43,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc),32);
    bufp->fullIData(oldp+44,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst),32);
    bufp->fullIData(oldp+45,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc),32);
    bufp->fullCData(oldp+46,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr),5);
    bufp->fullIData(oldp+47,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data),32);
    bufp->fullIData(oldp+48,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data),32);
    bufp->fullCData(oldp+49,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun),4);
    bufp->fullCData(oldp+50,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel),2);
    bufp->fullBit(oldp+51,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen));
    bufp->fullIData(oldp+52,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out),32);
    bufp->fullCData(oldp+53,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr),5);
    bufp->fullBit(oldp+54,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen));
    bufp->fullBit(oldp+55,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val));
    bufp->fullCData(oldp+56,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ),3);
    bufp->fullCData(oldp+57,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel),2);
    bufp->fullCData(oldp+58,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr),5);
    bufp->fullIData(oldp+59,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata),32);
    bufp->fullBit(oldp+60,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen));
    bufp->fullBit(oldp+61,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall));
    bufp->fullIData(oldp+62,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer),32);
    bufp->fullIData(oldp+63,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun),32);
    bufp->fullIData(oldp+64,(((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr))
                               ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                              [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]
                               : 0U)),32);
    bufp->fullIData(oldp+65,(vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data),32);
    bufp->fullCData(oldp+66,(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr),5);
    bufp->fullCData(oldp+67,(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr),5);
    bufp->fullIData(oldp+68,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                             [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr]),32);
    bufp->fullIData(oldp+69,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                             [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]),32);
    bufp->fullBit(oldp+70,(((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen) 
                            & (0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr)))));
    bufp->fullIData(oldp+71,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+72,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+73,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+74,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+75,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+76,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+77,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+78,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+79,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+80,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+81,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+82,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+83,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+84,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+85,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+86,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+87,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+88,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+89,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+90,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+91,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+92,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+93,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+94,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+95,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+96,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+97,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+98,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+99,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+100,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+101,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+102,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+103,(vlSelf->TopLevel__DOT____Vcellinp__dmem__io_en));
    bufp->fullIData(oldp+104,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__enReg)
                                ? ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                      ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)) 
                                    << 0x18U) | ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                                    ? 0U
                                                    : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2)) 
                                                  << 0x10U) 
                                                 | ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0)
                                                       ? 0U
                                                       : 
                                                      (((2U 
                                                         == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
                                                        | (6U 
                                                           == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->TopLevel__DOT__dmem__DOT__addrReg))
                                                         ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)
                                                         : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1))
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg))
                                                         ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1)
                                                         : 0U))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (IData)(
                                                                 ((((QData)((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0)) 
                                                                       << 0x28U) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3) 
                                                                                << 0x10U) 
                                                                                | ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0) 
                                                                                << 8U))))))) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg) 
                                                                      << 3U))))))))
                                : 0U)),32);
    bufp->fullCData(oldp+105,(vlSelf->TopLevel__DOT__dmem__DOT__typeReg),3);
    bufp->fullCData(oldp+106,(vlSelf->TopLevel__DOT__dmem__DOT__addrReg),2);
    bufp->fullBit(oldp+107,(vlSelf->TopLevel__DOT__dmem__DOT__enReg));
    bufp->fullSData(oldp+108,((0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                                         >> 2U))),13);
    bufp->fullIData(oldp+109,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value),32);
    bufp->fullCData(oldp+110,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask),4);
    bufp->fullIData(oldp+111,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0)
                                ? vlSelf->__VdfgTmp_hc4386807__0
                                : 0U)),32);
    bufp->fullCData(oldp+112,((0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data)),8);
    bufp->fullCData(oldp+113,((0xffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+114,((0xffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+115,((vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+116,((3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)),2);
    bufp->fullCData(oldp+117,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                         ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0)
                                         : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(1U) 
                                                     + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 8U)
                                                 : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0))
                                             : ((3U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                 ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data
                                                 : 0U))))),8);
    bufp->fullCData(oldp+118,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                         ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1)
                                         : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                             ? ((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(1U) 
                                                     + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 8U)
                                                 : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1))
                                             : ((3U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 8U)
                                                 : 0U))))),8);
    bufp->fullCData(oldp+119,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                         ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2)
                                         : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                             ? ((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(1U) 
                                                     + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 8U)
                                                 : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2))
                                             : ((3U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 0x10U)
                                                 : 0U))))),8);
    bufp->fullCData(oldp+120,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                         ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3)
                                         : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                             ? ((3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(1U) 
                                                     + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 8U)
                                                 : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3))
                                             : ((3U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                 >> 0x18U)
                                                 : 0U))))),8);
    bufp->fullCData(oldp+121,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0),8);
    bufp->fullCData(oldp+122,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1),8);
    bufp->fullCData(oldp+123,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2),8);
    bufp->fullCData(oldp+124,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3),8);
    bufp->fullCData(oldp+125,((0xffU & (IData)(((((QData)((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0)) 
                                                     << 0x28U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3) 
                                                                           << 0x10U) 
                                                                          | ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0) 
                                                                             << 8U))))))) 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg) 
                                                    << 3U)))))),8);
    bufp->fullCData(oldp+126,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0)
                                ? 0U : (((2U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
                                         | (6U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)))
                                         ? ((2U & (IData)(vlSelf->TopLevel__DOT__dmem__DOT__addrReg))
                                             ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)
                                             : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1))
                                         : ((3U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg))
                                             ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1)
                                             : 0U)))),8);
    bufp->fullCData(oldp+127,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2))),8);
    bufp->fullCData(oldp+128,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3))),8);
    bufp->fullSData(oldp+129,((0x1fffU & (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)
                                            ? 0U : 
                                           ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0)
                                             ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc
                                             : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1) 
                                                 | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2))
                                                 ? 
                                                (vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
                                                 - (IData)(4U))
                                                 : 0U))) 
                                          >> 2U))),13);
    bufp->fullBit(oldp+130,(((~ (IData)((0U != (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg)))) 
                             & (0U == vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg))));
    bufp->fullBit(oldp+131,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg));
    bufp->fullCData(oldp+132,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg),8);
    bufp->fullSData(oldp+133,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg),11);
    bufp->fullIData(oldp+134,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg),20);
    bufp->fullCData(oldp+135,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg),4);
    bufp->fullBit(oldp+136,(vlSelf->TopLevel__DOT__unnamedblk1__DOT__rs232txValidWire));
    bufp->fullBit(oldp+137,(vlSelf->clock));
    bufp->fullBit(oldp+138,(vlSelf->reset));
    bufp->fullSData(oldp+139,(vlSelf->io_GPO),16);
    bufp->fullSData(oldp+140,(vlSelf->io_GPI),16);
    bufp->fullBit(oldp+141,(vlSelf->io_RS232TX));
    bufp->fullBit(oldp+142,(1U));
}
