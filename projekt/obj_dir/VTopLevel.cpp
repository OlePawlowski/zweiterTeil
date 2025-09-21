// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTopLevel.h"
#include "VTopLevel__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTopLevel::VTopLevel(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTopLevel__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_RS232TX{vlSymsp->TOP.io_RS232TX}
    , io_GPO{vlSymsp->TOP.io_GPO}
    , io_GPI{vlSymsp->TOP.io_GPI}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTopLevel::VTopLevel(const char* _vcname__)
    : VTopLevel(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTopLevel::~VTopLevel() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTopLevel___024root___eval_debug_assertions(VTopLevel___024root* vlSelf);
#endif  // VL_DEBUG
void VTopLevel___024root___eval_static(VTopLevel___024root* vlSelf);
void VTopLevel___024root___eval_initial(VTopLevel___024root* vlSelf);
void VTopLevel___024root___eval_settle(VTopLevel___024root* vlSelf);
void VTopLevel___024root___eval(VTopLevel___024root* vlSelf);

void VTopLevel::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopLevel::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTopLevel___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTopLevel___024root___eval_static(&(vlSymsp->TOP));
        VTopLevel___024root___eval_initial(&(vlSymsp->TOP));
        VTopLevel___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTopLevel___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTopLevel::eventsPending() { return false; }

uint64_t VTopLevel::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTopLevel::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTopLevel___024root___eval_final(VTopLevel___024root* vlSelf);

VL_ATTR_COLD void VTopLevel::final() {
    VTopLevel___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTopLevel::hierName() const { return vlSymsp->name(); }
const char* VTopLevel::modelName() const { return "VTopLevel"; }
unsigned VTopLevel::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTopLevel::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTopLevel___024root__trace_init_top(VTopLevel___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTopLevel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopLevel___024root*>(voidSelf);
    VTopLevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTopLevel___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTopLevel___024root__trace_register(VTopLevel___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTopLevel::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTopLevel::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTopLevel___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
