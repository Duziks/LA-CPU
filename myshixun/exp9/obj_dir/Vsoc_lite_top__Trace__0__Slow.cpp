// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsoc_lite_top__Syms.h"


VL_ATTR_COLD void Vsoc_lite_top___024root__trace_init_sub__TOP__0(Vsoc_lite_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_init_sub__TOP__0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+294,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"led_rg0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+298,0,"led_rg1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"num_csn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+300,0,"num_a_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+301,0,"num_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"btn_key_col",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"btn_key_row",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"btn_step",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+306,0,"debug_wb_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"debug_wb_rf_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"debug_wb_rf_wnum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"debug_wb_rf_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+310,0,"open_trace",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("soc_lite_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+294,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"led_rg0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+298,0,"led_rg1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"num_csn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+300,0,"num_a_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+301,0,"num_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"btn_key_col",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"btn_key_row",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"btn_step",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+306,0,"debug_wb_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"debug_wb_rf_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"debug_wb_rf_wnum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"debug_wb_rf_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+310,0,"open_trace",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"cpu_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"timer_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"cpu_resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"cpu_inst_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"cpu_inst_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"cpu_inst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"cpu_inst_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"cpu_inst_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"cpu_data_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"cpu_data_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"cpu_data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"cpu_data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"cpu_data_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"data_sram_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"data_sram_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"data_sram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"data_sram_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"data_sram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"conf_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"conf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"conf_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"conf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"conf_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bridge_1x2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"cpu_data_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"cpu_data_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"cpu_data_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"cpu_data_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"cpu_data_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"data_sram_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"data_sram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"data_sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"data_sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"data_sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"conf_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"conf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"conf_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"conf_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"conf_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"sel_sram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"sel_conf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"sel_sram_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sel_conf_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"inst_sram_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"inst_sram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"inst_sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"inst_sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"inst_sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"data_sram_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"data_sram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"data_sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"data_sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"debug_wb_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"debug_wb_rf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"debug_wb_rf_wnum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"debug_wb_rf_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ds_allowin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"es_allowin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ms_allowin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ws_allowin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"fs_to_ds_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"ds_to_es_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"es_to_ms_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ms_to_ws_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"fs_to_ds_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+136,0,"ds_to_es_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 149,0);
    tracep->declArray(c+141,0,"es_to_ms_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+8,0,"ms_to_ws_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declQuad(c+11,0,"ws_to_rf_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+144,0,"br_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+146,0,"id_raddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"id_raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"es_to_ds_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"ms_to_ds_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"ws_to_ds_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"es_to_ds_load_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"block_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"block_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"br_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"exe_forward_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"exe_forward_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"exe_forward_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"mem_forward_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"mem_forward_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"mem_forward_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("exe_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"es_to_ds_load_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ms_allowin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"es_allowin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"ds_to_es_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+136,0,"ds_to_es_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 149,0);
    tracep->declBus(c+148,0,"es_to_ds_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+6,0,"es_to_ms_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+141,0,"es_to_ms_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declBit(c+152,0,"exe_forward_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"exe_forward_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"exe_forward_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"data_sram_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"data_sram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"data_sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"data_sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"es_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"es_ready_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+154,0,"ds_to_es_bus_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 149,0);
    tracep->declBus(c+159,0,"es_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+160,0,"es_res_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"es_src1_is_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"es_src2_is_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"es_gr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"es_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"es_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+165,0,"es_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"es_rj_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"es_rkd_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"es_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"es_alu_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"es_alu_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"es_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+168,0,"alu_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"alu_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+170,0,"op_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"op_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"op_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"op_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"op_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"op_nor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"op_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"op_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"op_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"op_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"op_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"op_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"slt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"sltu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"and_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"nor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"or_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"xor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"lui_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"sll_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+190,0,"sr64_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+192,0,"sr_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"adder_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"adder_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"adder_cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"adder_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"adder_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hazard_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"id_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"id_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"id_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"es_to_ds_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"es_to_ds_load_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"es_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"ms_to_ds_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"ms_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"ws_to_ds_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"ws_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"exe_forward_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"mem_forward_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"block_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"block_if",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"br_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"exe_conflict_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"exe_conflict_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"mem_conflict_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"mem_conflict_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"wb_conflict_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"wb_conflict_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("id_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"exe_forward_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"exe_forward_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"exe_forward_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"mem_forward_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"mem_forward_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"mem_forward_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"es_to_ds_load_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"es_allowin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"es_to_ds_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"ms_to_ds_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"ws_to_ds_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"id_raddr1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"id_raddr2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"id_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"fs_to_ds_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"fs_to_ds_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+133,0,"ds_to_es_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+136,0,"ds_to_es_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 149,0);
    tracep->declQuad(c+144,0,"br_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+11,0,"ws_to_rf_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+13,0,"ds_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"ds_ready_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+199,0,"fs_to_ds_bus_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+201,0,"ds_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"ds_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"rf_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"rf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+204,0,"src1_is_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"src2_is_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"res_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"dst_is_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"gr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"src_reg_is_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+212,0,"need_ui5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"need_si12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"need_si16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"need_si20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"need_si26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"src2_is_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"op_31_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+218,0,"op_25_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"op_21_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,0,"op_19_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+221,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"rj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+222,0,"rk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+223,0,"i12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+224,0,"i20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+225,0,"i16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"i26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+227,0,"op_31_26_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+229,0,"op_25_22_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+230,0,"op_21_20_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"op_19_15_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"inst_add_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"inst_sub_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"inst_nor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"inst_addi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"inst_slli_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"inst_srli_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"inst_srai_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"inst_lu12i_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"inst_jirl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"inst_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"inst_bl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"inst_ld_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"inst_st_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"rf_raddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"rf_raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"rf_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rf_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"rj_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"rkd_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"ds_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+251,0,"rj_eq_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"br_offs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"jirl_offs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"br_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+256,0,"inst_no_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"src_no_rj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"src_no_rk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"src_no_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"rj_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rk_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rd_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"no_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ds_allowin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"br_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_dec0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+217,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+227,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dec1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dec2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+230,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dec3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+231,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"actual_raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("if_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ds_allowin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"block_if",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"br_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+144,0,"br_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+132,0,"fs_to_ds_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"fs_to_ds_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+119,0,"inst_sram_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"inst_sram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"inst_sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"inst_sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"inst_sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"fs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"fs_ready_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"fs_allowin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"to_fs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"br_bus_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"br_bus_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"br_bus_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"fs_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"fs_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"seq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+268,0,"pre_if_ready_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ws_allowin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ms_allowin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"es_to_ms_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+141,0,"es_to_ms_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declBus(c+14,0,"ms_to_ds_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"ms_to_ws_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8,0,"ms_to_ws_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+16,0,"mem_forward_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"mem_forward_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"mem_forward_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"ms_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ms_ready_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+54,0,"es_to_ms_bus_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declBit(c+57,0,"ms_res_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ms_gr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ms_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"ms_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"ms_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ms_final_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ws_allowin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"ms_to_ws_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8,0,"ms_to_ws_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBus(c+15,0,"ws_to_ds_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+11,0,"ws_to_rf_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+306,0,"debug_wb_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"debug_wb_rf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"debug_wb_rf_wnum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"debug_wb_rf_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ws_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ws_ready_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"ms_to_ws_bus_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+64,0,"ws_gr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"ws_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"ws_final_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"ws_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"rf_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+309,0,"rf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+125,0,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"douta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sync_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"NUM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+126,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+323,0,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"douta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sync_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"NUM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+322,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_confreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+331,0,"SIMULATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+295,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"timer_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"conf_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"conf_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"conf_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"conf_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"conf_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"led_rg0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+298,0,"led_rg1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"num_csn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+300,0,"num_a_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+301,0,"num_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"btn_key_col",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"btn_key_row",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"btn_step",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+310,0,"open_trace",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"cr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"cr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"cr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"cr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"cr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"cr5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"cr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"cr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"led_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"led_rg0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"led_rg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"switch_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"sw_inter_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"btn_key_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"btn_step_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"confreg_uart_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+79,0,"confreg_uart_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"timer_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"simu_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"io_simu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"virtual_uart_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+84,0,"num_monitor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"conf_rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+271,0,"conf_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"write_cr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"write_cr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"write_cr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"write_cr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"write_cr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"write_cr5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"write_cr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"write_cr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"write_timer_begin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"write_timer_begin_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"write_timer_begin_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"write_timer_begin_r3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"write_timer_end_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"write_timer_end_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"conf_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"conf_wdata_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"conf_wdata_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"timer_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"write_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"write_io_simu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"write_open_trace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"write_num_monitor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"write_uart_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+289,0,"write_uart_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"write_led",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"btn_key_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+313,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+88,0,"key_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"key_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+90,0,"state_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+314,0,"key_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"key_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"key_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"btn_key_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+92,0,"btn_step0_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"btn_step1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"step0_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"step0_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+317,0,"step0_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"step0_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"step0_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"step1_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"step1_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+319,0,"step1_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"step1_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"step1_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"write_led_rg0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"write_led_rg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"write_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+101,0,"scan_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_init_top(Vsoc_lite_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_init_top\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_lite_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vsoc_lite_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsoc_lite_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsoc_lite_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_register(Vsoc_lite_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_register\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsoc_lite_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsoc_lite_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsoc_lite_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsoc_lite_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_const_0_sub_0(Vsoc_lite_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_const_0\n"); );
    // Init
    Vsoc_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_lite_top___024root*>(voidSelf);
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc_lite_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_const_0_sub_0(Vsoc_lite_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_const_0_sub_0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+321,(vlSelfRef.soc_lite_top__DOT__timer_clk));
    bufp->fullCData(oldp+322,(0U),4);
    bufp->fullIData(oldp+323,(0U),32);
    bufp->fullBit(oldp+324,(1U));
    bufp->fullIData(oldp+325,(0x10U),32);
    bufp->fullIData(oldp+326,(0x20U),32);
    bufp->fullIData(oldp+327,(0x10000U),32);
    bufp->fullIData(oldp+328,(4U),32);
    bufp->fullIData(oldp+329,(0x12U),32);
    bufp->fullIData(oldp+330,(0x40000U),32);
    bufp->fullBit(oldp+331,(0U));
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_full_0_sub_0(Vsoc_lite_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_full_0\n"); );
    // Init
    Vsoc_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_lite_top___024root*>(voidSelf);
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc_lite_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_full_0_sub_0(Vsoc_lite_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_lite_top___024root__trace_full_0_sub_0\n"); );
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    bufp->fullIData(oldp+1,((((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r))) 
                              & vlSelfRef.soc_lite_top__DOT__data_sram_rdata) 
                             | ((- (IData)((IData)(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r))) 
                                & vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg))),32);
    bufp->fullIData(oldp+2,(vlSelfRef.soc_lite_top__DOT__data_sram_rdata),32);
    bufp->fullIData(oldp+3,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg),32);
    bufp->fullBit(oldp+4,(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r));
    bufp->fullBit(oldp+5,(vlSelfRef.soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r));
    bufp->fullBit(oldp+6,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    bufp->fullBit(oldp+7,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data)) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data)) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (0x3fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]);
    bufp->fullWData(oldp+8,(__Vtemp_1),70);
    bufp->fullQData(oldp+11,((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we)) 
                               << 0x25U) | (0x1fffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U])))))),38);
    bufp->fullBit(oldp+13,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid));
    bufp->fullCData(oldp+14,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest),5);
    bufp->fullCData(oldp+15,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest),5);
    bufp->fullBit(oldp+16,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid));
    bufp->fullCData(oldp+17,((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])),5);
    bufp->fullIData(oldp+18,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_data),32);
    bufp->fullBit(oldp+19,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
    bufp->fullBit(oldp+20,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we));
    bufp->fullIData(oldp+21,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+53,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid));
    bufp->fullWData(oldp+54,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r),71);
    bufp->fullBit(oldp+57,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                  >> 6U))));
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                  >> 5U))));
    bufp->fullIData(oldp+59,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
    bufp->fullWData(oldp+61,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),70);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                  >> 5U))));
    bufp->fullIData(oldp+65,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr0),32);
    bufp->fullIData(oldp+66,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr1),32);
    bufp->fullIData(oldp+67,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr2),32);
    bufp->fullIData(oldp+68,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr3),32);
    bufp->fullIData(oldp+69,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr4),32);
    bufp->fullIData(oldp+70,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr5),32);
    bufp->fullIData(oldp+71,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr6),32);
    bufp->fullIData(oldp+72,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__cr7),32);
    bufp->fullIData(oldp+73,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_data),32);
    bufp->fullIData(oldp+74,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg0_data),32);
    bufp->fullIData(oldp+75,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__led_rg1_data),32);
    bufp->fullIData(oldp+76,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r),32);
    bufp->fullIData(oldp+77,(((2U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                                     << 1U)) | (1U 
                                                & (~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r))))),32);
    bufp->fullCData(oldp+78,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_data),8);
    bufp->fullBit(oldp+79,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__confreg_uart_valid));
    bufp->fullIData(oldp+80,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r2),32);
    bufp->fullIData(oldp+81,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__simu_flag),32);
    bufp->fullIData(oldp+82,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__io_simu),32);
    bufp->fullCData(oldp+83,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data),8);
    bufp->fullBit(oldp+84,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__num_monitor));
    bufp->fullIData(oldp+85,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer_r1),32);
    bufp->fullSData(oldp+86,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_r),16);
    bufp->fullCData(oldp+87,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state),3);
    bufp->fullBit(oldp+88,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_flag));
    bufp->fullIData(oldp+89,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count),20);
    bufp->fullCData(oldp+90,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state_count),4);
    bufp->fullBit(oldp+91,((1U & (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__key_count 
                                  >> 0x13U))));
    bufp->fullBit(oldp+92,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r));
    bufp->fullBit(oldp+93,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r));
    bufp->fullBit(oldp+94,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_flag));
    bufp->fullIData(oldp+95,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count),20);
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step0_count 
                                  >> 0x13U))));
    bufp->fullBit(oldp+97,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_flag));
    bufp->fullIData(oldp+98,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count),20);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__step1_count 
                                  >> 0x13U))));
    bufp->fullIData(oldp+100,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__count),20);
    bufp->fullCData(oldp+101,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__scan_data),4);
    bufp->fullBit(oldp+102,(((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                              >> 9U) & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid))));
    bufp->fullBit(oldp+103,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5) 
                             & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_0)))));
    bufp->fullBit(oldp+104,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5) 
                             & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid)) 
                                & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2) 
                                   == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest))))));
    bufp->fullBit(oldp+105,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7) 
                             & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_6_1))));
    bufp->fullBit(oldp+106,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7) 
                             & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2) 
                                == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest)))));
    bufp->fullBit(oldp+107,(((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                               & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                  >> 9U)) & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__mem_forward_valid))) 
                             & ((0U != (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest)) 
                                & ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2) 
                                   | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4))))));
    bufp->fullIData(oldp+108,(((0U == (0x1fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x25U))))
                                ? 0U : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                               [(0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                  >> 0x25U)))])),32);
    bufp->fullIData(oldp+109,(((0U == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2))
                                ? 0U : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf
                               [vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2])),32);
    bufp->fullBit(oldp+110,(((~ (((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
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
                                      | ((0x1fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2aU))) 
                                         == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest))))))));
    bufp->fullBit(oldp+111,(((~ ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                                 & ((0x16U != (0x3fU 
                                               & (IData)(
                                                         (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                          >> 0x3aU)))) 
                                    & (0x17U != (0x3fU 
                                                 & (IData)(
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
                                      | ((0x1fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x20U))) 
                                         == (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest))))))));
    bufp->fullBit(oldp+112,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r1));
    bufp->fullBit(oldp+113,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2));
    bufp->fullBit(oldp+114,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r3));
    bufp->fullIData(oldp+115,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r1),32);
    bufp->fullIData(oldp+116,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r2),32);
    bufp->fullIData(oldp+117,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__timer),32);
    bufp->fullBit(oldp+118,(vlSelfRef.soc_lite_top__DOT__cpu_resetn));
    bufp->fullBit(oldp+119,(vlSelfRef.soc_lite_top__DOT__cpu_inst_en));
    bufp->fullIData(oldp+120,(vlSelfRef.soc_lite_top__DOT__cpu_inst_addr),32);
    bufp->fullIData(oldp+121,(vlSelfRef.soc_lite_top__DOT__cpu_inst_rdata),32);
    bufp->fullBit(oldp+122,(vlSelfRef.soc_lite_top__DOT__cpu_data_en));
    bufp->fullCData(oldp+123,(((0x20U & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                                ? 0xfU : 0U)),4);
    bufp->fullIData(oldp+124,(vlSelfRef.soc_lite_top__DOT__cpu_data_addr),32);
    bufp->fullIData(oldp+125,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]),32);
    bufp->fullBit(oldp+126,(vlSelfRef.soc_lite_top__DOT__data_sram_en));
    bufp->fullBit(oldp+127,(vlSelfRef.soc_lite_top__DOT__conf_en));
    bufp->fullBit(oldp+128,((0x1faf0000U != (0x1fff0000U 
                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr))));
    bufp->fullBit(oldp+129,((0x1faf0000U == (0x1fff0000U 
                                             & vlSelfRef.soc_lite_top__DOT__cpu_data_addr))));
    bufp->fullBit(oldp+130,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+131,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin));
    bufp->fullBit(oldp+132,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid));
    bufp->fullBit(oldp+133,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__ds_to_es_valid));
    bufp->fullQData(oldp+134,((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_inst_rdata)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc)))),64);
    __Vtemp_3[0U] = (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r);
    __Vtemp_3[1U] = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value))));
    __Vtemp_3[2U] = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value))) 
                             >> 0x20U));
    __Vtemp_3[3U] = (IData)((((QData)((IData)((((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
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
    __Vtemp_3[4U] = (IData)(((((QData)((IData)((((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
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
    bufp->fullWData(oldp+136,(__Vtemp_3),150);
    __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))));
    __Vtemp_4[1U] = (IData)(((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu_data_addr)) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((0x40U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                               >> 3U)) | ((0x20U & 
                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 1U)) 
                                          | (0x1fU 
                                             & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    bufp->fullWData(oldp+141,(__Vtemp_4),71);
    bufp->fullQData(oldp+144,((((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)) 
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
    bufp->fullCData(oldp+146,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x25U)))),5);
    bufp->fullCData(oldp+147,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_raddr2),5);
    bufp->fullCData(oldp+148,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__es_to_ds_dest),5);
    bufp->fullBit(oldp+149,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id));
    bufp->fullBit(oldp+150,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if));
    bufp->fullBit(oldp+151,(((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__reset)) 
                             & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_if))));
    bufp->fullBit(oldp+152,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid));
    bufp->fullCData(oldp+153,((0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])),5);
    bufp->fullWData(oldp+154,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r),150);
    bufp->fullSData(oldp+159,((0xfffU & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xaU))),12);
    bufp->fullBit(oldp+160,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 9U))));
    bufp->fullBit(oldp+161,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 8U))));
    bufp->fullBit(oldp+162,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 7U))));
    bufp->fullBit(oldp+163,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 6U))));
    bufp->fullBit(oldp+164,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 5U))));
    bufp->fullIData(oldp+165,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1),32);
    bufp->fullIData(oldp+169,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2),32);
    bufp->fullBit(oldp+170,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+171,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+172,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+174,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+176,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+177,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+178,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+179,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+180,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+181,((1U & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+182,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result),32);
    bufp->fullIData(oldp+183,((1U & (((~ (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 
                                          >> 0x1fU)) 
                                      & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                         >> 0x1fU)) 
                                     | ((~ ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                             ^ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2) 
                                            >> 0x1fU)) 
                                        & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
                                           >> 0x1fU))))),32);
    bufp->fullIData(oldp+184,((1U & (~ (IData)((1ULL 
                                                & (((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                    + 
                                                    ((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                                   >> 0x20U)))))),32);
    bufp->fullIData(oldp+185,((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                               & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
    bufp->fullIData(oldp+186,((~ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result)),32);
    bufp->fullIData(oldp+187,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result),32);
    bufp->fullIData(oldp+188,((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                               ^ vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
    bufp->fullIData(oldp+189,((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                               << (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
    bufp->fullQData(oldp+190,(((((QData)((IData)((- (IData)((IData)(
                                                                    ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                      >> 0x14U) 
                                                                     & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                               >> (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),64);
    bufp->fullIData(oldp+192,((IData)(((((QData)((IData)(
                                                         (- (IData)((IData)(
                                                                            ((vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                              >> 0x14U) 
                                                                             & (vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                       >> (0x1fU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)))),32);
    bufp->fullIData(oldp+193,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b),32);
    bufp->fullBit(oldp+194,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin));
    bufp->fullBit(oldp+195,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                    + 
                                                    ((QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+196,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1) 
                             & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid)) 
                                & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2)))));
    bufp->fullBit(oldp+197,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1) 
                             & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_forward_valid)) 
                                & (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4)))));
    bufp->fullBit(oldp+198,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    bufp->fullQData(oldp+199,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r),64);
    bufp->fullIData(oldp+201,((IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+202,((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)),32);
    bufp->fullSData(oldp+203,((((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
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
                                      << 2U) | ((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
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
    bufp->fullBit(oldp+204,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc));
    bufp->fullBit(oldp+205,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                   | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w) 
                                      | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20) 
                                         | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10))))))));
    bufp->fullBit(oldp+206,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem));
    bufp->fullBit(oldp+207,((0x15U == (0x3fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))));
    bufp->fullBit(oldp+208,(((0x14U != (0x3fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU)))) 
                             & ((0x16U != (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                & ((0x17U != (0x3fU 
                                              & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU)))) 
                                   & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)))))));
    bufp->fullBit(oldp+209,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we));
    bufp->fullBit(oldp+210,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6) 
                             | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we))));
    bufp->fullCData(oldp+211,(((0x15U == (0x3fU & (IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x3aU))))
                                ? 1U : (0x1fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x20U))))),5);
    bufp->fullBit(oldp+212,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)))));
    bufp->fullBit(oldp+213,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                             | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9))));
    bufp->fullBit(oldp+214,(((0x13U == (0x3fU & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x3aU)))) 
                             | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6))));
    bufp->fullBit(oldp+215,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20));
    bufp->fullBit(oldp+216,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26));
    bufp->fullCData(oldp+217,((0x3fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x3aU)))),6);
    bufp->fullCData(oldp+218,((0xfU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                               >> 0x36U)))),4);
    bufp->fullCData(oldp+219,((3U & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                             >> 0x34U)))),2);
    bufp->fullCData(oldp+220,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x2fU)))),5);
    bufp->fullCData(oldp+221,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x20U)))),5);
    bufp->fullCData(oldp+222,((0x1fU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                >> 0x2aU)))),5);
    bufp->fullSData(oldp+223,((0xfffU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                 >> 0x2aU)))),12);
    bufp->fullIData(oldp+224,((0xfffffU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                   >> 0x25U)))),20);
    bufp->fullSData(oldp+225,((0xffffU & (IData)((vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                  >> 0x2aU)))),16);
    bufp->fullIData(oldp+226,(((0x3ff0000U & ((IData)(
                                                      (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                       >> 0x20U)) 
                                              << 0x10U)) 
                               | (0xffffU & (IData)(
                                                    (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                     >> 0x2aU))))),26);
    bufp->fullQData(oldp+227,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_31_26_d),64);
    bufp->fullSData(oldp+229,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_25_22_d),16);
    bufp->fullCData(oldp+230,(((((3U == (3U & (IData)(
                                                      (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                       >> 0x34U)))) 
                                 << 3U) | ((2U == (3U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x34U)))) 
                                           << 2U)) 
                               | (((1U == (3U & (IData)(
                                                        (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                         >> 0x34U)))) 
                                   << 1U) | (0U == 
                                             (3U & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x34U))))))),4);
    bufp->fullIData(oldp+231,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_19_15_d),32);
    bufp->fullBit(oldp+232,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0ULL == (0xf800000000000ULL 
                                         & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+233,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x1000000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+234,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x2000000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+235,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x2800000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+236,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x4000000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+237,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x4800000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+238,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x5000000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+239,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13) 
                             & (0x5800000000000ULL 
                                == (0xf800000000000ULL 
                                    & vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r)))));
    bufp->fullBit(oldp+240,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w));
    bufp->fullBit(oldp+241,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w));
    bufp->fullBit(oldp+242,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w));
    bufp->fullBit(oldp+243,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w));
    bufp->fullBit(oldp+244,((0x13U == (0x3fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))));
    bufp->fullBit(oldp+245,((0x14U == (0x3fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))));
    bufp->fullBit(oldp+246,((0x16U == (0x3fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))));
    bufp->fullBit(oldp+247,((0x17U == (0x3fU & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))));
    bufp->fullIData(oldp+248,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value),32);
    bufp->fullIData(oldp+249,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value),32);
    bufp->fullIData(oldp+250,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc)
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
    bufp->fullBit(oldp+251,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd));
    bufp->fullBit(oldp+252,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken));
    bufp->fullIData(oldp+253,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26)
                                ? ((((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x29U))))) 
                                     << 0x1cU) | (0xffc0000U 
                                                  & ((IData)(
                                                             (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                              >> 0x20U)) 
                                                     << 0x12U))) 
                                   | (0x3fffcU & ((IData)(
                                                          (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                           >> 0x2aU)) 
                                                  << 2U)))
                                : vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs)),32);
    bufp->fullIData(oldp+254,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs),32);
    bufp->fullIData(oldp+255,((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7) 
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
    bufp->fullBit(oldp+256,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we) 
                             | ((0x14U == (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6)))));
    bufp->fullBit(oldp+257,(((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26) 
                             | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20))));
    bufp->fullBit(oldp+258,((((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                              | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w) 
                                 | (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w))) 
                             | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                | ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9) 
                                   | ((0x13U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                      | ((0x14U == 
                                          (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                         | ((0x15U 
                                             == (0x3fU 
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
    bufp->fullBit(oldp+259,(((~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we)) 
                             & ((0x16U != (0x3fU & (IData)(
                                                           (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                            >> 0x3aU)))) 
                                & (0x17U != (0x3fU 
                                             & (IData)(
                                                       (vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r 
                                                        >> 0x3aU))))))));
    bufp->fullBit(oldp+260,(((~ ((IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26) 
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
    bufp->fullBit(oldp+261,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait));
    bufp->fullCData(oldp+262,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2),5);
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken)))));
    bufp->fullBit(oldp+264,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin));
    bufp->fullBit(oldp+265,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid));
    bufp->fullIData(oldp+266,(vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc),32);
    bufp->fullIData(oldp+267,(((IData)(4U) + vlSelfRef.soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc)),32);
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelfRef.soc_lite_top__DOT__cpu__DOT__block_id)))));
    bufp->fullSData(oldp+269,((0xffffU & (vlSelfRef.soc_lite_top__DOT__cpu_data_addr 
                                          >> 2U))),16);
    bufp->fullIData(oldp+270,((0x3ffffU & (vlSelfRef.soc_lite_top__DOT__cpu_inst_addr 
                                           >> 2U))),18);
    bufp->fullBit(oldp+271,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write));
    bufp->fullBit(oldp+272,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8000U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+273,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8010U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+274,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8020U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+275,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8030U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+276,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8040U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+277,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8050U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+278,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8060U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+279,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0x8070U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+280,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_begin));
    bufp->fullBit(oldp+281,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1));
    bufp->fullBit(oldp+282,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r2));
    bufp->fullIData(oldp+283,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r),32);
    bufp->fullBit(oldp+284,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_timer));
    bufp->fullBit(oldp+285,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xff00U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+286,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xff30U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+287,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xff40U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullCData(oldp+288,((0xffU & vlSelfRef.soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])),8);
    bufp->fullBit(oldp+289,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__write_uart_valid));
    bufp->fullBit(oldp+290,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xf020U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+291,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xf030U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+292,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xf040U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+293,(((IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__conf_write) 
                             & (0xf050U == (0xffffU 
                                            & vlSelfRef.soc_lite_top__DOT__cpu_data_addr)))));
    bufp->fullBit(oldp+294,(vlSelfRef.resetn));
    bufp->fullBit(oldp+295,(vlSelfRef.clk));
    bufp->fullSData(oldp+296,(vlSelfRef.led),16);
    bufp->fullCData(oldp+297,(vlSelfRef.led_rg0),2);
    bufp->fullCData(oldp+298,(vlSelfRef.led_rg1),2);
    bufp->fullCData(oldp+299,(vlSelfRef.num_csn),8);
    bufp->fullCData(oldp+300,(vlSelfRef.num_a_g),7);
    bufp->fullIData(oldp+301,(vlSelfRef.num_data),32);
    bufp->fullCData(oldp+302,(vlSelfRef.switch_1),8);
    bufp->fullCData(oldp+303,(vlSelfRef.btn_key_col),4);
    bufp->fullCData(oldp+304,(vlSelfRef.btn_key_row),4);
    bufp->fullCData(oldp+305,(vlSelfRef.btn_step),2);
    bufp->fullIData(oldp+306,(vlSelfRef.debug_wb_pc),32);
    bufp->fullCData(oldp+307,(vlSelfRef.debug_wb_rf_wen),4);
    bufp->fullCData(oldp+308,(vlSelfRef.debug_wb_rf_wnum),5);
    bufp->fullIData(oldp+309,(vlSelfRef.debug_wb_rf_wdata),32);
    bufp->fullBit(oldp+310,(vlSelfRef.open_trace));
    bufp->fullIData(oldp+311,(vlSelfRef.switch_1),32);
    bufp->fullIData(oldp+312,(((0x8000U & ((IData)(vlSelfRef.switch_1) 
                                           << 8U)) 
                               | ((0x2000U & ((IData)(vlSelfRef.switch_1) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelfRef.switch_1) 
                                                << 6U)) 
                                     | ((0x200U & ((IData)(vlSelfRef.switch_1) 
                                                   << 5U)) 
                                        | ((0x80U & 
                                            ((IData)(vlSelfRef.switch_1) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelfRef.switch_1) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelfRef.switch_1) 
                                                     << 2U)) 
                                                 | (2U 
                                                    & ((IData)(vlSelfRef.switch_1) 
                                                       << 1U)))))))))),32);
    bufp->fullCData(oldp+313,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__next_state),3);
    bufp->fullBit(oldp+314,(((~ (IData)((0xfU == (IData)(vlSelfRef.btn_key_row)))) 
                             & (0U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)))));
    bufp->fullBit(oldp+315,(((7U == (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__state)) 
                             & (0xfU == (IData)(vlSelfRef.btn_key_row)))));
    bufp->fullSData(oldp+316,(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_key_tmp),16);
    bufp->fullBit(oldp+317,(((~ (IData)(vlSelfRef.btn_step)) 
                             & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r))));
    bufp->fullBit(oldp+318,((1U & ((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step0_r)) 
                                   & (IData)(vlSelfRef.btn_step)))));
    bufp->fullBit(oldp+319,(((~ ((IData)(vlSelfRef.btn_step) 
                                 >> 1U)) & (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r))));
    bufp->fullBit(oldp+320,(((~ (IData)(vlSelfRef.soc_lite_top__DOT__u_confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelfRef.btn_step) 
                                >> 1U))));
}
