// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_systolic_array__Syms.h"


void Vtb_systolic_array___024root__trace_chg_0_sub_0(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_systolic_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_0\n"); );
    // Body
    Vtb_systolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_systolic_array___024root*>(voidSelf);
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_systolic_array___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_systolic_array___024root__trace_chg_dtype____0(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
void Vtb_systolic_array___024root__trace_chg_dtype____1(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
void Vtb_systolic_array___024root__trace_chg_dtype____2(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
void Vtb_systolic_array___024root__trace_chg_dtype____3(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4>& __VdtypeVar);
void Vtb_systolic_array___024root__trace_chg_dtype____4(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
void Vtb_systolic_array___024root__trace_chg_dtype____5(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);

void Vtb_systolic_array___024root__trace_chg_0_sub_0(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_0_sub_0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][0U]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][1U]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][2U]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][3U]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][0U]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][1U]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][2U]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][3U]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][0U]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][1U]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][2U]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][3U]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][0U]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][1U]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][2U]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[4U][3U]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U]),32);
        bufp->chgIData(oldp+21,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][0U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U]),32);
        bufp->chgIData(oldp+23,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][1U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U]),32);
        bufp->chgIData(oldp+25,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][2U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U]),32);
        bufp->chgIData(oldp+27,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[0U][3U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][0U]),32);
        bufp->chgIData(oldp+29,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][0U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][1U]),32);
        bufp->chgIData(oldp+31,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][1U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][2U]),32);
        bufp->chgIData(oldp+33,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][2U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][3U]),32);
        bufp->chgIData(oldp+35,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[1U][3U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][0U]),32);
        bufp->chgIData(oldp+37,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][0U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][1U]),32);
        bufp->chgIData(oldp+39,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][1U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][2U]),32);
        bufp->chgIData(oldp+41,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][2U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][3U]),32);
        bufp->chgIData(oldp+43,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[2U][3U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][0U]),32);
        bufp->chgIData(oldp+45,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][0U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][1U]),32);
        bufp->chgIData(oldp+47,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][1U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][2U]),32);
        bufp->chgIData(oldp+49,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][2U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg))))),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][3U]),32);
        bufp->chgIData(oldp+51,((vlSelfRef.tb_systolic_array__DOT__dut__DOT__sum_wire[3U][3U] 
                                 + VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U]), 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg))))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        Vtb_systolic_array___024root__trace_chg_dtype____0(vlSelf, bufp, 52, vlSelfRef.tb_systolic_array__DOT__a_in);
        Vtb_systolic_array___024root__trace_chg_dtype____1(vlSelf, bufp, 56, vlSelfRef.tb_systolic_array__DOT__weight_in);
        Vtb_systolic_array___024root__trace_chg_dtype____2(vlSelf, bufp, 60, vlSelfRef.tb_systolic_array__DOT__a_out);
        Vtb_systolic_array___024root__trace_chg_dtype____3(vlSelf, bufp, 64, vlSelfRef.tb_systolic_array__DOT__dut__DOT__skew_reg);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U]),8);
        bufp->chgCData(oldp+77,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U]),8);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U]),8);
        bufp->chgCData(oldp+80,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U]),8);
        bufp->chgCData(oldp+81,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U]),8);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U]),8);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U]),8);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U]),8);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U]),8);
        bufp->chgCData(oldp+86,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U]),8);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U]),8);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U]),8);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U]),8);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U]),8);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U]),8);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U]),8);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U]),8);
        bufp->chgCData(oldp+95,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U]),8);
        bufp->chgCData(oldp+96,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][0U]),8);
        bufp->chgCData(oldp+97,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][1U]),8);
        bufp->chgCData(oldp+98,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][2U]),8);
        bufp->chgCData(oldp+99,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][3U]),8);
        bufp->chgCData(oldp+100,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][0U]),8);
        bufp->chgCData(oldp+101,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][1U]),8);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][2U]),8);
        bufp->chgCData(oldp+103,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][3U]),8);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][0U]),8);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][1U]),8);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][2U]),8);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][3U]),8);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][0U]),8);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][1U]),8);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][2U]),8);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][3U]),8);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][0U]),8);
        bufp->chgCData(oldp+113,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][1U]),8);
        bufp->chgCData(oldp+114,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][2U]),8);
        bufp->chgCData(oldp+115,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[4U][3U]),8);
        bufp->chgCData(oldp+116,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U]),8);
        bufp->chgCData(oldp+117,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][0U]),8);
        bufp->chgCData(oldp+118,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+119,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+120,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+121,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U]),8);
        bufp->chgCData(oldp+122,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][1U]),8);
        bufp->chgCData(oldp+123,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+124,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U]),8);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][2U]),8);
        bufp->chgCData(oldp+128,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+129,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+130,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+131,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[0U][3U]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+134,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+135,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+136,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U]),8);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][0U]),8);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+140,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+141,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U]),8);
        bufp->chgCData(oldp+142,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][1U]),8);
        bufp->chgCData(oldp+143,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+144,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+145,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+146,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U]),8);
        bufp->chgCData(oldp+147,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][2U]),8);
        bufp->chgCData(oldp+148,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+149,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+150,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U]),8);
        bufp->chgCData(oldp+152,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[1U][3U]),8);
        bufp->chgCData(oldp+153,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+154,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+155,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+156,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U]),8);
        bufp->chgCData(oldp+157,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][0U]),8);
        bufp->chgCData(oldp+158,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+159,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+160,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+161,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U]),8);
        bufp->chgCData(oldp+162,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][1U]),8);
        bufp->chgCData(oldp+163,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+165,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+166,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U]),8);
        bufp->chgCData(oldp+167,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][2U]),8);
        bufp->chgCData(oldp+168,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+169,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+170,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+171,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U]),8);
        bufp->chgCData(oldp+172,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[2U][3U]),8);
        bufp->chgCData(oldp+173,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+174,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+175,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+176,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U]),8);
        bufp->chgCData(oldp+177,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][0U]),8);
        bufp->chgCData(oldp+178,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+179,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+180,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+181,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U]),8);
        bufp->chgCData(oldp+182,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][1U]),8);
        bufp->chgCData(oldp+183,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+184,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+185,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U]),8);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][2U]),8);
        bufp->chgCData(oldp+188,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+189,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+190,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__sum_out),32);
        bufp->chgCData(oldp+191,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U]),8);
        bufp->chgCData(oldp+192,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__weight_wire[3U][3U]),8);
        bufp->chgCData(oldp+193,(vlSelfRef.tb_systolic_array__DOT__dut__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__DOT__weight_reg),8);
        bufp->chgCData(oldp+194,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgIData(oldp+195,(vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__sum_out),32);
    }
    bufp->chgBit(oldp+196,(vlSelfRef.tb_systolic_array__DOT__clk));
    bufp->chgBit(oldp+197,(vlSelfRef.tb_systolic_array__DOT__reset));
    bufp->chgBit(oldp+198,(vlSelfRef.tb_systolic_array__DOT__load_weight));
    Vtb_systolic_array___024root__trace_chg_dtype____4(vlSelf, bufp, 199, vlSelfRef.tb_systolic_array__DOT__sum_in);
    Vtb_systolic_array___024root__trace_chg_dtype____5(vlSelf, bufp, 203, vlSelfRef.tb_systolic_array__DOT__sum_out);
    bufp->chgIData(oldp+207,(vlSelfRef.tb_systolic_array__DOT__cycle),32);
    bufp->chgIData(oldp+208,(vlSelfRef.tb_systolic_array__DOT__total_cycles),32);
    bufp->chgIData(oldp+209,(vlSelfRef.tb_systolic_array__DOT__errors),32);
    bufp->chgIData(oldp+210,(vlSelfRef.tb_systolic_array__DOT__test),32);
    bufp->chgIData(oldp+211,(vlSelfRef.tb_systolic_array__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r),32);
}

void Vtb_systolic_array___024root__trace_chg_dtype____0(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_dtype____0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
}

void Vtb_systolic_array___024root__trace_chg_dtype____1(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_dtype____1\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
}

void Vtb_systolic_array___024root__trace_chg_dtype____2(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_dtype____2\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
}

void Vtb_systolic_array___024root__trace_chg_dtype____3(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_dtype____3\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][1U]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][2U]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[1U][0U]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[1U][1U]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[1U][2U]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[2U][0U]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[2U][1U]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[2U][2U]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[3U][0U]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[3U][1U]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[3U][2U]),8);
}

void Vtb_systolic_array___024root__trace_chg_dtype____4(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_dtype____4\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vtb_systolic_array___024root__trace_chg_dtype____5(Vtb_systolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_chg_dtype____5\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vtb_systolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root__trace_cleanup\n"); );
    // Body
    Vtb_systolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_systolic_array___024root*>(voidSelf);
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
