// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolic_array.h for the primary calling header

#include "Vtb_systolic_array__pch.h"

VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0(Vtb_systolic_array___024root* vlSelf);
VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1(Vtb_systolic_array___024root* vlSelf);

void Vtb_systolic_array___024root___eval_initial(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 8, 16080, 0, "sim/A.tv"s,  &(vlSelfRef.tb_systolic_array__DOT__A_mat)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 16080, 0, "sim/W.tv"s,  &(vlSelfRef.tb_systolic_array__DOT__W_mat)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 16080, 0, "sim/C.tv"s,  &(vlSelfRef.tb_systolic_array__DOT__C_expected)
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile("sim/systolic_waves.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_systolic_array__DOT__sum_in[0U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__sum_in[1U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__sum_in[2U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__sum_in[3U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__cycle = 0U;
    vlSelfRef.tb_systolic_array__DOT__errors = 0U;
    vlSelfRef.tb_systolic_array__DOT__test = 0U;
    vlSelfRef.tb_systolic_array__DOT__reset = 1U;
    vlSelfRef.tb_systolic_array__DOT__load_weight = 0U;
    vlSelfRef.tb_systolic_array__DOT__total_cycles = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                         nullptr, "tb/tb_systolic_array.sv", 
                                         55);
    vlSelfRef.tb_systolic_array__DOT__reset = 0U;
    co_return;
}

VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.tb_systolic_array__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_systolic_array.sv", 
                                             37);
        vlSelfRef.tb_systolic_array__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_systolic_array.sv", 
                                             37);
    }
    co_return;
}

void Vtb_systolic_array___024root___eval_triggers_vec__act(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_triggers_vec__act\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_systolic_array__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_systolic_array__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 
        = vlSelfRef.tb_systolic_array__DOT__clk;
}

bool Vtb_systolic_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_systolic_array___024root___act_sequent__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___act_sequent__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[3U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[0U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][0U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[1U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][1U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[2U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][2U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[3U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][3U];
}

void Vtb_systolic_array___024root___eval_act(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_act\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_systolic_array___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_systolic_array___024root___nba_sequent__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___nba_sequent__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_systolic_array__DOT__load_weight;
    __Vdly__tb_systolic_array__DOT__load_weight = 0;
    CData/*0:0*/ __VdlyMask__tb_systolic_array__DOT__load_weight;
    __VdlyMask__tb_systolic_array__DOT__load_weight = 0;
    IData/*31:0*/ __Vdly__tb_systolic_array__DOT__test;
    __Vdly__tb_systolic_array__DOT__test = 0;
    IData/*31:0*/ __VdlyMask__tb_systolic_array__DOT__test;
    __VdlyMask__tb_systolic_array__DOT__test = 0;
    IData/*31:0*/ __Vdly__tb_systolic_array__DOT__cycle;
    __Vdly__tb_systolic_array__DOT__cycle = 0;
    IData/*31:0*/ __VdlyMask__tb_systolic_array__DOT__cycle;
    __VdlyMask__tb_systolic_array__DOT__cycle = 0;
    IData/*31:0*/ __Vdly__tb_systolic_array__DOT__total_cycles;
    __Vdly__tb_systolic_array__DOT__total_cycles = 0;
    IData/*31:0*/ __VdlyMask__tb_systolic_array__DOT__total_cycles;
    __VdlyMask__tb_systolic_array__DOT__total_cycles = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__weight_in__v0;
    __VdlyVal__tb_systolic_array__DOT__weight_in__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_systolic_array__DOT__weight_in__v0;
    __VdlySet__tb_systolic_array__DOT__weight_in__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__weight_in__v1;
    __VdlyVal__tb_systolic_array__DOT__weight_in__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__weight_in__v2;
    __VdlyVal__tb_systolic_array__DOT__weight_in__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__weight_in__v3;
    __VdlyVal__tb_systolic_array__DOT__weight_in__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__a_in__v0;
    __VdlyVal__tb_systolic_array__DOT__a_in__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_systolic_array__DOT__a_in__v0;
    __VdlySet__tb_systolic_array__DOT__a_in__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__a_in__v1;
    __VdlyVal__tb_systolic_array__DOT__a_in__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__a_in__v2;
    __VdlyVal__tb_systolic_array__DOT__a_in__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__a_in__v3;
    __VdlyVal__tb_systolic_array__DOT__a_in__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_systolic_array__DOT__a_in__v4;
    __VdlySet__tb_systolic_array__DOT__a_in__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v0;
    __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v12;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v12;
    __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v12 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v13;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v13 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v14;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v14 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v15;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v15 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v16;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v16 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v17;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v17 = 0;
    CData/*7:0*/ __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v18;
    __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v18 = 0;
    // Body
    __VdlySet__tb_systolic_array__DOT__a_in__v0 = 0U;
    __VdlySet__tb_systolic_array__DOT__a_in__v4 = 0U;
    __VdlySet__tb_systolic_array__DOT__weight_in__v0 = 0U;
    __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v0 = 0U;
    __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v12 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_systolic_array__DOT__reset)))) {
        __Vdly__tb_systolic_array__DOT__total_cycles 
            = ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__total_cycles);
        __VdlyMask__tb_systolic_array__DOT__total_cycles = 0xffffffffU;
        if (VL_GTS_III(32, 4U, vlSelfRef.tb_systolic_array__DOT__cycle)) {
            __Vdly__tb_systolic_array__DOT__load_weight = 1U;
            __VdlyMask__tb_systolic_array__DOT__load_weight = 1U;
            __VdlyVal__tb_systolic_array__DOT__weight_in__v0 
                = vlSelfRef.tb_systolic_array__DOT__W_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & ((IData)(3U) - vlSelfRef.tb_systolic_array__DOT__cycle))][0U];
            __VdlySet__tb_systolic_array__DOT__weight_in__v0 = 1U;
            __VdlyVal__tb_systolic_array__DOT__weight_in__v1 
                = vlSelfRef.tb_systolic_array__DOT__W_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & ((IData)(3U) - vlSelfRef.tb_systolic_array__DOT__cycle))][1U];
            __VdlyVal__tb_systolic_array__DOT__weight_in__v2 
                = vlSelfRef.tb_systolic_array__DOT__W_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & ((IData)(3U) - vlSelfRef.tb_systolic_array__DOT__cycle))][2U];
            __VdlyVal__tb_systolic_array__DOT__weight_in__v3 
                = vlSelfRef.tb_systolic_array__DOT__W_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & ((IData)(3U) - vlSelfRef.tb_systolic_array__DOT__cycle))][3U];
        } else if (VL_GTS_III(32, 8U, vlSelfRef.tb_systolic_array__DOT__cycle)) {
            __Vdly__tb_systolic_array__DOT__load_weight = 0U;
            __VdlyMask__tb_systolic_array__DOT__load_weight = 1U;
            __VdlyVal__tb_systolic_array__DOT__a_in__v0 
                = vlSelfRef.tb_systolic_array__DOT__A_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__cycle)][0U];
            __VdlySet__tb_systolic_array__DOT__a_in__v0 = 1U;
            __VdlyVal__tb_systolic_array__DOT__a_in__v1 
                = vlSelfRef.tb_systolic_array__DOT__A_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__cycle)][1U];
            __VdlyVal__tb_systolic_array__DOT__a_in__v2 
                = vlSelfRef.tb_systolic_array__DOT__A_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__cycle)][2U];
            __VdlyVal__tb_systolic_array__DOT__a_in__v3 
                = vlSelfRef.tb_systolic_array__DOT__A_mat
                [((0x03ecU >= (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test))
                   ? (0x000003ffU & vlSelfRef.tb_systolic_array__DOT__test)
                   : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__cycle)][3U];
        } else {
            __Vdly__tb_systolic_array__DOT__load_weight = 0U;
            __VdlyMask__tb_systolic_array__DOT__load_weight = 1U;
            __VdlySet__tb_systolic_array__DOT__a_in__v4 = 1U;
        }
        if ((0x0000000fU == vlSelfRef.tb_systolic_array__DOT__cycle)) {
            __Vdly__tb_systolic_array__DOT__test = 
                ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__test);
            __VdlyMask__tb_systolic_array__DOT__test = 0xffffffffU;
            __Vdly__tb_systolic_array__DOT__cycle = 0U;
        } else {
            __Vdly__tb_systolic_array__DOT__cycle = 
                ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__cycle);
        }
        __VdlyMask__tb_systolic_array__DOT__cycle = 0xffffffffU;
    }
    if (vlSelfRef.tb_systolic_array__DOT__reset) {
        __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v0 = 1U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = 0U;
    } else {
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v12 
            = vlSelfRef.tb_systolic_array__DOT__a_in[0U];
        __VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v12 = 1U;
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v13 
            = vlSelfRef.tb_systolic_array__DOT__a_in[1U];
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v14 
            = vlSelfRef.tb_systolic_array__DOT__a_in[2U];
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v15 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][0U];
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v16 
            = vlSelfRef.tb_systolic_array__DOT__a_in[3U];
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v17 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][0U];
        __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v18 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][0U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][1U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][2U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][3U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][0U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][1U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][2U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][3U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][0U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][1U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][2U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][3U] 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U]), 
                             VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))));
        if (vlSelfRef.tb_systolic_array__DOT__load_weight) {
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][0U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][1U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][2U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][3U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][0U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][1U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][2U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][3U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][0U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][1U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][2U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][3U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][0U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][1U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][2U];
            vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg 
                = vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][3U];
        }
    }
    vlSelfRef.tb_systolic_array__DOT__total_cycles 
        = ((__Vdly__tb_systolic_array__DOT__total_cycles 
            & __VdlyMask__tb_systolic_array__DOT__total_cycles) 
           | (vlSelfRef.tb_systolic_array__DOT__total_cycles 
              & (~ __VdlyMask__tb_systolic_array__DOT__total_cycles)));
    __VdlyMask__tb_systolic_array__DOT__total_cycles = 0U;
    vlSelfRef.tb_systolic_array__DOT__cycle = ((__Vdly__tb_systolic_array__DOT__cycle 
                                                & __VdlyMask__tb_systolic_array__DOT__cycle) 
                                               | (vlSelfRef.tb_systolic_array__DOT__cycle 
                                                  & (~ __VdlyMask__tb_systolic_array__DOT__cycle)));
    __VdlyMask__tb_systolic_array__DOT__cycle = 0U;
    vlSelfRef.tb_systolic_array__DOT__test = ((__Vdly__tb_systolic_array__DOT__test 
                                               & __VdlyMask__tb_systolic_array__DOT__test) 
                                              | (vlSelfRef.tb_systolic_array__DOT__test 
                                                 & (~ __VdlyMask__tb_systolic_array__DOT__test)));
    __VdlyMask__tb_systolic_array__DOT__test = 0U;
    if (__VdlySet__tb_systolic_array__DOT__weight_in__v0) {
        vlSelfRef.tb_systolic_array__DOT__weight_in[0U] 
            = __VdlyVal__tb_systolic_array__DOT__weight_in__v0;
        vlSelfRef.tb_systolic_array__DOT__weight_in[1U] 
            = __VdlyVal__tb_systolic_array__DOT__weight_in__v1;
        vlSelfRef.tb_systolic_array__DOT__weight_in[2U] 
            = __VdlyVal__tb_systolic_array__DOT__weight_in__v2;
        vlSelfRef.tb_systolic_array__DOT__weight_in[3U] 
            = __VdlyVal__tb_systolic_array__DOT__weight_in__v3;
    }
    if (__VdlySet__tb_systolic_array__DOT__a_in__v0) {
        vlSelfRef.tb_systolic_array__DOT__a_in[0U] 
            = __VdlyVal__tb_systolic_array__DOT__a_in__v0;
        vlSelfRef.tb_systolic_array__DOT__a_in[1U] 
            = __VdlyVal__tb_systolic_array__DOT__a_in__v1;
        vlSelfRef.tb_systolic_array__DOT__a_in[2U] 
            = __VdlyVal__tb_systolic_array__DOT__a_in__v2;
        vlSelfRef.tb_systolic_array__DOT__a_in[3U] 
            = __VdlyVal__tb_systolic_array__DOT__a_in__v3;
    }
    if (__VdlySet__tb_systolic_array__DOT__a_in__v4) {
        vlSelfRef.tb_systolic_array__DOT__a_in[0U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__a_in[1U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__a_in[2U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__a_in[3U] = 0U;
    }
    if (__VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v0) {
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[0U][0U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[0U][1U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[0U][2U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[1U][0U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[1U][1U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[1U][2U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][0U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][1U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][2U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][0U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][1U] = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][2U] = 0U;
    }
    if (__VdlySet__tb_systolic_array__DOT__dut__DOT__skew_reg__v12) {
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[0U][0U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v12;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[1U][0U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v13;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][0U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v14;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][1U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v15;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][0U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v16;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][1U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v17;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][2U] 
            = __VdlyVal__tb_systolic_array__DOT__dut__DOT__skew_reg__v18;
    }
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_in[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[1U][0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__a_out[0U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U];
    vlSelfRef.tb_systolic_array__DOT__a_out[1U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U];
    vlSelfRef.tb_systolic_array__DOT__a_out[2U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U];
    vlSelfRef.tb_systolic_array__DOT__a_out[3U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U];
    vlSelfRef.tb_systolic_array__DOT__load_weight = 
        (((IData)(__Vdly__tb_systolic_array__DOT__load_weight) 
          & (IData)(__VdlyMask__tb_systolic_array__DOT__load_weight)) 
         | ((IData)(vlSelfRef.tb_systolic_array__DOT__load_weight) 
            & (~ (IData)(__VdlyMask__tb_systolic_array__DOT__load_weight))));
    __VdlyMask__tb_systolic_array__DOT__load_weight = 0U;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__weight_in[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__weight_in[1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__weight_in[2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__weight_in[3U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg;
}

void Vtb_systolic_array___024root___nba_sequent__TOP__1(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___nba_sequent__TOP__1\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_systolic_array__DOT__errors;
    __Vdly__tb_systolic_array__DOT__errors = 0;
    IData/*31:0*/ __VdlyMask__tb_systolic_array__DOT__errors;
    __VdlyMask__tb_systolic_array__DOT__errors = 0;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_systolic_array__DOT__reset)))) {
        if ((VL_LTES_III(32, 9U, vlSelfRef.tb_systolic_array__DOT__cycle) 
             & VL_GTES_III(32, 0x0000000fU, vlSelfRef.tb_systolic_array__DOT__cycle))) {
            vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
                = (vlSelfRef.tb_systolic_array__DOT__cycle 
                   - (IData)(9U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r) 
                 & VL_GTS_III(32, 4U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r))) {
                if (VL_UNLIKELY(((vlSelfRef.tb_systolic_array__DOT__sum_out[0U] 
                                  != vlSelfRef.tb_systolic_array__DOT__C_expected
                                  [((0x03ecU >= (0x000003ffU 
                                                 & vlSelfRef.tb_systolic_array__DOT__test))
                                     ? (0x000003ffU 
                                        & vlSelfRef.tb_systolic_array__DOT__test)
                                     : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][0U])))) {
                    VL_WRITEF_NX("Error at Test %0d, Cycle %0d: Row %0d, Col 0\n",3
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__test
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__cycle
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r);
                    __Vdly__tb_systolic_array__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__errors);
                    __VdlyMask__tb_systolic_array__DOT__errors = 0xffffffffU;
                    VL_WRITEF_NX("  Expected: %h\n  Got:      %h\n",2
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__C_expected
                                 [((0x03ecU >= (0x000003ffU 
                                                & vlSelfRef.tb_systolic_array__DOT__test))
                                    ? (0x000003ffU 
                                       & vlSelfRef.tb_systolic_array__DOT__test)
                                    : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][0U]
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__sum_out[0U]);
                }
            }
            vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
                = ((vlSelfRef.tb_systolic_array__DOT__cycle 
                    - (IData)(9U)) - (IData)(1U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r) 
                 & VL_GTS_III(32, 4U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r))) {
                if (VL_UNLIKELY(((vlSelfRef.tb_systolic_array__DOT__sum_out[1U] 
                                  != vlSelfRef.tb_systolic_array__DOT__C_expected
                                  [((0x03ecU >= (0x000003ffU 
                                                 & vlSelfRef.tb_systolic_array__DOT__test))
                                     ? (0x000003ffU 
                                        & vlSelfRef.tb_systolic_array__DOT__test)
                                     : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][1U])))) {
                    VL_WRITEF_NX("Error at Test %0d, Cycle %0d: Row %0d, Col 1\n",3
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__test
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__cycle
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r);
                    __Vdly__tb_systolic_array__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__errors);
                    __VdlyMask__tb_systolic_array__DOT__errors = 0xffffffffU;
                    VL_WRITEF_NX("  Expected: %h\n  Got:      %h\n",2
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__C_expected
                                 [((0x03ecU >= (0x000003ffU 
                                                & vlSelfRef.tb_systolic_array__DOT__test))
                                    ? (0x000003ffU 
                                       & vlSelfRef.tb_systolic_array__DOT__test)
                                    : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][1U]
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__sum_out[1U]);
                }
            }
            vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
                = ((vlSelfRef.tb_systolic_array__DOT__cycle 
                    - (IData)(9U)) - (IData)(2U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r) 
                 & VL_GTS_III(32, 4U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r))) {
                if (VL_UNLIKELY(((vlSelfRef.tb_systolic_array__DOT__sum_out[2U] 
                                  != vlSelfRef.tb_systolic_array__DOT__C_expected
                                  [((0x03ecU >= (0x000003ffU 
                                                 & vlSelfRef.tb_systolic_array__DOT__test))
                                     ? (0x000003ffU 
                                        & vlSelfRef.tb_systolic_array__DOT__test)
                                     : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][2U])))) {
                    VL_WRITEF_NX("Error at Test %0d, Cycle %0d: Row %0d, Col 2\n",3
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__test
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__cycle
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r);
                    __Vdly__tb_systolic_array__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__errors);
                    __VdlyMask__tb_systolic_array__DOT__errors = 0xffffffffU;
                    VL_WRITEF_NX("  Expected: %h\n  Got:      %h\n",2
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__C_expected
                                 [((0x03ecU >= (0x000003ffU 
                                                & vlSelfRef.tb_systolic_array__DOT__test))
                                    ? (0x000003ffU 
                                       & vlSelfRef.tb_systolic_array__DOT__test)
                                    : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][2U]
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__sum_out[2U]);
                }
            }
            vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
                = ((vlSelfRef.tb_systolic_array__DOT__cycle 
                    - (IData)(9U)) - (IData)(3U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r) 
                 & VL_GTS_III(32, 4U, vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r))) {
                if (VL_UNLIKELY(((vlSelfRef.tb_systolic_array__DOT__sum_out[3U] 
                                  != vlSelfRef.tb_systolic_array__DOT__C_expected
                                  [((0x03ecU >= (0x000003ffU 
                                                 & vlSelfRef.tb_systolic_array__DOT__test))
                                     ? (0x000003ffU 
                                        & vlSelfRef.tb_systolic_array__DOT__test)
                                     : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][3U])))) {
                    VL_WRITEF_NX("Error at Test %0d, Cycle %0d: Row %0d, Col 3\n",3
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__test
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__cycle
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r);
                    __Vdly__tb_systolic_array__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_systolic_array__DOT__errors);
                    __VdlyMask__tb_systolic_array__DOT__errors = 0xffffffffU;
                    VL_WRITEF_NX("  Expected: %h\n  Got:      %h\n",2
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__C_expected
                                 [((0x03ecU >= (0x000003ffU 
                                                & vlSelfRef.tb_systolic_array__DOT__test))
                                    ? (0x000003ffU 
                                       & vlSelfRef.tb_systolic_array__DOT__test)
                                    : 0U)][(3U & vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)][3U]
                                 , '#',32,vlSelfRef.tb_systolic_array__DOT__sum_out[3U]);
                }
            }
            if ((0x0000000fU == vlSelfRef.tb_systolic_array__DOT__cycle)) {
                if (VL_UNLIKELY(((0x000003ecU == vlSelfRef.tb_systolic_array__DOT__test)))) {
                    VL_WRITEF_NX("%0d Total cycles completed. %0d Cycles-per-matrix\n",2
                                 , '~',32,vlSelfRef.tb_systolic_array__DOT__total_cycles
                                 , '~',32,VL_DIVS_III(32, vlSelfRef.tb_systolic_array__DOT__total_cycles, (IData)(0x000003edU)));
                    if ((0U == vlSelfRef.tb_systolic_array__DOT__errors)) {
                        VL_WRITEF_NX("SUCCESS: All tests completed perfectly!\n",0);
                    } else {
                        VL_WRITEF_NX("FAILURE: completed with %0d errors.\n",1
                                     , '~',32,vlSelfRef.tb_systolic_array__DOT__errors);
                    }
                    VL_FINISH_MT("tb/tb_systolic_array.sv", 111, "");
                }
            }
        }
    }
    vlSelfRef.tb_systolic_array__DOT__errors = ((__Vdly__tb_systolic_array__DOT__errors 
                                                 & __VdlyMask__tb_systolic_array__DOT__errors) 
                                                | (vlSelfRef.tb_systolic_array__DOT__errors 
                                                   & (~ __VdlyMask__tb_systolic_array__DOT__errors)));
    __VdlyMask__tb_systolic_array__DOT__errors = 0U;
}

void Vtb_systolic_array___024root___nba_sequent__TOP__2(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___nba_sequent__TOP__2\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[3U];
}

void Vtb_systolic_array___024root___nba_comb__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___nba_comb__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_array__DOT__sum_out[0U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][0U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[1U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][1U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[2U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][2U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[3U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][3U];
}

void Vtb_systolic_array___024root___eval_nba(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_nba\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_systolic_array___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_systolic_array___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_systolic_array___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_systolic_array___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_systolic_array___024root___timing_resume(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___timing_resume\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_systolic_array___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_systolic_array___024root___eval_phase__act(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__act\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_systolic_array___024root___eval_triggers_vec__act(vlSelf);
    Vtb_systolic_array___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolic_array___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_systolic_array___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_systolic_array___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_systolic_array___024root___timing_resume(vlSelf);
        Vtb_systolic_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_systolic_array___024root___eval_phase__inact(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__inact\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_systolic_array.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_systolic_array___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_systolic_array___024root___eval_phase__nba(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__nba\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_systolic_array___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_systolic_array___024root___eval_nba(vlSelf);
        Vtb_systolic_array___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_systolic_array___024root___eval(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolic_array___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_systolic_array.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_systolic_array.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_systolic_array___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_systolic_array.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_systolic_array___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_systolic_array___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_systolic_array___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_systolic_array___024root___eval_debug_assertions(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_debug_assertions\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
