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
    
    assign rd1 = (a1 == 0) ? 32'b0 : rf[a1];
    assign rd2 = (a2 == 0) ? 32'b0 : rf[a2];

    always_ff @(posedge clk) begin
        if (we3 == 1 && a3 != 0) begin
            rf[a3] <= wd3;
        end
    end

endmodule
