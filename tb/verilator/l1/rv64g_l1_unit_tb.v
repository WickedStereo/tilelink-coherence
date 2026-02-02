// rv64g_l1_unit_tb.v - Consolidated unit tests for L1 cache components
// Combines: banked_arrays, vlsu_hit_detect, vlsu_miss_handler, sram_bank tests
//
// Test selection via parameter TEST_SELECT:
//   0 = SRAM bank tag/state corruption
//   1 = Banked arrays (scalar/vector access)
//   2 = VLSU hit detection
//   3 = VLSU miss handler
//
`timescale 1ns/1ps
`include "params.vh"

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off STMTDLY */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off BLKSEQ */

module rv64g_l1_unit_tb;

    // Test selection - set via +define+TEST_SELECT=N
`ifndef TEST_SELECT
    `define TEST_SELECT 0
`endif
    localparam TEST_SELECT = `TEST_SELECT;

    // Common parameters
    localparam SETS      = 32;
    localparam WAYS      = 8;
    localparam TAG_W     = 53;
    localparam INDEX_W   = 5;
    localparam NUM_BANKS = 8;
    localparam NUM_LANES = 8;

    // Clock and reset
    reg clk;
    reg rst_n;

    initial clk = 0;
    always #5 clk = ~clk;

    integer test_pass;
    integer test_num;

    // =========================================================================
    // TEST 0: SRAM Bank Tag/State Corruption
    // =========================================================================
    generate if (TEST_SELECT == 0) begin : gen_sram_test

        reg        sram_req;
        reg        sram_we;
        reg        sram_tag_we;
        reg [4:0]  sram_index;
        reg [2:0]  sram_word;
        reg [2:0]  sram_way;
        reg [7:0]  sram_be;
        reg [63:0] sram_wdata;
        reg [52:0] sram_tag_in;
        reg [1:0]  sram_state_in;

        wire [8*64-1:0]  sram_rdata_way;
        wire [8*53-1:0]  sram_tag_way;
        wire [8*2-1:0]   sram_state_way;
        wire [63:0]      sram_rdata_sel;
        wire [52:0]      sram_tag_sel;
        wire [1:0]       sram_state_sel;

        rv64g_l1_sram_bank #(
            .SETS(SETS), .WAYS(WAYS), .TAG_W(TAG_W), .INDEX_W(INDEX_W)
        ) u_sram_bank (
            .clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
            .req_i(sram_req), .we_i(sram_we), .tag_we_i(sram_tag_we),
            .index_i(sram_index), .word_i(sram_word), .way_i(sram_way),
            .be_i(sram_be), .wdata_i(sram_wdata),
            .tag_i(sram_tag_in), .state_i(sram_state_in),
            .rdata_way_o(sram_rdata_way), .tag_way_o(sram_tag_way),
            .state_way_o(sram_state_way), .rdata_sel_o(sram_rdata_sel),
            .tag_sel_o(sram_tag_sel), .state_sel_o(sram_state_sel)
        );

        initial begin
            $display("=== SRAM Bank Tag/State Corruption Test ===");
            test_pass = 1;
            rst_n = 0;
            sram_req = 0; sram_we = 0; sram_tag_we = 0;
            sram_index = 0; sram_word = 0; sram_way = 3'd2;
            sram_be = 8'hFF; sram_wdata = 0;
            sram_tag_in = 0; sram_state_in = MESI_N;

            repeat (5) @(posedge clk);
            rst_n = 1;
            @(posedge clk);

            // Test 1: Initialize tag/state for way 2, index 0
            $display("\nTest 1: Initialize tag/state");
            sram_req = 1; sram_we = 0; sram_tag_we = 1;
            sram_tag_in = 53'h1A5A5_12345;
            sram_state_in = MESI_T;
            @(posedge clk);

            sram_req = 0; sram_tag_we = 0;
            sram_tag_in = 0; sram_state_in = MESI_N;
            @(posedge clk);

            if (sram_tag_sel !== 53'h1A5A5_12345 || sram_state_sel !== MESI_T) begin
                $display("  FAIL: initial tag/state not set");
                test_pass = 0;
            end else begin
                $display("  PASS: tag=0x%h, state=%0d", sram_tag_sel, sram_state_sel);
            end

            // Test 2: Data-only write should NOT corrupt tag/state
            $display("\nTest 2: Data-only write (tag_we=0)");
            sram_req = 1; sram_we = 1; sram_tag_we = 0;
            sram_wdata = 64'hDEAD_BEEF_CAFE_F00D;
            sram_tag_in = 53'h0;      // Left as default
            sram_state_in = MESI_N;   // Left as default
            @(posedge clk);

            sram_req = 0; sram_we = 0;
            @(posedge clk);

            if (sram_tag_sel !== 53'h1A5A5_12345 || sram_state_sel !== MESI_T) begin
                $display("  FAIL: tag/state changed! tag=0x%h state=%0d", sram_tag_sel, sram_state_sel);
                test_pass = 0;
            end else begin
                $display("  PASS: tag/state preserved after data-only write");
            end

            // Test 3: Verify data was written
            $display("\nTest 3: Verify data was written");
            if (sram_rdata_sel !== 64'hDEAD_BEEF_CAFE_F00D) begin
                $display("  FAIL: data mismatch, got 0x%h", sram_rdata_sel);
                test_pass = 0;
            end else begin
                $display("  PASS: data=0x%h", sram_rdata_sel);
            end

            // Summary
            $display("\n=================================");
            if (test_pass) $display("SUCCESS: All SRAM tests passed!");
            else $display("FAILURE: Some SRAM tests failed");
            $display("=================================");
            $finish;
        end

    end endgenerate

    // =========================================================================
    // TEST 1: Banked Arrays (Scalar/Vector Access)
    // =========================================================================
    generate if (TEST_SELECT == 1) begin : gen_banked_test

        reg              scalar_req, scalar_we;
        reg              scalar_tag_we, scalar_tag_broadcast;
        reg [INDEX_W-1:0] scalar_index;
        reg [2:0]        scalar_word, scalar_way;
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

        reg              vlsu_req;
        reg [NUM_LANES-1:0] vlsu_lane_valid, vlsu_lane_we;
        reg [NUM_LANES*64-1:0] vlsu_lane_addr, vlsu_lane_wdata;
        reg [NUM_LANES*8-1:0]  vlsu_lane_be;
        reg [NUM_LANES*3-1:0]  vlsu_lane_way;
        reg [NUM_LANES*TAG_W-1:0] vlsu_lane_tag;
        reg [NUM_LANES*2-1:0]  vlsu_lane_state;

        wire             vlsu_ready, vlsu_done;
        wire [NUM_LANES-1:0] vlsu_lane_done;
        wire [NUM_BANKS*64-1:0] vec_bank_rdata;
        wire [NUM_BANKS*WAYS*64-1:0] vec_bank_rdata_way;
        wire [NUM_BANKS*WAYS*TAG_W-1:0] vec_bank_tag_way;
        wire [NUM_BANKS*WAYS*2-1:0] vec_bank_state_way;
        wire [NUM_BANKS*3-1:0] vec_bank_src_lane;

        rv64g_l1_banked_arrays #(
            .SETS(SETS), .WAYS(WAYS), .TAG_W(TAG_W), .INDEX_W(INDEX_W),
            .NUM_BANKS(NUM_BANKS), .NUM_LANES(NUM_LANES)
        ) u_banked_arrays (
            .clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
            .scalar_req_i(scalar_req), .scalar_we_i(scalar_we),
            .scalar_tag_we_i(scalar_tag_we), .scalar_tag_broadcast_i(scalar_tag_broadcast),
            .scalar_index_i(scalar_index), .scalar_word_i(scalar_word),
            .scalar_way_i(scalar_way), .scalar_be_i(scalar_be),
            .scalar_wdata_i(scalar_wdata), .scalar_tag_i(scalar_tag),
            .scalar_state_i(scalar_state),
            .scalar_rdata_o(scalar_rdata), .scalar_tag_o(scalar_tag_out),
            .scalar_state_o(scalar_state_out), .scalar_rdata_way_o(scalar_rdata_way),
            .scalar_tag_way_o(scalar_tag_way), .scalar_state_way_o(scalar_state_way),
            .vlsu_req_i(vlsu_req), .vlsu_lane_valid_i(vlsu_lane_valid),
            .vlsu_lane_we_i(vlsu_lane_we), .vlsu_lane_addr_i(vlsu_lane_addr),
            .vlsu_lane_wdata_i(vlsu_lane_wdata), .vlsu_lane_be_i(vlsu_lane_be),
            .vlsu_lane_way_i(vlsu_lane_way), .vlsu_lane_tag_i(vlsu_lane_tag),
            .vlsu_lane_state_i(vlsu_lane_state),
            .vlsu_ready_o(vlsu_ready), .vlsu_done_o(vlsu_done),
            .vlsu_lane_done_o(vlsu_lane_done),
            .vec_bank_rdata_o(vec_bank_rdata), .vec_bank_rdata_way_o(vec_bank_rdata_way),
            .vec_bank_tag_way_o(vec_bank_tag_way), .vec_bank_state_way_o(vec_bank_state_way),
            .vec_bank_src_lane_o(vec_bank_src_lane)
        );

        integer i;
        reg [63:0] expected_data;

        initial begin
            $display("=== Banked L1 Arrays Testbench ===");
            test_pass = 1;
            test_num = 0;

            // Initialize
            rst_n = 0;
            scalar_req = 0; scalar_we = 0; scalar_tag_we = 0; scalar_tag_broadcast = 0;
            scalar_index = 0; scalar_word = 0; scalar_way = 0;
            scalar_be = 8'hFF; scalar_wdata = 0;
            scalar_tag = 0; scalar_state = MESI_N;
            vlsu_req = 0; vlsu_lane_valid = 0; vlsu_lane_we = 0;
            vlsu_lane_addr = 0; vlsu_lane_wdata = 0;
            vlsu_lane_be = {NUM_LANES{8'hFF}};
            vlsu_lane_way = 0; vlsu_lane_tag = 0; vlsu_lane_state = 0;

            repeat(10) @(posedge clk);
            rst_n = 1;
            repeat(2) @(posedge clk);

            // Test 1: Scalar write/read bank 0
            test_num = 1;
            $display("\nTest %0d: Scalar write/read to bank 0", test_num);
            @(posedge clk);
            scalar_req = 1; scalar_we = 1; scalar_tag_we = 1;
            scalar_index = 5'd0; scalar_word = 3'd0; scalar_way = 3'd0;
            scalar_wdata = 64'hDEAD_BEEF_CAFE_BABE;
            scalar_tag = 53'h1234; scalar_state = MESI_TT;
            @(posedge clk);
            scalar_we = 0; scalar_tag_we = 0;
            @(posedge clk);
            scalar_req = 0;
            if (scalar_rdata != 64'hDEAD_BEEF_CAFE_BABE) begin
                $display("  FAIL: got 0x%h", scalar_rdata);
                test_pass = 0;
            end else $display("  PASS: read 0x%h", scalar_rdata);

            repeat(2) @(posedge clk);

            // Test 2: Scalar write to all 8 banks
            test_num = 2;
            $display("\nTest %0d: Scalar write to all 8 banks", test_num);
            for (i = 0; i < 8; i = i + 1) begin
                @(posedge clk);
                scalar_req = 1; scalar_we = 1; scalar_tag_we = 1;
                scalar_index = 5'd1; scalar_word = i[2:0]; scalar_way = 3'd1;
                scalar_wdata = 64'hA000_0000_0000_0000 | i;
                scalar_tag = 53'hABCD; scalar_state = MESI_T;
            end
            @(posedge clk);
            scalar_req = 0; scalar_we = 0; scalar_tag_we = 0;

            // Readback
            for (i = 0; i < 8; i = i + 1) begin
                @(posedge clk);
                scalar_req = 1; scalar_index = 5'd1;
                scalar_word = i[2:0]; scalar_way = 3'd1;
                @(posedge clk);
                expected_data = 64'hA000_0000_0000_0000 | i;
                if (scalar_rdata != expected_data) begin
                    $display("  FAIL Bank %0d: got 0x%h", i, scalar_rdata);
                    test_pass = 0;
                end else $display("  PASS Bank %0d", i);
            end
            scalar_req = 0;
            repeat(2) @(posedge clk);

            // Test 3: Vector unit-stride (no conflicts)
            test_num = 3;
            $display("\nTest %0d: Vector unit-stride (no conflicts)", test_num);
            @(posedge clk);
            vlsu_req = 1; vlsu_lane_valid = 8'hFF; vlsu_lane_we = 8'hFF;
            for (i = 0; i < 8; i = i + 1) begin
                vlsu_lane_addr[(i+1)*64-1 -: 64] = {48'b0, 5'd2, i[2:0], 3'b0};
                vlsu_lane_wdata[(i+1)*64-1 -: 64] = 64'hB000_0000_0000_0000 | (i << 4);
                vlsu_lane_way[(i+1)*3-1 -: 3] = 3'd2;
                vlsu_lane_tag[(i+1)*TAG_W-1 -: TAG_W] = 53'hFEED;
                vlsu_lane_state[(i+1)*2-1 -: 2] = MESI_TT;
            end
            @(posedge clk);
            vlsu_req = 0; vlsu_lane_we = 0;
            while (!vlsu_done) @(posedge clk);
            $display("  PASS: Vector write completed");
            repeat(2) @(posedge clk);

            // Test 4: Vector with conflicts (all -> bank 0)
            test_num = 4;
            $display("\nTest %0d: Vector with bank conflicts", test_num);
            @(posedge clk);
            vlsu_req = 1; vlsu_lane_valid = 8'hFF; vlsu_lane_we = 8'hFF;
            for (i = 0; i < 8; i = i + 1) begin
                vlsu_lane_addr[(i+1)*64-1 -: 64] = {48'b0, 5'd3, 3'd0, 3'b0};
                vlsu_lane_wdata[(i+1)*64-1 -: 64] = 64'hC000_0000_0000_0000 | i;
                vlsu_lane_way[(i+1)*3-1 -: 3] = 3'd3;
            end
            @(posedge clk);
            vlsu_req = 0;
            i = 0;
            while (!vlsu_done) begin
                @(posedge clk);
                i = i + 1;
            end
            $display("  PASS: Conflict resolution took %0d cycles", i+1);

            $display("\n=================================");
            if (test_pass) $display("SUCCESS: All banked array tests passed!");
            else $display("FAILURE: Some tests failed");
            $display("=================================");
            $finish;
        end

    end endgenerate

    // =========================================================================
    // TEST 2: VLSU Hit Detection
    // =========================================================================
    generate if (TEST_SELECT == 2) begin : gen_hit_test

        reg [NUM_LANES*64-1:0]       lane_addr;
        reg [NUM_LANES-1:0]          lane_valid;
        reg [NUM_BANKS*WAYS*TAG_W-1:0] bank_tag_way;
        reg [NUM_BANKS*WAYS*2-1:0]   bank_state_way;
        reg [NUM_BANKS*3-1:0]        bank_src_lane;
        reg [NUM_BANKS-1:0]          bank_active;

        wire [NUM_LANES-1:0]         lane_hit;
        wire [NUM_LANES*3-1:0]       lane_hit_way;
        wire [NUM_LANES*2-1:0]       lane_state;
        wire                         any_miss;
        wire [NUM_LANES-1:0]         lane_miss;

        rv64g_l1_vlsu_hit_detect #(
            .NUM_LANES(NUM_LANES), .NUM_BANKS(NUM_BANKS),
            .WAYS(WAYS), .TAG_W(TAG_W), .INDEX_W(INDEX_W)
        ) u_hit_detect (
            .lane_addr_i(lane_addr), .lane_valid_i(lane_valid),
            .bank_tag_way_i(bank_tag_way), .bank_state_way_i(bank_state_way),
            .bank_src_lane_i(bank_src_lane), .bank_active_i(bank_active),
            .lane_hit_o(lane_hit), .lane_hit_way_o(lane_hit_way),
            .lane_state_o(lane_state), .any_miss_o(any_miss), .lane_miss_o(lane_miss)
        );

        // Helper tasks
        task set_bank_way_tag;
            input [2:0] bank;
            input [2:0] way;
            input [TAG_W-1:0] tag;
            input [1:0] state;
            integer idx;
            begin
                idx = bank * WAYS + way;
                bank_tag_way[(idx+1)*TAG_W-1 -: TAG_W] = tag;
                bank_state_way[(idx+1)*2-1 -: 2] = state;
            end
        endtask

        task set_lane_addr_t;
            input [2:0] lane;
            input [63:0] addr;
            begin
                lane_addr[(lane+1)*64-1 -: 64] = addr;
            end
        endtask

        function [TAG_W-1:0] addr_to_tag;
            input [63:0] addr;
            begin
                addr_to_tag = addr[63 : INDEX_W + 6];
            end
        endfunction

        integer i;
        reg [TAG_W-1:0] test_tag;
        reg [2:0] expected_way;

        initial begin
            $display("=== VLSU Hit Detection Testbench ===");
            test_pass = 1;
            test_num = 0;

            rst_n = 0;
            lane_addr = 0; lane_valid = 0;
            bank_tag_way = 0; bank_state_way = 0;
            bank_src_lane = 0; bank_active = 0;

            repeat(10) @(posedge clk);
            rst_n = 1;
            repeat(2) @(posedge clk);

            // Test 1: Single lane miss (empty cache)
            test_num = 1;
            $display("\nTest %0d: Single lane miss (empty)", test_num);
            set_lane_addr_t(0, 64'h1000);
            lane_valid = 8'b0000_0001;
            bank_active = 8'b0000_0001;
            @(posedge clk);
            if (lane_hit[0] != 0 || any_miss != 1) begin
                $display("  FAIL"); test_pass = 0;
            end else $display("  PASS: Lane 0 misses");

            // Test 2: Single lane hit (way 0)
            test_num = 2;
            $display("\nTest %0d: Single lane hit (way 0)", test_num);
            test_tag = addr_to_tag(64'h1000);
            set_bank_way_tag(0, 0, test_tag, MESI_T);
            @(posedge clk);
            if (lane_hit[0] != 1 || lane_hit_way[2:0] != 3'd0 || any_miss != 0) begin
                $display("  FAIL"); test_pass = 0;
            end else $display("  PASS: Lane 0 hits way 0");

            // Test 3: Hit in way 5
            test_num = 3;
            $display("\nTest %0d: Hit in way 5", test_num);
            set_bank_way_tag(0, 0, 0, MESI_N);
            set_bank_way_tag(0, 5, test_tag, MESI_B);
            @(posedge clk);
            if (lane_hit[0] != 1 || lane_hit_way[2:0] != 3'd5) begin
                $display("  FAIL"); test_pass = 0;
            end else $display("  PASS: Lane 0 hits way 5");

            // Test 4: 8 lanes all hit different banks
            test_num = 4;
            $display("\nTest %0d: 8 lanes hit different banks", test_num);
            bank_tag_way = 0; bank_state_way = 0;
            for (i = 0; i < 8; i = i + 1) begin
                set_lane_addr_t(i[2:0], 64'h2000 + i*8);
                test_tag = addr_to_tag(64'h2000 + i*8);
                set_bank_way_tag(i[2:0], i[2:0], test_tag, MESI_TT);
            end
            lane_valid = 8'hFF; bank_active = 8'hFF;
            @(posedge clk);
            if (lane_hit != 8'hFF || any_miss != 0) begin
                $display("  FAIL: hit=%b", lane_hit); test_pass = 0;
            end else $display("  PASS: All 8 lanes hit");

            // Test 5: Mixed hit/miss
            test_num = 5;
            $display("\nTest %0d: Mixed hit/miss", test_num);
            bank_tag_way = 0; bank_state_way = 0;
            for (i = 0; i < 8; i = i + 2) begin
                set_lane_addr_t(i[2:0], 64'h3000 + i*8);
                test_tag = addr_to_tag(64'h3000 + i*8);
                set_bank_way_tag(i[2:0], 3'd0, test_tag, MESI_T);
            end
            for (i = 1; i < 8; i = i + 2) begin
                set_lane_addr_t(i[2:0], 64'h4000 + i*8);
            end
            lane_valid = 8'hFF; bank_active = 8'hFF;
            @(posedge clk);
            if (lane_hit != 8'b0101_0101 || lane_miss != 8'b1010_1010) begin
                $display("  FAIL: hit=%b miss=%b", lane_hit, lane_miss);
                test_pass = 0;
            end else $display("  PASS: Hit/miss pattern correct");

            $display("\n=================================");
            if (test_pass) $display("SUCCESS: All hit detect tests passed!");
            else $display("FAILURE: Some tests failed");
            $display("=================================");
            $finish;
        end

    end endgenerate

    // =========================================================================
    // TEST 3: VLSU Miss Handler
    // =========================================================================
    generate if (TEST_SELECT == 3) begin : gen_miss_test

        localparam MAX_MISSES = 8;

        reg                      vlsu_req;
        reg [NUM_LANES-1:0]      lane_miss;
        reg [NUM_LANES*64-1:0]   lane_addr;
        reg                      any_miss;
        reg                      refill_done;

        wire                     refill_req;
        wire [63:0]              refill_addr;
        wire                     busy;
        wire                     ready_for_replay;
        wire [3:0]               miss_count;

        rv64g_l1_vlsu_miss_handler #(
            .NUM_LANES(NUM_LANES), .TAG_W(TAG_W), .INDEX_W(INDEX_W), .MAX_MISSES(MAX_MISSES)
        ) u_miss_handler (
            .clk_i(clk), .rst_ni(rst_n),
            .vlsu_req_i(vlsu_req), .lane_miss_i(lane_miss),
            .lane_addr_i(lane_addr), .any_miss_i(any_miss),
            .refill_req_o(refill_req), .refill_addr_o(refill_addr),
            .refill_done_i(refill_done), .busy_o(busy),
            .ready_for_replay_o(ready_for_replay), .miss_count_o(miss_count)
        );

        task set_lane_addr_t;
            input [2:0] lane;
            input [63:0] addr;
            begin
                lane_addr[(lane+1)*64-1 -: 64] = addr;
            end
        endtask

        integer i, refill_count;

        initial begin
            $display("=== VLSU Miss Handler Testbench ===");
            test_pass = 1;
            test_num = 0;

            rst_n = 0;
            vlsu_req = 0; lane_miss = 0; lane_addr = 0;
            any_miss = 0; refill_done = 0;

            repeat(10) @(posedge clk);
            rst_n = 1;
            repeat(2) @(posedge clk);

            // Test 1: Single miss
            test_num = 1;
            $display("\nTest %0d: Single miss handling", test_num);
            set_lane_addr_t(0, 64'h1000);
            lane_miss = 8'b0000_0001; any_miss = 1; vlsu_req = 1;
            @(posedge clk);
            while (!busy) @(posedge clk);
            while (!refill_req) @(posedge clk);
            $display("  Refill request for 0x%h", refill_addr);
            if (refill_addr != 64'h1000) begin
                $display("  FAIL: wrong address"); test_pass = 0;
            end
            @(posedge clk);
            refill_done = 1; @(posedge clk); refill_done = 0;
            while (!ready_for_replay) @(posedge clk);
            vlsu_req = 0; lane_miss = 0; any_miss = 0;
            @(posedge clk);
            while (busy) @(posedge clk);
            if (miss_count != 1) begin
                $display("  FAIL: miss_count=%d", miss_count); test_pass = 0;
            end else $display("  PASS: Single miss handled");
            repeat(5) @(posedge clk);

            // Test 2: Multiple unique misses (3 lines)
            test_num = 2;
            $display("\nTest %0d: Multiple unique misses", test_num);
            set_lane_addr_t(0, 64'h2000);
            set_lane_addr_t(1, 64'h2008);  // Same line
            set_lane_addr_t(2, 64'h3000);
            set_lane_addr_t(3, 64'h3018);  // Same line
            set_lane_addr_t(4, 64'h4000);
            set_lane_addr_t(5, 64'h4020);  // Same line
            set_lane_addr_t(6, 64'h4030);
            set_lane_addr_t(7, 64'h4038);
            lane_miss = 8'hFF; any_miss = 1; vlsu_req = 1;
            @(posedge clk);
            while (!busy) @(posedge clk);
            refill_count = 0;
            forever begin
                @(posedge clk);
                if (ready_for_replay) break;
                if (refill_req) begin
                    $display("  Refill %0d: 0x%h", refill_count, refill_addr);
                    refill_count = refill_count + 1;
                end
                if (u_miss_handler.state_q == 3 && !refill_done)
                    refill_done = 1;
                else
                    refill_done = 0;
            end
            if (refill_count != 3) begin
                $display("  FAIL: expected 3, got %d", refill_count); test_pass = 0;
            end else $display("  PASS: 3 unique lines detected");
            vlsu_req = 0; lane_miss = 0; any_miss = 0;
            repeat(5) @(posedge clk);

            // Test 3: All lanes same line (deduplication)
            test_num = 3;
            $display("\nTest %0d: Deduplication (all same line)", test_num);
            for (i = 0; i < 8; i = i + 1)
                set_lane_addr_t(i[2:0], 64'h5000 + i*8);
            lane_miss = 8'hFF; any_miss = 1; vlsu_req = 1;
            @(posedge clk);
            while (!busy) @(posedge clk);
            refill_count = 0;
            forever begin
                @(posedge clk);
                if (ready_for_replay) break;
                if (refill_req) refill_count = refill_count + 1;
                if (u_miss_handler.state_q == 3 && !refill_done)
                    refill_done = 1;
                else
                    refill_done = 0;
            end
            if (refill_count != 1) begin
                $display("  FAIL: expected 1, got %d", refill_count); test_pass = 0;
            end else $display("  PASS: Deduplicated to 1 refill");
            vlsu_req = 0; lane_miss = 0; any_miss = 0;

            $display("\n=================================");
            if (test_pass) $display("SUCCESS: All miss handler tests passed!");
            else $display("FAILURE: Some tests failed");
            $display("=================================");
            $finish;
        end

    end endgenerate

    // Timeout
    initial begin
        #100000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
