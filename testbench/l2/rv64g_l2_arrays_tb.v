`timescale 1ns/100ps

module rv64g_l2_arrays_tb (
    input clk,
    input rst_n
);

    reg [7:0]   index_i;
    reg [2:0]   word_sel_i;
    reg [3:0]   way_sel_i;
    reg         write_en_i;
    reg [7:0]   be_i;
    reg [49:0]  tag_in_i;
    reg [63:0]  wdata_i;

    wire [63:0]  rdata_selected_o;
    wire [49:0]  tag_selected_o;
    wire [16*64-1:0] rdata_way_flat_o;
    wire [16*50-1:0] tag_way_flat_o;

    rv64g_l2_arrays dut (
        .clk_i(clk),
        .rst_ni(rst_n),
        .index_i(index_i),
        .word_sel_i(word_sel_i),
        .way_sel_i(way_sel_i),
        .write_en_i(write_en_i),
        .be_i(be_i),
        .tag_in_i(tag_in_i),
        .wdata_i(wdata_i),
        .rdata_selected_o(rdata_selected_o),
        .tag_selected_o(tag_selected_o),
        .rdata_way_flat_o(rdata_way_flat_o),
        .tag_way_flat_o(tag_way_flat_o)
    );

    reg [31:0] cycle;

    initial begin
        index_i = 0;
        word_sel_i = 0;
        way_sel_i = 0;
        write_en_i = 0;
        be_i = 0;
        tag_in_i = 0;
        wdata_i = 0;
        cycle = 0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle <= 0;
            write_en_i <= 0;
        end else begin
            cycle <= cycle + 1;

            case (cycle)
                10: begin
                    $display("--- Test 1: Write Data/Tag ---");
                    index_i <= 8'h10;
                    word_sel_i <= 3'd2;
                    way_sel_i <= 4'd5;
                    write_en_i <= 1;
                    be_i <= 8'hFF;
                    tag_in_i <= 50'h123456789ABC;
                    wdata_i <= 64'hDEADBEEFCAFEBABE;
                end
                11: begin
                    write_en_i <= 0;
                    // Read back
                    index_i <= 8'h10;
                    word_sel_i <= 3'd2;
                    way_sel_i <= 4'd5;
                end
                12: begin
                    if (rdata_selected_o == 64'hDEADBEEFCAFEBABE && tag_selected_o == 50'h123456789ABC)
                        $display("PASS: Write/Read Data/Tag");
                    else
                        $display("FAIL: Write/Read. d=%h t=%h", rdata_selected_o, tag_selected_o);
                    
                    // Check flat output
                    if (rdata_way_flat_o[5*64 +: 64] == 64'hDEADBEEFCAFEBABE)
                        $display("PASS: Flat Data Output");
                    else
                        $display("FAIL: Flat Data Output");
                end

                20: begin
                    $display("--- Test 2: Partial Write ---");
                    index_i <= 8'h10;
                    word_sel_i <= 3'd2;
                    way_sel_i <= 4'd5;
                    write_en_i <= 1;
                    be_i <= 8'h0F; // Lower 32 bits
                    wdata_i <= 64'h0000000011111111; // Should only overwrite lower half
                    // Upper half was CAFEBABE
                end
                21: begin
                    write_en_i <= 0;
                end
                22: begin
                    if (rdata_selected_o == 64'hDEADBEEF11111111)
                        $display("PASS: Partial Write");
                    else
                        $display("FAIL: Partial Write. d=%h", rdata_selected_o);
                end

                30: begin
                    $display("All tests completed");
                    $finish;
                end
            endcase
        end
    end

endmodule
