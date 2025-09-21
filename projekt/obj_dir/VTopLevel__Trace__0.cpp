// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopLevel__Syms.h"


void VTopLevel___024root__trace_chg_sub_0(VTopLevel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTopLevel___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_chg_top_0\n"); );
    // Init
    VTopLevel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopLevel___024root*>(voidSelf);
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTopLevel___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTopLevel___024root__trace_chg_sub_0(VTopLevel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_h22c6fb85__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data),32);
        bufp->chgIData(oldp+1,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata),32);
        bufp->chgIData(oldp+2,(((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel))
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
                                             & ((0U 
                                                 != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                                & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen)))
                                             ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                                             : ((((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr) 
                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                                 & ((0U 
                                                     != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                                                    & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen)))
                                                 ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                                                 : 
                                                ((0U 
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
                                     << 0x14U) | ((
                                                   ((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
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
        bufp->chgIData(oldp+3,((((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0) 
                                 & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                                 ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                                 : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0) 
                                     & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                                     ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                                     : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0) 
                                         & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                                         ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                                         : (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp_h22c6fb85__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                      << 5U))))) 
                                            | (__Vtemp_h22c6fb85__0[
                                               (7U 
                                                & (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                      << 5U)))))))),32);
        bufp->chgIData(oldp+4,(((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0)
                                 ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                                 : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0)
                                     ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                                     : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0)
                                         ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                                         : vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data)))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+5,(vlSelf->TopLevel__DOT__gpoValReg),16);
        bufp->chgCData(oldp+6,(vlSelf->TopLevel__DOT__rs232txValReg),8);
        bufp->chgBit(oldp+7,(vlSelf->TopLevel__DOT__rs232txValidReg));
        bufp->chgIData(oldp+8,(((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)
                                 ? 0U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0)
                                          ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc
                                          : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1) 
                                              | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2))
                                              ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
                                                 - (IData)(4U))
                                              : 0U)))),32);
        bufp->chgIData(oldp+9,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst),32);
        bufp->chgIData(oldp+10,(vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out),32);
        bufp->chgIData(oldp+11,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data),32);
        bufp->chgBit(oldp+12,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn));
        bufp->chgCData(oldp+13,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ),3);
        bufp->chgBit(oldp+14,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val));
        bufp->chgBit(oldp+15,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_valid));
        bufp->chgBit(oldp+16,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq));
        bufp->chgBit(oldp+17,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt));
        bufp->chgBit(oldp+18,(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu));
        bufp->chgCData(oldp+19,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type),4);
        bufp->chgBit(oldp+20,((((0U != (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T)) 
                                & (1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel))) 
                               | ((vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T 
                                   >> 1U) & (2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel))))));
        bufp->chgBit(oldp+21,(((0U != (7U & ((~ ((IData)(7U) 
                                                 << 
                                                 (3U 
                                                  & ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ) 
                                                     - (IData)(1U))))) 
                                             & vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out))) 
                               & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val))));
        bufp->chgBit(oldp+22,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall));
        bufp->chgCData(oldp+23,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel),2);
        bufp->chgCData(oldp+24,((((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
                                  | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5))
                                  ? 0U : ((0x6fU == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))
                                           ? 7U : (
                                                   (0x67U 
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
        bufp->chgBit(oldp+25,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill));
        bufp->chgCData(oldp+26,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel),2);
        bufp->chgCData(oldp+27,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel),3);
        bufp->chgCData(oldp+28,(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_alu_fun),4);
        bufp->chgCData(oldp+29,(((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10)
                                  ? 1U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5)
                                           ? 0U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11) 
                                                   << 1U)))),2);
        bufp->chgBit(oldp+30,(((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
                               | ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6)) 
                                  & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9) 
                                     | ((0x13U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                        | ((0x393U 
                                            == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
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
        bufp->chgBit(oldp+31,(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7));
        bufp->chgCData(oldp+32,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10),2);
        bufp->chgCData(oldp+33,(((0x103U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                  ? 3U : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                           ? 1U : (
                                                   (0x203U 
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
        bufp->chgBit(oldp+34,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire));
        bufp->chgBit(oldp+35,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10));
        bufp->chgCData(oldp+36,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr),5);
        bufp->chgBit(oldp+37,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal));
        bufp->chgBit(oldp+38,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr));
        bufp->chgBit(oldp+39,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load));
        bufp->chgBit(oldp+40,(vlSelf->TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG));
        bufp->chgIData(oldp+41,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc),32);
        bufp->chgIData(oldp+42,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc),32);
        bufp->chgIData(oldp+43,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst),32);
        bufp->chgIData(oldp+44,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc),32);
        bufp->chgCData(oldp+45,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr),5);
        bufp->chgIData(oldp+46,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data),32);
        bufp->chgIData(oldp+47,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data),32);
        bufp->chgCData(oldp+48,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun),4);
        bufp->chgCData(oldp+49,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel),2);
        bufp->chgBit(oldp+50,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen));
        bufp->chgIData(oldp+51,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out),32);
        bufp->chgCData(oldp+52,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr),5);
        bufp->chgBit(oldp+53,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen));
        bufp->chgBit(oldp+54,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val));
        bufp->chgCData(oldp+55,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ),3);
        bufp->chgCData(oldp+56,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel),2);
        bufp->chgCData(oldp+57,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr),5);
        bufp->chgIData(oldp+58,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata),32);
        bufp->chgBit(oldp+59,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen));
        bufp->chgBit(oldp+60,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall));
        bufp->chgIData(oldp+61,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer),32);
        bufp->chgIData(oldp+62,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun),32);
        bufp->chgIData(oldp+63,(((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr))
                                  ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                                 [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]
                                  : 0U)),32);
        bufp->chgIData(oldp+64,(vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data),32);
        bufp->chgCData(oldp+65,(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr),5);
        bufp->chgCData(oldp+66,(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr),5);
        bufp->chgIData(oldp+67,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                                [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr]),32);
        bufp->chgIData(oldp+68,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                                [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]),32);
        bufp->chgBit(oldp+69,(((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen) 
                               & (0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr)))));
        bufp->chgIData(oldp+70,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+71,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+72,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+73,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+74,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+75,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+76,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+77,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+78,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+79,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+80,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+81,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+82,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+83,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+84,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+85,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+86,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+87,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+88,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+89,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+90,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+91,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+92,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+93,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+94,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+95,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+96,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+97,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+98,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+99,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+100,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+101,(vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[31]),32);
        bufp->chgBit(oldp+102,(vlSelf->TopLevel__DOT____Vcellinp__dmem__io_en));
        bufp->chgIData(oldp+103,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__enReg)
                                   ? ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                         ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)) 
                                       << 0x18U) | 
                                      ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                          ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2)) 
                                        << 0x10U) | 
                                       ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0)
                                           ? 0U : (
                                                   ((2U 
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
                                         << 8U) | (0xffU 
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
        bufp->chgCData(oldp+104,(vlSelf->TopLevel__DOT__dmem__DOT__typeReg),3);
        bufp->chgCData(oldp+105,(vlSelf->TopLevel__DOT__dmem__DOT__addrReg),2);
        bufp->chgBit(oldp+106,(vlSelf->TopLevel__DOT__dmem__DOT__enReg));
        bufp->chgSData(oldp+107,((0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                                            >> 2U))),13);
        bufp->chgIData(oldp+108,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value),32);
        bufp->chgCData(oldp+109,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask),4);
        bufp->chgIData(oldp+110,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0)
                                   ? vlSelf->__VdfgTmp_hc4386807__0
                                   : 0U)),32);
        bufp->chgCData(oldp+111,((0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data)),8);
        bufp->chgCData(oldp+112,((0xffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+113,((0xffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+114,((vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+115,((3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)),2);
        bufp->chgCData(oldp+116,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                            ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0)
                                            : ((2U 
                                                == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(1U) 
                                                        + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 8U)
                                                    : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                    ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data
                                                    : 0U))))),8);
        bufp->chgCData(oldp+117,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                            ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1)
                                            : ((2U 
                                                == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                ? (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(1U) 
                                                        + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 8U)
                                                    : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 8U)
                                                    : 0U))))),8);
        bufp->chgCData(oldp+118,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                            ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2)
                                            : ((2U 
                                                == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                ? (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(1U) 
                                                        + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 8U)
                                                    : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 0x10U)
                                                    : 0U))))),8);
        bufp->chgCData(oldp+119,((0xffU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                            ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3)
                                            : ((2U 
                                                == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                ? (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(1U) 
                                                        + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 8U)
                                                    : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                    >> 0x18U)
                                                    : 0U))))),8);
        bufp->chgCData(oldp+120,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0),8);
        bufp->chgCData(oldp+121,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1),8);
        bufp->chgCData(oldp+122,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2),8);
        bufp->chgCData(oldp+123,(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3),8);
        bufp->chgCData(oldp+124,((0xffU & (IData)((
                                                   (((QData)((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3)) 
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
        bufp->chgCData(oldp+125,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0)
                                   ? 0U : (((2U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
                                            | (6U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)))
                                            ? ((2U 
                                                & (IData)(vlSelf->TopLevel__DOT__dmem__DOT__addrReg))
                                                ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)
                                                : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1))
                                            : ((3U 
                                                == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg))
                                                ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1)
                                                : 0U)))),8);
        bufp->chgCData(oldp+126,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                   ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2))),8);
        bufp->chgCData(oldp+127,(((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                   ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3))),8);
        bufp->chgSData(oldp+128,((0x1fffU & (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)
                                               ? 0U
                                               : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0)
                                                   ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc
                                                   : 
                                                  (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1) 
                                                    | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2))
                                                    ? 
                                                   (vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
                                                    - (IData)(4U))
                                                    : 0U))) 
                                             >> 2U))),13);
        bufp->chgBit(oldp+129,(((~ (IData)((0U != (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg)))) 
                                & (0U == vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg))));
        bufp->chgBit(oldp+130,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg));
        bufp->chgCData(oldp+131,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg),8);
        bufp->chgSData(oldp+132,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg),11);
        bufp->chgIData(oldp+133,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg),20);
        bufp->chgCData(oldp+134,(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg),4);
        bufp->chgBit(oldp+135,(vlSelf->TopLevel__DOT__unnamedblk1__DOT__rs232txValidWire));
    }
    bufp->chgBit(oldp+136,(vlSelf->clock));
    bufp->chgBit(oldp+137,(vlSelf->reset));
    bufp->chgSData(oldp+138,(vlSelf->io_GPO),16);
    bufp->chgSData(oldp+139,(vlSelf->io_GPI),16);
    bufp->chgBit(oldp+140,(vlSelf->io_RS232TX));
}

void VTopLevel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root__trace_cleanup\n"); );
    // Init
    VTopLevel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopLevel___024root*>(voidSelf);
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
