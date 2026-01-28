// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRV64G_CACHE_SYSTEM_TB__SYMS_H_
#define VERILATED_VRV64G_CACHE_SYSTEM_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vrv64g_cache_system_tb.h"

// INCLUDE MODULE CLASSES
#include "Vrv64g_cache_system_tb___024root.h"
#include "Vrv64g_cache_system_tb___024unit.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrv64g_cache_system_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrv64g_cache_system_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrv64g_cache_system_tb___024root TOP;
    Vrv64g_cache_system_tb_rv64g_l1_dcache TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1;
    Vrv64g_cache_system_tb_rv64g_l1_dcache TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1;
    Vrv64g_cache_system_tb_rv64g_l1_dcache TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1;
    Vrv64g_cache_system_tb_rv64g_l1_dcache TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1;

    // CONSTRUCTORS
    Vrv64g_cache_system_tb__Syms(VerilatedContext* contextp, const char* namep, Vrv64g_cache_system_tb* modelp);
    ~Vrv64g_cache_system_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
