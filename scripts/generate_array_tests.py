import numpy as np


arraySize = 4
num_tests = 1000

with open("sim/A.tv", "w") as fa, open("sim/W.tv", "w") as fw, open("sim/C.tv", "w") as fc:
    total_tests = 0


    #Random Testing:     
    for _ in range(num_tests):
        a = np.random.randint(-128, 128, (arraySize, arraySize))
        w = np.random.randint(-128, 128, (arraySize, arraySize))

        c = a @ w

        a_hex = " ".join([f"{(val & 0xFF):02x}" for val in a.flatten()])
        w_hex = " ".join([f"{(val & 0xFF):02x}" for val in w.flatten()])

        c_hex = " ".join([f"{(val & 0xFF):08x}" for val in c.flatten()])

        for val in a.flatten():
            fa.write(f"{val & 0xFF:02x} ")
        fa.write("\n")
        for val in w.flatten():
            fw.write(f"{val & 0xFF:02x} ")
        fw.write("\n")
        for val in c.flatten():
            fc.write(f"{val & 0xFFFFFFFF:08x} ")
        fc.write("\n")

        total_tests += 1

print(f"Successfully generated {total_tests} matrices!")
