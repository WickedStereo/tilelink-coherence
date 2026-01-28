// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv64g_cache_system_tb.h for the primary calling header

#ifndef VERILATED_VRV64G_CACHE_SYSTEM_TB___024ROOT_H_
#define VERILATED_VRV64G_CACHE_SYSTEM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrv64g_cache_system_tb_rv64g_l1_dcache;


class Vrv64g_cache_system_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv64g_cache_system_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vrv64g_cache_system_tb_rv64g_l1_dcache* __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1;
    Vrv64g_cache_system_tb_rv64g_l1_dcache* __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1;
    Vrv64g_cache_system_tb_rv64g_l1_dcache* __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1;
    Vrv64g_cache_system_tb_rv64g_l1_dcache* __PVT__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ rv64g_cache_system_tb__DOT__clk;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__rst_n;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__cpu_req;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__cpu_we;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__mem_a_opcode;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__mem_a_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__mem_a_ready;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__mem_d_opcode;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__mem_d_param;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__mem_d_size;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__mem_d_source;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__mem_d_sink;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__mem_d_denied;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__mem_d_corrupt;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__mem_d_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__mem_d_ready;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__burst_cnt;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__burst_active;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__burst_opcode;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__burst_source;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__burst_size;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready;
        CData/*5:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_a_source;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_b_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_b_ready;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_b_opcode;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_b_param;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_b_dest;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_d_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_d_param;
        CData/*5:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_d_source;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__mask;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__mask;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__mask;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_we;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_way;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_valid;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_valid;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty;
    };
    struct {
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_we;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we;
        CData/*7:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_alloc;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_dealloc;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_set_probes;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack_id;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__array_way_sel;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__mem_req_sent_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_n;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_ack_id;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_n;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_n;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q;
        CData/*5:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_access;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_valid_q;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_sharers_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_valid_q;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_id_q;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_dirty_q;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q;
        CData/*1:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_probe_target;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_needed;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_handled;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d3;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_leaf_victim;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__safe_owner_valid;
        CData/*0:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q;
    };
    struct {
        CData/*5:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__source_q;
        CData/*2:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__type_q;
        CData/*3:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q;
        CData/*1:0*/ __VdfgRegularize_ha466d25c_0_0;
        CData/*2:0*/ __VdfgRegularize_ha466d25c_0_1;
        CData/*1:0*/ __VdfgRegularize_h5e6fa50a_0_0;
        CData/*2:0*/ __VdfgRegularize_h5e6fa50a_0_1;
        CData/*1:0*/ __VdfgRegularize_hd09a38b2_0_0;
        CData/*2:0*/ __VdfgRegularize_hd09a38b2_0_1;
        CData/*0:0*/ __Vdly__rv64g_cache_system_tb__DOT__mem_a_ready;
        CData/*0:0*/ __Vdly__rv64g_cache_system_tb__DOT__mem_d_valid;
        CData/*2:0*/ __Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
        CData/*0:0*/ __Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__arr_word_sel__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__arr_word_sel__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__arr_word_sel__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__arr_word_sel__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__arr_word_sel__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__arr_word_sel__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1;
    };
    struct {
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__arr_word_sel__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*2:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__arr_word_sel__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__gnt_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__rvalid_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__gnt_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__rvalid_o__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink;
        SData/*15:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid;
        SData/*15:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid;
        SData/*15:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty;
        SData/*8:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT____Vlvbound_h36ce5b8a__0;
        SData/*10:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__cpu_be;
        VlWide<8>/*255:0*/ rv64g_cache_system_tb__DOT__cpu_addr;
        VlWide<8>/*255:0*/ rv64g_cache_system_tb__DOT__cpu_wdata;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__i;
        IData/*19:0*/ rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_op_i;
        VlWide<20>/*611:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i;
        VlWide<5>/*152:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o;
        VlWide<19>/*579:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i;
        VlWide<5>/*144:0*/ rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id;
        VlWide<25>/*799:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat;
        VlWide<32>/*1023:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__i;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__i;
        IData/*31:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__b;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__mem_a_address;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__mem_a_data;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__mem_d_data;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__burst_addr;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2_d_data;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_rdata;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_q;
    };
    struct {
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_n;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_data_q;
        QData/*49:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag;
        QData/*49:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag;
        QData/*49:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_tag_q;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__be_mask;
        QData/*63:0*/ rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__addr_q;
        VlUnpacked<QData/*63:0*/, 1024> rv64g_cache_system_tb__DOT__memory;
        VlUnpacked<SData/*14:0*/, 256> rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q;
        VlUnpacked<VlWide<5>/*143:0*/, 256> rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram;
        VlUnpacked<VlUnpacked<QData/*63:0*/, 2048>, 16> rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q;
        VlUnpacked<VlUnpacked<QData/*49:0*/, 256>, 16> rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q;
        VlUnpacked<CData/*0:0*/, 111> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<SData/*14:0*/, 256>, true, SData/*14:0*/, 1> __VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3c4e1133__0;
    VlTriggerScheduler __VtrigSched_ha55c2679__0;
    VlTriggerScheduler __VtrigSched_h15eb0316__0;
    VlTriggerScheduler __VtrigSched_h1e159713__0;
    VlTriggerVec<37> __VstlTriggered;
    VlTriggerVec<43> __VactTriggered;
    VlTriggerVec<43> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrv64g_cache_system_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv64g_cache_system_tb___024root(Vrv64g_cache_system_tb__Syms* symsp, const char* v__name);
    ~Vrv64g_cache_system_tb___024root();
    VL_UNCOPYABLE(Vrv64g_cache_system_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
