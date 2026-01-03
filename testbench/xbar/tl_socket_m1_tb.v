`timescale 1ns/100ps

module tl_socket_m1_tb (
    input clk,
    input rst_n
);

    parameter N_CLIENTS = 4;
    parameter DATA_W = 64;
    parameter ADDR_W = 64;
    parameter SOURCE_W = 4;
    parameter SINK_W = 4;
    parameter M_SOURCE_W = SOURCE_W + $clog2(N_CLIENTS);

    // Client Interfaces
    reg  [N_CLIENTS-1:0]          cli_a_valid_i;
    wire [N_CLIENTS-1:0]          cli_a_ready_o;
    reg  [N_CLIENTS*3-1:0]        cli_a_opcode_i;
    reg  [N_CLIENTS*3-1:0]        cli_a_param_i;
    reg  [N_CLIENTS*4-1:0]        cli_a_size_i;
    reg  [N_CLIENTS*SOURCE_W-1:0] cli_a_source_i;
    reg  [N_CLIENTS*ADDR_W-1:0]   cli_a_address_i;
    reg  [N_CLIENTS*8-1:0]        cli_a_mask_i;
    reg  [N_CLIENTS*DATA_W-1:0]   cli_a_data_i;
    reg  [N_CLIENTS-1:0]          cli_a_corrupt_i;

    wire [N_CLIENTS-1:0]          cli_b_valid_o;
    reg  [N_CLIENTS-1:0]          cli_b_ready_i;
    wire [N_CLIENTS*3-1:0]        cli_b_opcode_o;
    wire [N_CLIENTS*3-1:0]        cli_b_param_o;
    wire [N_CLIENTS*4-1:0]        cli_b_size_o;
    wire [N_CLIENTS*SOURCE_W-1:0] cli_b_source_o;
    wire [N_CLIENTS*ADDR_W-1:0]   cli_b_address_o;
    wire [N_CLIENTS*8-1:0]        cli_b_mask_o;
    wire [N_CLIENTS*DATA_W-1:0]   cli_b_data_o;
    wire [N_CLIENTS-1:0]          cli_b_corrupt_o;

    reg  [N_CLIENTS-1:0]          cli_c_valid_i;
    wire [N_CLIENTS-1:0]          cli_c_ready_o;
    reg  [N_CLIENTS*3-1:0]        cli_c_opcode_i;
    reg  [N_CLIENTS*3-1:0]        cli_c_param_i;
    reg  [N_CLIENTS*4-1:0]        cli_c_size_i;
    reg  [N_CLIENTS*SOURCE_W-1:0] cli_c_source_i;
    reg  [N_CLIENTS*ADDR_W-1:0]   cli_c_address_i;
    reg  [N_CLIENTS*DATA_W-1:0]   cli_c_data_i;
    reg  [N_CLIENTS-1:0]          cli_c_corrupt_i;

    wire [N_CLIENTS-1:0]          cli_d_valid_o;
    reg  [N_CLIENTS-1:0]          cli_d_ready_i;
    wire [N_CLIENTS*3-1:0]        cli_d_opcode_o;
    wire [N_CLIENTS*3-1:0]        cli_d_param_o;
    wire [N_CLIENTS*4-1:0]        cli_d_size_o;
    wire [N_CLIENTS*SOURCE_W-1:0] cli_d_source_o;
    wire [N_CLIENTS*SINK_W-1:0]   cli_d_sink_o;
    wire [N_CLIENTS-1:0]          cli_d_denied_o;
    wire [N_CLIENTS*DATA_W-1:0]   cli_d_data_o;
    wire [N_CLIENTS-1:0]          cli_d_corrupt_o;

    reg  [N_CLIENTS-1:0]          cli_e_valid_i;
    wire [N_CLIENTS-1:0]          cli_e_ready_o;
    reg  [N_CLIENTS*SINK_W-1:0]   cli_e_sink_i;

    // Manager Interface
    wire                          mgr_a_valid_o;
    reg                           mgr_a_ready_i;
    wire [2:0]                    mgr_a_opcode_o;
    wire [2:0]                    mgr_a_param_o;
    wire [3:0]                    mgr_a_size_o;
    wire [M_SOURCE_W-1:0]         mgr_a_source_o;
    wire [ADDR_W-1:0]             mgr_a_address_o;
    wire [7:0]                    mgr_a_mask_o;
    wire [DATA_W-1:0]             mgr_a_data_o;
    wire                          mgr_a_corrupt_o;

    reg                           mgr_b_valid_i;
    wire                          mgr_b_ready_o;
    reg  [2:0]                    mgr_b_opcode_i;
    reg  [2:0]                    mgr_b_param_i;
    reg  [3:0]                    mgr_b_size_i;
    reg  [SOURCE_W-1:0]           mgr_b_source_i;
    reg  [ADDR_W-1:0]             mgr_b_address_i;
    reg  [7:0]                    mgr_b_mask_i;
    reg  [DATA_W-1:0]             mgr_b_data_i;
    reg                           mgr_b_corrupt_i;
    reg  [$clog2(N_CLIENTS)-1:0]  mgr_b_dest_i;

    wire                          mgr_c_valid_o;
    reg                           mgr_c_ready_i;
    wire [2:0]                    mgr_c_opcode_o;
    wire [2:0]                    mgr_c_param_o;
    wire [3:0]                    mgr_c_size_o;
    wire [M_SOURCE_W-1:0]         mgr_c_source_o;
    wire [ADDR_W-1:0]             mgr_c_address_o;
    wire [DATA_W-1:0]             mgr_c_data_o;
    wire                          mgr_c_corrupt_o;

    reg                           mgr_d_valid_i;
    wire                          mgr_d_ready_o;
    reg  [2:0]                    mgr_d_opcode_i;
    reg  [2:0]                    mgr_d_param_i;
    reg  [3:0]                    mgr_d_size_i;
    reg  [M_SOURCE_W-1:0]         mgr_d_source_i;
    reg  [SINK_W-1:0]             mgr_d_sink_i;
    reg                           mgr_d_denied_i;
    reg  [DATA_W-1:0]             mgr_d_data_i;
    reg                           mgr_d_corrupt_i;

    wire                          mgr_e_valid_o;
    reg                           mgr_e_ready_i;
    wire [SINK_W-1:0]             mgr_e_sink_o;

    tl_socket_m1 #(
        .N_CLIENTS(N_CLIENTS),
        .DATA_W(DATA_W),
        .ADDR_W(ADDR_W),
        .SOURCE_W(SOURCE_W),
        .SINK_W(SINK_W)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        // Client A
        .cli_a_valid_i(cli_a_valid_i), .cli_a_ready_o(cli_a_ready_o),
        .cli_a_opcode_i(cli_a_opcode_i), .cli_a_param_i(cli_a_param_i),
        .cli_a_size_i(cli_a_size_i), .cli_a_source_i(cli_a_source_i),
        .cli_a_address_i(cli_a_address_i), .cli_a_mask_i(cli_a_mask_i),
        .cli_a_data_i(cli_a_data_i), .cli_a_corrupt_i(cli_a_corrupt_i),
        // Client B
        .cli_b_valid_o(cli_b_valid_o), .cli_b_ready_i(cli_b_ready_i),
        .cli_b_opcode_o(cli_b_opcode_o), .cli_b_param_o(cli_b_param_o),
        .cli_b_size_o(cli_b_size_o), .cli_b_source_o(cli_b_source_o),
        .cli_b_address_o(cli_b_address_o), .cli_b_mask_o(cli_b_mask_o),
        .cli_b_data_o(cli_b_data_o), .cli_b_corrupt_o(cli_b_corrupt_o),
        // Client C
        .cli_c_valid_i(cli_c_valid_i), .cli_c_ready_o(cli_c_ready_o),
        .cli_c_opcode_i(cli_c_opcode_i), .cli_c_param_i(cli_c_param_i),
        .cli_c_size_i(cli_c_size_i), .cli_c_source_i(cli_c_source_i),
        .cli_c_address_i(cli_c_address_i), .cli_c_data_i(cli_c_data_i),
        .cli_c_corrupt_i(cli_c_corrupt_i),
        // Client D
        .cli_d_valid_o(cli_d_valid_o), .cli_d_ready_i(cli_d_ready_i),
        .cli_d_opcode_o(cli_d_opcode_o), .cli_d_param_o(cli_d_param_o),
        .cli_d_size_o(cli_d_size_o), .cli_d_source_o(cli_d_source_o),
        .cli_d_sink_o(cli_d_sink_o), .cli_d_denied_o(cli_d_denied_o),
        .cli_d_data_o(cli_d_data_o), .cli_d_corrupt_o(cli_d_corrupt_o),
        // Client E
        .cli_e_valid_i(cli_e_valid_i), .cli_e_ready_o(cli_e_ready_o),
        .cli_e_sink_i(cli_e_sink_i),
        
        // Manager A
        .mgr_a_valid_o(mgr_a_valid_o), .mgr_a_ready_i(mgr_a_ready_i),
        .mgr_a_opcode_o(mgr_a_opcode_o), .mgr_a_param_o(mgr_a_param_o),
        .mgr_a_size_o(mgr_a_size_o), .mgr_a_source_o(mgr_a_source_o),
        .mgr_a_address_o(mgr_a_address_o), .mgr_a_mask_o(mgr_a_mask_o),
        .mgr_a_data_o(mgr_a_data_o), .mgr_a_corrupt_o(mgr_a_corrupt_o),
        // Manager B
        .mgr_b_valid_i(mgr_b_valid_i), .mgr_b_ready_o(mgr_b_ready_o),
        .mgr_b_opcode_i(mgr_b_opcode_i), .mgr_b_param_i(mgr_b_param_i),
        .mgr_b_size_i(mgr_b_size_i), .mgr_b_source_i(mgr_b_source_i),
        .mgr_b_address_i(mgr_b_address_i), .mgr_b_mask_i(mgr_b_mask_i),
        .mgr_b_data_i(mgr_b_data_i), .mgr_b_corrupt_i(mgr_b_corrupt_i),
        .mgr_b_dest_i(mgr_b_dest_i),
        // Manager C
        .mgr_c_valid_o(mgr_c_valid_o), .mgr_c_ready_i(mgr_c_ready_i),
        .mgr_c_opcode_o(mgr_c_opcode_o), .mgr_c_param_o(mgr_c_param_o),
        .mgr_c_size_o(mgr_c_size_o), .mgr_c_source_o(mgr_c_source_o),
        .mgr_c_address_o(mgr_c_address_o), .mgr_c_data_o(mgr_c_data_o),
        .mgr_c_corrupt_o(mgr_c_corrupt_o),
        // Manager D
        .mgr_d_valid_i(mgr_d_valid_i), .mgr_d_ready_o(mgr_d_ready_o),
        .mgr_d_opcode_i(mgr_d_opcode_i), .mgr_d_param_i(mgr_d_param_i),
        .mgr_d_size_i(mgr_d_size_i), .mgr_d_source_i(mgr_d_source_i),
        .mgr_d_sink_i(mgr_d_sink_i), .mgr_d_denied_i(mgr_d_denied_i),
        .mgr_d_data_i(mgr_d_data_i), .mgr_d_corrupt_i(mgr_d_corrupt_i),
        // Manager E
        .mgr_e_valid_o(mgr_e_valid_o), .mgr_e_ready_i(mgr_e_ready_i),
        .mgr_e_sink_o(mgr_e_sink_o)
    );

    reg [31:0] cycle;

    initial begin
        // Init Inputs
        cli_a_valid_i = 0; cli_a_opcode_i = 0; cli_a_param_i = 0; cli_a_size_i = 0;
        cli_a_source_i = 0; cli_a_address_i = 0; cli_a_mask_i = 0; cli_a_data_i = 0; cli_a_corrupt_i = 0;
        
        cli_b_ready_i = 0;
        
        cli_c_valid_i = 0; cli_c_opcode_i = 0; cli_c_param_i = 0; cli_c_size_i = 0;
        cli_c_source_i = 0; cli_c_address_i = 0; cli_c_data_i = 0; cli_c_corrupt_i = 0;
        
        cli_d_ready_i = 0;
        
        cli_e_valid_i = 0; cli_e_sink_i = 0;
        
        mgr_a_ready_i = 0;
        
        mgr_b_valid_i = 0; mgr_b_opcode_i = 0; mgr_b_param_i = 0; mgr_b_size_i = 0;
        mgr_b_source_i = 0; mgr_b_address_i = 0; mgr_b_mask_i = 0; mgr_b_data_i = 0; mgr_b_corrupt_i = 0;
        mgr_b_dest_i = 0;
        
        mgr_c_ready_i = 0;
        
        mgr_d_valid_i = 0; mgr_d_opcode_i = 0; mgr_d_param_i = 0; mgr_d_size_i = 0;
        mgr_d_source_i = 0; mgr_d_sink_i = 0; mgr_d_denied_i = 0; mgr_d_data_i = 0; mgr_d_corrupt_i = 0;
        
        mgr_e_ready_i = 0;
        
        cycle = 0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle <= 0;
        end else begin
            cycle <= cycle + 1;

            case (cycle)
                10: begin
                    $display("--- Test 1: Client 1 Request A ---");
                    // Client 1 sends Get (Opcode 4)
                    cli_a_valid_i[1] <= 1;
                    cli_a_opcode_i[1*3 +: 3] <= 3'd4;
                    cli_a_source_i[1*SOURCE_W +: SOURCE_W] <= 4'hA;
                    cli_a_address_i[1*ADDR_W +: ADDR_W] <= 64'h1000;
                    
                    mgr_a_ready_i <= 1;
                end
                11: begin
                    if (mgr_a_valid_o && mgr_a_source_o == {2'd1, 4'hA} && mgr_a_address_o == 64'h1000)
                        $display("PASS: Manager received A request from Client 1 with extended ID");
                    else
                        $display("FAIL: Manager A check. v=%b src=%h addr=%h", mgr_a_valid_o, mgr_a_source_o, mgr_a_address_o);
                    
                    cli_a_valid_i[1] <= 0;
                end

                20: begin
                    $display("--- Test 2: Manager Response D to Client 1 ---");
                    // Manager sends AccessAckData (Opcode 1) to Client 1
                    // Source must be {ClientID=1, OriginalSource=A}
                    mgr_d_valid_i <= 1;
                    mgr_d_opcode_i <= 3'd1;
                    mgr_d_source_i <= {2'd1, 4'hA};
                    mgr_d_data_i <= 64'hDEADBEEF;
                    
                    cli_d_ready_i[1] <= 1;
                end
                21: begin
                    if (cli_d_valid_o[1] && cli_d_source_o[1*SOURCE_W +: SOURCE_W] == 4'hA && cli_d_data_o[1*DATA_W +: DATA_W] == 64'hDEADBEEF)
                        $display("PASS: Client 1 received D response");
                    else
                        $display("FAIL: Client 1 D check. v=%b src=%h data=%h", cli_d_valid_o[1], cli_d_source_o[1*SOURCE_W +: SOURCE_W], cli_d_data_o[1*DATA_W +: DATA_W]);
                    
                    if (cli_d_valid_o[0] || cli_d_valid_o[2] || cli_d_valid_o[3])
                        $display("FAIL: Other clients received D response");
                    
                    mgr_d_valid_i <= 0;
                end

                30: begin
                    $display("--- Test 3: Manager Probe B to Client 2 ---");
                    mgr_b_valid_i <= 1;
                    mgr_b_dest_i <= 2; // Target Client 2
                    mgr_b_address_i <= 64'h2000;
                    
                    cli_b_ready_i[2] <= 1;
                end
                31: begin
                    if (cli_b_valid_o[2] && cli_b_address_o[2*ADDR_W +: ADDR_W] == 64'h2000)
                        $display("PASS: Client 2 received B probe");
                    else
                        $display("FAIL: Client 2 B check. v=%b addr=%h", cli_b_valid_o[2], cli_b_address_o[2*ADDR_W +: ADDR_W]);
                    
                    mgr_b_valid_i <= 0;
                end

                40: begin
                    $display("All tests completed");
                    $finish;
                end
            endcase
        end
    end

endmodule
