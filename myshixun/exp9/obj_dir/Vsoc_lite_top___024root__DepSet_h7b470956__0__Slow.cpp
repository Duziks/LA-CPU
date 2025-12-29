// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_lite_top.h for the primary calling header

#include "Vsoc_lite_top__pch.h"
#include "Vsoc_lite_top__Syms.h"
#include "Vsoc_lite_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__stl(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_triggers__stl(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_triggers__stl\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_lite_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
