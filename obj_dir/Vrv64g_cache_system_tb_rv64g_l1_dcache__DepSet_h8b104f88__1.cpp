// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x38U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 7U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0x15U));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x30U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 6U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0x12U));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x28U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 5U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0xfU));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x20U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 4U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0xcU));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x18U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 3U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 9U));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x10U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 2U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 6U));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 8U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 1U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 3U));
    }
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__ 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_we__BRA__0__KET__ 
            = (1U & ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
                     & (IData)(vlSelfRef.__PVT__arr_write_en)));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__ 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__ 
            = (0xffU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_we__BRA__0__KET__ 
            = (1U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__ 
            = (7U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r);
    }
}
