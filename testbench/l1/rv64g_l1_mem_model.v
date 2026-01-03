// Verilog-2001 simple memory model for 64-bit data, 8-byte beats
`timescale 1ns/100ps

module rv64g_l1_mem_model (
	input              clk_i,
	input              rst_ni,

	// Host (cache) to memory
	input              req_i,
	input              we_i,
	input      [7:0]   be_i,
	input      [63:0]  addr_i,
	input      [63:0]  wdata_i,

	// Memory to host
	output             gnt_o,
	output reg         rvalid_o,
	output reg [63:0]  rdata_o
);

	// Always accept requests immediately
	assign gnt_o = req_i;


	// Simple memory array: 64-bit words, 16K entries (enough for test)
	reg [63:0] mem [0:16383];
	reg pending_read_q;
	reg [63:0] last_addr_q;
	reg [7:0] last_be_q;
	reg [63:0] last_wdata_q;


	   integer i;
	   always @(posedge clk_i or negedge rst_ni) begin
		   if (!rst_ni) begin
			   pending_read_q <= 1'b0;
			   last_addr_q    <= 64'd0;
			   last_be_q      <= 8'd0;
			   last_wdata_q   <= 64'd0;
			   rvalid_o       <= 1'b0;
			   rdata_o        <= 64'd0;
			   // Initialize memory to zero
			   for (i = 0; i < 16384; i = i + 1) mem[i] <= 64'd0;
		   end else begin
			   rvalid_o <= 1'b0;
			   // Write operation (byte enables)
			   if (req_i && we_i && gnt_o) begin
				   for (i = 0; i < 8; i = i + 1) begin
					   if (be_i[i])
						   mem[addr_i[16:3]][8*i +: 8] <= wdata_i[8*i +: 8];
				   end
			   end
			   // Read operation
			   if (req_i && !we_i && gnt_o) begin
				   pending_read_q <= 1'b1;
				   last_addr_q    <= addr_i;
			   end else begin
				   pending_read_q <= 1'b0;
			   end
			   if (pending_read_q) begin
				   rvalid_o <= 1'b1;
				   rdata_o  <= mem[last_addr_q[16:3]];
			   end
		   end
	   end

endmodule


