`timescale 1ns/100ps

module rv64g_l2_mshr_tb (
    input clk,
    input rst_n
);

    parameter ADDR_W = 64;
    parameter SOURCE_W = 6;
    parameter TYPE_W = 3;
    parameter CORES = 4;

    reg                     alloc_req_i;
    reg [ADDR_W-1:0]        alloc_addr_i;
    reg [SOURCE_W-1:0]      alloc_source_i;
    reg [TYPE_W-1:0]        alloc_type_i;
    wire                    alloc_ready_o;

    reg                     dealloc_req_i;

    reg                     set_probes_i;
    reg [CORES-1:0]         probes_mask_i;
    
    reg                     probe_ack_i;
    reg [$clog2(CORES)-1:0] probe_ack_id_i;

    wire                    valid_o;
    wire [ADDR_W-1:0]       addr_o;
    wire [SOURCE_W-1:0]     source_o;
    wire [TYPE_W-1:0]       type_o;
    wire [CORES-1:0]        pending_probes_o;

    rv64g_l2_mshr #(
        .ADDR_W(ADDR_W),
        .SOURCE_W(SOURCE_W),
        .TYPE_W(TYPE_W),
        .CORES(CORES)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .alloc_req_i(alloc_req_i),
        .alloc_addr_i(alloc_addr_i),
        .alloc_source_i(alloc_source_i),
        .alloc_type_i(alloc_type_i),
        .alloc_ready_o(alloc_ready_o),
        .dealloc_req_i(dealloc_req_i),
        .set_probes_i(set_probes_i),
        .probes_mask_i(probes_mask_i),
        .probe_ack_i(probe_ack_i),
        .probe_ack_id_i(probe_ack_id_i),
        .valid_o(valid_o),
        .addr_o(addr_o),
        .source_o(source_o),
        .type_o(type_o),
        .pending_probes_o(pending_probes_o)
    );

    reg [31:0] cycle;

    initial begin
        alloc_req_i = 0;
        alloc_addr_i = 0;
        alloc_source_i = 0;
        alloc_type_i = 0;
        dealloc_req_i = 0;
        set_probes_i = 0;
        probes_mask_i = 0;
        probe_ack_i = 0;
        probe_ack_id_i = 0;
        cycle = 0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle <= 0;
            alloc_req_i <= 0;
        end else begin
            cycle <= cycle + 1;

            case (cycle)
                10: begin
                    $display("--- Test 1: Allocation ---");
                    if (alloc_ready_o) begin
                        alloc_req_i <= 1;
                        alloc_addr_i <= 64'h1000;
                        alloc_source_i <= 6'h1A;
                        alloc_type_i <= 3'd4; // Get
                    end else begin
                        $display("FAIL: MSHR not ready at start");
                    end
                end
                11: begin
                    alloc_req_i <= 0;
                end
                12: begin
                    if (valid_o && addr_o == 64'h1000 && source_o == 6'h1A && type_o == 3'd4)
                        $display("PASS: Allocated successfully");
                    else
                        $display("FAIL: Allocation mismatch. v=%b a=%h", valid_o, addr_o);
                    
                    if (!alloc_ready_o)
                        $display("PASS: MSHR busy");
                    else
                        $display("FAIL: MSHR should be busy");
                end

                20: begin
                    $display("--- Test 2: Set Probes ---");
                    set_probes_i <= 1;
                    probes_mask_i <= 4'b1101; // Waiting for 0, 2, 3
                end
                21: begin
                    set_probes_i <= 0;
                end
                22: begin
                    if (pending_probes_o == 4'b1101)
                        $display("PASS: Probes set");
                    else
                        $display("FAIL: Probes mismatch. p=%b", pending_probes_o);
                end

                30: begin
                    $display("--- Test 3: Probe Ack ---");
                    probe_ack_i <= 1;
                    probe_ack_id_i <= 2; // Ack from core 2
                end
                31: begin
                    probe_ack_i <= 0;
                end
                32: begin
                    // 1101 -> clear bit 2 -> 1001
                    if (pending_probes_o == 4'b1001)
                        $display("PASS: Probe Ack cleared bit 2");
                    else
                        $display("FAIL: Probe Ack failed. p=%b", pending_probes_o);
                end

                40: begin
                    $display("--- Test 4: Deallocation ---");
                    dealloc_req_i <= 1;
                end
                41: begin
                    dealloc_req_i <= 0;
                end
                42: begin
                    if (!valid_o && alloc_ready_o)
                        $display("PASS: Deallocated");
                    else
                        $display("FAIL: Deallocation failed");
                end

                50: begin
                    $display("All tests completed");
                    $finish;
                end
            endcase
        end
    end

endmodule
