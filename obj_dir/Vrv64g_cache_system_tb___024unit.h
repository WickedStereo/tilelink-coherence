// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv64g_cache_system_tb.h for the primary calling header

#ifndef VERILATED_VRV64G_CACHE_SYSTEM_TB___024UNIT_H_
#define VERILATED_VRV64G_CACHE_SYSTEM_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrv64g_cache_system_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv64g_cache_system_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrv64g_cache_system_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv64g_cache_system_tb___024unit(Vrv64g_cache_system_tb__Syms* symsp, const char* v__name);
    ~Vrv64g_cache_system_tb___024unit();
    VL_UNCOPYABLE(Vrv64g_cache_system_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
