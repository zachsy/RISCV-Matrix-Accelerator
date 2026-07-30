module tb_pe();
    logic        clk, reset, load_weight;
    logic [7:0]  a_in, weight_in;
    logic [31:0] sum_in;
    logic [7:0]  a_out;
    logic [31:0] sum_out;

    pe dut (
        .clk(clk),
        .reset(reset),
        .load_weight(load_weight),
        .a_in(a_in),
        .sum_in(sum_in),
        .weight_in(weight_in),
        .a_out(a_out),
        .sum_out(sum_out)
    );

    // Clock
    always begin
        clk = 1; #5; clk = 0; #5;
    end

    initial begin
        $dumpfile("sim/pe_waves.vcd");
        $dumpvars(0, tb_pe);

        reset = 1; load_weight = 0;
        a_in = 0; weight_in = 0; sum_in = 0;

        #20; reset = 0;

        #10;
        load_weight = 1;
        weight_in = 8'd23;

        #10;
        load_weight = 0;
        a_in = 8'd12;
        sum_in = 8'd200;

        #20;
        $finish;
    end
endmodule
