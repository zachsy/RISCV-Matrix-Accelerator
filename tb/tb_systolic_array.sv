module tb_systolic_array();

    localparam int N = 4;
    localparam int num_tests = 1000;

    logic               clk, reset, load_weight;
    logic [7:0]         a_in      [N];
    logic [31:0]        sum_in    [N];
    logic [7:0]         weight_in [N];
    logic [7:0]         a_out     [N];  
    logic [31:0]        sum_out   [N];


    integer             cycle;
    integer             errors;
    integer             test;

    // Golden-model storage
    logic [7:0]         A_mat        [num_tests][N][N];
    logic [7:0]         W_mat        [num_tests][N][N];
    logic [31:0]        C_expected   [num_tests][N][N];

    systolic_array #(.N(N)) dut (
        .clk(clk), .reset(reset), .load_weight(load_weight),
        .a_in(a_in), .sum_in(sum_in), .weight_in(weight_in),
        .a_out(a_out), .sum_out(sum_out)
    );

    // Clock
    always begin
        clk = 1; #5; clk = 0; #5;
    end

    // Reset + init
    initial begin
        $readmemh("sim/A.tv", A_mat);
        $readmemh("sim/W.tv", W_mat);
        $readmemh("sim/C.tv", C_expected);

        $dumpfile("sim/systolic_waves.vcd");
        $dumpvars(0, tb_systolic_array);

        for (int i = 0; i < N; i++) begin
            sum_in[i] = 32'd0;
        end

        cycle = 0; errors = 0; test = 0;
        reset = 1; load_weight = 0;
        #22; reset = 0;
    end

    // Driver
    always @(posedge clk) begin
        if (~reset) begin
            if (cycle < N) begin
                load_weight <= 1;
                for (int c = 0; c < N; c++)
                    weight_in[c] <= W_mat[test][N-1-cycle][c];
            end
            else if (cycle < 2*N) begin
                load_weight <= 0;
                for (int r = 0; r < N; r++)
                    a_in[r] <= A_mat[test][cycle - N][r];
            end
            else begin
                load_weight <= 0;
                for (int r = 0; r < N; r++)
                    a_in[r] <= 8'b0;
            end
            cycle <= cycle + 1;
        end
    end

    // Scoreboard
    always @(negedge clk) begin
        if (~reset) begin
            if (cycle >= 2*N + 1 && cycle <= 4*N - 1) begin
                for (int c = 0; c < N; c++) begin
                    int r;
                    r = cycle - (2*N + 1) - c;
                    if (r >= 0 && r < N) begin
                        if (sum_out[c] !== C_expected[test][r][c]) begin
                            $display("Error at Test %0d, Cycle %0d: Row %0d, Col %0d", test, cycle, r, c);
                            $display("  Expected: %h", C_expected[test][r][c]);
                            $display("  Got:      %h", sum_out[c]);
                            errors = errors + 1;
                        end
                    end
                end

                if (cycle == 4*N - 1) begin
                    if(test == num_tests - 1) begin
                        if (errors == 0)
                            $display("SUCCESS: All tests completed perfectly!");
                        else
                            $display("FAILURE: completed with %0d errors.", errors);
                        $finish;
                    end
                    else begin
                        test <= test + 1;
                        cycle <= 0;
                    end
                end
            end
        end
    end

endmodule