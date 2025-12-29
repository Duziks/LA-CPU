// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoc_lite_top__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vsoc_lite_top::Vsoc_lite_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsoc_lite_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , led_rg0{vlSymsp->TOP.led_rg0}
    , led_rg1{vlSymsp->TOP.led_rg1}
    , num_csn{vlSymsp->TOP.num_csn}
    , num_a_g{vlSymsp->TOP.num_a_g}
    , switch_1{vlSymsp->TOP.switch_1}
    , btn_key_col{vlSymsp->TOP.btn_key_col}
    , btn_key_row{vlSymsp->TOP.btn_key_row}
    , btn_step{vlSymsp->TOP.btn_step}
    , debug_wb_rf_wen{vlSymsp->TOP.debug_wb_rf_wen}
    , debug_wb_rf_wnum{vlSymsp->TOP.debug_wb_rf_wnum}
    , open_trace{vlSymsp->TOP.open_trace}
    , led{vlSymsp->TOP.led}
    , num_data{vlSymsp->TOP.num_data}
    , debug_wb_pc{vlSymsp->TOP.debug_wb_pc}
    , debug_wb_rf_wdata{vlSymsp->TOP.debug_wb_rf_wdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsoc_lite_top::Vsoc_lite_top(const char* _vcname__)
    : Vsoc_lite_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsoc_lite_top::~Vsoc_lite_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsoc_lite_top___024root___eval_debug_assertions(Vsoc_lite_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoc_lite_top___024root___eval_static(Vsoc_lite_top___024root* vlSelf);
void Vsoc_lite_top___024root___eval_initial(Vsoc_lite_top___024root* vlSelf);
void Vsoc_lite_top___024root___eval_settle(Vsoc_lite_top___024root* vlSelf);
void Vsoc_lite_top___024root___eval(Vsoc_lite_top___024root* vlSelf);

void Vsoc_lite_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoc_lite_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoc_lite_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsoc_lite_top___024root___eval_static(&(vlSymsp->TOP));
        Vsoc_lite_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsoc_lite_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsoc_lite_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsoc_lite_top::eventsPending() { return false; }

uint64_t Vsoc_lite_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsoc_lite_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsoc_lite_top___024root___eval_final(Vsoc_lite_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_lite_top::final() {
    Vsoc_lite_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsoc_lite_top::hierName() const { return vlSymsp->name(); }
const char* Vsoc_lite_top::modelName() const { return "Vsoc_lite_top"; }
unsigned Vsoc_lite_top::threads() const { return 1; }
void Vsoc_lite_top::prepareClone() const { contextp()->prepareClone(); }
void Vsoc_lite_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsoc_lite_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsoc_lite_top___024root__trace_decl_types(VerilatedFst* tracep);

void Vsoc_lite_top___024root__trace_init_top(Vsoc_lite_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsoc_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_lite_top___024root*>(voidSelf);
    Vsoc_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsoc_lite_top___024root__trace_decl_types(tracep);
    Vsoc_lite_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsoc_lite_top___024root__trace_register(Vsoc_lite_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vsoc_lite_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsoc_lite_top::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsoc_lite_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
