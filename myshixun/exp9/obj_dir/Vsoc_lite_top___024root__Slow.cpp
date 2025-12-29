// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_lite_top.h for the primary calling header

#include "Vsoc_lite_top__pch.h"
#include "Vsoc_lite_top__Syms.h"
#include "Vsoc_lite_top___024root.h"

void Vsoc_lite_top___024root___ctor_var_reset(Vsoc_lite_top___024root* vlSelf);

Vsoc_lite_top___024root::Vsoc_lite_top___024root(Vsoc_lite_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsoc_lite_top___024root___ctor_var_reset(this);
}

void Vsoc_lite_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsoc_lite_top___024root::~Vsoc_lite_top___024root() {
}
