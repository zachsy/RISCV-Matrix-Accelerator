// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolic_array.h for the primary calling header

#include "Vtb_systolic_array__pch.h"

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_static__TOP(Vtb_systolic_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_static(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_static\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_systolic_array___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 
        = vlSelfRef.tb_systolic_array__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_static__TOP(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_static__TOP\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r = 0U;
}

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_final(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_final\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_systolic_array___024root___eval_phase__stl(Vtb_systolic_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_settle(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_settle\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolic_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_systolic_array.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_systolic_array___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_triggers_vec__stl(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_triggers_vec__stl\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_systolic_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_systolic_array___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_systolic_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_systolic_array___024root___stl_sequent__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___stl_sequent__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_in[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[1U][0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[2U][1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg[3U][2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__sum_in[3U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__sum_out[0U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][0U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[1U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][1U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[2U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][2U];
    vlSelfRef.tb_systolic_array__DOT__sum_out[3U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][3U];
    vlSelfRef.tb_systolic_array__DOT__a_out[0U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U];
    vlSelfRef.tb_systolic_array__DOT__a_out[1U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U];
    vlSelfRef.tb_systolic_array__DOT__a_out[2U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U];
    vlSelfRef.tb_systolic_array__DOT__a_out[3U] = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U];
}

VL_ATTR_COLD void Vtb_systolic_array___024root____Vm_traceActivitySetAll(Vtb_systolic_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_stl(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_stl\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_systolic_array___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_systolic_array___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_systolic_array___024root___eval_phase__stl(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__stl\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_systolic_array___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolic_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_systolic_array___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_systolic_array___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_systolic_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_systolic_array___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_systolic_array.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_systolic_array.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_systolic_array___024root____Vm_traceActivitySetAll(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root____Vm_traceActivitySetAll\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_systolic_array___024root___ctor_var_reset(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___ctor_var_reset\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_systolic_array__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6379806378902927025ull);
    vlSelf->tb_systolic_array__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562044957661505644ull);
    vlSelf->tb_systolic_array__DOT__load_weight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894007506898049460ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__a_in[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15922219404265432828ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__sum_in[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2315583733477121861ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__weight_in[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18108174068828275097ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__a_out[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9307885809948271901ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__sum_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 756455212003740274ull);
    }
    vlSelf->tb_systolic_array__DOT__cycle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9221317116299756972ull);
    vlSelf->tb_systolic_array__DOT__total_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1511658953815561340ull);
    vlSelf->tb_systolic_array__DOT__errors = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10145993387375860455ull);
    vlSelf->tb_systolic_array__DOT__test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10724632631679211263ull);
    for (int __Vi0 = 0; __Vi0 < 1005; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->tb_systolic_array__DOT__A_mat[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14162221446658102241ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1005; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->tb_systolic_array__DOT__W_mat[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17730585259777936835ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1005; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->tb_systolic_array__DOT__C_expected[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14556581344444256731ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__skew_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3323326320922239035ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__a_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4672983010527496921ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__sum_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7613289474295867730ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__weight_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17006523932327023705ull);
        }
    }
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8070917694520219607ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10072260933365332796ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2645786982977306497ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4289293719189628764ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6055433575852794343ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8313089298495151712ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14707679613921443712ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8774319453328985330ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17592223736835528150ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8778119647057691887ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7403769589037653274ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1369765897357643809ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14998227036366091364ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7837150610849869197ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16293855337533456002ull);
    vlSelf->tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3272211245242853871ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
