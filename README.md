# RISCV-Matrix-Accelerator
A parameterized weight-stationary systolic-array matrix accelerator and RISC-V datapath primitives in SystemVerilog, verified against a NumPy golden model.

- Designed a parameterized N×N weight-stationary systolic array in SystemVerilog that computes signed integer matrix multiplication C = A×W, scalable at compile time via N, DATA_W, and SUM_W.
- Implemented the core RISC-V datapath primitives. 32-bit ALU supporting ten operations (ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU) and a 32×32 register file with two async read ports, one sync write port, and the hardwired-x0 convention.
- Built a reproducible golden-model verification flow. NumPy reference generating edge cases plus 1000+ randomized matrices, checked bit-exact by self-checking SystemVerilog testbenches, under Verilator.
---
# Overview
This project is divided into two tracks: A Matrix Accelerator Block and a RISC-V ALU

## 1. Matrix Accelerator
Computes matrix multiplication (C = A x W) with a weight-stationary and output-stationary systolic array.
- [Processing Element](rtl/accelerator/pe_ws.sv): Each PE performs a Multiply-Accumulate (MAC) operation. It holds a DATA_W-bit weight, multiplies it by an incoming DATA_W-bit activation, adds it to a SUM_W-bit incoming partial sum, and pipelines the results to adjacent PEs.

- [Systolic Array](rtl/accelerator/array_ws.sv): An N×N grid of PEs. It staggers the incoming rows of Matrix A, in order for data to arrive at the correct PEs at the exact right clock cycle.

- Scalable: The parameter N allows the array to be synthesized for any size (e.g., 4x4, 16x16) at compile time. The paramater DATA_W and SUM_W allows the data to scale to any bit width.

## 2. RISC-V ALU
- [ALU](rtl/riscv_core/alu.sv): A 32-bit Arithmetic Logic Unit supporting standard RISC-V operations (ADD, SUB, AND, OR, XOR, Shifts, and Set-Less-Than).

- [Register File](rtl/riscv_core/regfile.sv): A 32-word by 32-bit synchronous memory block with two asynchronous read ports and one synchronous write port, adhering strictly to the RISC-V x0 zero-register specification.

# Verification
This project uses a Golden Model Verification strategy
- [Python Scripts](scripts/): Generates thousands (default 1000) of randomized test cases along with edge cases. These test cases are calculated in python. Test cases and output are formatted into hex data into (sim/*.tv).
- [SystemVerilog Testbenches](tb/): Self-checking testbenches read the vectors, feed them into the hardware simulation, and compares the outputs to expected python results.

# Quick Start

## Prerequisites:
- Python 3 (with numpy)
- Verilator
- GTKWave (optional, for viewing .vcd waveforms)

## Quickstart
1. Clone the repository
``` 
git clone https://github.com/zachsy/RISCV-Matrix-Accelerator.git
```
2. Run the simulation using Verlitor
```
make simulate
```
3. View the waveforms
```
make waves
```

# In progress:
1. Vivado Tcl scripts to automate the batched synthesis and implementation runs across different seeds.
2. Extracting and plotting DSP/FF utilization, $F_{max}$ and latency.
See more in the [Experiment Plan](docs/experiment_plan.md).