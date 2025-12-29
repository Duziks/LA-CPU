// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_lite_top.h for the primary calling header

#include "Vsoc_lite_top__pch.h"
#include "Vsoc_lite_top__Syms.h"
#include "Vsoc_lite_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__ico(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsoc_lite_top___024root___eval_triggers__ico(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_triggers__ico\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_lite_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__act(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsoc_lite_top___024root___eval_triggers__act(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_triggers__act\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.soc_lite_top__DOT__timer_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_lite_top__DOT__timer_clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_lite_top__DOT__timer_clk__0 
        = vlSelfRef.soc_lite_top__DOT__timer_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_lite_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
