`timescale 1ns/1ps

module cpu64_l2_directory_tb (
    input clk,
    input rst_n
);

    parameter SETS = 256;
    parameter WAYS = 16;
    parameter CORES = 4;

    reg [$clog2(SETS)-1:0]  rd_set_i;
    wire [WAYS-1:0]          rd_valid_o;
    wire [WAYS*CORES-1:0]    rd_sharers_o;
    wire [WAYS-1:0]          rd_owner_valid_o;
    wire [WAYS*$clog2(CORES)-1:0] rd_owner_id_o;
    wire [WAYS-1:0]          rd_dirty_o;

    reg                     we_i;
    reg [$clog2(SETS)-1:0]  wr_set_i;
    reg [$clog2(WAYS)-1:0]  wr_way_i;
    
    reg                     wr_valid_i;
    reg [CORES-1:0]         wr_sharers_i;
    reg                     wr_owner_valid_i;
    reg [$clog2(CORES)-1:0] wr_owner_id_i;
    reg                     wr_dirty_i;

    cpu64_l2_directory #(
        .SETS(SETS),
        .WAYS(WAYS),
        .CORES(CORES)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .rd_set_i(rd_set_i),
        .rd_valid_o(rd_valid_o),
        .rd_sharers_o(rd_sharers_o),
        .rd_owner_valid_o(rd_owner_valid_o),
        .rd_owner_id_o(rd_owner_id_o),
        .rd_dirty_o(rd_dirty_o),
        .we_i(we_i),
        .wr_set_i(wr_set_i),
        .wr_way_i(wr_way_i),
        .wr_valid_i(wr_valid_i),
        .wr_sharers_i(wr_sharers_i),
        .wr_owner_valid_i(wr_owner_valid_i),
        .wr_owner_id_i(wr_owner_id_i),
        .wr_dirty_i(wr_dirty_i)
    );

    reg [31:0] cycle;

    initial begin
        we_i = 0;
        rd_set_i = 0;
        wr_set_i = 0;
        wr_way_i = 0;
        wr_valid_i = 0;
        wr_sharers_i = 0;
        wr_owner_valid_i = 0;
        wr_owner_id_i = 0;
        wr_dirty_i = 0;
        cycle = 0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle <= 0;
            we_i <= 0;
        end else begin
            cycle <= cycle + 1;

            case (cycle)
                10: begin
                    $display("--- Test 1: Basic Write/Read ---");
                    wr_set_i <= 10;
                    wr_way_i <= 5;
                    wr_valid_i <= 1;
                    wr_sharers_i <= 4'b1010;
                    wr_owner_valid_i <= 0;
                    wr_owner_id_i <= 0;
                    wr_dirty_i <= 0;
                    we_i <= 1;
                end
                11: begin
                    we_i <= 0;
                    rd_set_i <= 10;
                end
                12: begin
                    // Read happens combinationally from rd_set_i? 
                    // In RTL: assign rd_data_raw = ram[rd_set_i];
                    // So it should be available immediately if rd_set_i is stable.
                    // But rd_set_i was set at posedge 11, so it's stable during cycle 12.
                    if (rd_valid_o[5] && rd_sharers_o[5*CORES +: CORES] == 4'b1010)
                        $display("PASS: Basic Write/Read");
                    else
                        $display("FAIL: Basic Write/Read. v=%b s=%b", rd_valid_o[5], rd_sharers_o[5*CORES +: CORES]);
                end

                20: begin
                    $display("--- Test 2: Invariant - Owner implies No Sharers ---");
                    wr_set_i <= 20;
                    wr_way_i <= 2;
                    wr_valid_i <= 1;
                    wr_sharers_i <= 4'b1111; // Try to set sharers
                    wr_owner_valid_i <= 1;   // With owner
                    wr_owner_id_i <= 2;
                    wr_dirty_i <= 0;
                    we_i <= 1;
                end
                21: begin
                    we_i <= 0;
                    rd_set_i <= 20;
                end
                22: begin
                    if (rd_owner_valid_o[2] && rd_sharers_o[2*CORES +: CORES] == 0)
                        $display("PASS: Owner cleared sharers");
                    else
                        $display("FAIL: Owner did not clear sharers. o=%b s=%b", rd_owner_valid_o[2], rd_sharers_o[2*CORES +: CORES]);
                end

                30: begin
                    $display("--- Test 3: Invariant - Dirty implies Owner Valid ---");
                    wr_set_i <= 30;
                    wr_way_i <= 0;
                    wr_valid_i <= 1;
                    wr_sharers_i <= 0;
                    wr_owner_valid_i <= 0; // Try to set no owner
                    wr_owner_id_i <= 3;
                    wr_dirty_i <= 1;       // But dirty
                    we_i <= 1;
                end
                31: begin
                    we_i <= 0;
                    rd_set_i <= 30;
                end
                32: begin
                    if (rd_dirty_o[0] && rd_owner_valid_o[0])
                        $display("PASS: Dirty forced Owner Valid");
                    else
                        $display("FAIL: Dirty did not force Owner Valid. d=%b o=%b", rd_dirty_o[0], rd_owner_valid_o[0]);
                end

                40: begin
                    $display("All tests completed");
                    $finish;
                end
            endcase
        end
    end

endmodule
