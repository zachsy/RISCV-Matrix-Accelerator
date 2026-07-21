module regfile (
    input  logic        clk,
    input  logic        we3,
    input  logic [4:0]  a1,
    input  logic [4:0]  a2,
    input  logic [4:0]  a3,
    input  logic [31:0] wd3,
    output logic [31:0] rd1, 
    output logic [31:0] rd2 
);

    logic [31:0] rf [31:0];
    
    //TODO: Combinational Reads (Outputs rd1 and rd2)
    //TODO: Synchronous Write (Writing wd3 into a3)

endmodule
