// rv64g_l1_dcache_lint_tb.v - Lint/compile check only
`timescale 1ns/1ps
`include "params.vh"

module rv64g_l1_dcache_lint_tb (
    input wire clk,
    input wire rst_n
);

    parameter integer NUM_LANES = 8;
    parameter integer NUM_BANKS = 8;
    
    // Output signals
    wire cpu_gnt, cpu_rvalid;
    wire [63:0] cpu_rdata;
    wire vlsu_ready, vlsu_done;
    wire [NUM_LANES-1:0] vlsu_lane_hit;
    wire tl_a_valid, tl_c_valid;

    rv64g_l1_dcache #(
        .NUM_LANES(NUM_LANES),
        .NUM_BANKS(NUM_BANKS)
    ) dut (
        .clk_i              (clk),
        .rst_ni             (rst_n),
        .invalidate_all_i   (1'b0),
        .req_i              (1'b0),
        .we_i               (1'b0),
        .be_i               (8'b0),
        .addr_i             (64'b0),
        .wdata_i            (64'b0),
        .gnt_o              (cpu_gnt),
        .rvalid_o           (cpu_rvalid),
        .rdata_o            (cpu_rdata),
        .amo_i              (1'b0),
        .lr_i               (1'b0),
        .sc_i               (1'b0),
        .amo_op_i           (5'b0),
        .amo_word_i         (1'b0),
        .vlsu_req_i         (1'b0),
        .vlsu_lane_valid_i  ({NUM_LANES{1'b0}}),
        .vlsu_lane_we_i     ({NUM_LANES{1'b0}}),
        .vlsu_lane_addr_i   ({NUM_LANES*64{1'b0}}),
        .vlsu_lane_wdata_i  ({NUM_LANES*64{1'b0}}),
        .vlsu_lane_be_i     ({NUM_LANES*8{1'b0}}),
        .vlsu_ready_o       (vlsu_ready),
        .vlsu_done_o        (vlsu_done),
        .vlsu_lane_done_o   (),
        .vlsu_lane_hit_o    (vlsu_lane_hit),
        .vlsu_lane_rdata_o  (),
        .tl_a_valid_o       (tl_a_valid),
        .tl_a_ready_i       (1'b1),
        .tl_a_opcode_o      (),
        .tl_a_param_o       (),
        .tl_a_size_o        (),
        .tl_a_source_o      (),
        .tl_a_address_o     (),
        .tl_a_mask_o        (),
        .tl_a_data_o        (),
        .tl_a_corrupt_o     (),
        .tl_b_valid_i       (1'b0),
        .tl_b_ready_o       (),
        .tl_b_opcode_i      (3'd0),
        .tl_b_param_i       (3'd0),
        .tl_b_size_i        (4'd0),
        .tl_b_source_i      (4'd0),
        .tl_b_address_i     (64'd0),
        .tl_b_mask_i        (8'd0),
        .tl_b_data_i        (64'd0),
        .tl_b_corrupt_i     (1'b0),
        .tl_c_valid_o       (tl_c_valid),
        .tl_c_ready_i       (1'b1),
        .tl_c_opcode_o      (),
        .tl_c_param_o       (),
        .tl_c_size_o        (),
        .tl_c_source_o      (),
        .tl_c_address_o     (),
        .tl_c_data_o        (),
        .tl_c_corrupt_o     (),
        .tl_d_valid_i       (1'b0),
        .tl_d_ready_o       (),
        .tl_d_opcode_i      (3'd0),
        .tl_d_param_i       (2'd0),
        .tl_d_size_i        (4'd0),
        .tl_d_source_i      (4'd0),
        .tl_d_sink_i        (4'd0),
        .tl_d_denied_i      (1'b0),
        .tl_d_data_i        (64'd0),
        .tl_d_corrupt_i     (1'b0),
        .tl_e_valid_o       (),
        .tl_e_ready_i       (1'b1),
        .tl_e_sink_o        ()
    );

endmodule
