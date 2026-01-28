// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_l1_vlsu_miss_handler_tb.h for the primary calling header

#include "Vrv64g_l1_vlsu_miss_handler_tb__pch.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb__Syms.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb___024root.h"

void Vrv64g_l1_vlsu_miss_handler_tb___024root___ctor_var_reset(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

Vrv64g_l1_vlsu_miss_handler_tb___024root::Vrv64g_l1_vlsu_miss_handler_tb___024root(Vrv64g_l1_vlsu_miss_handler_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv64g_l1_vlsu_miss_handler_tb___024root___ctor_var_reset(this);
}

void Vrv64g_l1_vlsu_miss_handler_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrv64g_l1_vlsu_miss_handler_tb___024root::~Vrv64g_l1_vlsu_miss_handler_tb___024root() {
}
