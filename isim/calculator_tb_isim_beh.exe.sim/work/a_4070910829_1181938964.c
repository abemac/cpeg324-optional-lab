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
static const char *ng0 = "/home/abraham/Desktop/test/calculator/calculator_tb.vhdl";
extern char *STD_TEXTIO;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);


static void work_a_4070910829_1181938964_p_0(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    int64 t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t3 = (999 * 1LL);
    t2 = (t0 + 2448);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB8:    t2 = (t0 + 1816U);
    t4 = std_textio_endfile(t2);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(47, ng0);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(36, ng0);
    t6 = (t0 + 3024);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2448);
    t6 = (t0 + 1816U);
    t7 = (t0 + 1992U);
    std_textio_readline(STD_TEXTIO, t2, t6, t7);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2448);
    t6 = (t0 + 1992U);
    t7 = (t0 + 1488U);
    t8 = *((char **)t7);
    t7 = (t0 + 5032U);
    std_textio_read4(STD_TEXTIO, t2, t6, t8, t7);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1488U);
    t6 = *((char **)t2);
    t2 = (t0 + 5032U);
    t7 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t11, t6, t2);
    t8 = (t11 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t4 = (8U != t12);
    if (t4 == 1)
        goto LAB12;

LAB13:    t9 = (t0 + 3088);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(43, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 2448);
    xsi_process_wait(t2, t3);

LAB16:    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:;
LAB12:    xsi_size_not_matching(8U, t12, 0);
    goto LAB13;

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3024);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(45, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 2448);
    xsi_process_wait(t2, t3);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

LAB18:    goto LAB8;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    goto LAB2;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

}


extern void work_a_4070910829_1181938964_init()
{
	static char *pe[] = {(void *)work_a_4070910829_1181938964_p_0};
	xsi_register_didat("work_a_4070910829_1181938964", "isim/calculator_tb_isim_beh.exe.sim/work/a_4070910829_1181938964.didat");
	xsi_register_executes(pe);
}
