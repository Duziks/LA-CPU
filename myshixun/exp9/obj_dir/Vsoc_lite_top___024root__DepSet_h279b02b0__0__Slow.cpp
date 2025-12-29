// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_lite_top.h for the primary calling header

#include "Vsoc_lite_top__pch.h"
#include "Vsoc_lite_top___024root.h"

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_static(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_static\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_initial__TOP(Vsoc_lite_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_initial(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_initial\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_lite_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_lite_top__DOT__timer_clk__0 
        = vlSelfRef.soc_lite_top__DOT__timer_clk;
}

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_initial__TOP(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_initial__TOP\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e6d6966U;
    __Vtemp_1[1U] = 0x5f72616dU;
    __Vtemp_1[2U] = 0x696e7374U;
    __Vtemp_1[3U] = 0x756e632fU;
    __Vtemp_1[4U] = 0x2e2f66U;
    VL_READMEM_N(false, 32, 262144, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.soc_lite_top__DOT__inst_ram__DOT__sync_ram__DOT__ram)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e6d6966U;
    __Vtemp_2[1U] = 0x5f72616dU;
    __Vtemp_2[2U] = 0x64617461U;
    __Vtemp_2[3U] = 0x756e632fU;
    __Vtemp_2[4U] = 0x2e2f66U;
    VL_READMEM_N(false, 32, 65536, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_final(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_final\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__stl(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsoc_lite_top___024root___eval_phase__stl(Vsoc_lite_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_settle(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_settle\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_lite_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("soc/soc_lite_top.sv", 70, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsoc_lite_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__stl(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___dump_triggers__stl\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsoc_lite_top___024root___stl_sequent__TOP__0(Vsoc_lite_top___024root* vlSelf);
VL_ATTR_COLD void Vsoc_lite_top___024root____Vm_traceActivitySetAll(Vsoc_lite_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_stl(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_stl\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsoc_lite_top___024root___stl_sequent__TOP__0(vlSelf);
        Vsoc_lite_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsoc_lite_top___024root___stl_sequent__TOP__0(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___stl_sequent__TOP__0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12;
    soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12 = 0;
    // Body
    vlSelfRef.led = (0xffffU & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data);
    vlSelfRef.led_rg0 = (3U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data);
    vlSelfRef.led_rg1 = (3U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data);
    if ((0U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) {
        vlSelfRef.btn_key_col = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
            = ((IData)(((vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelfRef.btn_key_row))))))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) {
        vlSelfRef.btn_key_col = 0xeU;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelfRef.btn_key_row))
                ? 2U : 7U);
    } else if ((2U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) {
        vlSelfRef.btn_key_col = 0xdU;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelfRef.btn_key_row))
                ? 3U : 7U);
    } else if ((3U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) {
        vlSelfRef.btn_key_col = 0xbU;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelfRef.btn_key_row))
                ? 4U : 7U);
    } else if ((4U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) {
        vlSelfRef.btn_key_col = 7U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelfRef.btn_key_row))
                ? 0U : 7U);
    } else {
        vlSelfRef.btn_key_col = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
            = ((7U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
                ? (((vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                     >> 0x13U) & (0xfU == (IData)(vlSelfRef.btn_key_row)))
                    ? 0U : 7U) : 0U);
    }
    vlSelfRef.debug_wb_pc = vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U];
    vlSelfRef.debug_wb_rf_wdata = vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U];
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13 
        = (IData)((0x10000000000000ULL == (0xfff0000000000000ULL 
                                           & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
        = (((((((0x1fU == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                            >> 0x2fU)))) 
                << 0x1fU) | ((0x1eU == (0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x2fU)))) 
                             << 0x1eU)) | (((0x1dU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x2fU)))) 
                                            << 0x1dU) 
                                           | ((0x1cU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x2fU)))) 
                                              << 0x1cU))) 
             | ((((0x1bU == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                              >> 0x2fU)))) 
                  << 0x1bU) | ((0x1aU == (0x1fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2fU)))) 
                               << 0x1aU)) | (((0x19U 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x2fU)))) 
                                              << 0x19U) 
                                             | ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                                << 0x18U)))) 
            | (((((0x17U == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                              >> 0x2fU)))) 
                  << 0x17U) | ((0x16U == (0x1fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2fU)))) 
                               << 0x16U)) | (((0x15U 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x2fU)))) 
                                              << 0x15U) 
                                             | ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                                << 0x14U))) 
               | ((((0x13U == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x2fU)))) 
                    << 0x13U) | ((0x12U == (0x1fU & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                 << 0x12U)) | (((0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                                << 0x11U) 
                                               | ((0x10U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x2fU)))) 
                                                  << 0x10U))))) 
           | ((((((0xfU == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                             >> 0x2fU)))) 
                  << 0xfU) | ((0xeU == (0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x2fU)))) 
                              << 0xeU)) | (((0xdU == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x2fU)))) 
                                            << 0xdU) 
                                           | ((0xcU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x2fU)))) 
                                              << 0xcU))) 
               | ((((0xbU == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                               >> 0x2fU)))) 
                    << 0xbU) | ((0xaU == (0x1fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2fU)))) 
                                << 0xaU)) | (((9U == 
                                               (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2fU)))) 
                                              << 9U) 
                                             | ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                                << 8U)))) 
              | (((((7U == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                             >> 0x2fU)))) 
                    << 7U) | ((6U == (0x1fU & (IData)(
                                                      (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                       >> 0x2fU)))) 
                              << 6U)) | (((5U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                          << 5U) | 
                                         ((4U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2fU)))) 
                                          << 4U))) 
                 | ((((3U == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                               >> 0x2fU)))) 
                      << 3U) | ((2U == (0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x2fU)))) 
                                << 2U)) | (((1U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x2fU)))) 
                                            << 1U) 
                                           | (0U == 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x2fU)))))))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_25_22_d 
        = ((((((0xfU == (0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x36U)))) 
               << 0xfU) | ((0xeU == (0xfU & (IData)(
                                                    (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                     >> 0x36U)))) 
                           << 0xeU)) | (((0xdU == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x36U)))) 
                                         << 0xdU) | 
                                        ((0xcU == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x36U)))) 
                                         << 0xcU))) 
            | ((((0xbU == (0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                           >> 0x36U)))) 
                 << 0xbU) | ((0xaU == (0xfU & (IData)(
                                                      (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                       >> 0x36U)))) 
                             << 0xaU)) | (((9U == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x36U)))) 
                                           << 9U) | 
                                          ((8U == (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x36U)))) 
                                           << 8U)))) 
           | (((((7U == (0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x36U)))) 
                 << 7U) | ((6U == (0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x36U)))) 
                           << 6U)) | (((5U == (0xfU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x36U)))) 
                                       << 5U) | ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x36U)))) 
                                                 << 4U))) 
              | ((((3U == (0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                           >> 0x36U)))) 
                   << 3U) | ((2U == (0xfU & (IData)(
                                                    (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                     >> 0x36U)))) 
                             << 2U)) | (((1U == (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x36U)))) 
                                         << 1U) | (0U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x36U))))))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = (((QData)((IData)((((((((0x3fU == (0x3fU 
                                             & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU)))) 
                                  << 0x1fU) | ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                               << 0x1eU)) 
                                | (((0x3dU == (0x3fU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x3aU)))) 
                                    << 0x1dU) | ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                                 << 0x1cU))) 
                               | ((((0x3bU == (0x3fU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x3aU)))) 
                                    << 0x1bU) | ((0x3aU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                                 << 0x1aU)) 
                                  | (((0x39U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      << 0x19U) | (
                                                   (0x38U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                >> 0x3aU)))) 
                                                   << 0x18U)))) 
                              | (((((0x37U == (0x3fU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x3aU)))) 
                                    << 0x17U) | ((0x36U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                                 << 0x16U)) 
                                  | (((0x35U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      << 0x15U) | (
                                                   (0x34U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                >> 0x3aU)))) 
                                                   << 0x14U))) 
                                 | ((((0x33U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      << 0x13U) | (
                                                   (0x32U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                >> 0x3aU)))) 
                                                   << 0x12U)) 
                                    | (((0x31U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                        << 0x11U) | 
                                       ((0x30U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                        << 0x10U))))) 
                             | ((((((0x2fU == (0x3fU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x3aU)))) 
                                    << 0xfU) | ((0x2eU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 0xeU)) 
                                  | (((0x2dU == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      << 0xdU) | ((0x2cU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0xcU))) 
                                 | ((((0x2bU == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      << 0xbU) | ((0x2aU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0xaU)) 
                                    | (((0x29U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                        << 9U) | ((0x28U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 8U)))) 
                                | (((((0x27U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      << 7U) | ((0x26U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 6U)) 
                                    | (((0x25U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                        << 5U) | ((0x24U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 4U))) 
                                   | ((((0x23U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                        << 3U) | ((0x22U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 2U)) 
                                      | (((0x21U == 
                                           (0x3fU & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                          << 1U) | 
                                         (0x20U == 
                                          (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU))))))))))) 
            << 0x20U) | (QData)((IData)((((((((0x1fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                              << 0x1fU) 
                                             | ((0x1eU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 0x1eU)) 
                                            | (((0x1dU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 0x1dU) 
                                               | ((0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0x1cU))) 
                                           | ((((0x1bU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 0x1bU) 
                                               | ((0x1aU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0x1aU)) 
                                              | (((0x19U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0x19U) 
                                                 | ((0x18U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 0x18U)))) 
                                          | (((((0x17U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 0x17U) 
                                               | ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0x16U)) 
                                              | (((0x15U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0x15U) 
                                                 | ((0x14U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 0x14U))) 
                                             | ((((0x13U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0x13U) 
                                                 | ((0x12U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 0x12U)) 
                                                | (((0x11U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 0x11U) 
                                                   | ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                   >> 0x3aU)))) 
                                                      << 0x10U))))) 
                                         | ((((((0xfU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                << 0xfU) 
                                               | ((0xeU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0xeU)) 
                                              | (((0xdU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0xdU) 
                                                 | ((0xcU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 0xcU))) 
                                             | ((((0xbU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 0xbU) 
                                                 | ((0xaU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 0xaU)) 
                                                | (((9U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 9U) 
                                                   | ((8U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                   >> 0x3aU)))) 
                                                      << 8U)))) 
                                            | (((((7U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  << 7U) 
                                                 | ((6U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 6U)) 
                                                | (((5U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 5U) 
                                                   | ((4U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                   >> 0x3aU)))) 
                                                      << 4U))) 
                                               | ((((3U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                 >> 0x3aU)))) 
                                                    << 3U) 
                                                   | ((2U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                   >> 0x3aU)))) 
                                                      << 2U)) 
                                                  | (((1U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                   >> 0x3aU)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                    >> 0x3aU))))))))))));
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
            & (0xeU == (IData)(vlSelfRef.btn_key_row)))
            ? 1U : (((1U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                     & (0xdU == (IData)(vlSelfRef.btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlSelfRef.btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlSelfRef.btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlSelfRef.btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlSelfRef.btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlSelfRef.btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelfRef.btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlSelfRef.btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlSelfRef.btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlSelfRef.btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlSelfRef.btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlSelfRef.btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlSelfRef.btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlSelfRef.btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlSelfRef.btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc 
        = ((0x13U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x3aU)))) 
           | (0x15U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x3aU)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we 
        = ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 5U) & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs 
        = (((- (IData)((1U & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                      >> 0x39U))))) 
            << 0x12U) | (0x3fffcU & ((IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                              >> 0x2aU)) 
                                     << 2U)));
    vlSelfRef.soc_lite_top__DOT__cpu_data_en = ((IData)(
                                                        (0U 
                                                         != 
                                                         (0x220U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
                                                & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w 
        = (IData)((0x280000000000000ULL == (0xffc0000000000000ULL 
                                            & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20 
        = (IData)((0x1400000000000000ULL == (0xfe00000000000000ULL 
                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem 
        = (IData)((0x2880000000000000ULL == (0xffc0000000000000ULL 
                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7 
        = ((0x15U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x3aU)))) 
           | (0x14U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x3aU)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26 
        = ((0x14U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x3aU)))) 
           | (0x15U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x3aU)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data 
        = ((0x40U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])
            ? (((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r))) 
                & vlSelfRef.soc_lite_top__DOT__data_sram_rdata) 
               | ((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r))) 
                  & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg))
            : vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]);
    soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12 
        = (IData)((0x40000000000000ULL == (0xfff0000000000000ULL 
                                           & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & (IData)((0x40U == (0x240U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
           & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
              >> 5U));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6 
        = ((0x16U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x3aU)))) 
           | (0x17U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x3aU)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we 
        = (IData)((0x2980000000000000ULL == (0xffc0000000000000ULL 
                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest 
        = (0x1fU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                    & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))));
    vlSelfRef.debug_wb_rf_wnum = (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U]);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest 
        = (0x1fU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                    & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
        = ((0x100U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]
            : vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 
        = ((0x80U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]
            : vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin 
        = (IData)((0U != (0x3800U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelfRef.debug_wb_rf_wen = (0xfU & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w 
        = ((IData)(soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12) 
           & (0x800000000000ULL == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w 
        = ((IData)(soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12) 
           & (0x4800000000000ULL == (0xf800000000000ULL 
                                     & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w 
        = ((IData)(soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12) 
           & (0x8800000000000ULL == (0xf800000000000ULL 
                                     & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem) 
           | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2 
        = (0x1fU & (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6) 
                     | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we))
                     ? (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                >> 0x20U)) : (IData)(
                                                     (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                      >> 0x2aU))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
           & (0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_6_0 = ((0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x25U))) 
                                                == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest 
        = ((IData)(vlSelfRef.debug_wb_rf_wnum) & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & (0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest) 
           == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                >> 0x25U))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result 
        = (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
           | vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)
            ? (~ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)
            : vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc) 
           | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest) 
           == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
           & (0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_6_1 = ((0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x25U))) 
                                                == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
        = (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
           + (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
              + (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26) 
                         | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20))) 
                     & ((0U != (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                 >> 0x25U)))) 
                        & (((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                              >> 0x25U))) 
                            == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_0) 
                              | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_1)))))) 
                 & (~ (((~ (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w))) 
                            | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                               | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9) 
                                  | ((0x13U == (0x3fU 
                                                & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU)))) 
                                     | ((0x14U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                        | ((0x15U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU)))) 
                                           | ((0x16U 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                              | ((0x17U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x3aU)))) 
                                                 | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20)))))))))) 
                        & ((0U != (0x1fU & (IData)(
                                                   (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                    >> 0x2aU)))) 
                           & (((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                 >> 0x2aU))) 
                               == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                              | (((0x1fU & (IData)(
                                                   (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                    >> 0x2aU))) 
                                  == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)) 
                                 | ((0x1fU & (IData)(
                                                     (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                      >> 0x2aU))) 
                                    == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest)))))) 
                       | ((~ ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                              & ((0x16U != (0x3fU & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                 & (0x17U != (0x3fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU))))))) 
                          & ((0U != (0x1fU & (IData)(
                                                     (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                      >> 0x20U)))) 
                             & (((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x20U))) 
                                 == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                                | (((0x1fU & (IData)(
                                                     (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                      >> 0x20U))) 
                                    == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)) 
                                   | ((0x1fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x20U))) 
                                      == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest))))))))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id 
        = ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
           & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
              & (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                    & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                       >> 9U)) & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid))) 
                  & ((0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                     & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2) 
                        | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4)))) 
                 | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1) 
                     & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid)) 
                        & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2))) 
                    | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1) 
                        & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid)) 
                           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4))) 
                       | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5) 
                           & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid)) 
                              & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_0))) 
                          | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5) 
                              & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid)) 
                                 & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2) 
                                    == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)))) 
                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_1) 
                                   | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2) 
                                      == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest)))))))))));
    vlSelfRef.soc_lite_top__DOT__cpu_data_addr = ((
                                                   (- (IData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))) 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result) 
                                                  | ((1U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                        >> 0xcU)))) 
                                                         & (((~ 
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 
                                                               >> 0x1fU)) 
                                                             & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                >> 0x1fU)) 
                                                            | ((~ 
                                                                ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                  ^ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2) 
                                                                 >> 0x1fU)) 
                                                               & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
                                                                  >> 0x1fU))))) 
                                                     | ((1U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                           >> 0xdU)))) 
                                                            & (~ (IData)(
                                                                         (1ULL 
                                                                          & (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                                              + 
                                                                              ((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                                               + (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                                                             >> 0x20U)))))) 
                                                        | (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                           >> 0xeU)))) 
                                                            & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                               & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)) 
                                                           | (((~ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result) 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0xfU))))) 
                                                              | (((- (IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x10U)))) 
                                                                  & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result) 
                                                                 | (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x11U)))) 
                                                                     & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                        ^ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)) 
                                                                    | (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x15U)))) 
                                                                        & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2) 
                                                                       | (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x12U)))) 
                                                                           & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                              << 
                                                                              (0x1fU 
                                                                               & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))) 
                                                                          | ((- (IData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))) 
                                                                             & (IData)(
                                                                                ((((QData)((IData)(
                                                                                (- (IData)((IData)(
                                                                                ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x14U) 
                                                                                & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                                >> 0x1fU))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)))))))))))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if 
        = ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid 
        = (1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go 
        = ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait));
    vlSelfRef.soc_lite_top__DOT__data_sram_en = ((0x1faf0000U 
                                                  != 
                                                  (0x1fff0000U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                                                 & (IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_en));
    vlSelfRef.soc_lite_top__DOT__conf_en = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_en) 
                                            & (0x1faf0000U 
                                               == (0x1fff0000U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2 
        = vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2;
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value 
        = ((0U == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2))
            ? 0U : (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid) 
                     & ((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]) 
                        == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2)))
                     ? vlSelfRef.soc_lite_top__DOT__cpu_data_addr
                     : (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid) 
                         & ((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]) 
                            == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2)))
                         ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data
                         : ((0U == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2))
                             ? 0U : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                            [vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2]))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value 
        = ((0U == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                    >> 0x25U)))) ? 0U
            : (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid) 
                & ((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]) 
                   == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                        >> 0x25U)))))
                ? vlSelfRef.soc_lite_top__DOT__cpu_data_addr
                : (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid) 
                    & ((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]) 
                       == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                            >> 0x25U)))))
                    ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data
                    : ((0U == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x25U))))
                        ? 0U : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                       [(0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                          >> 0x25U)))]))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__ds_to_es_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                 | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go)));
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__conf_en) 
           & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
              >> 5U));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd 
        = (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value 
           == vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value);
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
           & (0xe000U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)));
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_uart_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
           & (0xff10U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken 
        = (((IData)(((0x5800000000000000ULL == (0xfc00000000000000ULL 
                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)) 
                     & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd))) 
            | (((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)) 
                & (0x5c00000000000000ULL == (0xfc00000000000000ULL 
                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
               | ((0x13U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                              >> 0x3aU)))) 
                  | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7)))) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid) 
           & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)) 
              & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if))));
    vlSelfRef.soc_lite_top__DOT__cpu_inst_addr = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)
                                                   ? 
                                                  (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7) 
                                                    | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6))
                                                    ? 
                                                   ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26)
                                                      ? 
                                                     ((((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                               >> 0x29U))))) 
                                                        << 0x1cU) 
                                                       | (0xffc0000U 
                                                          & ((IData)(
                                                                     (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                      >> 0x20U)) 
                                                             << 0x12U))) 
                                                      | (0x3fffcU 
                                                         & ((IData)(
                                                                    (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                     >> 0x2aU)) 
                                                            << 2U)))
                                                      : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs))
                                                    : 
                                                   (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value 
                                                    + vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                 | ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)) 
                    & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin))));
    vlSelfRef.soc_lite_top__DOT__cpu_inst_en = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid) 
                                                & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
                                                   & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                                                      | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken))));
}

VL_ATTR_COLD void Vsoc_lite_top___024root___eval_triggers__stl(Vsoc_lite_top___024root* vlSelf);

VL_ATTR_COLD bool Vsoc_lite_top___024root___eval_phase__stl(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_phase__stl\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsoc_lite_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsoc_lite_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__ico(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___dump_triggers__ico\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__act(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___dump_triggers__act\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge soc_lite_top.timer_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__nba(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___dump_triggers__nba\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge soc_lite_top.timer_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsoc_lite_top___024root____Vm_traceActivitySetAll(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root____Vm_traceActivitySetAll\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vsoc_lite_top___024root___ctor_var_reset(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___ctor_var_reset\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->led_rg0 = VL_RAND_RESET_I(2);
    vlSelf->led_rg1 = VL_RAND_RESET_I(2);
    vlSelf->num_csn = VL_RAND_RESET_I(8);
    vlSelf->num_a_g = VL_RAND_RESET_I(7);
    vlSelf->num_data = VL_RAND_RESET_I(32);
    vlSelf->switch_1 = VL_RAND_RESET_I(8);
    vlSelf->btn_key_col = VL_RAND_RESET_I(4);
    vlSelf->btn_key_row = VL_RAND_RESET_I(4);
    vlSelf->btn_step = VL_RAND_RESET_I(2);
    vlSelf->debug_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug_wb_rf_wen = VL_RAND_RESET_I(4);
    vlSelf->debug_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->open_trace = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__timer_clk = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu_resetn = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu_inst_en = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu_inst_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu_inst_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu_data_en = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu_data_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__data_sram_en = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__conf_en = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__ds_to_es_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->soc_lite_top__DOT__cpu__DOT__es_to_ds_dest = VL_RAND_RESET_I(5);
    vlSelf->soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest = VL_RAND_RESET_I(5);
    vlSelf->soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest = VL_RAND_RESET_I(5);
    vlSelf->soc_lite_top__DOT__cpu__DOT__block_id = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__block_if = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_forward_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__mem_forward_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__mem_forward_data = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r = VL_RAND_RESET_Q(64);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_31_26_d = VL_RAND_RESET_Q(64);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_25_22_d = VL_RAND_RESET_I(16);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_19_15_d = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(150, vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r);
    vlSelf->soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r);
    vlSelf->soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->soc_lite_top__DOT__inst_ram__DOT__sync_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__led_data = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__led_rg0_data = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__led_rg1_data = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__confreg_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__timer_r2 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__simu_flag = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__io_simu = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data = VL_RAND_RESET_I(8);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__num_monitor = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__conf_write = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer_begin = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r1 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r3 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r2 = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r1 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r2 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__timer_r1 = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_timer = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__write_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__btn_key_r = VL_RAND_RESET_I(16);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__key_flag = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__btn_key_tmp = VL_RAND_RESET_I(16);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__btn_step0_r = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__btn_step1_r = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__step0_flag = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__step1_flag = VL_RAND_RESET_I(1);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->soc_lite_top__DOT__u_confreg__DOT__scan_data = VL_RAND_RESET_I(4);
    vlSelf->__VdfgRegularize_hd87f99a1_6_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_6_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_lite_top__DOT__timer_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
