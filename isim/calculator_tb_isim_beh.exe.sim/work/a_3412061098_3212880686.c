/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/abraham/Desktop/test/calculator/reg_file.vhdl";



static void work_a_3412061098_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7616);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 7618);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 7620);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 4872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(30, ng0);

LAB15:    t2 = (t0 + 4760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(31, ng0);
    t12 = (t0 + 2312U);
    t13 = *((char **)t12);
    t12 = (t0 + 4872);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB6:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 4872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 4872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 4760);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_3412061098_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 7622);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 7624);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 7626);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 4936);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(35, ng0);

LAB15:    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 2312U);
    t13 = *((char **)t12);
    t12 = (t0 + 4936);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB6:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 4936);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 4936);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 4776);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_3412061098_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1352U);
    t11 = *((char **)t4);
    t4 = (t0 + 7628);
    t13 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t13 = 0;

LAB16:    if (t13 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 7630);
    t1 = 1;
    if (2U == 2U)
        goto LAB22;

LAB23:    t1 = 0;

LAB24:    if (t1 != 0)
        goto LAB20;

LAB21:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 7632);
    t1 = 1;
    if (2U == 2U)
        goto LAB30;

LAB31:    t1 = 0;

LAB32:    if (t1 != 0)
        goto LAB28;

LAB29:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 7634);
    t1 = 1;
    if (2U == 2U)
        goto LAB38;

LAB39:    t1 = 0;

LAB40:    if (t1 != 0)
        goto LAB36;

LAB37:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(47, ng0);
    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t17 = (t0 + 5000);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 8U);
    xsi_driver_first_trans_fast(t17);
    goto LAB12;

LAB14:    t14 = 0;

LAB17:    if (t14 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t15 = (t11 + t14);
    t16 = (t4 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB15;

LAB19:    t14 = (t14 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(49, ng0);
    t12 = (t0 + 1512U);
    t15 = *((char **)t12);
    t12 = (t0 + 5064);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB12;

LAB22:    t14 = 0;

LAB25:    if (t14 < 2U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t8 = (t4 + t14);
    t11 = (t2 + t14);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB23;

LAB27:    t14 = (t14 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(51, ng0);
    t12 = (t0 + 1512U);
    t15 = *((char **)t12);
    t12 = (t0 + 5128);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB12;

LAB30:    t14 = 0;

LAB33:    if (t14 < 2U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t8 = (t4 + t14);
    t11 = (t2 + t14);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB31;

LAB35:    t14 = (t14 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(53, ng0);
    t12 = (t0 + 1512U);
    t15 = *((char **)t12);
    t12 = (t0 + 5192);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB12;

LAB38:    t14 = 0;

LAB41:    if (t14 < 2U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t8 = (t4 + t14);
    t11 = (t2 + t14);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB39;

LAB43:    t14 = (t14 + 1);
    goto LAB41;

}


extern void work_a_3412061098_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3412061098_3212880686_p_0,(void *)work_a_3412061098_3212880686_p_1,(void *)work_a_3412061098_3212880686_p_2};
	xsi_register_didat("work_a_3412061098_3212880686", "isim/calculator_tb_isim_beh.exe.sim/work/a_3412061098_3212880686.didat");
	xsi_register_executes(pe);
}
