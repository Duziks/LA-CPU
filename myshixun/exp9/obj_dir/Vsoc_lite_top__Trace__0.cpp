// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsoc_lite_top__Syms.h"


void Vsoc_lite_top___024root__trace_chg_0_sub_0(Vsoc_lite_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsoc_lite_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_chg_0\n"); );
    // Init
    Vsoc_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_lite_top___024root*>(voidSelf);
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsoc_lite_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsoc_lite_top___024root__trace_chg_0_sub_0(Vsoc_lite_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_chg_0_sub_0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,((((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r))) 
                                 & vlSelfRef.soc_lite_top__DOT__data_sram_rdata) 
                                | ((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r))) 
                                   & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg))),32);
        bufp->chgIData(oldp+1,(vlSelfRef.soc_lite_top__DOT__data_sram_rdata),32);
        bufp->chgIData(oldp+2,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg),32);
        bufp->chgBit(oldp+3,(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r));
        bufp->chgBit(oldp+4,(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r));
        bufp->chgBit(oldp+5,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid));
        bufp->chgBit(oldp+6,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid));
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data)) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data)) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))) 
                                 >> 0x20U));
        __Vtemp_1[2U] = (0x3fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]);
        bufp->chgWData(oldp+7,(__Vtemp_1),70);
        bufp->chgQData(oldp+10,((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we)) 
                                  << 0x25U) | (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U])))))),38);
        bufp->chgBit(oldp+12,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid));
        bufp->chgCData(oldp+13,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest),5);
        bufp->chgCData(oldp+14,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest),5);
        bufp->chgBit(oldp+15,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid));
        bufp->chgCData(oldp+16,((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])),5);
        bufp->chgIData(oldp+17,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data),32);
        bufp->chgBit(oldp+18,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
        bufp->chgBit(oldp+19,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we));
        bufp->chgIData(oldp+20,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+52,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid));
        bufp->chgWData(oldp+53,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r),71);
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                     >> 6U))));
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                     >> 5U))));
        bufp->chgIData(oldp+58,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
        bufp->chgWData(oldp+60,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),70);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                     >> 5U))));
        bufp->chgIData(oldp+64,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr0),32);
        bufp->chgIData(oldp+65,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr1),32);
        bufp->chgIData(oldp+66,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr2),32);
        bufp->chgIData(oldp+67,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr3),32);
        bufp->chgIData(oldp+68,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr4),32);
        bufp->chgIData(oldp+69,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr5),32);
        bufp->chgIData(oldp+70,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr6),32);
        bufp->chgIData(oldp+71,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr7),32);
        bufp->chgIData(oldp+72,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data),32);
        bufp->chgIData(oldp+73,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data),32);
        bufp->chgIData(oldp+74,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data),32);
        bufp->chgIData(oldp+75,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r),32);
        bufp->chgIData(oldp+76,(((2U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r))))),32);
        bufp->chgCData(oldp+77,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_data),8);
        bufp->chgBit(oldp+78,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_valid));
        bufp->chgIData(oldp+79,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r2),32);
        bufp->chgIData(oldp+80,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__simu_flag),32);
        bufp->chgIData(oldp+81,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__io_simu),32);
        bufp->chgCData(oldp+82,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data),8);
        bufp->chgBit(oldp+83,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__num_monitor));
        bufp->chgIData(oldp+84,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r1),32);
        bufp->chgSData(oldp+85,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r),16);
        bufp->chgCData(oldp+86,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state),3);
        bufp->chgBit(oldp+87,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_flag));
        bufp->chgIData(oldp+88,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count),20);
        bufp->chgCData(oldp+89,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count),4);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                                     >> 0x13U))));
        bufp->chgBit(oldp+91,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r));
        bufp->chgBit(oldp+92,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r));
        bufp->chgBit(oldp+93,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_flag));
        bufp->chgIData(oldp+94,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count),20);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count 
                                     >> 0x13U))));
        bufp->chgBit(oldp+96,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_flag));
        bufp->chgIData(oldp+97,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count),20);
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count 
                                     >> 0x13U))));
        bufp->chgIData(oldp+99,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count),20);
        bufp->chgCData(oldp+100,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+101,(((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                 >> 9U) & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid))));
        bufp->chgBit(oldp+102,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5) 
                                & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_0)))));
        bufp->chgBit(oldp+103,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5) 
                                & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid)) 
                                   & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2) 
                                      == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest))))));
        bufp->chgBit(oldp+104,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_1))));
        bufp->chgBit(oldp+105,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7) 
                                & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2) 
                                   == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest)))));
        bufp->chgBit(oldp+106,(((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                                  & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 9U)) & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid))) 
                                & ((0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                                   & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2) 
                                      | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4))))));
        bufp->chgIData(oldp+107,(((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x25U))))
                                   ? 0U : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                     >> 0x25U)))])),32);
        bufp->chgIData(oldp+108,(((0U == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2))
                                   ? 0U : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                                  [vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2])),32);
        bufp->chgBit(oldp+109,(((~ (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                     | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                        | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w))) 
                                    | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                       | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9) 
                                          | ((0x13U 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                             | ((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                                | ((0x15U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                >> 0x3aU)))) 
                                                   | ((0x16U 
                                                       == 
                                                       (0x3fU 
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
                                   & (((0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x2aU))) 
                                       == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                                      | (((0x1fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x2aU))) 
                                          == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)) 
                                         | ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x2aU))) 
                                            == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest))))))));
        bufp->chgBit(oldp+110,(((~ ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                                    & ((0x16U != (0x3fU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x3aU)))) 
                                       & (0x17U != 
                                          (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU))))))) 
                                & ((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x20U)))) 
                                   & (((0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x20U))) 
                                       == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                                      | (((0x1fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x20U))) 
                                          == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest)) 
                                         | ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x20U))) 
                                            == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest))))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+111,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r1));
        bufp->chgBit(oldp+112,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2));
        bufp->chgBit(oldp+113,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r3));
        bufp->chgIData(oldp+114,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r1),32);
        bufp->chgIData(oldp+115,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r2),32);
        bufp->chgIData(oldp+116,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+117,(vlSelfRef.soc_lite_top__DOT__cpu_resetn));
        bufp->chgBit(oldp+118,(vlSelfRef.soc_lite_top__DOT__cpu_inst_en));
        bufp->chgIData(oldp+119,(vlSelfRef.soc_lite_top__DOT__cpu_inst_addr),32);
        bufp->chgIData(oldp+120,(vlSelfRef.soc_lite_top__DOT__cpu_inst_rdata),32);
        bufp->chgBit(oldp+121,(vlSelfRef.soc_lite_top__DOT__cpu_data_en));
        bufp->chgCData(oldp+122,(((0x20U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                                   ? 0xfU : 0U)),4);
        bufp->chgIData(oldp+123,(vlSelfRef.soc_lite_top__DOT__cpu_data_addr),32);
        bufp->chgIData(oldp+124,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]),32);
        bufp->chgBit(oldp+125,(vlSelfRef.soc_lite_top__DOT__data_sram_en));
        bufp->chgBit(oldp+126,(vlSelfRef.soc_lite_top__DOT__conf_en));
        bufp->chgBit(oldp+127,((0x1faf0000U != (0x1fff0000U 
                                                & vlSelfRef.soc_lite_top__DOT__cpu_data_addr))));
        bufp->chgBit(oldp+128,((0x1faf0000U == (0x1fff0000U 
                                                & vlSelfRef.soc_lite_top__DOT__cpu_data_addr))));
        bufp->chgBit(oldp+129,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset));
        bufp->chgBit(oldp+130,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin));
        bufp->chgBit(oldp+131,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid));
        bufp->chgBit(oldp+132,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ds_to_es_valid));
        bufp->chgQData(oldp+133,((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_inst_rdata)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc)))),64);
        __Vtemp_3[0U] = (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r);
        __Vtemp_3[1U] = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value))));
        __Vtemp_3[2U] = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value))) 
                                 >> 0x20U));
        __Vtemp_3[3U] = (IData)((((QData)((IData)((
                                                   ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                                         << 9U) 
                                                        | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                                           << 8U))) 
                                                    | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                                        << 7U) 
                                                       | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                            & (0x5800000000000ULL 
                                                               == 
                                                               (0xf800000000000ULL 
                                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                           << 6U) 
                                                          | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                              & (0x5000000000000ULL 
                                                                 == 
                                                                 (0xf800000000000ULL 
                                                                  & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                             << 5U)))) 
                                                   | (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                         & (0x4000000000000ULL 
                                                            == 
                                                            (0xf800000000000ULL 
                                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                            & (0x4800000000000ULL 
                                                               == 
                                                               (0xf800000000000ULL 
                                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                              & (0x2800000000000ULL 
                                                                 == 
                                                                 (0xf800000000000ULL 
                                                                  & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                             << 2U))) 
                                                      | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                           & (0x2000000000000ULL 
                                                              == 
                                                              (0xf800000000000ULL 
                                                               & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                            & (0x1000000000000ULL 
                                                               == 
                                                               (0xf800000000000ULL 
                                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))))))) 
                                  << 0x2bU) | (((QData)((IData)(
                                                                (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                                    & (0ULL 
                                                                       == 
                                                                       (0xf800000000000ULL 
                                                                        & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                                   | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                                      | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10))) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                                    | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                                                       | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                                                          | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                                                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                                                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10)))))))) 
                                                   << 0x27U) 
                                                  | (((QData)((IData)(
                                                                      ((0x14U 
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
                                                                             & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we))))))) 
                                                      << 0x26U) 
                                                     | (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            ((0x15U 
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
                                                                                >> 0x20U)))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc)
                                                                               ? 4U
                                                                               : 
                                                                              ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20)
                                                                                ? 
                                                                               ((IData)(
                                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                                >> 0x25U)) 
                                                                                << 0xcU)
                                                                                : 
                                                                               (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                                >> 0x35U))))) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                                >> 0x2aU)))))))))))))));
        __Vtemp_3[4U] = (IData)(((((QData)((IData)(
                                                   (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                                          << 9U) 
                                                         | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                                            << 8U))) 
                                                     | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                                         << 7U) 
                                                        | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                             & (0x5800000000000ULL 
                                                                == 
                                                                (0xf800000000000ULL 
                                                                 & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                            << 6U) 
                                                           | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                               & (0x5000000000000ULL 
                                                                  == 
                                                                  (0xf800000000000ULL 
                                                                   & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                              << 5U)))) 
                                                    | (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                          & (0x4000000000000ULL 
                                                             == 
                                                             (0xf800000000000ULL 
                                                              & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                         << 4U) 
                                                        | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                             & (0x4800000000000ULL 
                                                                == 
                                                                (0xf800000000000ULL 
                                                                 & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                               & (0x2800000000000ULL 
                                                                  == 
                                                                  (0xf800000000000ULL 
                                                                   & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                              << 2U))) 
                                                       | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                            & (0x2000000000000ULL 
                                                               == 
                                                               (0xf800000000000ULL 
                                                                & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                             & (0x1000000000000ULL 
                                                                == 
                                                                (0xf800000000000ULL 
                                                                 & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))))))) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                                     & (0ULL 
                                                                        == 
                                                                        (0xf800000000000ULL 
                                                                         & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                                    | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                                       | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10))) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc))))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                                     | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                                                        | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                                                           | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                                                              | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                                                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10)))))))) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       ((0x14U 
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
                                                                              & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we))))))) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(
                                                                             ((0x15U 
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
                                                                                >> 0x20U)))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc)
                                                                                ? 4U
                                                                                : 
                                                                               ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20)
                                                                                 ? 
                                                                                ((IData)(
                                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                                >> 0x25U)) 
                                                                                << 0xcU)
                                                                                 : 
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                                >> 0x35U))))) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                                >> 0x2aU)))))))))))))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+135,(__Vtemp_3),150);
        __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))));
        __Vtemp_4[1U] = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))) 
                                 >> 0x20U));
        __Vtemp_4[2U] = ((0x40U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 3U)) | ((0x20U 
                                               & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                  >> 1U)) 
                                              | (0x1fU 
                                                 & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
        bufp->chgWData(oldp+140,(__Vtemp_4),71);
        bufp->chgQData(oldp+143,((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
                                   << 0x21U) | (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
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
                                                                    + vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs))))))),34);
        bufp->chgCData(oldp+145,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x25U)))),5);
        bufp->chgCData(oldp+146,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2),5);
        bufp->chgCData(oldp+147,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest),5);
        bufp->chgBit(oldp+148,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id));
        bufp->chgBit(oldp+149,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if));
        bufp->chgBit(oldp+150,(((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
                                & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if))));
        bufp->chgBit(oldp+151,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid));
        bufp->chgCData(oldp+152,((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])),5);
        bufp->chgWData(oldp+153,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r),150);
        bufp->chgSData(oldp+158,((0xfffU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xaU))),12);
        bufp->chgBit(oldp+159,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 9U))));
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 8U))));
        bufp->chgBit(oldp+161,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 7U))));
        bufp->chgBit(oldp+162,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 6U))));
        bufp->chgBit(oldp+163,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 5U))));
        bufp->chgIData(oldp+164,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1),32);
        bufp->chgIData(oldp+168,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2),32);
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+170,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+171,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+172,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+175,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+178,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+179,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+180,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+181,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result),32);
        bufp->chgIData(oldp+182,((1U & (((~ (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 
                                             >> 0x1fU)) 
                                         & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                            >> 0x1fU)) 
                                        | ((~ ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                ^ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2) 
                                               >> 0x1fU)) 
                                           & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
                                              >> 0x1fU))))),32);
        bufp->chgIData(oldp+183,((1U & (~ (IData)((1ULL 
                                                   & (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                       + 
                                                       ((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                        + (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                                      >> 0x20U)))))),32);
        bufp->chgIData(oldp+184,((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                  & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
        bufp->chgIData(oldp+185,((~ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result)),32);
        bufp->chgIData(oldp+186,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result),32);
        bufp->chgIData(oldp+187,((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                  ^ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
        bufp->chgIData(oldp+188,((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                  << (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
        bufp->chgQData(oldp+189,(((((QData)((IData)(
                                                    (- (IData)((IData)(
                                                                       ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                         >> 0x14U) 
                                                                        & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                  >> (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),64);
        bufp->chgIData(oldp+191,((IData)(((((QData)((IData)(
                                                            (- (IData)((IData)(
                                                                               ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x14U) 
                                                                                & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                          >> (0x1fU 
                                              & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)))),32);
        bufp->chgIData(oldp+192,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b),32);
        bufp->chgBit(oldp+193,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin));
        bufp->chgBit(oldp+194,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                  + 
                                                  ((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                   + (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+195,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1) 
                                & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid)) 
                                   & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2)))));
        bufp->chgBit(oldp+196,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1) 
                                & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid)) 
                                   & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4)))));
        bufp->chgBit(oldp+197,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
        bufp->chgQData(oldp+198,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r),64);
        bufp->chgIData(oldp+200,((IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+201,((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)),32);
        bufp->chgSData(oldp+202,((((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                     << 0xbU) | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                                  << 0xaU) 
                                                 | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                                    << 9U))) 
                                   | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                       << 8U) | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                   & (0x5800000000000ULL 
                                                      == 
                                                      (0xf800000000000ULL 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                  << 7U) 
                                                 | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                     & (0x5000000000000ULL 
                                                        == 
                                                        (0xf800000000000ULL 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                    << 6U)))) 
                                  | (((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                        & (0x4000000000000ULL 
                                           == (0xf800000000000ULL 
                                               & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                       << 5U) | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                   & (0x4800000000000ULL 
                                                      == 
                                                      (0xf800000000000ULL 
                                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                     & (0x2800000000000ULL 
                                                        == 
                                                        (0xf800000000000ULL 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                    << 3U))) 
                                     | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                          & (0x2000000000000ULL 
                                             == (0xf800000000000ULL 
                                                 & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                         << 2U) | (
                                                   (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                     & (0x1000000000000ULL 
                                                        == 
                                                        (0xf800000000000ULL 
                                                         & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                                       & (0ULL 
                                                          == 
                                                          (0xf800000000000ULL 
                                                           & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r))) 
                                                      | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                         | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10)))))))),12);
        bufp->chgBit(oldp+203,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc));
        bufp->chgBit(oldp+204,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                   | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                      | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                         | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                            | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10))))))));
        bufp->chgBit(oldp+205,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem));
        bufp->chgBit(oldp+206,((0x15U == (0x3fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))));
        bufp->chgBit(oldp+207,(((0x14U != (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                & ((0x16U != (0x3fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU)))) 
                                   & ((0x17U != (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)))))));
        bufp->chgBit(oldp+208,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we));
        bufp->chgBit(oldp+209,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we))));
        bufp->chgCData(oldp+210,(((0x15U == (0x3fU 
                                             & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))
                                   ? 1U : (0x1fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x20U))))),5);
        bufp->chgBit(oldp+211,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                   | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)))));
        bufp->chgBit(oldp+212,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9))));
        bufp->chgBit(oldp+213,(((0x13U == (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6))));
        bufp->chgBit(oldp+214,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20));
        bufp->chgBit(oldp+215,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26));
        bufp->chgCData(oldp+216,((0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x3aU)))),6);
        bufp->chgCData(oldp+217,((0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                  >> 0x36U)))),4);
        bufp->chgCData(oldp+218,((3U & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x34U)))),2);
        bufp->chgCData(oldp+219,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x2fU)))),5);
        bufp->chgCData(oldp+220,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x20U)))),5);
        bufp->chgCData(oldp+221,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x2aU)))),5);
        bufp->chgSData(oldp+222,((0xfffU & (IData)(
                                                   (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                    >> 0x2aU)))),12);
        bufp->chgIData(oldp+223,((0xfffffU & (IData)(
                                                     (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                      >> 0x25U)))),20);
        bufp->chgSData(oldp+224,((0xffffU & (IData)(
                                                    (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                     >> 0x2aU)))),16);
        bufp->chgIData(oldp+225,(((0x3ff0000U & ((IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x20U)) 
                                                 << 0x10U)) 
                                  | (0xffffU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x2aU))))),26);
        bufp->chgQData(oldp+226,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_31_26_d),64);
        bufp->chgSData(oldp+228,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_25_22_d),16);
        bufp->chgCData(oldp+229,(((((3U == (3U & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x34U)))) 
                                    << 3U) | ((2U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x34U)))) 
                                              << 2U)) 
                                  | (((1U == (3U & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x34U)))) 
                                      << 1U) | (0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x34U))))))),4);
        bufp->chgIData(oldp+230,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_19_15_d),32);
        bufp->chgBit(oldp+231,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0ULL == (0xf800000000000ULL 
                                            & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+232,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x1000000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+233,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x2000000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+234,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x2800000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+235,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x4000000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+236,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x4800000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+237,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x5000000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+238,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                                & (0x5800000000000ULL 
                                   == (0xf800000000000ULL 
                                       & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
        bufp->chgBit(oldp+239,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w));
        bufp->chgBit(oldp+240,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w));
        bufp->chgBit(oldp+241,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w));
        bufp->chgBit(oldp+242,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w));
        bufp->chgBit(oldp+243,((0x13U == (0x3fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))));
        bufp->chgBit(oldp+244,((0x14U == (0x3fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))));
        bufp->chgBit(oldp+245,((0x16U == (0x3fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))));
        bufp->chgBit(oldp+246,((0x17U == (0x3fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))));
        bufp->chgIData(oldp+247,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value),32);
        bufp->chgIData(oldp+248,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value),32);
        bufp->chgIData(oldp+249,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc)
                                   ? 4U : ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20)
                                            ? ((IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x25U)) 
                                               << 0xcU)
                                            : (((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                       >> 0x35U))))) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                             >> 0x2aU))))))),32);
        bufp->chgBit(oldp+250,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd));
        bufp->chgBit(oldp+251,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken));
        bufp->chgIData(oldp+252,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26)
                                   ? ((((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x29U))))) 
                                        << 0x1cU) | 
                                       (0xffc0000U 
                                        & ((IData)(
                                                   (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                    >> 0x20U)) 
                                           << 0x12U))) 
                                      | (0x3fffcU & 
                                         ((IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x2aU)) 
                                          << 2U))) : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs)),32);
        bufp->chgIData(oldp+253,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs),32);
        bufp->chgIData(oldp+254,((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7) 
                                   | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6))
                                   ? ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r) 
                                      + ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26)
                                          ? ((((- (IData)(
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
                                   : (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value 
                                      + vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs))),32);
        bufp->chgBit(oldp+255,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we) 
                                | ((0x14U == (0x3fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU)))) 
                                   | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6)))));
        bufp->chgBit(oldp+256,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20))));
        bufp->chgBit(oldp+257,((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                 | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                    | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w))) 
                                | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                   | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9) 
                                      | ((0x13U == 
                                          (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                            | ((0x15U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                               | ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                               >> 0x3aU)))) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                                  >> 0x3aU)))) 
                                                     | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20)))))))))));
        bufp->chgBit(oldp+258,(((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                                & ((0x16U != (0x3fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU)))) 
                                   & (0x17U != (0x3fU 
                                                & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))))));
        bufp->chgBit(oldp+259,(((~ ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26) 
                                    | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20))) 
                                & ((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x25U)))) 
                                   & (((0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x25U))) 
                                       == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_0) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_1)))))));
        bufp->chgBit(oldp+260,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait));
        bufp->chgCData(oldp+261,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2),5);
        bufp->chgBit(oldp+262,((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)))));
        bufp->chgBit(oldp+263,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin));
        bufp->chgBit(oldp+264,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid));
        bufp->chgIData(oldp+265,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc),32);
        bufp->chgIData(oldp+266,(((IData)(4U) + vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc)),32);
        bufp->chgBit(oldp+267,((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)))));
        bufp->chgSData(oldp+268,((0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                                             >> 2U))),16);
        bufp->chgIData(oldp+269,((0x3ffffU & (vlSelfRef.soc_lite_top__DOT__cpu_inst_addr 
                                              >> 2U))),18);
        bufp->chgBit(oldp+270,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write));
        bufp->chgBit(oldp+271,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8000U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+272,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8010U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+273,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8020U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+274,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8030U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+275,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8040U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+276,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8050U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+277,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8060U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+278,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0x8070U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+279,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin));
        bufp->chgBit(oldp+280,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1));
        bufp->chgBit(oldp+281,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r2));
        bufp->chgIData(oldp+282,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r),32);
        bufp->chgBit(oldp+283,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer));
        bufp->chgBit(oldp+284,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xff00U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+285,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xff30U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+286,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xff40U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgCData(oldp+287,((0xffU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])),8);
        bufp->chgBit(oldp+288,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_uart_valid));
        bufp->chgBit(oldp+289,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xf020U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+290,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xf030U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+291,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xf040U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
        bufp->chgBit(oldp+292,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                                & (0xf050U == (0xffffU 
                                               & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    }
    bufp->chgBit(oldp+293,(vlSelfRef.resetn));
    bufp->chgBit(oldp+294,(vlSelfRef.clk));
    bufp->chgSData(oldp+295,(vlSelfRef.led),16);
    bufp->chgCData(oldp+296,(vlSelfRef.led_rg0),2);
    bufp->chgCData(oldp+297,(vlSelfRef.led_rg1),2);
    bufp->chgCData(oldp+298,(vlSelfRef.num_csn),8);
    bufp->chgCData(oldp+299,(vlSelfRef.num_a_g),7);
    bufp->chgIData(oldp+300,(vlSelfRef.num_data),32);
    bufp->chgCData(oldp+301,(vlSelfRef.switch_1),8);
    bufp->chgCData(oldp+302,(vlSelfRef.btn_key_col),4);
    bufp->chgCData(oldp+303,(vlSelfRef.btn_key_row),4);
    bufp->chgCData(oldp+304,(vlSelfRef.btn_step),2);
    bufp->chgIData(oldp+305,(vlSelfRef.debug_wb_pc),32);
    bufp->chgCData(oldp+306,(vlSelfRef.debug_wb_rf_wen),4);
    bufp->chgCData(oldp+307,(vlSelfRef.debug_wb_rf_wnum),5);
    bufp->chgIData(oldp+308,(vlSelfRef.debug_wb_rf_wdata),32);
    bufp->chgBit(oldp+309,(vlSelfRef.open_trace));
    bufp->chgIData(oldp+310,(vlSelfRef.switch_1),32);
    bufp->chgIData(oldp+311,(((0x8000U & ((IData)(vlSelfRef.switch_1) 
                                          << 8U)) | 
                              ((0x2000U & ((IData)(vlSelfRef.switch_1) 
                                           << 7U)) 
                               | ((0x800U & ((IData)(vlSelfRef.switch_1) 
                                             << 6U)) 
                                  | ((0x200U & ((IData)(vlSelfRef.switch_1) 
                                                << 5U)) 
                                     | ((0x80U & ((IData)(vlSelfRef.switch_1) 
                                                  << 4U)) 
                                        | ((0x20U & 
                                            ((IData)(vlSelfRef.switch_1) 
                                             << 3U)) 
                                           | ((8U & 
                                               ((IData)(vlSelfRef.switch_1) 
                                                << 2U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.switch_1) 
                                                    << 1U)))))))))),32);
    bufp->chgCData(oldp+312,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state),3);
    bufp->chgBit(oldp+313,(((~ (IData)((0xfU == (IData)(vlSelfRef.btn_key_row)))) 
                            & (0U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)))));
    bufp->chgBit(oldp+314,(((7U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                            & (0xfU == (IData)(vlSelfRef.btn_key_row)))));
    bufp->chgSData(oldp+315,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_tmp),16);
    bufp->chgBit(oldp+316,(((~ (IData)(vlSelfRef.btn_step)) 
                            & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r))));
    bufp->chgBit(oldp+317,((1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                                  & (IData)(vlSelfRef.btn_step)))));
    bufp->chgBit(oldp+318,(((~ ((IData)(vlSelfRef.btn_step) 
                                >> 1U)) & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r))));
    bufp->chgBit(oldp+319,(((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r)) 
                            & ((IData)(vlSelfRef.btn_step) 
                               >> 1U))));
}

void Vsoc_lite_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_cleanup\n"); );
    // Init
    Vsoc_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_lite_top___024root*>(voidSelf);
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
