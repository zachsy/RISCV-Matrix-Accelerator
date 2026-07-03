module tb_counter;
    // 1. Declare signals
    reg clk;
    reg [3:0] counter;

    // 2. Setup Waveform Dumping 
    initial begin
        $dumpfile("waveform.vcd"); // The file GTKWave will read
        $dumpvars(0, tb_counter);  // Dump all variables in this module
        
        // Initialize values
        clk = 0;
        counter = 0;

        // Stop the simulation after 100 time units
        #100 $finish;
    end

    // 3. Generate a Clock (Toggles every 5 time units)
    always #5 clk = ~clk;

    // 4. Counter Logic (Adds 1 on every positive clock edge)
    always @(posedge clk) begin
        counter <= counter + 1;
    end
endmodule