module alu (
    input  logic [31:0] a,
    input  logic [31:0] b,
    input  logic [3:0]  alu_control,
    output logic [31:0] result,
    output logic        zero
);
    always_comb begin
        case (alu_control)
            4'b0000:    result = a + b;
            4'b1000:    result = a - b;
            4'b0111:    result = a & b;
            4'b0110:    result = a | b;
            4'b0100:    result = a ^ b;
            4'b0001:    result = a << b[4:0];
            4'b0101:    result = a >> b[4:0];
            4'b1101:    result = signed'(a) >>> b[4:0];
            4'b0010:    result = signed'(a) < signed'(b) ? 1 : 0;
            4'b0011:    result = a < b ? 1 : 0;
            default: result = 32'b0000;
        endcase
    end
    
    assign zero = (result == 32'b0);
endmodule