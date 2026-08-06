// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_systolic_array.h for the primary calling header

#ifndef VERILATED_VTB_SYSTOLIC_ARRAY___024ROOT_H_
#define VERILATED_VTB_SYSTOLIC_ARRAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_systolic_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_systolic_array___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_systolic_array__DOT__clk;
        CData/*0:0*/ tb_systolic_array__DOT__reset;
        CData/*0:0*/ tb_systolic_array__DOT__load_weight;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*7:0*/ tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_systolic_array__DOT__cycle;
        IData/*31:0*/ tb_systolic_array__DOT__total_cycles;
        IData/*31:0*/ tb_systolic_array__DOT__errors;
        IData/*31:0*/ tb_systolic_array__DOT__test;
        IData/*31:0*/ tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
    };
    struct {
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*7:0*/, 4> tb_systolic_array__DOT__a_in;
        VlUnpacked<IData/*31:0*/, 4> tb_systolic_array__DOT__sum_in;
        VlUnpacked<CData/*7:0*/, 4> tb_systolic_array__DOT__weight_in;
        VlUnpacked<CData/*7:0*/, 4> tb_systolic_array__DOT__a_out;
        VlUnpacked<IData/*31:0*/, 4> tb_systolic_array__DOT__sum_out;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4>, 1005> tb_systolic_array__DOT__A_mat;
        VlUnpacked<VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4>, 1005> tb_systolic_array__DOT__W_mat;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>, 1005> tb_systolic_array__DOT__C_expected;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> tb_systolic_array__DOT__dut__DOT__skew_reg;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> tb_systolic_array__DOT__dut__DOT__a_wire;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> tb_systolic_array__DOT__dut__DOT__sum_wire;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 5> tb_systolic_array__DOT__dut__DOT__weight_wire;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_systolic_array__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_systolic_array___024root(Vtb_systolic_array__Syms* symsp, const char* namep);
    ~Vtb_systolic_array___024root();
    VL_UNCOPYABLE(Vtb_systolic_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
