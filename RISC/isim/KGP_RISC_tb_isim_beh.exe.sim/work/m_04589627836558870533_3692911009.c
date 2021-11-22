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
static const char *ng0 = "/home/shashwat/Desktop/coa_final_copy2/branch.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};



static void Initial_17_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(17, ng0);

LAB2:    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 10, 0LL);
    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_22_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4208);
    *((int *)t2) = 1;
    t3 = (t0 + 3920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB160;

LAB157:    if (t16 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t6) = 1;

LAB160:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB168;

LAB165:    if (t16 != 0)
        goto LAB167;

LAB166:    *((unsigned int *)t6) = 1;

LAB168:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(202, ng0);

LAB219:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB171:
LAB163:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);

LAB13:    xsi_set_current_line(27, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB17;

LAB14:    if (t40 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t28) = 1;

LAB17:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB25;

LAB22:    if (t16 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB42;

LAB39:    if (t16 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB59;

LAB56:    if (t16 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB76;

LAB73:    if (t16 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB76:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB93;

LAB90:    if (t16 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t6) = 1;

LAB93:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB110;

LAB107:    if (t16 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t6) = 1;

LAB110:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB127;

LAB124:    if (t16 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t6) = 1;

LAB127:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB135;

LAB132:    if (t16 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t6) = 1;

LAB135:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB143;

LAB140:    if (t16 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t6) = 1;

LAB143:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB151;

LAB148:    if (t16 != 0)
        goto LAB150;

LAB149:    *((unsigned int *)t6) = 1;

LAB151:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB152;

LAB153:    xsi_set_current_line(136, ng0);

LAB156:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB154:
LAB146:
LAB138:
LAB130:
LAB113:
LAB96:
LAB79:
LAB62:
LAB45:
LAB28:
LAB20:    goto LAB12;

LAB16:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(28, ng0);

LAB21:    xsi_set_current_line(29, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB24:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(33, ng0);

LAB29:    xsi_set_current_line(34, ng0);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB33;

LAB30:    if (t40 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t28) = 1;

LAB33:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(40, ng0);

LAB38:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB36:    goto LAB28;

LAB32:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(35, ng0);

LAB37:    xsi_set_current_line(36, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB36;

LAB41:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(46, ng0);

LAB46:    xsi_set_current_line(47, ng0);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB50;

LAB47:    if (t40 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t28) = 1;

LAB50:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(53, ng0);

LAB55:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB53:    goto LAB45;

LAB49:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(48, ng0);

LAB54:    xsi_set_current_line(49, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB58:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(59, ng0);

LAB63:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB67;

LAB64:    if (t40 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t28) = 1;

LAB67:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(66, ng0);

LAB72:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB70:    goto LAB62;

LAB66:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(61, ng0);

LAB71:    xsi_set_current_line(62, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB70;

LAB75:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(72, ng0);

LAB80:    xsi_set_current_line(73, ng0);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB84;

LAB81:    if (t40 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t28) = 1;

LAB84:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(79, ng0);

LAB89:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB87:    goto LAB79;

LAB83:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(74, ng0);

LAB88:    xsi_set_current_line(75, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB87;

LAB92:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(85, ng0);

LAB97:    xsi_set_current_line(86, ng0);
    t26 = (t0 + 1848U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB101;

LAB98:    if (t40 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t28) = 1;

LAB101:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(92, ng0);

LAB106:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB104:    goto LAB96;

LAB100:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(87, ng0);

LAB105:    xsi_set_current_line(88, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB104;

LAB109:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(98, ng0);

LAB114:    xsi_set_current_line(99, ng0);
    t26 = (t0 + 1848U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB118;

LAB115:    if (t40 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t28) = 1;

LAB118:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(105, ng0);

LAB123:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB121:    goto LAB113;

LAB117:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(100, ng0);

LAB122:    xsi_set_current_line(101, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB121;

LAB126:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(111, ng0);

LAB131:    xsi_set_current_line(113, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 0);
    *((unsigned int *)t26) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1023U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 1023U);
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB130;

LAB134:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(118, ng0);

LAB139:    xsi_set_current_line(120, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 0);
    *((unsigned int *)t26) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1023U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 1023U);
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB138;

LAB142:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB143;

LAB144:    xsi_set_current_line(125, ng0);

LAB147:    xsi_set_current_line(126, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 0);
    *((unsigned int *)t26) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1023U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 1023U);
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memcpy(t6, t3, 8);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 32, 0LL);
    goto LAB146;

LAB150:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB151;

LAB152:    xsi_set_current_line(131, ng0);

LAB155:    xsi_set_current_line(132, ng0);
    t26 = (t0 + 2728);
    t27 = (t26 + 56U);
    t29 = *((char **)t27);
    memset(t28, 0, 8);
    t30 = (t28 + 4);
    t43 = (t29 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (t31 >> 0);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t43);
    t34 = (t33 >> 0);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1023U);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t36 & 1023U);
    t44 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t44, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB154;

LAB159:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(143, ng0);

LAB164:    xsi_set_current_line(144, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 0);
    *((unsigned int *)t26) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1023U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 1023U);
    t30 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t30, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB163;

LAB167:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB168;

LAB169:    xsi_set_current_line(150, ng0);

LAB172:    xsi_set_current_line(152, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB176;

LAB173:    if (t40 != 0)
        goto LAB175;

LAB174:    *((unsigned int *)t28) = 1;

LAB176:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB177;

LAB178:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB189;

LAB186:    if (t16 != 0)
        goto LAB188;

LAB187:    *((unsigned int *)t6) = 1;

LAB189:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB190;

LAB191:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB202;

LAB199:    if (t16 != 0)
        goto LAB201;

LAB200:    *((unsigned int *)t6) = 1;

LAB202:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB203;

LAB204:    xsi_set_current_line(195, ng0);

LAB218:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB205:
LAB192:
LAB179:    goto LAB171;

LAB175:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB176;

LAB177:    xsi_set_current_line(153, ng0);

LAB180:    xsi_set_current_line(154, ng0);
    t51 = (t0 + 1848U);
    t52 = *((char **)t51);
    t51 = (t52 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB181;

LAB182:    xsi_set_current_line(160, ng0);

LAB185:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB183:    goto LAB179;

LAB181:    xsi_set_current_line(155, ng0);

LAB184:    xsi_set_current_line(156, ng0);
    t53 = (t0 + 1368U);
    t60 = *((char **)t53);
    memset(t50, 0, 8);
    t53 = (t50 + 4);
    t61 = (t60 + 4);
    t59 = *((unsigned int *)t60);
    t62 = (t59 >> 0);
    *((unsigned int *)t50) = t62;
    t63 = *((unsigned int *)t61);
    t64 = (t63 >> 0);
    *((unsigned int *)t53) = t64;
    t65 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t65 & 1023U);
    t66 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t66 & 1023U);
    t67 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t67, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB183;

LAB188:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB189;

LAB190:    xsi_set_current_line(167, ng0);

LAB193:    xsi_set_current_line(168, ng0);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = (t27 + 4);
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = *((unsigned int *)t27);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB194;

LAB195:    xsi_set_current_line(174, ng0);

LAB198:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB196:    goto LAB192;

LAB194:    xsi_set_current_line(169, ng0);

LAB197:    xsi_set_current_line(170, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t43 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 0);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t43);
    t39 = (t38 >> 0);
    *((unsigned int *)t29) = t39;
    t40 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t40 & 1023U);
    t41 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t41 & 1023U);
    t44 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t44, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB196;

LAB201:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB202;

LAB203:    xsi_set_current_line(181, ng0);

LAB206:    xsi_set_current_line(182, ng0);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t27 + 4);
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = *((unsigned int *)t27);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB210;

LAB208:    if (*((unsigned int *)t26) == 0)
        goto LAB207;

LAB209:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;

LAB210:    t30 = (t28 + 4);
    t43 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (~(t36));
    *((unsigned int *)t28) = t37;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB212;

LAB211:    t42 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t42 & 1U);
    t45 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t45 & 1U);
    t44 = (t28 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (t48 & t47);
    t54 = (t49 != 0);
    if (t54 > 0)
        goto LAB213;

LAB214:    xsi_set_current_line(188, ng0);

LAB217:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB215:    goto LAB205;

LAB207:    *((unsigned int *)t28) = 1;
    goto LAB210;

LAB212:    t38 = *((unsigned int *)t28);
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t28) = (t38 | t39);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t43);
    *((unsigned int *)t30) = (t40 | t41);
    goto LAB211;

LAB213:    xsi_set_current_line(183, ng0);

LAB216:    xsi_set_current_line(184, ng0);
    t51 = (t0 + 1368U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 0);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 0);
    *((unsigned int *)t51) = t58;
    t59 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t59 & 1023U);
    t62 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t62 & 1023U);
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t50, 0, 0, 10, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB215;

}


extern void work_m_04589627836558870533_3692911009_init()
{
	static char *pe[] = {(void *)Initial_17_0,(void *)Always_22_1};
	xsi_register_didat("work_m_04589627836558870533_3692911009", "isim/KGP_RISC_tb_isim_beh.exe.sim/work/m_04589627836558870533_3692911009.didat");
	xsi_register_executes(pe);
}
