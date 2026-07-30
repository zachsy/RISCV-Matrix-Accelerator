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
        $readmemh("A.tv", A_mat);
        $readmemh("W.tv", W_mat);
        $readmemh("C.tv", C_expected);

        $dumpfile("systolic_waves.vcd");
        $dumpvars(0, tb_systolic_array);

        sum_in = '{default:0};
        cycle = 0; errors = 0;
        reset = 1; load_weight = 0;
        #22; reset = 0;
    end

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

endmodule