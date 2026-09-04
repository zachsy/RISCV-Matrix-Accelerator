import csv
import os
import argparse

PERIOD_NS   = 6.667
lut         = None
flip_flop   = None
bram        = None
dsp         = None
fmax_mhz    = None

with open("build/util.rpt", "r") as util:
    for line in util:
        if "|" not in line:
            continue
        if "Slice LUTs" in line:    
            parts = line.split("|")
            lut = int(parts[2].strip())
        if "Register as Flip Flop" in line:
            parts = line.split("|")
            flip_flop = int(parts[2].strip())
        if "Block RAM Tile" in line:
            parts = line.split("|")
            bram = int(parts[2].strip())
        if "DSPs" in line:
            parts = line.split("|")
            dsp = int(parts[2].strip())

with open("build/timing.rpt", "r") as timing:
    for line in timing: 
        if "Worst Slack" in line:
            parts = line.split()
            wns = float(parts[7].strip().rstrip("ns,"))   # '-0.531ns,' -> -0.531
            fmax_mhz  = 1000.0 / (PERIOD_NS - wns)
            break


p = argparse.ArgumentParser()
p.add_argument("--n",           type=int, default=4)
p.add_argument("--data_w",      type=int, default=8)
p.add_argument("--sum_w",       type=int, default=18)
p.add_argument("--dataflow",    type=str, default='ws')
args = p.parse_args()

n   = args.n
data_W      = args.data_w
sum_W       = args.sum_w
dataflow    = args.dataflow

data_order = [n, dataflow, data_W, sum_W, lut, flip_flop, bram, dsp, fmax_mhz]

with open('results/results.csv', 'a', newline='') as r:
    writer = csv.writer(r)

    if os.stat('results/results.csv').st_size == 0:
        writer.writerow(['Array Size', 'Dataflow', 'Data Width', 'Sum Width', 'LUTs', 'FFs', 'BRAM', 'DSP', 'Fmax (MHz)'])

    writer.writerow(data_order)