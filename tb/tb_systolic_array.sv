module tb_systolic_array();

    localparam int N = 4;

    logic               clk, reset, load_weight;
    logic [7:0]         a_in      [N];
    logic [31:0]        sum_in    [N];
    logic [7:0]         weight_in [N];
    logic [7:0]         a_out     [N];  
    logic [31:0]        sum_out   [N];


    integer             cycle;
    integer             errors;

    // Golden-model storage
    logic [7:0]         A_mat        [N][N];
    logic [7:0]         W_mat        [N][N];
    logic [31:0]        C_expected   [N][N];

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
        cycle = 0; errors = 0;
        reset = 1; load_weight = 0;
        #22; reset = 0;
    end

    // Driver
    always @(posedge clk) begin
        if (~reset) begin
            if (cycle < N) begin
                load_weight <= 1;
                for(int c = 0; c < N; c++) begin
                    weight_in[c] <= W_mat[N-1-cycle][c];
                end
            end 
            else if (cycle >=N && cycle < 2*N) begin
                for (int r = 0; r < N; r++) begin
                    a_in[r] <= A_mat[r][cycle - N];
                end
            end
            else begin
                for (int r = 0; r < N; r++) begin
                    a_in[r] <= 8'b0;
                end
            end
            cycle <= cycle + 1;
        end
    end

    // Scoreboard
    always @(negedge clk) begin
        if (~reset) begin
            if (cycle >= 2*N && cycle < 4*N - 1) begin 
                for (int c = 0; c < N; c++) begin
                    int r;
                    r = cycle - 2*N - c;
                    if (r >= 0 && r < N) begin
                        if (sum_out[c] !== C_expected[r][c]) begin
                            $display("Error at Cycle %0d: Row %0d, Col %0d", cycle, r, c);
                            $display("  Expected: %h", C_expected[r][c]);
                            $display("  Got:      %h", sum_out[c]);
                            errors = errors + 1;
                        end
                    end
                end

                //End of simulation check
                if (cycle == 4*N - 2) begin
                    if (errors == 0)
                        $display("SUCCESS: All %0d tests completed perfectly!", cycle);
                    else
                        $display("FAILURE: %0d tests completed with %0d errors.", cycle, errors);
                    
                    $finish;
                end
            end
        end
    end

endmodule