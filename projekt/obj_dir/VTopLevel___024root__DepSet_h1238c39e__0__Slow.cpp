// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevel.h for the primary calling header

#include "verilated.h"

#include "VTopLevel___024root.h"

VL_ATTR_COLD void VTopLevel___024root___eval_static(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTopLevel___024root___eval_initial__TOP(VTopLevel___024root* vlSelf);

VL_ATTR_COLD void VTopLevel___024root___eval_initial(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_initial\n"); );
    // Body
    VTopLevel___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

extern const VlWide<9>/*287:0*/ VTopLevel__ConstPool__CONST_hdb712884_0;

VL_ATTR_COLD void VTopLevel___024root___eval_initial__TOP(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_he322f8b3__0;
    // Body
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(9, VTopLevel__ConstPool__CONST_hdb712884_0)
                 ,  &(vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT__Memory)
                 , 0, ~0ULL);
    __Vtemp_he322f8b3__0[0U] = 0x2e686578U;
    __Vtemp_he322f8b3__0[1U] = 0x5f6d656dU;
    __Vtemp_he322f8b3__0[2U] = 0x64617461U;
    __Vtemp_he322f8b3__0[3U] = 0x616d6d2fU;
    __Vtemp_he322f8b3__0[4U] = 0x726f6772U;
    __Vtemp_he322f8b3__0[5U] = 0x33326950U;
    __Vtemp_he322f8b3__0[6U] = 0x2e2f7276U;
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_he322f8b3__0)
                 ,  &(vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTopLevel___024root___eval_final(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTopLevel___024root___eval_triggers__stl(VTopLevel___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__stl(VTopLevel___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___eval_stl(VTopLevel___024root* vlSelf);

VL_ATTR_COLD void VTopLevel___024root___eval_settle(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VTopLevel___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VTopLevel___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("TopLevel.sv", 1192, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VTopLevel___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__stl(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTopLevel___024root___stl_sequent__TOP__0(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelf->io_GPO = vlSelf->TopLevel__DOT__gpoValReg;
    vlSelf->io_RS232TX = (1U & (IData)(vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg));
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T 
        = (0U == vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data 
           + vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
           == vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt 
        = VL_LTS_III(32, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data, vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
           < vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG) 
           | ((0U != (7U & ((~ ((IData)(7U) << (3U 
                                                & ((IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ) 
                                                   - (IData)(1U))))) 
                            & vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out))) 
              & (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val)));
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0 
        = ((1U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
           | (5U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)));
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T 
        = (vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data 
           + vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data);
    vlSelf->__VdfgTmp_hc4386807__0 = vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory
        [vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_addr_d0];
    vlSelf->__VdfgTmp_hb5e0a298__0 = vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT__Memory
        [vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_addr_d0];
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
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7 
        = ((IData)(vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0) 
           | ((2U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
              | ((3U != (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)) 
                 | (6U == (IData)(vlSelf->TopLevel__DOT__dmem__DOT__typeReg)))));
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
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire)
            ? 3U : ((0U == (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type))
                     ? 0U : (IData)(TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0)));
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire) 
           | ((0U != (IData)(vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type)) 
              & (0U != (IData)(TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_h3e0102f1__0))));
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
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3 
        = ((2U & (IData)(vlSelf->TopLevel__DOT__dmem__DOT__addrReg))
            ? (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2)
            : (IData)(vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0));
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
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN 
        = ((IData)(vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill) 
           | (IData)(vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire));
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

VL_ATTR_COLD void VTopLevel___024root___eval_stl(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTopLevel___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__ico(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__act(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopLevel___024root___dump_triggers__nba(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTopLevel___024root___ctor_var_reset(VTopLevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_GPO = VL_RAND_RESET_I(16);
    vlSelf->io_GPI = VL_RAND_RESET_I(16);
    vlSelf->io_RS232TX = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__gpoValReg = VL_RAND_RESET_I(16);
    vlSelf->TopLevel__DOT__rs232txValReg = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__rs232txValidReg = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT____Vcellinp__core__io_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT____Vcellinp__dmem__io_en = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__unnamedblk1__DOT__rs232txValidWire = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_dec_inst = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_if_kill = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op1_sel = VL_RAND_RESET_I(2);
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_op2_sel = VL_RAND_RESET_I(3);
    vlSelf->TopLevel__DOT__core__DOT___c_io_ctl_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_0 = VL_RAND_RESET_I(17);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__csignals_10 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__pc_sel = VL_RAND_RESET_I(2);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr = VL_RAND_RESET_I(5);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0 = 0;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___decoder_io_dec_op1_data_out = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr = VL_RAND_RESET_I(5);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type = VL_RAND_RESET_I(4);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ = VL_RAND_RESET_I(3);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr = VL_RAND_RESET_I(5);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ = VL_RAND_RESET_I(3);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr = VL_RAND_RESET_I(5);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__mem_wbdata = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5);
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0 = 0;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0 = 0;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0 = 0;
    vlSelf->TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(13);
    vlSelf->TopLevel__DOT__dmem__DOT__typeReg = VL_RAND_RESET_I(3);
    vlSelf->TopLevel__DOT__dmem__DOT__addrReg = VL_RAND_RESET_I(2);
    vlSelf->TopLevel__DOT__dmem__DOT__enReg = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask = VL_RAND_RESET_I(4);
    vlSelf->TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value = VL_RAND_RESET_I(32);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0 = 0;
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0 = 0;
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2 = VL_RAND_RESET_I(8);
    vlSelf->TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(13);
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg = VL_RAND_RESET_I(11);
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg = VL_RAND_RESET_I(20);
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = VL_RAND_RESET_I(4);
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg = VL_RAND_RESET_I(1);
    vlSelf->TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg = VL_RAND_RESET_I(8);
    vlSelf->__VdfgTmp_hb5e0a298__0 = 0;
    vlSelf->__VdfgTmp_hf2d73f0e__0 = 0;
    vlSelf->__VdfgTmp_hc4386807__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
