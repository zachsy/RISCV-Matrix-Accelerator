# RISCV-Matrix-Accelerator
A 32-bit RISC-V ALU integrated with a custom hardware Matrix Multiplication accelerator, written in SystemVerilog.

---
# Overview
This project is divided into two tracks: A RISC-V Core and a Matrix Accelerator Block

## 1. Matrix Accelerator
Computes matrix multiplication (C = A x B) with a weight-stationary systolic array.
- [Processing Element](rtl/accelerator/pe.sv): Each PE performs a Multiply-Accumulate (MAC) operation. It holds an 8-bit weight, multiplies it by an incoming 8-bit activation, adds it to a 32-bit incoming partial sum, and pipelines the results to adjacent PEs.

- [Systolic Array](rtl/accelerator/systolic_array.sv): An N×N grid of PEs. It staggers the incoming rows of Matrix A, in order for data to arrive at the correct PEs at the exact right clock cycle.

- Scalable: The parameter N allows the array to be synthesized for any size (e.g., 4x4, 16x16) at compile time.

## 2. RISC-V Core
- [ALU](rtl/riscv_core/alu.sv): A 32-bit Arithmetic Logic Unit supporting standard RISC-V operations (ADD, SUB, AND, OR, XOR, Shifts, and Set-Less-Than).

- [Register File](rtl/riscv_core/regfile.sv)): A 32-word by 32-bit synchronous memory block with two asynchronous read ports and one synchronous write port, adhering strictly to the RISC-V x0 zero-register specification.

# Verification
This project uses a Golden Model Verification strategy
- [Python Scripts](scripts/): Generates thousands (default 1000) of randomized test cases along with edge cases. These test cases are calculated in python. Test cases and output are formatted into hex data into (sim/*.tv).
- [SystemVerilog Testbenches](tb/): Self-checking testbenches read the vectors, feed them into the hardware simulation, and compares the ouputs to expected python results.

# Quick Start
---
## Prerequisites:
- Python 3 (with numpy)
- Verilator
- GTKWave (optional, for viewing .vcd waveforms)

## Running the Matrix Accelerator Simulation
1. Clone the repository
``` 
git clone https://github.com/zachsy/RISCV-Matrix-Accelerator.git
```
2. Generate the test matrices
```
python3 scripts/generate_accelerator_tests.py
```
3. Compile and run the simulation using Verilator
```
verilator --binary --timing --trace -Wall rtl/accelerator/pe.sv rtl/accelerator/systolic_array.sv tb/tb_systolic_array.sv --top-module tb_systolic_array
./obj_dir/Vtb_systolic_array
```

4. View the waveforms
```
gtkwave sim/systolic_waves.vcd
```