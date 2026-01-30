// rv64g_l1_dcache_tb_top.sv - Shared DUT wrapper for cocotb and Verilator
// This module instantiates the L1 DCache and exposes all ports at top level.
// No testbench logic - just port declarations and DUT instantiation.

`timescale 1ns/1ps
`include "params.vh"

module rv64g_l1_dcache_tb_top #(
    parameter integer NUM_LANES = 8,
    parameter integer NUM_BANKS = 8
) (
    input              clk_i,
    input              rst_ni,

    // Maintenance
    input              invalidate_all_i,

    // CPU-side Scalar Port (OBI-style)
    input              req_i,
    input              we_i,
    input       [7:0]  be_i,
    input      [63:0]  addr_i,
    input      [63:0]  wdata_i,
    output             gnt_o,
    output             rvalid_o,
    output     [63:0]  rdata_o,

    // Atomic Operation Signals
    input              amo_i,
    input              lr_i,
    input              sc_i,
    input       [4:0]  amo_op_i,
    input              amo_word_i,

    // Vector LSU Port (VLSU) - 8 lanes
    input                          vlsu_req_i,
    input  [NUM_LANES-1:0]         vlsu_lane_valid_i,
    input  [NUM_LANES-1:0]         vlsu_lane_we_i,
    input  [NUM_LANES*64-1:0]      vlsu_lane_addr_i,
    input  [NUM_LANES*64-1:0]      vlsu_lane_wdata_i,
    input  [NUM_LANES*8-1:0]       vlsu_lane_be_i,
    output                         vlsu_ready_o,
    output                         vlsu_done_o,
    output [NUM_LANES-1:0]         vlsu_lane_done_o,
    output [NUM_LANES-1:0]         vlsu_lane_hit_o,
    output [NUM_LANES*64-1:0]      vlsu_lane_rdata_o,

    // TileLink A Channel (Request)
    output             tl_a_valid_o,
    input              tl_a_ready_i,
    output      [2:0]  tl_a_opcode_o,
    output      [2:0]  tl_a_param_o,
    output      [3:0]  tl_a_size_o,
    output      [3:0]  tl_a_source_o,
    output     [63:0]  tl_a_address_o,
    output      [7:0]  tl_a_mask_o,
    output     [63:0]  tl_a_data_o,
    output             tl_a_corrupt_o,

    // TileLink B Channel (Probe)
    input              tl_b_valid_i,
    output             tl_b_ready_o,
    input       [2:0]  tl_b_opcode_i,
    input       [2:0]  tl_b_param_i,
    input       [3:0]  tl_b_size_i,
    input       [3:0]  tl_b_source_i,
    input      [63:0]  tl_b_address_i,
    input       [7:0]  tl_b_mask_i,
    input      [63:0]  tl_b_data_i,
    input              tl_b_corrupt_i,

    // TileLink C Channel (Release)
    output             tl_c_valid_o,
    input              tl_c_ready_i,
    output      [2:0]  tl_c_opcode_o,
    output      [2:0]  tl_c_param_o,
    output      [3:0]  tl_c_size_o,
    output      [3:0]  tl_c_source_o,
    output     [63:0]  tl_c_address_o,
    output     [63:0]  tl_c_data_o,
    output             tl_c_corrupt_o,

    // TileLink D Channel (Grant)
    input              tl_d_valid_i,
    output             tl_d_ready_o,
    input       [2:0]  tl_d_opcode_i,
    input       [1:0]  tl_d_param_i,
    input       [3:0]  tl_d_size_i,
    input       [3:0]  tl_d_source_i,
    input       [3:0]  tl_d_sink_i,
    input              tl_d_denied_i,
    input      [63:0]  tl_d_data_i,
    input              tl_d_corrupt_i,

    // TileLink E Channel (GrantAck)
    output             tl_e_valid_o,
    input              tl_e_ready_i,
    output      [3:0]  tl_e_sink_o
);

    // Instantiate DUT
    rv64g_l1_dcache #(
        .NUM_LANES(NUM_LANES),
        .NUM_BANKS(NUM_BANKS)
    ) dut (
        .clk_i              (clk_i),
        .rst_ni             (rst_ni),
        .invalidate_all_i   (invalidate_all_i),
        
        // Scalar port
        .req_i              (req_i),
        .we_i               (we_i),
        .be_i               (be_i),
        .addr_i             (addr_i),
        .wdata_i            (wdata_i),
        .gnt_o              (gnt_o),
        .rvalid_o           (rvalid_o),
        .rdata_o            (rdata_o),
        
        // Atomic signals
        .amo_i              (amo_i),
        .lr_i               (lr_i),
        .sc_i               (sc_i),
        .amo_op_i           (amo_op_i),
        .amo_word_i         (amo_word_i),
        
        // VLSU port
        .vlsu_req_i         (vlsu_req_i),
        .vlsu_lane_valid_i  (vlsu_lane_valid_i),
        .vlsu_lane_we_i     (vlsu_lane_we_i),
        .vlsu_lane_addr_i   (vlsu_lane_addr_i),
        .vlsu_lane_wdata_i  (vlsu_lane_wdata_i),
        .vlsu_lane_be_i     (vlsu_lane_be_i),
        .vlsu_ready_o       (vlsu_ready_o),
        .vlsu_done_o        (vlsu_done_o),
        .vlsu_lane_done_o   (vlsu_lane_done_o),
        .vlsu_lane_hit_o    (vlsu_lane_hit_o),
        .vlsu_lane_rdata_o  (vlsu_lane_rdata_o),
        
        // TileLink A
        .tl_a_valid_o       (tl_a_valid_o),
        .tl_a_ready_i       (tl_a_ready_i),
        .tl_a_opcode_o      (tl_a_opcode_o),
        .tl_a_param_o       (tl_a_param_o),
        .tl_a_size_o        (tl_a_size_o),
        .tl_a_source_o      (tl_a_source_o),
        .tl_a_address_o     (tl_a_address_o),
        .tl_a_mask_o        (tl_a_mask_o),
        .tl_a_data_o        (tl_a_data_o),
        .tl_a_corrupt_o     (tl_a_corrupt_o),
        
        // TileLink B
        .tl_b_valid_i       (tl_b_valid_i),
        .tl_b_ready_o       (tl_b_ready_o),
        .tl_b_opcode_i      (tl_b_opcode_i),
        .tl_b_param_i       (tl_b_param_i),
        .tl_b_size_i        (tl_b_size_i),
        .tl_b_source_i      (tl_b_source_i),
        .tl_b_address_i     (tl_b_address_i),
        .tl_b_mask_i        (tl_b_mask_i),
        .tl_b_data_i        (tl_b_data_i),
        .tl_b_corrupt_i     (tl_b_corrupt_i),
        
        // TileLink C
        .tl_c_valid_o       (tl_c_valid_o),
        .tl_c_ready_i       (tl_c_ready_i),
        .tl_c_opcode_o      (tl_c_opcode_o),
        .tl_c_param_o       (tl_c_param_o),
        .tl_c_size_o        (tl_c_size_o),
        .tl_c_source_o      (tl_c_source_o),
        .tl_c_address_o     (tl_c_address_o),
        .tl_c_data_o        (tl_c_data_o),
        .tl_c_corrupt_o     (tl_c_corrupt_o),
        
        // TileLink D
        .tl_d_valid_i       (tl_d_valid_i),
        .tl_d_ready_o       (tl_d_ready_o),
        .tl_d_opcode_i      (tl_d_opcode_i),
        .tl_d_param_i       (tl_d_param_i),
        .tl_d_size_i        (tl_d_size_i),
        .tl_d_source_i      (tl_d_source_i),
        .tl_d_sink_i        (tl_d_sink_i),
        .tl_d_denied_i      (tl_d_denied_i),
        .tl_d_data_i        (tl_d_data_i),
        .tl_d_corrupt_i     (tl_d_corrupt_i),
        
        // TileLink E
        .tl_e_valid_o       (tl_e_valid_o),
        .tl_e_ready_i       (tl_e_ready_i),
        .tl_e_sink_o        (tl_e_sink_o)
    );

    // Dump waveforms for debugging
    initial begin
        if ($test$plusargs("trace")) begin
            $dumpfile("dump.vcd");
            $dumpvars(0, rv64g_l1_dcache_tb_top);
        end
    end

endmodule
