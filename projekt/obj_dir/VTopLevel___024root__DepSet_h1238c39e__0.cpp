// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevel.h for the primary calling header

#include "verilated.h"

#include "VTopLevel___024root.h"

VL_INLINE_OPT void VTopLevel___024root___ico_sequent__TOP__0(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data 
        = ((1U & ((~ (IData)(vlSelf->TopLevel__DOT___GEN)) 
                  | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn)))
            ? ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__enReg)
                ? ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                      ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)) 
                    << 0x18U) | ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                    ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2)) 
                                  << 0x10U) | ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0)
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
                : 0U) : (IData)(vlSelf->io_GPI));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata 
        = (((0U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel)) 
            | ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel)) 
               | (1U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))))
            ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out
            : ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
                ? (((- (IData)((1U & (vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data))
                : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
                    ? (((- (IData)((1U & (vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data))
                    : vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___decoder_io_dec_op1_data_out 
        = ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel))
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
                            & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                               & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen)))
                            ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                            : ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr))
                                ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                               [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]
                                : 0U))))));
}

void VTopLevel___024root___eval_ico(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VTopLevel___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTopLevel___024root___eval_act(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTopLevel___024root___nba_sequent__TOP__0(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_1;
    TopLevel__DOT__core__DOT__c__DOT___GEN_1 = 0;
    CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_3;
    TopLevel__DOT__core__DOT__c__DOT___GEN_3 = 0;
    CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_4;
    TopLevel__DOT__core__DOT__c__DOT___GEN_4 = 0;
    CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_8;
    TopLevel__DOT__core__DOT__c__DOT___GEN_8 = 0;
    CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h8b7af5d8__0;
    TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h8b7af5d8__0 = 0;
    CData/*1:0*/ TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0;
    TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0 = 0;
    CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3;
    TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3 = 0;
    CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_4;
    TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_4 = 0;
    IData/*31:0*/ __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc = 0;
    IData/*31:0*/ __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer = 0;
    CData/*0:0*/ __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen = 0;
    CData/*0:0*/ __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val = 0;
    CData/*0:0*/ __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn = 0;
    CData/*4:0*/ __Vdlyvdim0__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0;
    __Vdlyvdim0__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0;
    __Vdlyvval__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0;
    __Vdlyvset__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0;
    __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0;
    __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0;
    __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1;
    __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1;
    __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1;
    __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2;
    __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2;
    __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2;
    __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3;
    __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3;
    __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3;
    __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 0;
    SData/*10:0*/ __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg = 0;
    CData/*3:0*/ __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = 0;
    IData/*19:0*/ __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg = 0;
    CData/*0:0*/ __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg = 0;
    CData/*31:0*/ __Vtemp_h4cdfc754__0;
    VlWide<8>/*255:0*/ __Vtemp_h22c6fb85__0;
    // Body
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg 
        = vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 0U;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn;
    __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val;
    __Vdlyvset__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 = 0U;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg 
        = vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg 
        = vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
    __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg 
        = vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg;
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)
                                          ? ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)) 
                                             & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr))
                                          : ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel)))) 
                                             & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr))));
    if (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn) 
         & (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask))) {
        __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value);
        __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0 
            = (0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                         >> 2U));
    }
    if (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn) 
         & ((IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask) 
            >> 1U))) {
        __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value 
                        >> 8U));
        __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1 
            = (0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                         >> 2U));
    }
    if (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn) 
         & ((IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask) 
            >> 2U))) {
        __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value 
                        >> 0x10U));
        __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 1U;
        __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 = 0x10U;
        __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2 
            = (0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                         >> 2U));
    }
    if (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn) 
         & ((IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask) 
            >> 3U))) {
        __Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 
            = (vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value 
               >> 0x18U);
        __Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 1U;
        __Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 = 0x18U;
        __Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3 
            = (0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                         >> 2U));
    }
    if (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen) 
         & (0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr)))) {
        __Vdlyvval__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 
            = vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata;
        __Vdlyvset__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0 
            = vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr;
    }
    vlSelf->TopLevel__DOT__dmem__DOT__enReg = ((~ (IData)(vlSelf->reset)) 
                                               & (IData)(vlSelf->TopLevel__DOT____Vcellinp__dmem__io_en));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr 
        = (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall) 
            | (0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel)))
            ? 0U : (0x1fU & (vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst 
                             >> 7U)));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7) 
                                         & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10))));
    vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0 = 1U;
    vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_addr_d0 
        = (0x7ffU & (vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
                     >> 2U));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal) 
           | (((0U != (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T)) 
               & (1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel))) 
              | ((vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T 
                  >> 1U) & (2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel)))));
    __Vtemp_h4cdfc754__0 = ((~ (IData)(vlSelf->reset)) 
                            & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)
                                ? ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)) 
                                   & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal))
                                : (((~ (IData)((0U 
                                                != (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel)))) 
                                    & (~ ((((((((((
                                                   ((((((((((((((((((((((0x103U 
                                                                         == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                                        | (3U 
                                                                           == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                       | (0x203U 
                                                                          == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                      | (0x83U 
                                                                         == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                     | (0x283U 
                                                                        == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                    | (0x123U 
                                                                       == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                   | (0x23U 
                                                                      == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                  | (0xa3U 
                                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                                 | (0x17U 
                                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))) 
                                                                | (0x37U 
                                                                   == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))) 
                                                               | (0x13U 
                                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                              | (0x393U 
                                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                             | (0x313U 
                                                                == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                            | (0x213U 
                                                               == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                           | (0x113U 
                                                              == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                          | (0x193U 
                                                             == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
                                                         | (0x93U 
                                                            == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                        | (0x8293U 
                                                           == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                       | (0x293U 
                                                          == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                      | (0xb3U 
                                                         == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                     | (0x33U 
                                                        == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                    | (0x8033U 
                                                       == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                   | (0x133U 
                                                      == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                  | (0x1b3U 
                                                     == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                 | (0x3b3U 
                                                    == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                                | (0x333U 
                                                   == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                               | (0x233U 
                                                  == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                              | (0x82b3U 
                                                 == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                             | (0x2b3U 
                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)) 
                                            | (0x6fU 
                                               == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))) 
                                           | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_2)) 
                                          | (0x363U 
                                             == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))))) 
                                   & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_valid))));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal 
        = __Vtemp_h4cdfc754__0;
    vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_addr_d0 
        = (0x1fffU & (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)
                        ? 0U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0)
                                 ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc
                                 : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1) 
                                     | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2))
                                     ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
                                        - (IData)(4U))
                                     : 0U))) >> 2U));
    if (__Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0) {
        vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory[__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0))) 
                & vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory
                [__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0) 
                                   << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1) {
        vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory[__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1))) 
                & vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory
                [__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1) 
                                   << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2) {
        vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory[__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2))) 
                & vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory
                [__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2) 
                                   << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v2))));
    }
    if (__Vdlyvset__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3) {
        vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory[__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3))) 
                & vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory
                [__Vdlyvdim0__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3) 
                                   << (IData)(__Vdlyvlsb__TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory__v3))));
    }
    if (__Vdlyvset__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0) {
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[__Vdlyvdim0__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0] 
            = __Vdlyvval__TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory__v0;
    }
    if (vlSelf->reset) {
        __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg = 0U;
        __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg = 0x7ffU;
        __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = 0U;
    } else {
        __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg 
            = ((IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T)
                ? 0x30cU : (0xfffffU & (vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg 
                                        - (IData)(1U))));
        if ((0U == vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg)) {
            if ((0U != (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg))) {
                __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg 
                    = (0x400U | (0x3ffU & ((IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg) 
                                           >> 1U)));
                __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg 
                    = (0xfU & ((IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg) 
                               - (IData)(1U)));
            } else if (vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg) {
                __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg 
                    = (0x600U | ((IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg) 
                                 << 1U));
                __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = 0xbU;
            } else {
                __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg = 0x7ffU;
            }
        }
    }
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg 
        = __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)) 
                                         & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr;
    if ((1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)))) {
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out 
            = ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel))
                ? ((IData)(4U) + vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc)
                : vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out);
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel 
            = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr 
            = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr;
    }
    vlSelf->io_RS232TX = (1U & (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg));
    vlSelf->__VdfgTmp_hc4386807__0 = vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory
        [vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_addr_d0];
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)) 
                                         & (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0) 
                                             | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1)) 
                                            | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2))));
    if (vlSelf->reset) {
        vlSelf->TopLevel__DOT__dmem__DOT__addrReg = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ = 0U;
        vlSelf->TopLevel__DOT__dmem__DOT__typeReg = 0U;
    } else {
        vlSelf->TopLevel__DOT__dmem__DOT__addrReg = 
            (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out);
        if ((1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)))) {
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ 
                = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ;
        }
        vlSelf->TopLevel__DOT__dmem__DOT__typeReg = vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ;
    }
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0 
        = ((1U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
           | (5U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)));
    if (vlSelf->reset) {
        vlSelf->TopLevel__DOT__gpoValReg = 0U;
        vlSelf->io_GPO = vlSelf->TopLevel__DOT__gpoValReg;
        __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg = 0U;
        vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg = 0U;
    } else {
        if (((IData)(vlSelf->TopLevel__DOT___GEN) & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn))) {
            vlSelf->TopLevel__DOT__gpoValReg = (0xffffU 
                                                & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
        }
        vlSelf->io_GPO = vlSelf->TopLevel__DOT__gpoValReg;
        __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg 
            = ((IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg)
                ? ((~ ((~ (IData)((0U != (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg)))) 
                       & (0U == vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg))) 
                   & (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg))
                : ((IData)(vlSelf->TopLevel__DOT__rs232txValidReg) 
                   | (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg)));
        if (((~ (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg)) 
             & (IData)(vlSelf->TopLevel__DOT__rs232txValidReg))) {
            vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg 
                = vlSelf->TopLevel__DOT__rs232txValReg;
        }
    }
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg 
        = __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg;
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg 
        = __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg 
        = __Vdly__TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg;
    if (vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0) {
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1 
            = (0xffU & (vlSelf->__VdfgTmp_hc4386807__0 
                        >> 8U));
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3 
            = (vlSelf->__VdfgTmp_hc4386807__0 >> 0x18U);
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0 
            = (0xffU & vlSelf->__VdfgTmp_hc4386807__0);
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2 
            = (0xffU & (vlSelf->__VdfgTmp_hc4386807__0 
                        >> 0x10U));
    } else {
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1 = 0U;
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3 = 0U;
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0 = 0U;
        vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2 = 0U;
    }
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0 
        = (0xffU & (((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0)
                      ? vlSelf->__VdfgTmp_hc4386807__0
                      : 0U) >> (0x1fU & ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__addrReg) 
                                         << 3U))));
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7 
        = ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0) 
           | ((2U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
              | ((3U != (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
                 | (6U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)))));
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T 
        = (0U == vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3 
        = ((2U & (IData)(vlSelf->TopLevel__DOT__dmem__DOT__addrReg))
            ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2)
            : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0));
    TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall) 
           | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire));
    TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_4 
        = ((IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3) 
           | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall));
    if (vlSelf->reset) {
        vlSelf->TopLevel__DOT__rs232txValReg = 0U;
        vlSelf->TopLevel__DOT__rs232txValidReg = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst = 0x13U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type = 0U;
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen = 0U;
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val = 0U;
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val = 0U;
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc = 0U;
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer = 0U;
    } else {
        vlSelf->TopLevel__DOT__unnamedblk1__DOT__rs232txValidWire 
            = ((0xfffffffU == vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out) 
               & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val));
        if (vlSelf->TopLevel__DOT__unnamedblk1__DOT__rs232txValidWire) {
            vlSelf->TopLevel__DOT__rs232txValReg = 
                (0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
            vlSelf->TopLevel__DOT__rs232txValidReg = 1U;
        } else {
            vlSelf->TopLevel__DOT__rs232txValidReg = 0U;
        }
        if (TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3) {
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst = 0x13U;
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type = 0U;
        } else if ((1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)))) {
            if (vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill) {
                vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst = 0x13U;
                vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type = 0U;
            } else {
                vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst 
                    = vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst;
                vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type 
                    = (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
                        | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5))
                        ? 0U : ((0x6fU == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))
                                 ? 7U : ((0x67U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                          ? 8U : ((0x63U 
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
                                                        : 0U)))))))));
            }
        }
        if ((1U & (~ (IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_4)))) {
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc 
                = vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc;
        }
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen 
            = ((~ (IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3)) 
               & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)
                   ? (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen)
                   : ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill)) 
                      & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
                         | ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6)) 
                            & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9) 
                               | ((0x13U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                  | ((0x393U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                     | ((0x313U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
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
                                                                                | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11))))))))))))))))))))))))));
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val 
            = ((~ (IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3)) 
               & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)
                   ? (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val)
                   : ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill)) 
                      & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7))));
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn 
            = ((~ (IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3)) 
               & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)
                   ? (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn)
                   : ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill)) 
                      & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10))));
        if ((1U & (~ (((IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3) 
                       | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)) 
                      | (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill))))) {
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ 
                = ((0x103U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                    ? 3U : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                             ? 1U : ((0x203U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                      ? 5U : ((0x83U 
                                               == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                               ? 2U
                                               : ((0x283U 
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
                                                     << 1U))))))));
        }
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen 
            = ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)) 
               & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen));
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val 
            = ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)) 
               & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val));
        if ((1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall)))) {
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5[0U] 
                = ((IData)(4U) + vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc);
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5[1U] 
                = vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T;
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5[2U] 
                = (IData)((QData)((IData)((0xfffffffeU 
                                           & vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T))));
            vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5[3U] 
                = (IData)(((QData)((IData)((0xfffffffeU 
                                            & vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T))) 
                           >> 0x20U));
            __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
                = (((0U == (0x1fU & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel) 
                                     << 5U))) ? 0U : 
                    (vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5[
                     (((IData)(0x1fU) + (0x7fU & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel) 
                                            << 5U))))) 
                   | (vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5[
                      (3U & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel))] 
                      >> (0x1fU & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel) 
                                   << 5U))));
        }
        if ((1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN)))) {
            if (vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0) {
                vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc 
                    = vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc;
            } else if ((1U & (~ ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1) 
                                 | (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2)))))) {
                vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc 
                    = vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer;
            }
        }
        __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer 
            = vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc;
    }
    if (TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_3) {
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)))) {
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr 
            = ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill)
                ? 0U : (0x1fU & (vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst 
                                 >> 7U)));
    }
    if ((1U & (~ (IData)(TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT___GEN_4)))) {
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
            = vlSelf->TopLevel__DOT__core__DOT__d__DOT___decoder_io_dec_op1_data_out;
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
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data 
            = (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0) 
                & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0) 
                    & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                    ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                    : (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0) 
                        & (0U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel)))
                        ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                        : (((0U == (0x1fU & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                             << 5U)))
                             ? 0U : (__Vtemp_h22c6fb85__0[
                                     (((IData)(0x1fU) 
                                       + (0xffU & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                   << 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                                      << 5U))))) 
                           | (__Vtemp_h22c6fb85__0[
                              (7U & (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel))] 
                              >> (0x1fU & ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel) 
                                           << 5U)))))));
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
            = ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0)
                ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out
                : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0)
                    ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata
                    : ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0)
                        ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                        : vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data)));
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun 
            = vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_alu_fun;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel 
            = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10)
                ? 1U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5)
                         ? 0U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11) 
                                 << 1U)));
    }
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen 
        = __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn 
        = __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val 
        = __Vdly__TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val;
    vlSelf->__VdfgTmp_hb5e0a298__0 = vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT__Memory
        [vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_addr_d0];
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG) 
           | ((0U != (7U & ((~ ((IData)(7U) << (3U 
                                                & ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ) 
                                                   - (IData)(1U))))) 
                            & vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out))) 
              & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata 
        = vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata;
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
           == vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt 
        = VL_LTS_III(32, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
           < vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0 = 1U;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer 
        = __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc 
        = __Vdly__TopLevel__DOT__core__DOT__d__DOT__if_reg_pc;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data 
           + vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
           + vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data);
    TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0 
        = ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
            ? (1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq)))
            : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                ? (IData)(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq)
                : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                    ? (1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt)))
                    : ((4U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                        ? (1U & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu)))
                        : ((5U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                            ? (IData)(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt)
                            : ((6U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                                ? (IData)(vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu)
                                : ((7U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                                    ? 1U : ((8U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type)) 
                                            << 1U))))))));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out 
        = ((0U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
            ? vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T
            : ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                   - vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data)
                : ((5U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                    ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                       & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data)
                    : ((6U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                        ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                           | vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data)
                        : ((7U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                            ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                               ^ vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data)
                            : ((8U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                ? VL_LTS_III(32, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data)
                                : ((9U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                    ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                                       < vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data)
                                    : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                        ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                                           << (0x1fU 
                                               & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data))
                                        : ((4U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                            ? VL_SHIFTRS_III(32,32,5, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data, 
                                                             (0x1fU 
                                                              & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data))
                                            : ((3U 
                                                == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                                ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data))
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                                    ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun))
                                                     ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data
                                                     : vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst))))))))))));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)
            ? 3U : ((0U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                     ? 0U : (IData)(TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0)));
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire) 
           | ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type)) 
              & (0U != (IData)(TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0))));
    if (vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0) {
        vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst 
            = vlSelf->__VdfgTmp_hb5e0a298__0;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr 
            = (0x1fU & (vlSelf->__VdfgTmp_hb5e0a298__0 
                        >> 0xfU));
        vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr 
            = (0x1fU & (vlSelf->__VdfgTmp_hb5e0a298__0 
                        >> 0x14U));
        vlSelf->__VdfgTmp_hf2d73f0e__0 = (vlSelf->__VdfgTmp_hb5e0a298__0 
                                          >> 0x19U);
        vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0 
            = (0x7fU & vlSelf->__VdfgTmp_hb5e0a298__0);
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0 
            = (vlSelf->__VdfgTmp_hb5e0a298__0 >> 0x1fU);
    } else {
        vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr = 0U;
        vlSelf->__VdfgTmp_hf2d73f0e__0 = 0U;
        vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0 = 0U;
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0 = 0U;
    }
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask 
        = (0xfU & ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                    ? ((IData)(1U) << (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out))
                    : ((5U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                        ? ((IData)(1U) << (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out))
                        : (((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ)) 
                            | (6U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ)))
                            ? ((2U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)
                                ? 0xcU : 3U) : 0xfU))));
    vlSelf->TopLevel__DOT____Vcellinp__dmem__io_en 
        = ((0xfffff00U > vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out) 
           & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val));
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0 
        = ((0U == (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out))
            ? (0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data)
            : 0U);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1 
        = ((1U == (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out))
            ? (0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data)
            : 0U);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2 
        = ((2U == (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out))
            ? (0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data)
            : 0U);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3 
        = ((3U == (3U & vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out))
            ? (0xffU & vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data)
            : 0U);
    vlSelf->TopLevel__DOT___GEN = ((0xffffff0U == vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out) 
                                   & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill) 
           | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data 
        = ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr))
            ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
           [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr]
            : 0U);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0 
        = (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr) 
            == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
           & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
              & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0 
        = (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr) 
            == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
           & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
              & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0 
        = (((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr) 
            == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
           & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
              & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen)));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9 
        = ((0x17U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)) 
           | (0x37U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN 
        = ((((IData)(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0)
              ? (7U & (vlSelf->__VdfgTmp_hb5e0a298__0 
                       >> 0xcU)) : 0U) << 7U) | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0));
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value 
        = ((IData)(vlSelf->TopLevel__DOT____Vcellinp__dmem__io_en)
            ? ((((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                  ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3)
                  : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                      ? ((3U == (3U & ((IData)(1U) 
                                       + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                          ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                             >> 8U) : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3))
                      : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                          ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                             >> 0x18U) : 0U))) << 0x18U) 
               | ((0xff0000U & (((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                  ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2)
                                  : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                      ? ((2U == (3U 
                                                 & ((IData)(1U) 
                                                    + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                          ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                             >> 8U)
                                          : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2))
                                      : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                          ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                             >> 0x10U)
                                          : 0U))) << 0x10U)) 
                  | ((0xff00U & (((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                   ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1)
                                   : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                       ? ((1U == (3U 
                                                  & ((IData)(1U) 
                                                     + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                           ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                              >> 8U)
                                           : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1))
                                       : ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                           ? (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                              >> 8U)
                                           : 0U))) 
                                 << 8U)) | (0xffU & 
                                            ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                              ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0)
                                              : ((2U 
                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out)))
                                                   ? 
                                                  (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data 
                                                   >> 8U)
                                                   : (IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ))
                                                   ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data
                                                   : 0U)))))))
            : 0U);
    vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data 
        = ((1U & ((~ (IData)(vlSelf->TopLevel__DOT___GEN)) 
                  | (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn)))
            ? ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__enReg)
                ? ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                      ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3)) 
                    << 0x18U) | ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7)
                                    ? 0U : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2)) 
                                  << 0x10U) | ((((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0)
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
                : 0U) : (IData)(vlSelf->io_GPI));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11 
        = ((0x6fU == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)) 
           | (0x67U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)));
    TopLevel__DOT__core__DOT__c__DOT___GEN_1 = ((0x63U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                | ((0xe3U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                   | ((0x2e3U 
                                                       == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                      | ((0x3e3U 
                                                          == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                                                         | (0x263U 
                                                            == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))))));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6 
        = (((0x123U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
            | (0x23U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))) 
           | (0xa3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10 
        = ((0x103U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
           | ((3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
              | ((0x203U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                 | ((0x83U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                    | (0x283U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))))));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0 
        = (((IData)(vlSelf->__VdfgTmp_hf2d73f0e__0) 
            << 0xaU) | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata 
        = (((0U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel)) 
            | ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel)) 
               | (1U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel))))
            ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out
            : ((1U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
                ? (((- (IData)((1U & (vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data))
                : ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ))
                    ? (((- (IData)((1U & (vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data))
                    : vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data)));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_2 
        = ((0x67U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
           | (IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_1));
    TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h8b7af5d8__0 
        = ((IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_1) 
           | (0x363U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10 
        = ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10)) 
           & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
           | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6));
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_alu_fun 
        = (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10) 
            | ((0x123U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
               | ((0x23U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                  | ((0xa3U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
                     | (0x17U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))))))
            ? 0U : ((0x37U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))
                     ? 0xbU : ((0x13U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                ? 0U : ((0x393U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                         ? 5U : ((0x313U 
                                                  == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                  ? 6U
                                                  : 
                                                 ((0x213U 
                                                   == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                   ? 7U
                                                   : 
                                                  ((0x113U 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                    ? 8U
                                                    : 
                                                   ((0x193U 
                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                     ? 9U
                                                     : 
                                                    ((0x93U 
                                                      == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                      ? 2U
                                                      : 
                                                     ((0x8293U 
                                                       == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                       ? 4U
                                                       : 
                                                      ((0x293U 
                                                        == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                        ? 3U
                                                        : 
                                                       ((0xb3U 
                                                         == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                          ? 0U
                                                          : 
                                                         ((0x8033U 
                                                           == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                           ? 1U
                                                           : 
                                                          ((0x133U 
                                                            == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                            ? 8U
                                                            : 
                                                           ((0x1b3U 
                                                             == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                             ? 9U
                                                             : 
                                                            ((0x3b3U 
                                                              == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                              ? 5U
                                                              : 
                                                             ((0x333U 
                                                               == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                               ? 6U
                                                               : 
                                                              ((0x233U 
                                                                == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                                ? 7U
                                                                : 
                                                               ((0x82b3U 
                                                                 == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                                 ? 4U
                                                                 : 
                                                                ((0x2b3U 
                                                                  == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)
                                                                  ? 3U
                                                                  : 0U)))))))))))))))))))));
    TopLevel__DOT__core__DOT__c__DOT___GEN_3 = ((0xb3U 
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
                                                                        | (0x2b3U 
                                                                           == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0))))))))));
    TopLevel__DOT__core__DOT__c__DOT___GEN_8 = ((0x13U 
                                                 == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN)) 
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
                                                                     | (0x293U 
                                                                        == vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0)))))))));
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7)
            ? 0U : (0x17U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)));
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10)
            ? 1U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6)
                     ? 2U : ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9)
                              ? 4U : ((IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_8)
                                       ? 1U : ((IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_3)
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0))
                                                    ? 5U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))
                                                     ? 1U
                                                     : 
                                                    ((IData)(TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h8b7af5d8__0)
                                                      ? 3U
                                                      : 0U))))))));
    TopLevel__DOT__core__DOT__c__DOT___GEN_4 = ((IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_8) 
                                                | (IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_3));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___decoder_io_dec_op1_data_out 
        = ((2U == (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel))
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
                            & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
                               & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen)))
                            ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata
                            : ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr))
                                ? vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory
                               [vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr]
                                : 0U))))));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6) 
           | ((0x17U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)) 
              | ((0x37U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)) 
                 | (IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_4))));
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall 
        = (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load) 
            & (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr) 
                == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr)) 
               & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr)) 
                  & ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill)) 
                     & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7) 
                        | ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9)) 
                           & ((IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_4) 
                              | ((0x6fU != (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0)) 
                                 & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_2) 
                                    | (0x363U == (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN))))))))))) 
           | (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load) 
               & (((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr) 
                   == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr)) 
                  & ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr)) 
                     & ((~ ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill) 
                            | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10))) 
                        & ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6) 
                           | ((~ ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9) 
                                  | (IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_8))) 
                              & ((IData)(TopLevel__DOT__core__DOT__c__DOT___GEN_3) 
                                 | ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11)) 
                                    & (IData)(TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h8b7af5d8__0))))))))) 
              | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0 
        = (1U & ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)) 
                 & (~ (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall))));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1 
        = ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall)) 
           & (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2 
        = ((~ (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall)) 
           & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall));
}

void VTopLevel___024root___eval_nba(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTopLevel___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VTopLevel___024root___eval_triggers__ico(VTopLevel___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__ico(VTopLevel___024root* vlSelf);
#endif  // VL_DEBUG
void VTopLevel___024root___eval_triggers__act(VTopLevel___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__act(VTopLevel___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__nba(VTopLevel___024root* vlSelf);
#endif  // VL_DEBUG

void VTopLevel___024root___eval(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VTopLevel___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VTopLevel___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("TopLevel.sv", 1192, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VTopLevel___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTopLevel___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTopLevel___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("TopLevel.sv", 1192, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VTopLevel___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTopLevel___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("TopLevel.sv", 1192, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTopLevel___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTopLevel___024root___eval_debug_assertions(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
