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
static const char *ng0 = "/home/shashwat/Desktop/coa_final_copy2/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {1U, 0U, 0U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};



static void Cont_17_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 5616);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 5504);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_18_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 5680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 5520);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_26_2(char *t0)
{
    char t13[8];
    char t27[8];
    char t28[8];
    char t47[16];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    int t46;
    char *t49;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5536);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(165, ng0);

LAB335:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);

LAB16:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);

LAB17:    t7 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 4, t7, 4);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB15;

LAB9:    xsi_set_current_line(116, ng0);

LAB227:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);

LAB228:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t9 == 1)
        goto LAB229;

LAB230:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB231;

LAB232:
LAB233:    goto LAB15;

LAB11:    xsi_set_current_line(142, ng0);

LAB272:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);

LAB273:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 4, t3, 4);
    if (t9 == 1)
        goto LAB274;

LAB275:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB276;

LAB277:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t6 == 1)
        goto LAB278;

LAB279:
LAB280:    goto LAB15;

LAB18:    xsi_set_current_line(32, ng0);

LAB39:    xsi_set_current_line(33, ng0);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    t10 = (t0 + 1208U);
    t12 = *((char **)t10);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t10 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB40;

LAB41:
LAB42:    t26 = (t0 + 2728);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB46;

LAB43:    if (t25 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t28) = 1;

LAB46:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t17) != 0)
        goto LAB49;

LAB50:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB51;

LAB52:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t26) > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t27) > 0)
        goto LAB57;

LAB58:    memcpy(t13, t44, 8);

LAB59:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB20:    xsi_set_current_line(40, ng0);

LAB60:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t3 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = (t13 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    *((unsigned int *)t11) = t21;
    t22 = *((unsigned int *)t11);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB61;

LAB62:
LAB63:    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB67;

LAB64:    if (t25 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t28) = 1;

LAB67:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t17) != 0)
        goto LAB70;

LAB71:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB72;

LAB73:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t26) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t27) > 0)
        goto LAB78;

LAB79:    memcpy(t13, t44, 8);

LAB80:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB22:    xsi_set_current_line(48, ng0);

LAB81:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB83;

LAB82:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 4294967295U);
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t13, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB87;

LAB84:    if (t25 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t28) = 1;

LAB87:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t17) != 0)
        goto LAB90;

LAB91:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB92;

LAB93:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t26) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t27) > 0)
        goto LAB98;

LAB99:    memcpy(t13, t44, 8);

LAB100:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_get_part_select_value(t47, 33, t4, 31, 0);
    t7 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t48, 33, t47, 33, t7, 33);
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t48, 0, 0, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t48, 32, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB24:    xsi_set_current_line(57, ng0);

LAB101:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB105;

LAB102:    if (t25 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t28) = 1;

LAB105:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t17) != 0)
        goto LAB108;

LAB109:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB110;

LAB111:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t26) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t27) > 0)
        goto LAB116;

LAB117:    memcpy(t13, t44, 8);

LAB118:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB26:    xsi_set_current_line(70, ng0);

LAB119:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 32, t4, 32, t7, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB123;

LAB120:    if (t25 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t28) = 1;

LAB123:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t17) != 0)
        goto LAB126;

LAB127:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB128;

LAB129:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t26) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t27) > 0)
        goto LAB134;

LAB135:    memcpy(t13, t44, 8);

LAB136:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB28:    xsi_set_current_line(77, ng0);

LAB137:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 32, t4, 32, t7, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB141;

LAB138:    if (t25 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t28) = 1;

LAB141:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t17) != 0)
        goto LAB144;

LAB145:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB146;

LAB147:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t26) > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t27) > 0)
        goto LAB152;

LAB153:    memcpy(t13, t44, 8);

LAB154:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB30:    xsi_set_current_line(84, ng0);

LAB155:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 32, t4, 32, t7, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB159;

LAB156:    if (t25 != 0)
        goto LAB158;

LAB157:    *((unsigned int *)t28) = 1;

LAB159:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t17) != 0)
        goto LAB162;

LAB163:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB164;

LAB165:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t26) > 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t27) > 0)
        goto LAB170;

LAB171:    memcpy(t13, t44, 8);

LAB172:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB32:    xsi_set_current_line(91, ng0);

LAB173:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 32, t4, 32, t7, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB177;

LAB174:    if (t25 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t28) = 1;

LAB177:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t17) != 0)
        goto LAB180;

LAB181:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB182;

LAB183:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t26) > 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t27) > 0)
        goto LAB188;

LAB189:    memcpy(t13, t44, 8);

LAB190:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB34:    xsi_set_current_line(98, ng0);

LAB191:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 32, t4, 32, t7, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB195;

LAB192:    if (t25 != 0)
        goto LAB194;

LAB193:    *((unsigned int *)t28) = 1;

LAB195:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t17) != 0)
        goto LAB198;

LAB199:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB200;

LAB201:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB202;

LAB203:    if (*((unsigned int *)t26) > 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t27) > 0)
        goto LAB206;

LAB207:    memcpy(t13, t44, 8);

LAB208:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB36:    xsi_set_current_line(105, ng0);

LAB209:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 32, t4, 32, t7, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t4 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB213;

LAB210:    if (t25 != 0)
        goto LAB212;

LAB211:    *((unsigned int *)t28) = 1;

LAB213:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB214;

LAB215:    if (*((unsigned int *)t17) != 0)
        goto LAB216;

LAB217:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB218;

LAB219:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t26) > 0)
        goto LAB222;

LAB223:    if (*((unsigned int *)t27) > 0)
        goto LAB224;

LAB225:    memcpy(t13, t44, 8);

LAB226:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t10 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t7) = t21;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB38;

LAB40:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t24 | t25);
    goto LAB42;

LAB45:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t27) = 1;
    goto LAB50;

LAB49:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB50;

LAB51:    t39 = ((char*)((ng3)));
    goto LAB52;

LAB53:    t44 = ((char*)((ng1)));
    goto LAB54;

LAB55:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB59;

LAB57:    memcpy(t13, t39, 8);
    goto LAB59;

LAB61:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t24 | t25);
    t12 = (t4 + 4);
    t17 = (t7 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (~(t33));
    t35 = *((unsigned int *)t17);
    t36 = (~(t35));
    t9 = (t30 & t32);
    t46 = (t34 & t36);
    t37 = (~(t9));
    t38 = (~(t46));
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t37);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t38);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t37);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t38);
    goto LAB63;

LAB66:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t27) = 1;
    goto LAB71;

LAB70:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB71;

LAB72:    t39 = ((char*)((ng3)));
    goto LAB73;

LAB74:    t44 = ((char*)((ng1)));
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB80;

LAB78:    memcpy(t13, t39, 8);
    goto LAB80;

LAB83:    t16 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t13) = (t16 | t19);
    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t20 | t21);
    goto LAB82;

LAB86:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t27) = 1;
    goto LAB91;

LAB90:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB91;

LAB92:    t39 = ((char*)((ng3)));
    goto LAB93;

LAB94:    t44 = ((char*)((ng1)));
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB100;

LAB98:    memcpy(t13, t39, 8);
    goto LAB100;

LAB104:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB105;

LAB106:    *((unsigned int *)t27) = 1;
    goto LAB109;

LAB108:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB109;

LAB110:    t39 = ((char*)((ng3)));
    goto LAB111;

LAB112:    t44 = ((char*)((ng1)));
    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB118;

LAB116:    memcpy(t13, t39, 8);
    goto LAB118;

LAB122:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t27) = 1;
    goto LAB127;

LAB126:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB127;

LAB128:    t39 = ((char*)((ng3)));
    goto LAB129;

LAB130:    t44 = ((char*)((ng1)));
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB136;

LAB134:    memcpy(t13, t39, 8);
    goto LAB136;

LAB140:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB141;

LAB142:    *((unsigned int *)t27) = 1;
    goto LAB145;

LAB144:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB145;

LAB146:    t39 = ((char*)((ng3)));
    goto LAB147;

LAB148:    t44 = ((char*)((ng1)));
    goto LAB149;

LAB150:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB154;

LAB152:    memcpy(t13, t39, 8);
    goto LAB154;

LAB158:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB159;

LAB160:    *((unsigned int *)t27) = 1;
    goto LAB163;

LAB162:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB163;

LAB164:    t39 = ((char*)((ng3)));
    goto LAB165;

LAB166:    t44 = ((char*)((ng1)));
    goto LAB167;

LAB168:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB172;

LAB170:    memcpy(t13, t39, 8);
    goto LAB172;

LAB176:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB177;

LAB178:    *((unsigned int *)t27) = 1;
    goto LAB181;

LAB180:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB181;

LAB182:    t39 = ((char*)((ng3)));
    goto LAB183;

LAB184:    t44 = ((char*)((ng1)));
    goto LAB185;

LAB186:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB190;

LAB188:    memcpy(t13, t39, 8);
    goto LAB190;

LAB194:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB195;

LAB196:    *((unsigned int *)t27) = 1;
    goto LAB199;

LAB198:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB199;

LAB200:    t39 = ((char*)((ng3)));
    goto LAB201;

LAB202:    t44 = ((char*)((ng1)));
    goto LAB203;

LAB204:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB208;

LAB206:    memcpy(t13, t39, 8);
    goto LAB208;

LAB212:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB213;

LAB214:    *((unsigned int *)t27) = 1;
    goto LAB217;

LAB216:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB217;

LAB218:    t39 = ((char*)((ng3)));
    goto LAB219;

LAB220:    t44 = ((char*)((ng1)));
    goto LAB221;

LAB222:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB226;

LAB224:    memcpy(t13, t39, 8);
    goto LAB226;

LAB229:    xsi_set_current_line(118, ng0);

LAB234:    xsi_set_current_line(119, ng0);
    t7 = (t0 + 1208U);
    t10 = *((char **)t7);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t11 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB236;

LAB235:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 4294967295U);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB240;

LAB237:    if (t25 != 0)
        goto LAB239;

LAB238:    *((unsigned int *)t28) = 1;

LAB240:    memset(t27, 0, 8);
    t18 = (t28 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t18) != 0)
        goto LAB243;

LAB244:    t39 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB245;

LAB246:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB247;

LAB248:    if (*((unsigned int *)t39) > 0)
        goto LAB249;

LAB250:    if (*((unsigned int *)t27) > 0)
        goto LAB251;

LAB252:    memcpy(t13, t45, 8);

LAB253:    t49 = (t0 + 3048);
    xsi_vlogvar_assign_value(t49, t13, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    xsi_vlog_get_part_select_value(t47, 33, t7, 31, 0);
    t10 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t48, 33, t47, 33, t10, 33);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t48, 0, 0, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t48, 32, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t10) = t21;
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    goto LAB233;

LAB231:    xsi_set_current_line(127, ng0);

LAB254:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 32);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB258;

LAB255:    if (t25 != 0)
        goto LAB257;

LAB256:    *((unsigned int *)t28) = 1;

LAB258:    memset(t27, 0, 8);
    t18 = (t28 + 4);
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB259;

LAB260:    if (*((unsigned int *)t18) != 0)
        goto LAB261;

LAB262:    t39 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB263;

LAB264:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB265;

LAB266:    if (*((unsigned int *)t39) > 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t27) > 0)
        goto LAB269;

LAB270:    memcpy(t13, t45, 8);

LAB271:    t49 = (t0 + 3048);
    xsi_vlogvar_assign_value(t49, t13, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t11 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t10) = t21;
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    goto LAB233;

LAB236:    t16 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB235;

LAB239:    t17 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB240;

LAB241:    *((unsigned int *)t27) = 1;
    goto LAB244;

LAB243:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB244;

LAB245:    t44 = ((char*)((ng3)));
    goto LAB246;

LAB247:    t45 = ((char*)((ng1)));
    goto LAB248;

LAB249:    xsi_vlog_unsigned_bit_combine(t13, 1, t44, 1, t45, 1);
    goto LAB253;

LAB251:    memcpy(t13, t44, 8);
    goto LAB253;

LAB257:    t17 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB258;

LAB259:    *((unsigned int *)t27) = 1;
    goto LAB262;

LAB261:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB262;

LAB263:    t44 = ((char*)((ng3)));
    goto LAB264;

LAB265:    t45 = ((char*)((ng1)));
    goto LAB266;

LAB267:    xsi_vlog_unsigned_bit_combine(t13, 1, t44, 1, t45, 1);
    goto LAB271;

LAB269:    memcpy(t13, t44, 8);
    goto LAB271;

LAB274:    xsi_set_current_line(144, ng0);

LAB281:    xsi_set_current_line(145, ng0);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t12 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t10) = t21;
    t17 = (t0 + 3208);
    xsi_vlogvar_assign_value(t17, t13, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t3 + 4);
    t11 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB285;

LAB282:    if (t25 != 0)
        goto LAB284;

LAB283:    *((unsigned int *)t28) = 1;

LAB285:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB286;

LAB287:    if (*((unsigned int *)t17) != 0)
        goto LAB288;

LAB289:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB290;

LAB291:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB292;

LAB293:    if (*((unsigned int *)t26) > 0)
        goto LAB294;

LAB295:    if (*((unsigned int *)t27) > 0)
        goto LAB296;

LAB297:    memcpy(t13, t44, 8);

LAB298:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB280;

LAB276:    xsi_set_current_line(149, ng0);

LAB299:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 1048U);
    t10 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t3) = t21;
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t3 + 4);
    t11 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB303;

LAB300:    if (t25 != 0)
        goto LAB302;

LAB301:    *((unsigned int *)t28) = 1;

LAB303:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB304;

LAB305:    if (*((unsigned int *)t17) != 0)
        goto LAB306;

LAB307:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB308;

LAB309:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB310;

LAB311:    if (*((unsigned int *)t26) > 0)
        goto LAB312;

LAB313:    if (*((unsigned int *)t27) > 0)
        goto LAB314;

LAB315:    memcpy(t13, t44, 8);

LAB316:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB280;

LAB278:    xsi_set_current_line(154, ng0);

LAB317:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 1048U);
    t10 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t3) = t21;
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t10 = (t3 + 4);
    t11 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t29 = (~(t25));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB321;

LAB318:    if (t25 != 0)
        goto LAB320;

LAB319:    *((unsigned int *)t28) = 1;

LAB321:    memset(t27, 0, 8);
    t17 = (t28 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB322;

LAB323:    if (*((unsigned int *)t17) != 0)
        goto LAB324;

LAB325:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB326;

LAB327:    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB328;

LAB329:    if (*((unsigned int *)t26) > 0)
        goto LAB330;

LAB331:    if (*((unsigned int *)t27) > 0)
        goto LAB332;

LAB333:    memcpy(t13, t44, 8);

LAB334:    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t13, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB280;

LAB284:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB285;

LAB286:    *((unsigned int *)t27) = 1;
    goto LAB289;

LAB288:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB289;

LAB290:    t39 = ((char*)((ng3)));
    goto LAB291;

LAB292:    t44 = ((char*)((ng1)));
    goto LAB293;

LAB294:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB298;

LAB296:    memcpy(t13, t39, 8);
    goto LAB298;

LAB302:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB303;

LAB304:    *((unsigned int *)t27) = 1;
    goto LAB307;

LAB306:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB307;

LAB308:    t39 = ((char*)((ng3)));
    goto LAB309;

LAB310:    t44 = ((char*)((ng1)));
    goto LAB311;

LAB312:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB316;

LAB314:    memcpy(t13, t39, 8);
    goto LAB316;

LAB320:    t12 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB321;

LAB322:    *((unsigned int *)t27) = 1;
    goto LAB325;

LAB324:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB325;

LAB326:    t39 = ((char*)((ng3)));
    goto LAB327;

LAB328:    t44 = ((char*)((ng1)));
    goto LAB329;

LAB330:    xsi_vlog_unsigned_bit_combine(t13, 1, t39, 1, t44, 1);
    goto LAB334;

LAB332:    memcpy(t13, t39, 8);
    goto LAB334;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 5744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_08183449680387304825_0886308060_init()
{
	static char *pe[] = {(void *)Cont_17_0,(void *)Cont_18_1,(void *)Always_26_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_08183449680387304825_0886308060", "isim/KGP_RISC_tb_isim_beh.exe.sim/work/m_08183449680387304825_0886308060.didat");
	xsi_register_executes(pe);
}
