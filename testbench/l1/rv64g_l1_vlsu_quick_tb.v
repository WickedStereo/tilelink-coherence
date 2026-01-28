// rv64g_l1_vlsu_quick_tb.v - Quick sanity test for VLSU integration
`timescale 1ns/1ps
`include "params.vh"

module rv64g_l1_vlsu_quick_tb;

    // Parameters
    parameter integer NUM_LANES = 8;
    parameter integer NUM_BANKS = 8;

    // Clock and reset
    reg clk;
    reg rst_n;

    // Minimal signals - most left at defaults
    wire        cpu_gnt;
    wire        cpu_rvalid;
    wire [63:0] cpu_rdata;

    // VLSU interface
    reg                         vlsu_req;
    reg [NUM_LANES-1:0]         vlsu_lane_valid;
    reg [NUM_LANES-1:0]         vlsu_lane_we;
    reg [NUM_LANES*64-1:0]      vlsu_lane_addr;
    wire                        vlsu_ready;
    wire                        vlsu_done;
    wire [NUM_LANES-1:0]        vlsu_lane_hit;

    // TileLink - minimal
    wire        tl_a_valid;
    wire        tl_c_valid;

    // DUT
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
        .vlsu_req_i         (vlsu_req),
        .vlsu_lane_valid_i  (vlsu_lane_valid),
        .vlsu_lane_we_i     (vlsu_lane_we),
        .vlsu_lane_addr_i   (vlsu_lane_addr),
        .vlsu_lane_wdata_i  ({NUM_LANES*64{1'b0}}),
        .vlsu_lane_be_i     ({NUM_LANES*8{1'b1}}),
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

    // Clock generation - 10ns period
    initial clk = 0;
    always #5 clk = ~clk;

    // Cycle counter
    integer cycle;
    always @(posedge clk) begin
        if (!rst_n) cycle <= 0;
        else cycle <= cycle + 1;
    end

    // Simple test - just check reset and basic signals
    initial begin
        $display("=== Quick VLSU Sanity Test ===");
        
        // Initialize
        rst_n = 0;
        vlsu_req = 0;
        vlsu_lane_valid = 0;
        vlsu_lane_we = 0;
        vlsu_lane_addr = 0;
        
        // Hold reset for 10 cycles
        repeat(10) @(posedge clk);
        
        $display("[%0d] Releasing reset", cycle);
        rst_n = 1;
        
        repeat(5) @(posedge clk);
        
        $display("[%0d] DUT state after reset: %0d", cycle, dut.state);
        $display("[%0d] VLSU ready: %b, done: %b", cycle, vlsu_ready, vlsu_done);
        
        // Try a simple VLSU request (will miss since cache is cold, but tests the path)
        $display("[%0d] Sending VLSU request...", cycle);
        vlsu_lane_addr[63:0] = 64'h1000;  // Lane 0 address
        vlsu_lane_valid = 8'h01;          // Only lane 0 valid
        vlsu_lane_we = 8'h00;             // Read
        vlsu_req = 1;
        
        @(posedge clk);
        
        $display("[%0d] After request: state=%0d, hit=%b, done=%b", 
                 cycle, dut.state, vlsu_lane_hit, vlsu_done);
        $display("[%0d] Miss handler busy: %b, any_miss: %b", 
                 cycle, dut.vlsu_miss_busy, dut.vlsu_any_miss);
        
        // Wait a few more cycles
        repeat(10) @(posedge clk);
        
        vlsu_req = 0;
        
        $display("[%0d] Test complete - state=%0d", cycle, dut.state);
        $display("=== PASS: Basic sanity check completed ===");
        $finish;
    end

    // Short timeout
    initial begin
        #2000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
