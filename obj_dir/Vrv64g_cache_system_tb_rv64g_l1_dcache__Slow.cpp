// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb__Syms.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

void Vrv64g_cache_system_tb_rv64g_l1_dcache___ctor_var_reset(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);

Vrv64g_cache_system_tb_rv64g_l1_dcache::Vrv64g_cache_system_tb_rv64g_l1_dcache(Vrv64g_cache_system_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv64g_cache_system_tb_rv64g_l1_dcache___ctor_var_reset(this);
}

void Vrv64g_cache_system_tb_rv64g_l1_dcache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrv64g_cache_system_tb_rv64g_l1_dcache::~Vrv64g_cache_system_tb_rv64g_l1_dcache() {
}
