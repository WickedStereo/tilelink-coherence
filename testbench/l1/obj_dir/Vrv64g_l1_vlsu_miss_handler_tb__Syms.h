// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRV64G_L1_VLSU_MISS_HANDLER_TB__SYMS_H_
#define VERILATED_VRV64G_L1_VLSU_MISS_HANDLER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrv64g_l1_vlsu_miss_handler_tb.h"

// INCLUDE MODULE CLASSES
#include "Vrv64g_l1_vlsu_miss_handler_tb___024root.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrv64g_l1_vlsu_miss_handler_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrv64g_l1_vlsu_miss_handler_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrv64g_l1_vlsu_miss_handler_tb___024root TOP;

    // CONSTRUCTORS
    Vrv64g_l1_vlsu_miss_handler_tb__Syms(VerilatedContext* contextp, const char* namep, Vrv64g_l1_vlsu_miss_handler_tb* modelp);
    ~Vrv64g_l1_vlsu_miss_handler_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
