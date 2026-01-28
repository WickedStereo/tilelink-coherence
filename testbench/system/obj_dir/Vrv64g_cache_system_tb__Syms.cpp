// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb.h"
#include "Vrv64g_cache_system_tb___024root.h"
#include "Vrv64g_cache_system_tb___024unit.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

// FUNCTIONS
Vrv64g_cache_system_tb__Syms::~Vrv64g_cache_system_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vrv64g_cache_system_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vrv64g_cache_system_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vrv64g_cache_system_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vrv64g_cache_system_tb__Syms::Vrv64g_cache_system_tb__Syms(VerilatedContext* contextp, const char* namep, Vrv64g_cache_system_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1{this, Verilated::catName(namep, "rv64g_cache_system_tb.dut.gen_l1[0].l1")}
    , TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1{this, Verilated::catName(namep, "rv64g_cache_system_tb.dut.gen_l1[1].l1")}
    , TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1{this, Verilated::catName(namep, "rv64g_cache_system_tb.dut.gen_l1[2].l1")}
    , TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1{this, Verilated::catName(namep, "rv64g_cache_system_tb.dut.gen_l1[3].l1")}
{
        // Check resources
        Verilated::stackCheck(3160);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1 = &TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1;
    TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1 = &TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1;
    TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1 = &TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1;
    TOP.__PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1 = &TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.__Vconfigure(true);
    TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.__Vconfigure(false);
    TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.__Vconfigure(false);
    TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.__Vconfigure(false);
}
