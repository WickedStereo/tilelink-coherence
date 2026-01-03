`timescale 1ns/100ps

module core_stimulus #(
    parameter ADDR_W = 64,
    parameter DATA_W = 64
) (
    input wire clk,
    input wire rst_n,

    // Interface from Test Sequencer
    input  wire                 seq_req_i,
    input  wire                 seq_we_i,
    input  wire [7:0]           seq_be_i,
    input  wire [ADDR_W-1:0]    seq_addr_i,
    input  wire [DATA_W-1:0]    seq_wdata_i,
    input  wire                 seq_amo_i,
    input  wire                 seq_lr_i,
    input  wire                 seq_sc_i,
    input  wire [4:0]           seq_amo_op_i,
    input  wire                 seq_amo_word_i,
    
    output wire                 seq_gnt_o,
    output wire                 seq_rvalid_o,
    output wire [DATA_W-1:0]    seq_rdata_o,

    // Interface to DUT (L1 Cache)
    output wire                 dut_req_o,
    output wire                 dut_we_o,
    output wire [7:0]           dut_be_o,
    output wire [ADDR_W-1:0]    dut_addr_o,
    output wire [DATA_W-1:0]    dut_wdata_o,
    output wire                 dut_amo_o,
    output wire                 dut_lr_o,
    output wire                 dut_sc_o,
    output wire [4:0]           dut_amo_op_o,
    output wire                 dut_amo_word_o,
    
    input  wire                 dut_gnt_i,
    input  wire                 dut_rvalid_i,
    input  wire [DATA_W-1:0]    dut_rdata_i
);

    // Pass-through logic
    // Sequencer -> DUT
    assign dut_req_o      = seq_req_i;
    assign dut_we_o       = seq_we_i;
    assign dut_be_o       = seq_be_i;
    assign dut_addr_o     = seq_addr_i;
    assign dut_wdata_o    = seq_wdata_i;
    assign dut_amo_o      = seq_amo_i;
    assign dut_lr_o       = seq_lr_i;
    assign dut_sc_o       = seq_sc_i;
    assign dut_amo_op_o   = seq_amo_op_i;
    assign dut_amo_word_o = seq_amo_word_i;

    // DUT -> Sequencer
    assign seq_gnt_o      = dut_gnt_i;
    assign seq_rvalid_o   = dut_rvalid_i;
    assign seq_rdata_o    = dut_rdata_i;

endmodule
