lassign $argv N DATA_W SUM_W DATAFLOW seed outdir

file mkdir $outdir

read_verilog rtl/accelerator/pe_$DATAFLOW.sv
read_verilog rtl/accelerator/array_$DATAFLOW.sv
read_xdc constraints/constraints.xdc

synth_design -mode out_of_context -top array_$DATAFLOW -part xc7a100tcsg324-1 -generic N=$N -generic DATA_W=$DATA_W -generic SUM_W=$SUM_W

opt_design
place_design
route_design

report_utilization    -file $outdir/util.rpt
report_timing_summary -file $outdir/timing.rpt
report_power          -file $outdir/power.rpt