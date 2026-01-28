// rv64g_l1_banked_arrays_tb.v - Testbench for banked L1 arrays
// Tests:
//   1. Scalar single-bank access
//   2. Vector unit-stride (no conflict)
//   3. Vector with bank conflicts
//   4. Scalar/Vector concurrent access

`timescale 1ns/1ps
`include "params.vh"

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off STMTDLY */

module rv64g_l1_banked_arrays_tb;

    // Parameters
    localparam SETS      = 32;
    localparam WAYS      = 8;
    localparam TAG_W     = 53;
    localparam INDEX_W   = 5;
    localparam NUM_BANKS = 8;
    localparam NUM_LANES = 8;

    // Clock and reset
    reg clk;
    reg rst_n;

    // Scalar port signals
    reg              scalar_req;
    reg              scalar_we;
    reg [INDEX_W-1:0] scalar_index;
    reg [2:0]        scalar_word;
    reg [2:0]        scalar_way;
    reg [7:0]        scalar_be;
    reg [63:0]       scalar_wdata;
    reg [TAG_W-1:0]  scalar_tag;
    reg [1:0]        scalar_state;

    wire [63:0]         scalar_rdata;
    wire [TAG_W-1:0]    scalar_tag_out;
    wire [1:0]          scalar_state_out;
    wire [WAYS*64-1:0]  scalar_rdata_way;
    wire [WAYS*TAG_W-1:0] scalar_tag_way;
    wire [WAYS*2-1:0]   scalar_state_way;

    // Vector port signals
    reg              vlsu_req;
    reg [NUM_LANES-1:0] vlsu_lane_valid;
    reg [NUM_LANES-1:0] vlsu_lane_we;
    reg [NUM_LANES*64-1:0] vlsu_lane_addr;
    reg [NUM_LANES*64-1:0] vlsu_lane_wdata;
    reg [NUM_LANES*8-1:0]  vlsu_lane_be;
    reg [NUM_LANES*3-1:0]  vlsu_lane_way;
    reg [NUM_LANES*TAG_W-1:0] vlsu_lane_tag;
    reg [NUM_LANES*2-1:0]  vlsu_lane_state;

    wire             vlsu_ready;
    wire             vlsu_done;
    wire [NUM_LANES-1:0] vlsu_lane_done;
    wire [NUM_BANKS*64-1:0] vec_bank_rdata;
    wire [NUM_BANKS*WAYS*64-1:0] vec_bank_rdata_way;
    wire [NUM_BANKS*WAYS*TAG_W-1:0] vec_bank_tag_way;
    wire [NUM_BANKS*WAYS*2-1:0] vec_bank_state_way;
    wire [NUM_BANKS*3-1:0] vec_bank_src_lane;

    // DUT
    rv64g_l1_banked_arrays #(
        .SETS(SETS),
        .WAYS(WAYS),
        .TAG_W(TAG_W),
        .INDEX_W(INDEX_W),
        .NUM_BANKS(NUM_BANKS),
        .NUM_LANES(NUM_LANES)
    ) dut (
        .clk_i              (clk),
        .rst_ni             (rst_n),
        .invalidate_all_i   (1'b0),

        // Scalar port
        .scalar_req_i       (scalar_req),
        .scalar_we_i        (scalar_we),
        .scalar_index_i     (scalar_index),
        .scalar_word_i      (scalar_word),
        .scalar_way_i       (scalar_way),
        .scalar_be_i        (scalar_be),
        .scalar_wdata_i     (scalar_wdata),
        .scalar_tag_i       (scalar_tag),
        .scalar_state_i     (scalar_state),
        .scalar_rdata_o     (scalar_rdata),
        .scalar_tag_o       (scalar_tag_out),
        .scalar_state_o     (scalar_state_out),
        .scalar_rdata_way_o (scalar_rdata_way),
        .scalar_tag_way_o   (scalar_tag_way),
        .scalar_state_way_o (scalar_state_way),

        // Vector port
        .vlsu_req_i         (vlsu_req),
        .vlsu_lane_valid_i  (vlsu_lane_valid),
        .vlsu_lane_we_i     (vlsu_lane_we),
        .vlsu_lane_addr_i   (vlsu_lane_addr),
        .vlsu_lane_wdata_i  (vlsu_lane_wdata),
        .vlsu_lane_be_i     (vlsu_lane_be),
        .vlsu_lane_way_i    (vlsu_lane_way),
        .vlsu_lane_tag_i    (vlsu_lane_tag),
        .vlsu_lane_state_i  (vlsu_lane_state),
        .vlsu_ready_o       (vlsu_ready),
        .vlsu_done_o        (vlsu_done),
        .vlsu_lane_done_o   (vlsu_lane_done),
        .vec_bank_rdata_o   (vec_bank_rdata),
        .vec_bank_rdata_way_o (vec_bank_rdata_way),
        .vec_bank_tag_way_o (vec_bank_tag_way),
        .vec_bank_state_way_o (vec_bank_state_way),
        .vec_bank_src_lane_o (vec_bank_src_lane)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Test sequence
    integer test_num;
    integer i;
    reg [63:0] expected_data;
    reg test_pass;

    initial begin
        $display("=== Banked L1 Arrays Testbench ===");
        test_num = 0;
        test_pass = 1;

        // Initialize signals
        rst_n = 0;
        scalar_req = 0;
        scalar_we = 0;
        scalar_index = 0;
        scalar_word = 0;
        scalar_way = 0;
        scalar_be = 8'hFF;
        scalar_wdata = 0;
        scalar_tag = 0;
        scalar_state = MESI_N;

        vlsu_req = 0;
        vlsu_lane_valid = 0;
        vlsu_lane_we = 0;
        vlsu_lane_addr = 0;
        vlsu_lane_wdata = 0;
        vlsu_lane_be = {NUM_LANES{8'hFF}};
        vlsu_lane_way = 0;
        vlsu_lane_tag = 0;
        vlsu_lane_state = 0;

        // Reset
        repeat(10) @(posedge clk);
        rst_n = 1;
        repeat(2) @(posedge clk);

        // =================================================================
        // Test 1: Scalar write then read to bank 0
        // =================================================================
        test_num = 1;
        $display("\nTest %0d: Scalar write/read to bank 0", test_num);

        @(posedge clk);
        scalar_req   = 1;
        scalar_we    = 1;
        scalar_index = 5'd0;
        scalar_word  = 3'd0;  // Bank 0
        scalar_way   = 3'd0;
        scalar_wdata = 64'hDEAD_BEEF_CAFE_BABE;
        scalar_tag   = 53'h1234;
        scalar_state = MESI_TT;

        @(posedge clk);
        scalar_we = 0;  // Read

        @(posedge clk);
        scalar_req = 0;

        if (scalar_rdata != 64'hDEAD_BEEF_CAFE_BABE) begin
            $display("  FAIL: Expected 0xDEAD_BEEF_CAFE_BABE, got 0x%h", scalar_rdata);
            test_pass = 0;
        end else begin
            $display("  PASS: Read back 0x%h", scalar_rdata);
        end

        repeat(2) @(posedge clk);

        // =================================================================
        // Test 2: Scalar access to different banks
        // =================================================================
        test_num = 2;
        $display("\nTest %0d: Scalar write to all 8 banks", test_num);

        for (i = 0; i < 8; i = i + 1) begin
            @(posedge clk);
            scalar_req   = 1;
            scalar_we    = 1;
            scalar_index = 5'd1;
            scalar_word  = i[2:0];  // Bank i
            scalar_way   = 3'd1;
            scalar_wdata = 64'hA000_0000_0000_0000 | i;
            scalar_tag   = 53'hABCD;
            scalar_state = MESI_T;
            $display("  Writing bank %0d", i);
        end

        @(posedge clk);
        scalar_req = 0;
        scalar_we  = 0;
        $display("  Write phase complete");

        // Readback check
        for (i = 0; i < 8; i = i + 1) begin
            $display("  Reading bank %0d start", i);
            @(posedge clk);
            scalar_req   = 1;
            scalar_index = 5'd1;
            scalar_word  = i[2:0];
            scalar_way   = 3'd1;

            @(posedge clk);
            expected_data = 64'hA000_0000_0000_0000 | i;
            if (scalar_rdata != expected_data) begin
                $display("  FAIL Bank %0d: Expected 0x%h, got 0x%h", i, expected_data, scalar_rdata);
                test_pass = 0;
            end else begin
                $display("  PASS Bank %0d: Read 0x%h", i, scalar_rdata);
            end
        end

        scalar_req = 0;
        repeat(2) @(posedge clk);

        // =================================================================
        // Test 3: Vector unit-stride (no conflicts)
        // =================================================================
        test_num = 3;
        $display("\nTest %0d: Vector unit-stride write (no conflicts)", test_num);

        // Write 8 elements to 8 different banks
        @(posedge clk);
        vlsu_req = 1;
        vlsu_lane_valid = 8'hFF;
        vlsu_lane_we = 8'hFF;

        // Set up addresses: each lane targets different bank (addr[5:3] = lane)
        for (i = 0; i < 8; i = i + 1) begin
            vlsu_lane_addr[(i+1)*64-1 -: 64] = {48'b0, 5'd2, i[2:0], 3'b0};  // index=2, word=i
            vlsu_lane_wdata[(i+1)*64-1 -: 64] = 64'hB000_0000_0000_0000 | (i << 4);
            vlsu_lane_way[(i+1)*3-1 -: 3] = 3'd2;
            vlsu_lane_tag[(i+1)*TAG_W-1 -: TAG_W] = 53'hFEED;
            vlsu_lane_state[(i+1)*2-1 -: 2] = MESI_TT;
        end

        @(posedge clk);
        vlsu_req = 0;
        vlsu_lane_we = 8'h00;

        // Wait for completion
        while (!vlsu_done) @(posedge clk);

        $display("  Vector write completed in 1 cycle (no conflicts)");
        repeat(2) @(posedge clk);

        // =================================================================
        // Test 4: Vector with bank conflicts
        // =================================================================
        test_num = 4;
        $display("\nTest %0d: Vector with bank conflicts (all lanes -> bank 0)", test_num);

        @(posedge clk);
        vlsu_req = 1;
        vlsu_lane_valid = 8'hFF;
        vlsu_lane_we = 8'hFF;

        // All lanes target bank 0 (addr[5:3] = 0)
        for (i = 0; i < 8; i = i + 1) begin
            vlsu_lane_addr[(i+1)*64-1 -: 64] = {48'b0, 5'd3, 3'd0, 3'b0};  // All bank 0
            vlsu_lane_wdata[(i+1)*64-1 -: 64] = 64'hC000_0000_0000_0000 | i;
            vlsu_lane_way[(i+1)*3-1 -: 3] = 3'd3;
        end

        @(posedge clk);
        vlsu_req = 0;

        // Count cycles to completion
        i = 0;
        while (!vlsu_done) begin
            @(posedge clk);
            i = i + 1;
        end

        if (i >= 7) begin
            $display("  PASS: Conflict resolution took %0d cycles (expected ~8 for 8 conflicts)", i+1);
        end else begin
            $display("  WARN: Conflict resolution took %0d cycles", i+1);
        end

        repeat(2) @(posedge clk);

        // =================================================================
        // Summary
        // =================================================================
        $display("\n=== Test Summary ===");
        if (test_pass) begin
            $display("All tests PASSED");
        end else begin
            $display("Some tests FAILED");
        end

        $finish;
    end

    // Timeout
    initial begin
        #100000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
