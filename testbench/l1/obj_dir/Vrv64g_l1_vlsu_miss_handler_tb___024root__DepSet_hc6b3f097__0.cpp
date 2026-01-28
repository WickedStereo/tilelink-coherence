// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_l1_vlsu_miss_handler_tb.h for the primary calling header

#include "Vrv64g_l1_vlsu_miss_handler_tb__pch.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb__Syms.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__2(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                             65);
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_triggers__act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_triggers__act\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__clk__0 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n__0 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
