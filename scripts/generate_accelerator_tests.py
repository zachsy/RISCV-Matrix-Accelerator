import numpy as np
import argparse

# Parser
p = argparse.ArgumentParser()
p.add_argument("--rand_tests", type=int, default=1000)
p.add_argument("--n",         type=int, default=4)
p.add_argument("--data_w",    type=int, default=8)
args = p.parse_args()

# Knobs
rand_tests = args.rand_tests
arraySize = args.n
data_W    = args.data_w

sum_W = 2*data_W + (arraySize - 1).bit_length()     # Bit width of accumulated C elements (must be >= 2*DATA_W + ceil(log2(N)))

def fileWrite(mat, file, bitWidth):
    hexWidth = (bitWidth + 3) // 4
    mask = (1 << bitWidth) - 1
    for val in mat.flatten():
        file.write(f"{val & mask:0{hexWidth}x} ")
    file.write("\n")
    return

with open("sim/A.tv", "w") as fa, open("sim/W.tv", "w") as fw, open("sim/C.tv", "w") as fc:
    total_tests = 0

    # Identity Matrix:
    a = np.identity(arraySize, dtype = int)
    w = np.identity(arraySize, dtype = int)
    c = np.identity(arraySize, dtype = int)

    fileWrite(a, fa, data_W)
    fileWrite(w, fw, data_W)
    fileWrite(c, fc, sum_W)

    total_tests += 1


    # Zero Matrix, One Matrix, Min and Max Matrix: 
    test_values = [-(2**(data_W-1)), 0, 1, ((2**(data_W-1)) - 1)]

    for test_val in test_values:
        a = np.full((arraySize, arraySize), test_val)
        w = np.full((arraySize, arraySize), test_val)
        c = a @ w

        fileWrite(a, fa, data_W)
        fileWrite(w, fw, data_W)
        fileWrite(c, fc, sum_W)

        total_tests += 1
    

    # Random Testing:     
    for _ in range(rand_tests):
        a = np.random.randint(-(2**(data_W-1)), (2**(data_W-1)), (arraySize, arraySize))
        w = np.random.randint(-(2**(data_W-1)), (2**(data_W-1)), (arraySize, arraySize))

        c = a @ w

        fileWrite(a, fa, data_W)
        fileWrite(w, fw, data_W)
        fileWrite(c, fc, sum_W)

        total_tests += 1

print(f"Successfully generated {total_tests} matrices!")
