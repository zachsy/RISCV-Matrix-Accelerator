# Overview
## Independent Variables
    Array size N ∈ {2×2, 4×4, 8×8, 12×12, 16×16}
    Dataflow ∈ {weight-stationary, output-stationary}
    Precision ∈ {INT4, INT8, INT16}

## Dependent Variables
    DSP utilization
    $F_{max}$
    Latency
    Resource Cost.


## Constants
    FPGA Board: Arty A7 100T XC7A100TCSG324-1
    Toolchain: Vivado version 2026.1.
    Target clock constraint: fixed at 150MHz for all configs, applied via XDC.
    Implementation strategy: Default, identical for all configs.
    Seed: 5 seeds (1, 2, 3, 4, 5) will be tested for each configuration for reproducibility.

## Hypothesis

1. **Resource utilization (DSP/LUT vs. N).**
    If array size $N$ grows from 2 to 16, then DSP usage scales as $O(N^2)$ until it saturates at the 240-slice limit, forcing LUT usage to spike sharply at $N=16$ because the XC7A100T contains 240 DSP48E1 slices (DS180). The tool must build overflow PEs from LUTs. While DSP utilization will not be affected by precision, LUT utilization will. This means at $N = 16$ resource utilization will be expected to vary signicantly depending on data width but will have little effect for smaller $N$.
    Tested by: line plot of DSP and LUT utilization vs. $N$.

2. **Clock Freduency (Fmax vs. N).**
    $F_{max}$ is roughly flat for smal $N$ and drops sharply at $N = 16$ because the XC7A100T contains 240 DSP48E1 slices (DS180) so the synthesis tool must build the rest of the PEs using LUTs which intrudecs physical rounting delays into the critical path. 
    Tested by: line graph of $F_{max} vs. $N$.

3. **Latency (Clock Cycles vs. Array Size)**
    If array Size $N$ increases, then the total clock-cycle latency will increase linearly at roughly $4N$ because a larger systolic array requires a longer structural pipeline, taking more clock cyles to compute the systolic array.
    Tested by: line graph of clock cycles vs $N$.

4. **Pareto Frontier (Latency vs. Resource Cost)t**
    If array size, precision, and workload are held constant and the dataflow switches from weight-stationary to output-stationary, then total FF usage will be nearly equal between the two. OS will consume modestly more LUTs, because it requires a draining to extract the computed array, whereas WS results exit the array bottom without a deditcated drain network. This LUT gap is expected to widen with precision, since the drain datapath scales with SUM_W. However, OS's inter-PE buses are only DATA_W-wide versus WS's SUM_W-wide partial-sum buses, which could reduce OS routing/logic and shrink or reverse the gap. 
    Tested by: FF and LUT series on the resource-vs-N plot, plus the WS/OS point separation on the Pareto scatter.