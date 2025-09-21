// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevel.h for the primary calling header

#include "verilated.h"

#include "VTopLevel__Syms.h"
#include "VTopLevel___024root.h"

void VTopLevel___024root___ctor_var_reset(VTopLevel___024root* vlSelf);

VTopLevel___024root::VTopLevel___024root(VTopLevel__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTopLevel___024root___ctor_var_reset(this);
}

void VTopLevel___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTopLevel___024root::~VTopLevel___024root() {
}
