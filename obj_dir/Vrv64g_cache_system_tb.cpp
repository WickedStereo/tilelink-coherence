// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrv64g_cache_system_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrv64g_cache_system_tb::Vrv64g_cache_system_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrv64g_cache_system_tb__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , invalidate_all_i{vlSymsp->TOP.invalidate_all_i}
    , index_i{vlSymsp->TOP.index_i}
    , word_sel_i{vlSymsp->TOP.word_sel_i}
    , way_sel_i{vlSymsp->TOP.way_sel_i}
    , write_en_i{vlSymsp->TOP.write_en_i}
    , state_i{vlSymsp->TOP.state_i}
    , be_i{vlSymsp->TOP.be_i}
    , state_selected_o{vlSymsp->TOP.state_selected_o}
    , state_way_flat_o{vlSymsp->TOP.state_way_flat_o}
    , rdata_way_flat_o{vlSymsp->TOP.rdata_way_flat_o}
    , tag_way_flat_o{vlSymsp->TOP.tag_way_flat_o}
    , tag_in_i{vlSymsp->TOP.tag_in_i}
    , wdata_i{vlSymsp->TOP.wdata_i}
    , rdata_selected_o{vlSymsp->TOP.rdata_selected_o}
    , tag_selected_o{vlSymsp->TOP.tag_selected_o}
    , __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1{vlSymsp->TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1}
    , __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1{vlSymsp->TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1}
    , __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1{vlSymsp->TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1}
    , __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1{vlSymsp->TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrv64g_cache_system_tb::Vrv64g_cache_system_tb(const char* _vcname__)
    : Vrv64g_cache_system_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrv64g_cache_system_tb::~Vrv64g_cache_system_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrv64g_cache_system_tb___024root___eval_debug_assertions(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv64g_cache_system_tb___024root___eval_static(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb___024root___eval_initial(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb___024root___eval_settle(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb___024root___eval(Vrv64g_cache_system_tb___024root* vlSelf);

void Vrv64g_cache_system_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrv64g_cache_system_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrv64g_cache_system_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrv64g_cache_system_tb___024root___eval_static(&(vlSymsp->TOP));
        Vrv64g_cache_system_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vrv64g_cache_system_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrv64g_cache_system_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vrv64g_cache_system_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vrv64g_cache_system_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vrv64g_cache_system_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vrv64g_cache_system_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrv64g_cache_system_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrv64g_cache_system_tb___024root___eval_final(Vrv64g_cache_system_tb___024root* vlSelf);

VL_ATTR_COLD void Vrv64g_cache_system_tb::final() {
    Vrv64g_cache_system_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrv64g_cache_system_tb::hierName() const { return vlSymsp->name(); }
const char* Vrv64g_cache_system_tb::modelName() const { return "Vrv64g_cache_system_tb"; }
unsigned Vrv64g_cache_system_tb::threads() const { return 1; }
void Vrv64g_cache_system_tb::prepareClone() const { contextp()->prepareClone(); }
void Vrv64g_cache_system_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrv64g_cache_system_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrv64g_cache_system_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrv64g_cache_system_tb___024root__trace_init_top(Vrv64g_cache_system_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrv64g_cache_system_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv64g_cache_system_tb___024root*>(voidSelf);
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vrv64g_cache_system_tb___024root__trace_decl_types(tracep);
    Vrv64g_cache_system_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root__trace_register(Vrv64g_cache_system_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrv64g_cache_system_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrv64g_cache_system_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrv64g_cache_system_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
