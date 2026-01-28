// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv64g_l1_vlsu_miss_handler_tb.h for the primary calling header

#ifndef VERILATED_VRV64G_L1_VLSU_MISS_HANDLER_TB___024ROOT_H_
#define VERILATED_VRV64G_L1_VLSU_MISS_HANDLER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrv64g_l1_vlsu_miss_handler_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv64g_l1_vlsu_miss_handler_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__clk;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req;
    CData/*7:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__busy;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay;
    CData/*2:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q;
    CData/*2:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n;
    CData/*7:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_q;
    CData/*3:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q;
    CData/*3:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q;
    CData/*7:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
    CData/*3:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n;
    CData/*3:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n;
    CData/*0:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
    CData/*7:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VlWide<16>/*511:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
    QData/*63:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6;
    QData/*57:0*/ __Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7;
    VlUnpacked<QData/*57:0*/, 8> rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q;
    VlUnpacked<QData/*57:0*/, 8> rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3013e541__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv64g_l1_vlsu_miss_handler_tb___024root(Vrv64g_l1_vlsu_miss_handler_tb__Syms* symsp, const char* v__name);
    ~Vrv64g_l1_vlsu_miss_handler_tb___024root();
    VL_UNCOPYABLE(Vrv64g_l1_vlsu_miss_handler_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
