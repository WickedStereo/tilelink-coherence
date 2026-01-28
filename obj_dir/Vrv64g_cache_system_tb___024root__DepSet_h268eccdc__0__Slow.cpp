// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb___024root.h"

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___eval_final(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_final\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__stl(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrv64g_cache_system_tb___024root___eval_phase__stl(Vrv64g_cache_system_tb___024root* vlSelf);

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___eval_settle(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_settle\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrv64g_cache_system_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/l1/rv64g_l1_arrays.v", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrv64g_cache_system_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__stl(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___dump_triggers__stl\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.arr_word_sel)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.arr_word_sel)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x1000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.arr_word_sel)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x200000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.arr_word_sel)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 33 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 34 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 35 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 36 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___eval_triggers__stl(Vrv64g_cache_system_tb___024root* vlSelf);
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___eval_stl(Vrv64g_cache_system_tb___024root* vlSelf);

VL_ATTR_COLD bool Vrv64g_cache_system_tb___024root___eval_phase__stl(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_phase__stl\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrv64g_cache_system_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vrv64g_cache_system_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__ico(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___dump_triggers__ico\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__act(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___dump_triggers__act\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.arr_word_sel)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.arr_word_sel)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.arr_word_sel)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.arr_word_sel)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(posedge clk_i)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @(negedge rst_ni)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @(posedge rv64g_cache_system_tb.clk)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @(negedge rv64g_cache_system_tb.rst_n)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__nba(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___dump_triggers__nba\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.arr_word_sel)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[0].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.arr_word_sel)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[1].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.arr_word_sel)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[2].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.arr_word_sel)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.arb_bank_index[4:0])\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[1].u_arbiter__bank_index_o)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[2].u_arbiter__bank_index_o)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[3].u_arbiter__bank_index_o)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[4].u_arbiter__bank_index_o)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[5].u_arbiter__bank_index_o)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[6].u_arbiter__bank_index_o)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] rv64g_cache_system_tb.dut.gen_l1[3].l1.u_arrays.__Vcellout__g_bank[7].u_arbiter__bank_index_o)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(posedge clk_i)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @(negedge rst_ni)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @(posedge rv64g_cache_system_tb.clk)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @(negedge rv64g_cache_system_tb.rst_n)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root____Vm_traceActivitySetAll(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root____Vm_traceActivitySetAll\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x7bU)) {
        vlSelfRef.__Vm_traceActivity[__Vilp1] = 1U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___ctor_var_reset(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___ctor_var_reset\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->invalidate_all_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9873507998976085707ull);
    vlSelf->index_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12886947412296178391ull);
    vlSelf->word_sel_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9231113951693929911ull);
    vlSelf->way_sel_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14430716251071622257ull);
    vlSelf->write_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7614150037136080679ull);
    vlSelf->state_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16973847055556203789ull);
    vlSelf->be_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11504187847728164574ull);
    vlSelf->tag_in_i = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 15780810033891383250ull);
    vlSelf->wdata_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5130823727116858121ull);
    vlSelf->rdata_selected_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15432528033020199007ull);
    vlSelf->tag_selected_o = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 8968950615886931243ull);
    vlSelf->state_selected_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1247016497459301857ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->rdata_way_flat_o, __VscopeHash, 15663185665483397573ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->tag_way_flat_o, __VscopeHash, 11658724556711259724ull);
    vlSelf->state_way_flat_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7664726387699831783ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->rv64g_l1_arrays__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13275827546701699491ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->rv64g_l1_arrays__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 1298346979372810936ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->rv64g_l1_arrays__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14729207715208623341ull);
        }
    }
    vlSelf->rv64g_l1_arrays__DOT__line_idx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8144959162309031208ull);
    vlSelf->rv64g_l1_arrays__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14283381560668084433ull);
    vlSelf->rv64g_l1_arrays__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17133938933368109602ull);
    vlSelf->rv64g_l1_arrays__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6615150131061462915ull);
    vlSelf->rv64g_l1_arrays__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4642773005666228955ull);
    vlSelf->rv64g_cache_system_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17946353140411078175ull);
    vlSelf->rv64g_cache_system_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14423225531169227128ull);
    vlSelf->rv64g_cache_system_tb__DOT__cpu_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5983387819032491879ull);
    vlSelf->rv64g_cache_system_tb__DOT__cpu_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1693082151670579780ull);
    vlSelf->rv64g_cache_system_tb__DOT__cpu_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12070385789601976088ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->rv64g_cache_system_tb__DOT__cpu_addr, __VscopeHash, 14202203150582576491ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->rv64g_cache_system_tb__DOT__cpu_wdata, __VscopeHash, 15140008001846258288ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_a_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8470903732708611804ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_a_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2747200167159948888ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_a_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9506183894425363469ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13705306341776124427ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12732048315489764437ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9007724857278888392ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8561666788225918191ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 575049198886673013ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6928385242860488684ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_sink = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1748802814700353520ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_denied = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10868049272639794186ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8449209605589421698ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_corrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9696794534439398420ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14776257748903632993ull);
    vlSelf->rv64g_cache_system_tb__DOT__mem_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4675024523470748320ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->rv64g_cache_system_tb__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12432903070759925781ull);
    }
    vlSelf->rv64g_cache_system_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9640838244071225278ull);
    vlSelf->rv64g_cache_system_tb__DOT__burst_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8504371511530338827ull);
    vlSelf->rv64g_cache_system_tb__DOT__burst_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16717779419933584288ull);
    vlSelf->rv64g_cache_system_tb__DOT__burst_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2610930616514477694ull);
    vlSelf->rv64g_cache_system_tb__DOT__burst_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16207251047799369138ull);
    vlSelf->rv64g_cache_system_tb__DOT__burst_source = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2207476317708365292ull);
    vlSelf->rv64g_cache_system_tb__DOT__burst_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2848803608467710372ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18340466809648251698ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12799762016193237793ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7028619306543051786ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_op_i = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4449983435050327729ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16200330095316760755ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14636225840361289411ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1842461084978468213ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4494311133137793678ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 618592359126509281ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15079847838568243119ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5622589395353900005ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14855538329863554456ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4951633988891544821ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9500777163655150374ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_a_source = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15484891813946228641ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16692389951298200086ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_b_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6681939605123278598ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_b_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14995785571888759828ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_b_param = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1101178270712408381ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1493792855863947783ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_b_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1617139178932802827ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3353775400441830797ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17883743861167130109ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12815051590130153261ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10472152458540207144ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3803749519330701510ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_d_param = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3545755076264173799ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_d_source = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2438075092148244158ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_d_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10122457869582567381ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6209781207881385853ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12356835090946947462ull);
    VL_SCOPED_RAND_RESET_W(612, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i, __VscopeHash, 13012889975063797344ull);
    VL_SCOPED_RAND_RESET_W(153, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o, __VscopeHash, 535174928452527829ull);
    VL_SCOPED_RAND_RESET_W(580, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i, __VscopeHash, 14964867684207675636ull);
    VL_SCOPED_RAND_RESET_W(145, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o, __VscopeHash, 8361467543286697296ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12164261604222875328ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8231126862436506084ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6363023214066313803ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4268002291252050332ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1018386903309248668ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3186263806661279960ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5308940943032371944ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10287367014677321271ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14700559693427688431ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7426542677674114700ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7176513212760380332ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10801325712909145809ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18041102936675096168ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16444998470869088516ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12834525524904454311ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3790032678044642128ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16280385215970397682ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6301432156737419283ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3561269724039879892ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4034220436378354746ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2951539011506365718ull);
    VL_SCOPED_RAND_RESET_W(800, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat, __VscopeHash, 15374799178311950900ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498778773531827933ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15511375559484805524ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15160137944572317466ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5822400563294213865ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 563420280404209271ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11329508727338987419ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2481619483609600778ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9234974481988648964ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat, __VscopeHash, 11742526901973480427ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_alloc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2429491432409364101ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_dealloc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14674360458923727114ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_set_probes = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4406026563862231596ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5298678260472372555ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9238989140599460283ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__array_way_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15344667798377576289ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16171541912780112511ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1473315364824306054ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3533575508289643114ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18254371845252142571ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__mem_req_sent_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6749920778980815374ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14725122478092466710ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13688562101622336672ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_ack_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7484302615194107255ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7126846438027731365ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5475706278453150647ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3330813462296977012ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 492020869544146532ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3202994414333385935ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11796663466156711342ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7845146637987739077ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5209297189227719902ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4162679664825570730ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6177691813778969014ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8340256413683445207ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_data_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10888711580370988658ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2453216039592341077ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12628551444298169748ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6818784701619258625ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2275614109701033835ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12628808005814548190ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2934646805427224468ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15799748569242668123ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2813143001356316232ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9705715845616136149ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4789936894983935899ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17068536773105764428ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3091848632870613664ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6893903030432927582ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3244701257773352769ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17939984679399681162ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1552249522921777507ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2521467532398872690ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4363094635880987856ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18183618700024479294ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_sharers_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7919584063367058534ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10212859494730826120ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_id_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17633792911020716270ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_dirty_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17833396530761369452ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_tag_q = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16207357965189199901ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15623380667332616456ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9687602981096108301ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_probe_target = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14247857026420371495ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9656313773566067116ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15078041351496744800ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_handled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9710593586790188480ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2660073408312298439ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q[__Vi0] = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5395931086372784667ull);
    }
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12513076338014359911ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10646396790895274140ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8516001912005026645ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4667955469866351075ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9752740674294133117ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_leaf_victim = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15322374186344499084ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1815477693979441731ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13253511712191150187ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(144, vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram[__Vi0], __VscopeHash, 7020406706759646566ull);
    }
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__safe_owner_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5669249455035630860ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14441974065269051974ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT____Vlvbound_h36ce5b8a__0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5194460482282581736ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2048; ++__Vi1) {
            vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14184207071649811741ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3768170922815712624ull);
        }
    }
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10306592813039437903ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5747989055732314649ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2334175979561477666ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2163856042748041052ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__addr_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7256006016577554365ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__source_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8470996697568292375ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__type_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14259325197545039629ull);
    vlSelf->rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16263705672229640213ull);
    vlSelf->__VdfgRegularize_h8252e60d_0_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10689478653889530144ull);
    vlSelf->__VdfgRegularize_h8252e60d_0_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8156111806851013445ull);
    vlSelf->__VdfgRegularize_h3ae62448_0_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1119542701421297534ull);
    vlSelf->__VdfgRegularize_h3ae62448_0_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4994682973937602182ull);
    vlSelf->__VdfgRegularize_h4b65663e_0_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6639669884596516802ull);
    vlSelf->__VdfgRegularize_h4b65663e_0_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14512348070571731748ull);
    vlSelf->__Vdly__rv64g_cache_system_tb__DOT__mem_a_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2288640265259852052ull);
    vlSelf->__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14614019375667064940ull);
    vlSelf->__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11717669769157885885ull);
    vlSelf->__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11274769843860421883ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__arr_word_sel__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9630896517211854675ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17686363342861286000ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17404595649423918250ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8297142708217064547ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2907851615075758935ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4791304293104644325ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10502392426491909641ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13352656134070107727ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16154296563159230745ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__arr_word_sel__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16224793881218914348ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17030118135422410979ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7223831860381908698ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17671393183570363713ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 999614468752870019ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15317427229020369205ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6022146134731510894ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7414827809429666748ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2989269599093883697ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__arr_word_sel__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 882613204730950580ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14359829816249365386ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3471448537475159833ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1992749920989049690ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13896755297349246207ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15833931803403666661ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3770987819777184741ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9039109703444522088ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2642269404215586961ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__arr_word_sel__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14366917311474240073ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11963353580255767616ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3807258858186387174ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17962849249822365215ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 671066682449082167ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 809563624383054340ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13505898476702329873ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 547084724153050995ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7336963971532207530ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__arr_word_sel__1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11703895258605756582ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3773347151418621991ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18345995293857218449ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12092042413431623590ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9728777814227976052ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1056779813577193235ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3756774161594062244ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7462557296357088239ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17882906026013405663ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__arr_word_sel__1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3396805601352810516ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9516279465692679824ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13171476857966316478ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18017041831427314139ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17996627669952188582ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18256287205921241449ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16775949810281071221ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2126645247663043286ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3193686814130685508ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__arr_word_sel__1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8809747789062864911ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12752676938184192608ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5983095917610847126ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3362311097120442739ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14327368854406707956ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12602261287004759195ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13069011786941384628ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2893410754061761096ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13804161046241967629ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__arr_word_sel__1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9071871514363887304ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15344197943308767902ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4351035033391109227ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3133002429833630371ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13112225430845656915ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12279307908022658790ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15910441231480954395ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14540092409190312924ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1380214892256612258ull);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2605432789578622122ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2114286984964919947ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4574520555130172694ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__gnt_o__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15189637699827881316ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__rvalid_o__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13606924496228282707ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__gnt_o__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1203405957250199667ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__rvalid_o__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8724575719575104663ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 124; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
