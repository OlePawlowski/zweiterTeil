// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopLevel.h for the primary calling header

#ifndef VERILATED_VTOPLEVEL___024ROOT_H_
#define VERILATED_VTOPLEVEL___024ROOT_H_  // guard

#include "verilated.h"

class VTopLevel__Syms;

class VTopLevel___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_RS232TX,0,0);
        CData/*7:0*/ TopLevel__DOT__rs232txValReg;
        CData/*0:0*/ TopLevel__DOT__rs232txValidReg;
        CData/*0:0*/ TopLevel__DOT___GEN;
        CData/*0:0*/ TopLevel__DOT____Vcellinp__dmem__io_en;
        CData/*0:0*/ TopLevel__DOT__unnamedblk1__DOT__rs232txValidWire;
        CData/*0:0*/ TopLevel__DOT__core__DOT___d_io_dat_exe_br_eq;
        CData/*0:0*/ TopLevel__DOT__core__DOT___d_io_dat_exe_br_lt;
        CData/*0:0*/ TopLevel__DOT__core__DOT___d_io_dat_exe_br_ltu;
        CData/*0:0*/ TopLevel__DOT__core__DOT___c_io_ctl_if_kill;
        CData/*1:0*/ TopLevel__DOT__core__DOT___c_io_ctl_op1_sel;
        CData/*2:0*/ TopLevel__DOT__core__DOT___c_io_ctl_op2_sel;
        CData/*3:0*/ TopLevel__DOT__core__DOT___c_io_ctl_alu_fun;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__pipeline_kill_wire;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_2;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_5;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_6;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_7;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_9;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_10;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_11;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__csignals_10;
        CData/*1:0*/ TopLevel__DOT__core__DOT__c__DOT__pc_sel;
        CData/*4:0*/ TopLevel__DOT__core__DOT__c__DOT__exe_reg_wbaddr;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__exe_reg_illegal;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__exe_reg_is_csr;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__exe_inst_is_load;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__stall;
        CData/*0:0*/ TopLevel__DOT__core__DOT__c__DOT__io_ctl_mem_exception_REG;
        CData/*6:0*/ TopLevel__DOT__core__DOT__c__DOT____VdfgTmp_ha3bde476__0;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__dec_reg_valid;
        CData/*4:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_wbaddr;
        CData/*3:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_br_type;
        CData/*3:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_alu_fun;
        CData/*1:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_wb_sel;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_rf_wen;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_val;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_fcn;
        CData/*2:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_ctrl_mem_typ;
        CData/*4:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_reg_wbaddr;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_rf_wen;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_val;
        CData/*2:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_mem_typ;
        CData/*1:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_reg_ctrl_wb_sel;
        CData/*4:0*/ TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbaddr;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__wb_reg_ctrl_rf_wen;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__dec_reg_stall;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT___GEN;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT___GEN_0;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT___GEN_1;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT___GEN_2;
        CData/*4:0*/ TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs2_addr;
        CData/*4:0*/ TopLevel__DOT__core__DOT__d__DOT____Vcellinp__regfile__io_rs1_addr;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h1a9d3e88__0;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hbf995160__0;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_h8cdc7da2__0;
        CData/*0:0*/ TopLevel__DOT__core__DOT__d__DOT__decoder__DOT____VdfgTmp_hd0639521__0;
        CData/*0:0*/ TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_en_d0;
        CData/*2:0*/ TopLevel__DOT__dmem__DOT__typeReg;
        CData/*1:0*/ TopLevel__DOT__dmem__DOT__addrReg;
        CData/*0:0*/ TopLevel__DOT__dmem__DOT__enReg;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_3;
    };
    struct {
        CData/*7:0*/ TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_2;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_1;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT____Vcellinp__memoryByteOutputDistributer__io_in_value_0;
        CData/*3:0*/ TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_wrMask;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_3;
        CData/*0:0*/ TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT___GEN_7;
        CData/*0:0*/ TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h84091835__0;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT__memoryByteOutputDistributer__DOT____VdfgTmp_h49b4f4f1__0;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_0;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_1;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_2;
        CData/*7:0*/ TopLevel__DOT__dmem__DOT__memoryByteInputDistributer__DOT___GEN_3;
        CData/*0:0*/ TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_en_d0;
        CData/*3:0*/ TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
        CData/*0:0*/ TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T;
        CData/*0:0*/ TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__stateReg;
        CData/*7:0*/ TopLevel__DOT__uart__DOT__tx__DOT__buf_0__DOT__dataReg;
        CData/*6:0*/ __VdfgTmp_hf2d73f0e__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(io_GPO,15,0);
        VL_IN16(io_GPI,15,0);
        SData/*15:0*/ TopLevel__DOT__gpoValReg;
        SData/*9:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN;
        SData/*12:0*/ TopLevel__DOT__imem__DOT__memory_ext__DOT___R0_addr_d0;
        SData/*12:0*/ TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT___R0_addr_d0;
        SData/*10:0*/ TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg;
        IData/*31:0*/ TopLevel__DOT____Vcellinp__core__io_dmem_data;
        IData/*31:0*/ TopLevel__DOT__core__DOT___d_io_dat_dec_inst;
        IData/*16:0*/ TopLevel__DOT__core__DOT__c__DOT___GEN_0;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT___alu_module_io_out;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT___regfile_io_rs2_data;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT___decoder_io_dec_op1_data_out;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__if_reg_pc;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__dec_reg_pc;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_inst;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_pc;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_op1_data;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_op2_data;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__exe_reg_rs2_data;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_reg_alu_out;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__wb_reg_wbdata;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__if_reg_pc_buffer;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT___exe_adder_out_T;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT___exe_brjmp_target_T;
        IData/*31:0*/ TopLevel__DOT__core__DOT__d__DOT__mem_wbdata;
        VlWide<4>/*127:0*/ TopLevel__DOT__core__DOT__d__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_5;
        IData/*31:0*/ TopLevel__DOT__dmem__DOT____Vcellinp__memory__io_in_value;
        IData/*19:0*/ TopLevel__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg;
        IData/*31:0*/ __VdfgTmp_hb5e0a298__0;
        IData/*31:0*/ __VdfgTmp_hc4386807__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> TopLevel__DOT__core__DOT__d__DOT__regfile__DOT__regfile_ext__DOT__Memory;
        VlUnpacked<IData/*31:0*/, 8192> TopLevel__DOT__imem__DOT__memory_ext__DOT__Memory;
        VlUnpacked<IData/*31:0*/, 8192> TopLevel__DOT__dmem__DOT__memory__DOT__memory_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTopLevel__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTopLevel___024root(VTopLevel__Syms* symsp, const char* v__name);
    ~VTopLevel___024root();
    VL_UNCOPYABLE(VTopLevel___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
