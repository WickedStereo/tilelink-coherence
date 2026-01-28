// rv64g_l1_vlsu_integration_tb.v - Integration test for VLSU with L1 dcache
// Tests vector load operations with cache hits and misses
`timescale 1ns/1ps
`include "params.vh"

module rv64g_l1_vlsu_integration_tb;

    // Parameters
    parameter integer NUM_LANES = 8;
    parameter integer NUM_BANKS = 8;

    // Clock and reset
    reg clk;
    reg rst_n;

    // CPU scalar interface (unused but required)
    reg         cpu_req;
    reg         cpu_we;
    reg [7:0]   cpu_be;
    reg [63:0]  cpu_addr;
    reg [63:0]  cpu_wdata;
    wire        cpu_gnt;
    wire        cpu_rvalid;
    wire [63:0] cpu_rdata;

    // VLSU interface
    reg                         vlsu_req;
    reg [NUM_LANES-1:0]         vlsu_lane_valid;
    reg [NUM_LANES-1:0]         vlsu_lane_we;
    reg [NUM_LANES*64-1:0]      vlsu_lane_addr;
    reg [NUM_LANES*64-1:0]      vlsu_lane_wdata;
    reg [NUM_LANES*8-1:0]       vlsu_lane_be;
    wire                        vlsu_ready;
    wire                        vlsu_done;
    wire [NUM_LANES-1:0]        vlsu_lane_done;
    wire [NUM_LANES-1:0]        vlsu_lane_hit;
    wire [NUM_LANES*64-1:0]     vlsu_lane_rdata;

    // TileLink interface - simplified memory model
    wire        tl_a_valid;
    reg         tl_a_ready;
    wire [2:0]  tl_a_opcode;
    wire [2:0]  tl_a_param;
    wire [3:0]  tl_a_size;
    wire [3:0]  tl_a_source;
    wire [63:0] tl_a_address;
    wire [7:0]  tl_a_mask;
    wire [63:0] tl_a_data;

    reg         tl_b_valid;
    wire        tl_b_ready;
    reg [2:0]   tl_b_param;
    reg [63:0]  tl_b_address;

    wire        tl_c_valid;
    reg         tl_c_ready;
    wire [2:0]  tl_c_opcode;
    wire [63:0] tl_c_address;
    wire [63:0] tl_c_data;

    reg         tl_d_valid;
    wire        tl_d_ready;
    reg [2:0]   tl_d_opcode;
    reg [1:0]   tl_d_param;
    reg [3:0]   tl_d_size;
    reg [3:0]   tl_d_source;
    reg [3:0]   tl_d_sink;
    reg [63:0]  tl_d_data;

    wire        tl_e_valid;
    reg         tl_e_ready;

    // DUT
    rv64g_l1_dcache #(
        .NUM_LANES(NUM_LANES),
        .NUM_BANKS(NUM_BANKS)
    ) dut (
        .clk_i              (clk),
        .rst_ni             (rst_n),
        .invalidate_all_i   (1'b0),

        // Scalar port
        .req_i              (cpu_req),
        .we_i               (cpu_we),
        .be_i               (cpu_be),
        .addr_i             (cpu_addr),
        .wdata_i            (cpu_wdata),
        .gnt_o              (cpu_gnt),
        .rvalid_o           (cpu_rvalid),
        .rdata_o            (cpu_rdata),

        // Atomic ports (unused)
        .amo_i              (1'b0),
        .lr_i               (1'b0),
        .sc_i               (1'b0),
        .amo_op_i           (5'b0),
        .amo_word_i         (1'b0),

        // VLSU port
        .vlsu_req_i         (vlsu_req),
        .vlsu_lane_valid_i  (vlsu_lane_valid),
        .vlsu_lane_we_i     (vlsu_lane_we),
        .vlsu_lane_addr_i   (vlsu_lane_addr),
        .vlsu_lane_wdata_i  (vlsu_lane_wdata),
        .vlsu_lane_be_i     (vlsu_lane_be),
        .vlsu_ready_o       (vlsu_ready),
        .vlsu_done_o        (vlsu_done),
        .vlsu_lane_done_o   (vlsu_lane_done),
        .vlsu_lane_hit_o    (vlsu_lane_hit),
        .vlsu_lane_rdata_o  (vlsu_lane_rdata),

        // TileLink A
        .tl_a_valid_o       (tl_a_valid),
        .tl_a_ready_i       (tl_a_ready),
        .tl_a_opcode_o      (tl_a_opcode),
        .tl_a_param_o       (tl_a_param),
        .tl_a_size_o        (tl_a_size),
        .tl_a_source_o      (tl_a_source),
        .tl_a_address_o     (tl_a_address),
        .tl_a_mask_o        (tl_a_mask),
        .tl_a_data_o        (tl_a_data),
        .tl_a_corrupt_o     (),

        // TileLink B
        .tl_b_valid_i       (tl_b_valid),
        .tl_b_ready_o       (tl_b_ready),
        .tl_b_opcode_i      (3'd6),  // ProbeBlock
        .tl_b_param_i       (tl_b_param),
        .tl_b_size_i        (4'd6),
        .tl_b_source_i      (4'd0),
        .tl_b_address_i     (tl_b_address),
        .tl_b_mask_i        (8'hFF),
        .tl_b_data_i        (64'd0),
        .tl_b_corrupt_i     (1'b0),

        // TileLink C
        .tl_c_valid_o       (tl_c_valid),
        .tl_c_ready_i       (tl_c_ready),
        .tl_c_opcode_o      (tl_c_opcode),
        .tl_c_param_o       (),
        .tl_c_size_o        (),
        .tl_c_source_o      (),
        .tl_c_address_o     (tl_c_address),
        .tl_c_data_o        (tl_c_data),
        .tl_c_corrupt_o     (),

        // TileLink D
        .tl_d_valid_i       (tl_d_valid),
        .tl_d_ready_o       (tl_d_ready),
        .tl_d_opcode_i      (tl_d_opcode),
        .tl_d_param_i       (tl_d_param),
        .tl_d_size_i        (tl_d_size),
        .tl_d_source_i      (tl_d_source),
        .tl_d_sink_i        (tl_d_sink),
        .tl_d_denied_i      (1'b0),
        .tl_d_data_i        (tl_d_data),
        .tl_d_corrupt_i     (1'b0),

        // TileLink E
        .tl_e_valid_o       (tl_e_valid),
        .tl_e_ready_i       (tl_e_ready),
        .tl_e_sink_o        ()
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Simple memory model - 8KB backing store
    reg [63:0] memory [0:1023];
    integer mem_init;
    initial begin
        for (mem_init = 0; mem_init < 1024; mem_init = mem_init + 1)
            memory[mem_init] = {32'h0000_0000, mem_init[31:0]};  // Each word = its index
    end

    // Helper task: set lane address
    task set_lane_addr;
        input [2:0] lane;
        input [63:0] addr;
        begin
            vlsu_lane_addr[(lane+1)*64-1 -: 64] = addr;
        end
    endtask

    // Helper task: get lane rdata
    function [63:0] get_lane_rdata;
        input [2:0] lane;
        begin
            get_lane_rdata = vlsu_lane_rdata[(lane+1)*64-1 -: 64];
        end
    endfunction

    // Memory response state machine
    reg [2:0] mem_beat;
    reg [63:0] mem_addr_q;
    reg mem_responding;

    initial begin
        tl_a_ready = 1'b1;
        tl_d_valid = 1'b0;
        tl_d_opcode = 3'd0;
        tl_d_param = 2'd0;
        tl_d_size = 4'd0;
        tl_d_source = 4'd0;
        tl_d_sink = 4'd0;
        tl_d_data = 64'd0;
        mem_beat = 3'd0;
        mem_addr_q = 64'd0;
        mem_responding = 1'b0;
    end

    always @(posedge clk) begin
        if (!rst_n) begin
            tl_a_ready <= 1'b1;
            tl_d_valid <= 1'b0;
            mem_beat <= 3'd0;
            mem_responding <= 1'b0;
        end else begin
            if (tl_a_valid && tl_a_ready && !mem_responding) begin
                // Accept request
                tl_a_ready <= 1'b0;
                mem_addr_q <= tl_a_address;
                mem_beat <= 3'd0;
                mem_responding <= 1'b1;
                $display("[MEM] Request: addr=0x%h, opcode=%d, source=%d", 
                         tl_a_address, tl_a_opcode, tl_a_source);
            end else if (mem_responding) begin
                // Send data beats
                tl_d_valid <= 1'b1;
                tl_d_opcode <= 3'd1;  // GrantData
                tl_d_param <= 2'd0;   // toB
                tl_d_size <= 4'd6;
                tl_d_source <= 4'd0;
                tl_d_sink <= 4'd1;
                tl_d_data <= memory[(mem_addr_q[12:3]) + mem_beat];

                if (tl_d_valid && tl_d_ready) begin
                    if (mem_beat == 3'd7) begin
                        tl_d_valid <= 1'b0;
                        mem_responding <= 1'b0;
                        tl_a_ready <= 1'b1;
                        $display("[MEM] Grant complete for addr 0x%h", mem_addr_q);
                    end else begin
                        mem_beat <= mem_beat + 3'd1;
                    end
                end
            end else begin
                tl_d_valid <= 1'b0;
            end
        end
    end

    // Release channel handling (for writebacks)
    always @(posedge clk) begin
        tl_c_ready <= 1'b1;
        if (tl_c_valid && tl_c_ready) begin
            $display("[MEM] Release: addr=0x%h, opcode=%d", tl_c_address, tl_c_opcode);
        end
    end

    // E channel always ready
    always @(posedge clk) begin
        tl_e_ready <= 1'b1;
    end

    // Test sequence
    integer test_num;
    integer test_pass;
    integer i;
    integer timeout_cnt;

    initial begin
        $display("=== VLSU Integration Testbench ===");
        $display("Starting initialization...");
        test_num = 0;
        test_pass = 1;

        // Initialize
        rst_n = 0;
        cpu_req = 0;
        cpu_we = 0;
        cpu_be = 0;
        cpu_addr = 0;
        cpu_wdata = 0;
        vlsu_req = 0;
        vlsu_lane_valid = 0;
        vlsu_lane_we = 0;
        vlsu_lane_addr = 0;
        vlsu_lane_wdata = 0;
        vlsu_lane_be = 0;
        tl_b_valid = 0;
        tl_b_param = 0;
        tl_b_address = 0;

        $display("Asserting reset...");
        // Reset - use #delay instead of repeat
        #200;  // 20 clock cycles at 10ns period
        $display("Releasing reset...");
        rst_n = 1;
        #50;   // 5 clock cycles
        $display("Reset complete, starting tests...");

        // =====================================================================
        // Test 1: First populate cache with scalar loads
        // =====================================================================
        test_num = 1;
        $display("\nTest %0d: Populate cache via scalar loads", test_num);

        // Load address 0x100 (line 0x100-0x13F)
        cpu_req = 1;
        cpu_we = 0;
        cpu_addr = 64'h100;
        #10;
        while (!cpu_gnt) #10;
        cpu_req = 0;
        while (!cpu_rvalid) #10;
        $display("  Scalar load 0x100: data=0x%h", cpu_rdata);

        #50;

        // Load address 0x200 (line 0x200-0x23F)
        cpu_req = 1;
        cpu_we = 0;
        cpu_addr = 64'h200;
        #10;
        while (!cpu_gnt) #10;
        cpu_req = 0;
        while (!cpu_rvalid) #10;
        $display("  Scalar load 0x200: data=0x%h", cpu_rdata);

        #50;

        // =====================================================================
        // Test 2: VLSU all-hit vector load from cached lines
        // =====================================================================
        test_num = 2;
        $display("\nTest %0d: VLSU vector load (all hits)", test_num);

        // Load 8 elements from line at 0x100 (all within 64B)
        for (i = 0; i < 8; i = i + 1) begin
            set_lane_addr(i[2:0], 64'h100 + i*8);  // 0x100, 0x108, 0x110, ...
        end
        vlsu_lane_valid = 8'hFF;
        vlsu_lane_we = 8'h00;
        vlsu_lane_be = {8{8'hFF}};
        vlsu_req = 1;

        #10;

        // Wait for completion with timeout
        timeout_cnt = 0;
        while (!vlsu_done && timeout_cnt < 100) begin
            #10;
            timeout_cnt = timeout_cnt + 1;
        end

        if (timeout_cnt >= 100) begin
            $display("  FAIL: VLSU operation timed out");
            test_pass = 0;
        end else begin
            $display("  VLSU done in %0d cycles", timeout_cnt);
            $display("  Lane hits: %b", vlsu_lane_hit);
            
            // Verify all hits
            if (vlsu_lane_hit != 8'hFF) begin
                $display("  FAIL: Expected all hits, got %b", vlsu_lane_hit);
                test_pass = 0;
            end else begin
                $display("  PASS: All lanes hit");
            end

            // Print read data
            for (i = 0; i < 8; i = i + 1) begin
                $display("  Lane %0d: addr=0x%h, data=0x%h", 
                         i, 64'h100 + i*8, get_lane_rdata(i[2:0]));
            end
        end

        vlsu_req = 0;
        vlsu_lane_valid = 0;
        #50;

        // =====================================================================
        // Test 3: VLSU vector load with misses (cold cache lines)
        // =====================================================================
        test_num = 3;
        $display("\nTest %0d: VLSU vector load (cold misses)", test_num);

        // Load from 3 different uncached lines: 0x400, 0x500, 0x600
        set_lane_addr(0, 64'h400);  // Line 0x400-0x43F
        set_lane_addr(1, 64'h408);  // Same line
        set_lane_addr(2, 64'h500);  // Line 0x500-0x53F
        set_lane_addr(3, 64'h508);  // Same line
        set_lane_addr(4, 64'h600);  // Line 0x600-0x63F
        set_lane_addr(5, 64'h608);  // Same line
        set_lane_addr(6, 64'h610);  // Same line
        set_lane_addr(7, 64'h618);  // Same line

        vlsu_lane_valid = 8'hFF;
        vlsu_lane_we = 8'h00;
        vlsu_req = 1;

        #10;

        // Wait for completion - should take longer due to refills
        timeout_cnt = 0;
        while (!vlsu_done && timeout_cnt < 500) begin
            #10;
            timeout_cnt = timeout_cnt + 1;
            
            // Track state for debugging
            if (dut.state != 0 && (timeout_cnt % 50 == 0)) begin
                $display("  [%0d] state=%0d, miss_busy=%b, miss_req=%b", 
                         timeout_cnt, dut.state, dut.vlsu_miss_busy, dut.vlsu_miss_refill_req);
            end
        end

        if (timeout_cnt >= 500) begin
            $display("  FAIL: VLSU operation timed out (state=%0d)", dut.state);
            test_pass = 0;
        end else begin
            $display("  VLSU done in %0d cycles", timeout_cnt);
            $display("  Lane hits: %b", vlsu_lane_hit);
            
            // After refills, all should be hits on replay
            // Print read data
            for (i = 0; i < 8; i = i + 1) begin
                $display("  Lane %0d: data=0x%h", i, get_lane_rdata(i[2:0]));
            end
            $display("  PASS: VLSU with misses completed");
        end

        vlsu_req = 0;
        vlsu_lane_valid = 0;
        repeat(10) @(posedge clk);

        // =====================================================================
        // Summary
        // =====================================================================
        $display("\n=================================");
        if (test_pass) begin
            $display("SUCCESS: All tests passed!");
        end else begin
            $display("FAILURE: Some tests failed!");
        end
        $display("=================================");

        $finish;
    end

    // Timeout
    initial begin
        #50000;
        $display("TIMEOUT: Simulation exceeded time limit");
        $finish;
    end

endmodule
