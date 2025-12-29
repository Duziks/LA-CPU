`timescale 1ns / 1ps
module sync_ram #(parameter ADDR_WIDTH = 16,
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 1 << ADDR_WIDTH) 
    (
    clk, address, rdata, wdata,  we, en
    );

  localparam NUM_BYTES = DATA_WIDTH / 8;
   input logic clk;
   input logic [ADDR_WIDTH-1:0] address;
   input logic [NUM_BYTES-1:0] we;
   input logic en;
   output logic  [DATA_WIDTH-1:0] rdata;
   input logic [DATA_WIDTH-1:0]  wdata;

   logic [DATA_WIDTH-1:0] ram[DEPTH];
genvar i;
  for (i=0; i<NUM_BYTES; i=i+1) begin
    always_ff @(posedge clk) begin
      if (we[i]&&en) 
        ram[address][i*8+:8] <= wdata[i*8+:8];
    end
  end
  always_ff @(posedge clk) begin
    if (en) rdata <= ram[address];
  end
endmodule


module inst_ram #(
    parameter ADDR_WIDTH = 18,
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 1 << ADDR_WIDTH
) (
    input  logic  clka,
    input  logic  ena,
    input  logic  [3:0] wea,
    input  logic  [ADDR_WIDTH-1:0] addra,
    input logic   [DATA_WIDTH-1:0] dina,
    output logic  [DATA_WIDTH-1:0] douta
);
  sync_ram #(
      .ADDR_WIDTH(ADDR_WIDTH),
      .DATA_WIDTH(DATA_WIDTH),
      .DEPTH(DEPTH)
  ) sync_ram (
      .clk    (clka),
      .address(addra),
      .rdata  (douta),
      .wdata  (dina),
      .we     (wea),
      .en     (ena)
  );
  initial begin
    $readmemb("./inst_ram.mif", sync_ram.ram);
  end
endmodule

module data_ram #(
    parameter ADDR_WIDTH = 16,
    parameter DATA_WIDTH = 32,
    parameter DEPTH = 1 << ADDR_WIDTH
) (
    input  logic  clka,
    input  logic  ena,
    input  logic  [3:0] wea,
    input  logic  [ADDR_WIDTH-1:0] addra,
    input  logic  [DATA_WIDTH-1:0] dina,
    output logic  [DATA_WIDTH-1:0] douta
);
  sync_ram #(
      .ADDR_WIDTH(ADDR_WIDTH),
      .DATA_WIDTH(DATA_WIDTH),
      .DEPTH(DEPTH)
  ) sync_ram (
      .clk    (clka),
      .address(addra),
      .rdata  (douta),
      .wdata  (dina),
      .we     (wea),
      .en     (ena)
  );
  initial begin
    $readmemb("./data_ram.mif", sync_ram.ram);
  end
endmodule