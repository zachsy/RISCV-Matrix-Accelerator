N			?= 4
DATA_W 		?= 8
DATAFLOW 	?= ws
RAND_TESTS 	?= 1000

NUM_TESTS := $(shell echo $$(( $(RAND_TESTS) + 5 )))

ifeq ($(DATAFLOW), ws)
	BUILD = verilator --binary --timing --trace -Wall --Mdir sim/obj_dir rtl/accelerator/pe_ws.sv rtl/accelerator/array_ws.sv tb/tb_array_ws.sv --top-module tb_array_ws
	SIM = ./sim/obj_dir/Vtb_array_ws
	WAVES = gtkwave sim/array_ws_waves.vcd
else
	BUILD = verilator --binary --timing --trace -Wall --Mdir sim/obj_dir   rtl/accelerator/pe_os.sv rtl/accelerator/array_os.sv tb/tb_array_os.sv   --top-module tb_array_os
	SIM = ./sim/obj_dir/Vtb_array_os
	WAVES = gtkwave sim/array_os_waves.vcd
endif

gen:
	python3 scripts/generate_accelerator_tests.py --n $(N) --data_w $(DATA_W) --rand_tests $(RAND_TESTS)

simulate: gen
	$(BUILD) -GN=$(N) -GDATA_W=$(DATA_W) -GNUM_TESTS=$(NUM_TESTS)
	$(SIM)

waves: 
	$(WAVES)

clean:
	rm -rf sim/obj_dir sim/*.tv sim/*.vcd