// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_lite_top.h for the primary calling header

#include "Vsoc_lite_top__pch.h"
#include "Vsoc_lite_top___024root.h"

void Vsoc_lite_top___024root___ico_sequent__TOP__0(Vsoc_lite_top___024root* vlSelf);

void Vsoc_lite_top___024root___eval_ico(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_ico\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsoc_lite_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsoc_lite_top___024root___ico_sequent__TOP__0(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___ico_sequent__TOP__0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
            ? ((IData)(((vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelfRef.btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
                               ? ((0xfU == (IData)(vlSelfRef.btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlSelfRef.btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelfRef.btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlSelfRef.btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))
                                                     ? 
                                                    (((vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlSelfRef.btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
}

void Vsoc_lite_top___024root___eval_triggers__ico(Vsoc_lite_top___024root* vlSelf);

bool Vsoc_lite_top___024root___eval_phase__ico(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_phase__ico\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsoc_lite_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsoc_lite_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsoc_lite_top___024root___eval_act(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_act\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsoc_lite_top___024root___nba_sequent__TOP__0(Vsoc_lite_top___024root* vlSelf);
void Vsoc_lite_top___024root___nba_sequent__TOP__1(Vsoc_lite_top___024root* vlSelf);
void Vsoc_lite_top___024root___nba_sequent__TOP__2(Vsoc_lite_top___024root* vlSelf);

void Vsoc_lite_top___024root___eval_nba(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_nba\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsoc_lite_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsoc_lite_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsoc_lite_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*6:0*/, 32> Vsoc_lite_top__ConstPool__TABLE_h94eb7d6b_0;

VL_INLINE_OPT void Vsoc_lite_top___024root___nba_sequent__TOP__0(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___nba_sequent__TOP__0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr4;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr4 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr3;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr3 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr2;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr2 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr0;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr0 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr5;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr5 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr1;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr1 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr6;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr6 = 0;
    IData/*31:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr7;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr7 = 0;
    IData/*19:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__key_count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__key_count = 0;
    CData/*3:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__state_count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__state_count = 0;
    IData/*19:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__step0_count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__step0_count = 0;
    IData/*19:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__step1_count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__step1_count = 0;
    IData/*19:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__count = 0;
    IData/*31:0*/ __VdlyVal__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0;
    __VdlyVal__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0;
    __VdlyDim0__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0;
    __VdlySet__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    CData/*7:0*/ __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0;
    __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 = 0;
    SData/*15:0*/ __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0;
    __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1;
    __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 = 0;
    SData/*15:0*/ __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1;
    __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2;
    __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 = 0;
    SData/*15:0*/ __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2;
    __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3;
    __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 = 0;
    SData/*15:0*/ __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3;
    __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 = 0;
    // Body
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__count 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__state_count 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count;
    vlSelfRef.__Vdly__soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__step0_count 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__step1_count 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__key_count 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count;
    __VdlySet__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0U;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 = 0U;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 = 0U;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 = 0U;
    __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 = 0U;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr4 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr4;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr3 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr3;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr2 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr2;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr0 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr0;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr5 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr5;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr1 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr1;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr6 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr6;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr7 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr7;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__state_count 
        = ((1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)) 
                  | ((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count) 
                     >> 3U))) ? 0U : (0xfU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count))));
    vlSelfRef.__Vdly__soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2;
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__step0_count 
        = ((1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)) 
                  | (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count)));
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__step1_count 
        = ((1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)) 
                  | (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count)));
    __Vdly__soc_lite_top__DOT__u_confreg__DOT__key_count 
        = ((1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)) 
                  | (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count)));
    if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we) {
        __VdlyVal__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 
            = vlSelfRef.debug_wb_rf_wdata;
        __VdlyDim0__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 
            = vlSelfRef.debug_wb_rf_wnum;
        __VdlySet__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 1U;
    }
    if ((((0x20U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
           ? 0xfU : 0U) & (IData)(vlSelfRef.soc_lite_top__DOT__data_sram_en))) {
        __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 
            = (0xffU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]);
        __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 
            = (0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                          >> 2U));
        __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0 = 1U;
    }
    if (((((0x20U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? 0xfU : 0U) >> 1U) & (IData)(vlSelfRef.soc_lite_top__DOT__data_sram_en))) {
        __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 
            = (0xffU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                        >> 8U));
        __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 
            = (0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                          >> 2U));
        __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1 = 1U;
    }
    if (((((0x20U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? 0xfU : 0U) >> 2U) & (IData)(vlSelfRef.soc_lite_top__DOT__data_sram_en))) {
        __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 
            = (0xffU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                        >> 0x10U));
        __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 
            = (0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                          >> 2U));
        __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2 = 1U;
    }
    if (((((0x20U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? 0xfU : 0U) >> 3U) & (IData)(vlSelfRef.soc_lite_top__DOT__data_sram_en))) {
        __VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 
            = (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
               >> 0x18U);
        __VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 
            = (0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                          >> 2U));
        __VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3 = 1U;
    }
    if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid = 0U;
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid = 0U;
    } else {
        if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin) {
            vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid 
                = vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid;
        }
        if (((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
             & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin))) {
            vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid 
                = vlSelfRef.soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid;
        }
    }
    if (vlSelfRef.soc_lite_top__DOT__data_sram_en) {
        vlSelfRef.soc_lite_top__DOT__data_sram_rdata 
            = vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram
            [(0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                         >> 2U))];
    }
    vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn) 
           && (0x1faf0000U != (0x1fff0000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)));
    vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn) 
           && (0x1faf0000U == (0x1fff0000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid 
        = ((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset))) 
           && (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid));
    __Vtableidx1 = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data) 
                     << 1U) | (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn));
    if (vlSelfRef.soc_lite_top__DOT__cpu_resetn) {
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__count 
            = (0xfffffU & ((IData)(1U) + vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count));
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr4 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8040U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr4);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr3 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8030U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr3);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr2 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8020U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr2);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr0 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8000U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr0);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr5 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8050U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr5);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr1 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8010U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr1);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr6 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8060U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr6);
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr7 
            = (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                & (0x8070U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))
                ? vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]
                : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr7);
        if ((0x80000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
            if ((0x40000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
                if ((0x20000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
                    vlSelfRef.num_csn = 0xfeU;
                    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                        = (0xfU & vlSelfRef.num_data);
                } else {
                    vlSelfRef.num_csn = 0xfdU;
                    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                        = (0xfU & (vlSelfRef.num_data 
                                   >> 4U));
                }
            } else if ((0x20000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
                vlSelfRef.num_csn = 0xfbU;
                vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                    = (0xfU & (vlSelfRef.num_data >> 8U));
            } else {
                vlSelfRef.num_csn = 0xf7U;
                vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                    = (0xfU & (vlSelfRef.num_data >> 0xcU));
            }
        } else if ((0x40000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
            if ((0x20000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
                vlSelfRef.num_csn = 0xefU;
                vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                    = (0xfU & (vlSelfRef.num_data >> 0x10U));
            } else {
                vlSelfRef.num_csn = 0xdfU;
                vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                    = (0xfU & (vlSelfRef.num_data >> 0x14U));
            }
        } else if ((0x20000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count)) {
            vlSelfRef.num_csn = 0xbfU;
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                = (0xfU & (vlSelfRef.num_data >> 0x18U));
        } else {
            vlSelfRef.num_csn = 0x7fU;
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data 
                = (0xfU & (vlSelfRef.num_data >> 0x1cU));
        }
        if (vlSelfRef.soc_lite_top__DOT__conf_en) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg 
                = ((0x8000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                    ? ((0x4000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                        ? ((0x2000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                            ? ((0x1000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                ? ((0x800U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                    ? ((0x400U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                        ? ((0x200U 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                            ? ((0x100U 
                                                & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                ? (
                                                   (0x80U 
                                                    & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__num_monitor)))))))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 
                                                      ((8U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : (IData)(vlSelfRef.open_trace)))))
                                                       : 
                                                      ((8U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__simu_flag)))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 
                                                      ((8U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data)))))
                                                       : 
                                                      ((8U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__io_simu))))))))
                                                : 0U)
                                            : 0U) : 0U)
                                    : ((0x400U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                        ? 0U : ((0x200U 
                                                 & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                 ? 0U
                                                 : 
                                                ((0x100U 
                                                  & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                   ? 
                                                  ((0x40U 
                                                    & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((0x8000U 
                                                           & ((IData)(vlSelfRef.switch_1) 
                                                              << 8U)) 
                                                          | ((0x2000U 
                                                              & ((IData)(vlSelfRef.switch_1) 
                                                                 << 7U)) 
                                                             | ((0x800U 
                                                                 & ((IData)(vlSelfRef.switch_1) 
                                                                    << 6U)) 
                                                                | ((0x200U 
                                                                    & ((IData)(vlSelfRef.switch_1) 
                                                                       << 5U)) 
                                                                   | ((0x80U 
                                                                       & ((IData)(vlSelfRef.switch_1) 
                                                                          << 4U)) 
                                                                      | ((0x20U 
                                                                          & ((IData)(vlSelfRef.switch_1) 
                                                                             << 3U)) 
                                                                         | ((8U 
                                                                             & ((IData)(vlSelfRef.switch_1) 
                                                                                << 2U)) 
                                                                            | (2U 
                                                                               & ((IData)(vlSelfRef.switch_1) 
                                                                                << 1U)))))))))))))
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r)))))))))))
                                                   : 
                                                  ((0x40U 
                                                    & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r)))))
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : (IData)(vlSelfRef.switch_1))))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : vlSelfRef.num_data))))
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data))))))
                                                    : 
                                                   ((0x20U 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data))))
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data)))))
                                                     : 0U)))))))
                                : ((0x800U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                    ? 0U : ((0x400U 
                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                             ? 0U : 
                                            ((0x200U 
                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                              ? 0U : 
                                             ((0x100U 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                               ? 0U
                                               : ((0x80U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 0U
                                                          : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r2)))))))))))))
                            : 0U) : ((0x2000U & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                      ? 0U : ((0x1000U 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                               ? 0U
                                               : ((0x800U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                   ? 0U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                        ? 
                                                       ((0x20U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr7))))
                                                          : 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr6)))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr5))))
                                                          : 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr4))))))
                                                        : 
                                                       ((0x20U 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr3))))
                                                          : 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr2)))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr1))))
                                                          : 
                                                         ((8U 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)
                                                              ? 0U
                                                              : vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr0)))))))))))))))
                    : 0U);
        }
        if (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_uart_valid) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_valid 
                = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_uart_valid;
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_data 
                = (0xffU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]);
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data 
                = (0xffU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]);
        }
        if ((0x80000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count)) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_flag = 0U;
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r 
                = (1U & (IData)(vlSelfRef.btn_step));
        } else if ((1U & (((~ (IData)(vlSelfRef.btn_step)) 
                           & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                          | ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                             & (IData)(vlSelfRef.btn_step))))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_flag = 1U;
        }
        if ((0x80000U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count)) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_flag = 0U;
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r 
                = (1U & ((IData)(vlSelfRef.btn_step) 
                         >> 1U));
        } else if ((1U & (((~ ((IData)(vlSelfRef.btn_step) 
                               >> 1U)) & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r)) 
                          | ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelfRef.btn_step) 
                                >> 1U))))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_flag = 1U;
        }
        if ((IData)(((vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                      >> 0x13U) & ((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count) 
                                   >> 3U)))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_flag = 0U;
        } else if ((((~ (IData)((0xfU == (IData)(vlSelfRef.btn_key_row)))) 
                     & (0U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) 
                    | ((7U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                       & (0xfU == (IData)(vlSelfRef.btn_key_row))))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_flag = 1U;
        }
        if ((0U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r = 0U;
        } else if ((((7U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state)) 
                     & (7U != (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state))) 
                    & ((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count) 
                       >> 3U))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r 
                = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_tmp;
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xff40U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__num_monitor 
                = (1U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]);
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xff30U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.open_trace = (0U != vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]);
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xff00U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__io_simu 
                = ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                    << 0x10U) | (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                 >> 0x10U));
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xf040U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data 
                = vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xf030U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data 
                = vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xf020U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data 
                = vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
        }
        if (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
             & (0xf050U == (0xffffU & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))) {
            vlSelfRef.num_data = vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
        }
        if ((8U & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count))) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state 
                = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state;
        }
    } else {
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__count = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr4 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr3 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr2 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr0 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr5 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr1 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr6 = 0U;
        __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr7 = 0U;
        vlSelfRef.num_csn = 0xffU;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_valid = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_flag = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_flag = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_flag = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__num_monitor = 1U;
        vlSelfRef.open_trace = 1U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__io_simu = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r = 1U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r = 1U;
        vlSelfRef.num_data = 0U;
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state = 0U;
    }
    vlSelfRef.num_a_g = Vsoc_lite_top__ConstPool__TABLE_h94eb7d6b_0
        [__Vtableidx1];
    if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))) 
                       >> 0x20U));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            = (0x3fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]);
    }
    if (__VdlySet__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[__VdlyDim0__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0] 
            = __VdlyVal__soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0;
    }
    if (__VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0) {
        vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram[__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0] 
            = ((0xffffff00U & vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram
                [__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0]) 
               | (IData)(__VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v0));
    }
    if (__VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1) {
        vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram[__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1] 
            = ((0xffff00ffU & vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram
                [__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v1) 
                  << 8U));
    }
    if (__VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2) {
        vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram[__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2] 
            = ((0xff00ffffU & vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram
                [__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v2) 
                  << 0x10U));
    }
    if (__VdlySet__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3) {
        vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram[__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3] 
            = ((0xffffffU & vlSelfRef.soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram
                [__VdlyDim0__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3]) 
               | ((IData)(__VdlyVal__soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram__v3) 
                  << 0x18U));
    }
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr7 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr7;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr6 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr6;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr5 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr5;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr4 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr4;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr3 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr3;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr2 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr2;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr1 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr1;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr0 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__cr0;
    vlSelfRef.debug_wb_pc = vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U];
    vlSelfRef.debug_wb_rf_wdata = vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U];
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we 
        = ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 5U) & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    vlSelfRef.debug_wb_rf_wnum = (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U]);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid 
        = ((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset))) 
           && (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))) 
                       >> 0x20U));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
            = (0x7fU & ((0x40U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                  >> 3U)) | ((0x20U 
                                              & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                 >> 1U)) 
                                             | (0x1fU 
                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    }
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r2 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r1;
    if ((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)))) {
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__simu_flag = 0U;
    }
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__key_count;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__count;
    vlSelfRef.debug_wb_rf_wen = (0xfU & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest 
        = ((IData)(vlSelfRef.debug_wb_rf_wnum) & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid) 
           & (0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data 
        = ((0x40U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])
            ? (((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r))) 
                & vlSelfRef.soc_lite_top__DOT__data_sram_rdata) 
               | ((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r))) 
                  & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg))
            : vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
           & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
              >> 5U));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest 
        = (0x1fU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                    & (- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid 
        = ((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset))) 
           && (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ds_to_es_valid));
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r1 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer;
    vlSelfRef.led_rg1 = (3U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data);
    vlSelfRef.led_rg0 = (3U & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data);
    vlSelfRef.led = (0xffffU & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data);
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__step0_count;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__step1_count;
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
           & (0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)));
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count 
        = __Vdly__soc_lite_top__DOT__u_confreg__DOT__state_count;
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
}

VL_INLINE_OPT void Vsoc_lite_top___024root___nba_sequent__TOP__1(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___nba_sequent__TOP__1\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)
            ? (((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2) 
                & (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r3)))
                ? vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r2
                : ((IData)(1U) + vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer))
            : 0U);
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r3 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r1;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r2 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r1;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r1 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin;
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r1 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r;
}

VL_INLINE_OPT void Vsoc_lite_top___024root___nba_sequent__TOP__2(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___nba_sequent__TOP__2\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12;
    soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12 = 0;
    // Body
    if (vlSelfRef.soc_lite_top__DOT__cpu_resetn) {
        if (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin = 1U;
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r 
                = vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
        } else if (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r2) {
            vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin = 0U;
        }
    } else {
        vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin = 0U;
    }
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r2 
        = vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1;
    if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__ds_to_es_valid) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
            = (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r);
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
            = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value))));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
            = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value)) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value))) 
                       >> 0x20U));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
            = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc)
                ? 4U : ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20)
                         ? ((IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                     >> 0x25U)) << 0xcU)
                         : (((- (IData)((1U & (IData)(
                                                      (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                       >> 0x35U))))) 
                             << 0xcU) | (0xfffU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2aU))))));
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            = (0x3fffffU & ((((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                << 0x15U) | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                              << 0x14U) 
                                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                                << 0x13U))) 
                              | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                  << 0x12U) | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                 & (0x5800000000000ULL 
                                                    == 
                                                    (0xf800000000000ULL 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                << 0x11U) 
                                               | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                   & (0x5000000000000ULL 
                                                      == 
                                                      (0xf800000000000ULL 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                  << 0x10U)))) 
                             | (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                   & (0x4000000000000ULL 
                                      == (0xf800000000000ULL 
                                          & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                  << 0xfU) | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                & (0x4800000000000ULL 
                                                   == 
                                                   (0xf800000000000ULL 
                                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                               << 0xeU) 
                                              | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                  & (0x2800000000000ULL 
                                                     == 
                                                     (0xf800000000000ULL 
                                                      & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                 << 0xdU))) 
                                | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                     & (0x2000000000000ULL 
                                        == (0xf800000000000ULL 
                                            & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                    << 0xcU) | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                 & (0x1000000000000ULL 
                                                    == 
                                                    (0xf800000000000ULL 
                                                     & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                << 0xbU)))) 
                            | ((((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                   & (0ULL == (0xf800000000000ULL 
                                               & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                  | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                     | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10))) 
                                 << 0xaU) | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc) 
                                                << 8U))) 
                               | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                    | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                       | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                          | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10)))))) 
                                   << 7U) | ((((0x14U 
                                                != 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                               & ((0x16U 
                                                   != 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  & ((0x17U 
                                                      != 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                  >> 0x3aU)))) 
                                                     & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we))))) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we) 
                                                 << 5U) 
                                                | ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                >> 0x3aU))))
                                                    ? 1U
                                                    : 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x20U))))))))));
    }
    vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1 
        = vlSelfRef.__Vdly__soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1;
    vlSelfRef.soc_lite_top__DOT__cpu_data_en = ((IData)(
                                                        (0U 
                                                         != 
                                                         (0x220U 
                                                          & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
                                                & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & (IData)((0x40U == (0x240U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
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
    if ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid) 
          & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id))) 
         & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin))) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
            = (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_inst_rdata)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc)));
    }
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & (0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result 
        = (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
           | vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)
            ? (~ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)
            : vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2);
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
        = (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
           + (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
              + (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)));
    if (vlSelfRef.soc_lite_top__DOT__cpu_inst_en) {
        vlSelfRef.soc_lite_top__DOT__cpu_inst_rdata 
            = vlSelfRef.soc_lite_top__DOT__inst_ram__DOT__sync_ram__DOT__ram
            [(0x3ffffU & (vlSelfRef.soc_lite_top__DOT__cpu_inst_addr 
                          >> 2U))];
    }
    if (vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc = 0x1bfffffcU;
    } else if (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid) 
                & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                   | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)))) {
        vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc 
            = vlSelfRef.soc_lite_top__DOT__cpu_inst_addr;
    }
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
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc 
        = ((0x13U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x3aU)))) 
           | (0x15U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x3aU)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs 
        = (((- (IData)((1U & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                      >> 0x39U))))) 
            << 0x12U) | (0x3fffcU & ((IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                              >> 0x2aU)) 
                                     << 2U)));
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
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest) 
           == (0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                >> 0x25U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_6_0 = ((0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x25U))) 
                                                == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest));
    vlSelfRef.__VdfgRegularize_hd87f99a1_6_1 = ((0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x25U))) 
                                                == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest));
    soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_12 
        = (IData)((0x40000000000000ULL == (0xfff0000000000000ULL 
                                           & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6 
        = ((0x16U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x3aU)))) 
           | (0x17U == (0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                         >> 0x3aU)))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we 
        = (IData)((0x2980000000000000ULL == (0xffc0000000000000ULL 
                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)));
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
    vlSelfRef.soc_lite_top__DOT__data_sram_en = ((0x1faf0000U 
                                                  != 
                                                  (0x1fff0000U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                                                 & (IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_en));
    vlSelfRef.soc_lite_top__DOT__conf_en = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_en) 
                                            & (0x1faf0000U 
                                               == (0x1fff0000U 
                                                   & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)));
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
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset = 
        (1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu_resetn)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc) 
           | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9));
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
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest) 
           == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2));
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
    vlSelfRef.soc_lite_top__DOT__cpu_resetn = vlSelfRef.resetn;
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
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if 
        = ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid 
        = (1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go 
        = ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait));
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
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid) 
           & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)) 
              & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if))));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__ds_to_es_valid 
        = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                 | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go)));
    vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                 | ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)) 
                    & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin))));
    vlSelfRef.soc_lite_top__DOT__cpu_inst_en = ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid) 
                                                & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
                                                   & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                                                      | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken))));
}

void Vsoc_lite_top___024root___eval_triggers__act(Vsoc_lite_top___024root* vlSelf);

bool Vsoc_lite_top___024root___eval_phase__act(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_phase__act\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsoc_lite_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsoc_lite_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsoc_lite_top___024root___eval_phase__nba(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_phase__nba\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsoc_lite_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__ico(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__nba(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_lite_top___024root___dump_triggers__act(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsoc_lite_top___024root___eval(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_lite_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("soc/soc_lite_top.sv", 70, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsoc_lite_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_lite_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("soc/soc_lite_top.sv", 70, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsoc_lite_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("soc/soc_lite_top.sv", 70, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsoc_lite_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsoc_lite_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsoc_lite_top___024root___eval_debug_assertions(Vsoc_lite_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root___eval_debug_assertions\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.btn_key_row & 0xf0U)))) {
        Verilated::overWidthError("btn_key_row");}
    if (VL_UNLIKELY(((vlSelfRef.btn_step & 0xfcU)))) {
        Verilated::overWidthError("btn_step");}
}
#endif  // VL_DEBUG
