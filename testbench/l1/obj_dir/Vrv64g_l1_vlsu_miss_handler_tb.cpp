// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrv64g_l1_vlsu_miss_handler_tb__pch.h"

//============================================================
// Constructors

Vrv64g_l1_vlsu_miss_handler_tb::Vrv64g_l1_vlsu_miss_handler_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrv64g_l1_vlsu_miss_handler_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrv64g_l1_vlsu_miss_handler_tb::Vrv64g_l1_vlsu_miss_handler_tb(const char* _vcname__)
    : Vrv64g_l1_vlsu_miss_handler_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrv64g_l1_vlsu_miss_handler_tb::~Vrv64g_l1_vlsu_miss_handler_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_debug_assertions(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_static(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_settle(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

void Vrv64g_l1_vlsu_miss_handler_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrv64g_l1_vlsu_miss_handler_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_static(&(vlSymsp->TOP));
        Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrv64g_l1_vlsu_miss_handler_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vrv64g_l1_vlsu_miss_handler_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrv64g_l1_vlsu_miss_handler_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_final(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb::final() {
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrv64g_l1_vlsu_miss_handler_tb::hierName() const { return vlSymsp->name(); }
const char* Vrv64g_l1_vlsu_miss_handler_tb::modelName() const { return "Vrv64g_l1_vlsu_miss_handler_tb"; }
unsigned Vrv64g_l1_vlsu_miss_handler_tb::threads() const { return 1; }
void Vrv64g_l1_vlsu_miss_handler_tb::prepareClone() const { contextp()->prepareClone(); }
void Vrv64g_l1_vlsu_miss_handler_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
