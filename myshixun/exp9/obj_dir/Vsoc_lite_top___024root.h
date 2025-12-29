// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_lite_top.h for the primary calling header

#ifndef VERILATED_VSOC_LITE_TOP___024ROOT_H_
#define VERILATED_VSOC_LITE_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vsoc_lite_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_lite_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ soc_lite_top__DOT__timer_clk;
        VL_IN8(resetn,0,0);
        VL_OUT8(led_rg0,1,0);
        VL_OUT8(led_rg1,1,0);
        VL_OUT8(num_csn,7,0);
        VL_OUT8(num_a_g,6,0);
        VL_IN8(switch_1,7,0);
        VL_OUT8(btn_key_col,3,0);
        VL_IN8(btn_key_row,3,0);
        VL_IN8(btn_step,1,0);
        VL_OUT8(debug_wb_rf_wen,3,0);
        VL_OUT8(debug_wb_rf_wnum,4,0);
        VL_OUT8(open_trace,0,0);
        CData/*0:0*/ soc_lite_top__DOT__cpu_resetn;
        CData/*0:0*/ soc_lite_top__DOT__cpu_inst_en;
        CData/*0:0*/ soc_lite_top__DOT__cpu_data_en;
        CData/*0:0*/ soc_lite_top__DOT__data_sram_en;
        CData/*0:0*/ soc_lite_top__DOT__conf_en;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__reset;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__fs_to_ds_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__ds_to_es_valid;
        CData/*4:0*/ soc_lite_top__DOT__cpu__DOT__id_raddr2;
        CData/*4:0*/ soc_lite_top__DOT__cpu__DOT__es_to_ds_dest;
        CData/*4:0*/ soc_lite_top__DOT__cpu__DOT__ms_to_ds_dest;
        CData/*4:0*/ soc_lite_top__DOT__cpu__DOT__ws_to_ds_dest;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__block_id;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__block_if;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__exe_forward_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__mem_forward_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_allowin;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__if_stage__DOT__to_fs_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__if_stage__DOT__br_bus_taken;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_ready_go;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rf_we;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__src1_is_pc;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__res_from_mem;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__mem_we;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si20;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__need_si26;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_addi_w;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_slli_w;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srli_w;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__inst_srai_w;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__no_wait;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__ds_allowin;
        CData/*4:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__unnamedblk1__DOT__actual_raddr2;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_6;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_7;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_9;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_10;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT____VdfgRegularize_hb6476e19_0_13;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__ms_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ws_valid;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_1;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_2;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_4;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_5;
        CData/*0:0*/ soc_lite_top__DOT__cpu__DOT__hazard_u__DOT____VdfgRegularize_hbc39849a_0_7;
    };
    struct {
        CData/*0:0*/ soc_lite_top__DOT__bridge_1x2__DOT__sel_sram_r;
        CData/*0:0*/ soc_lite_top__DOT__bridge_1x2__DOT__sel_conf_r;
        CData/*7:0*/ soc_lite_top__DOT__u_confreg__DOT__confreg_uart_data;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__confreg_uart_valid;
        CData/*7:0*/ soc_lite_top__DOT__u_confreg__DOT__virtual_uart_data;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__num_monitor;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__conf_write;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer_begin;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r1;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r2;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer_begin_r3;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r2;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_timer;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__write_uart_valid;
        CData/*2:0*/ soc_lite_top__DOT__u_confreg__DOT__state;
        CData/*2:0*/ soc_lite_top__DOT__u_confreg__DOT__next_state;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__key_flag;
        CData/*3:0*/ soc_lite_top__DOT__u_confreg__DOT__state_count;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__btn_step0_r;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__btn_step1_r;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__step0_flag;
        CData/*0:0*/ soc_lite_top__DOT__u_confreg__DOT__step1_flag;
        CData/*3:0*/ soc_lite_top__DOT__u_confreg__DOT__scan_data;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_6_0;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_6_1;
        CData/*0:0*/ __Vdly__soc_lite_top__DOT__u_confreg__DOT__write_timer_end_r1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__soc_lite_top__DOT__timer_clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(led,15,0);
        SData/*15:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_25_22_d;
        SData/*15:0*/ soc_lite_top__DOT__u_confreg__DOT__btn_key_r;
        SData/*15:0*/ soc_lite_top__DOT__u_confreg__DOT__btn_key_tmp;
        VL_OUT(num_data,31,0);
        VL_OUT(debug_wb_pc,31,0);
        VL_OUT(debug_wb_rf_wdata,31,0);
        IData/*31:0*/ soc_lite_top__DOT__cpu_inst_addr;
        IData/*31:0*/ soc_lite_top__DOT__cpu_inst_rdata;
        IData/*31:0*/ soc_lite_top__DOT__cpu_data_addr;
        IData/*31:0*/ soc_lite_top__DOT__data_sram_rdata;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__mem_forward_data;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__if_stage__DOT__fs_pc;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_19_15_d;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rj_value;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__rkd_value;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__jirl_offs;
        VlWide<5>/*149:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result;
        IData/*31:0*/ soc_lite_top__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b;
        VlWide<3>/*70:0*/ soc_lite_top__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r;
        VlWide<3>/*69:0*/ soc_lite_top__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr0;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr1;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr2;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr3;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr4;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr5;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr6;
    };
    struct {
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__cr7;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__led_data;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__led_rg0_data;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__led_rg1_data;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__timer_r2;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__simu_flag;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__io_simu;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__conf_rdata_reg;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r1;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__conf_wdata_r2;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__timer_r1;
        IData/*31:0*/ soc_lite_top__DOT__u_confreg__DOT__timer;
        IData/*19:0*/ soc_lite_top__DOT__u_confreg__DOT__key_count;
        IData/*19:0*/ soc_lite_top__DOT__u_confreg__DOT__step0_count;
        IData/*19:0*/ soc_lite_top__DOT__u_confreg__DOT__step1_count;
        IData/*19:0*/ soc_lite_top__DOT__u_confreg__DOT__count;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r;
        QData/*63:0*/ soc_lite_top__DOT__cpu__DOT__id_stage__DOT__op_31_26_d;
        VlUnpacked<IData/*31:0*/, 32> soc_lite_top__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf;
        VlUnpacked<IData/*31:0*/, 262144> soc_lite_top__DOT__inst_ram__DOT__sync_ram__DOT__ram;
        VlUnpacked<IData/*31:0*/, 65536> soc_lite_top__DOT__data_ram__DOT__sync_ram__DOT__ram;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsoc_lite_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoc_lite_top___024root(Vsoc_lite_top__Syms* symsp, const char* v__name);
    ~Vsoc_lite_top___024root();
    VL_UNCOPYABLE(Vsoc_lite_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
