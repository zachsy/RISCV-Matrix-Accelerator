module tb_alu();
    logic        clk, reset;
    logic [31:0] a, b;
    logic [3:0]  alu_control; 
    logic [31:0] result, expected_result;
    logic        zero, expected_zero;

    // Array for test vectors
    logic [31:0]  vectornum, errors;
    logic [103:0] testvectors [0:1249];

    alu dut (
    .result(result), 
    .zero(zero), 
    .a(a), 
    .b(b), 
    .alu_control(alu_control)
    );



    // Clock
    always begin
        clk = 1; #5; clk = 0; #5;
    end

    initial begin
        $readmemh("alu_tests.tv", testvectors); 

        $dumpfile("waves.vcd");
        $dumpvars(0, tb_alu);

        vectornum = 0; errors = 0;
        reset = 1; #22; reset = 0;
    end

    always @(posedge clk) begin
        #1; {a, b, alu_control, expected_result, expected_zero} <= testvectors[vectornum][103:3];

    end

    always @(negedge clk)
        if (~reset) begin
            if (result !== expected_result) begin
                $display("Error: inputs %b", {a, b, alu_control});
                $display(" outputs = %b (%b expected)", result, expected_result);
                errors <= errors + 1;
            end
            if (zero !== expected_zero) begin
                $display("Error: inputs %b", {a, b, alu_control});
                $display(" outputs = %b (%b expected)", zero, expected_zero);
                errors <= errors + 1;
            end
            vectornum <= vectornum + 1;
            if (vectornum == 1250) begin
                $display ("%d tests completed with %d errors", vectornum, errors);
                $finish;
            end
        end
endmodule
