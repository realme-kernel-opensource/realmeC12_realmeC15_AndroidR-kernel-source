/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */
#ifndef __MEDIATEK_BOOT_MODE_H
#define __MEDIATEK_BOOT_MODE_H

#define BOOT_CHARGER	1
#define BOOT_RECOVERY	2
#define BOOT_BOOTLOADER	3
#define BOOT_DM_VERITY	4
#define BOOT_KPOC	5
#define BOOT_DDR_RSVD	6
#define BOOT_META	7
#define BOOT_RPMBPK	8
//#ifdef VENDOR_EDIT
//wanghao@BSP.Kernel.Driver,2020/5/20, add for reboot mode
#define BOOT_KERNEL		9
#define BOOT_SILENCE		10
#define BOOT_SAU		11
#define BOOT_SAFE		12
//Hong.Zhang@TECH.BSP.Stability.Agingtest, 2020/07/22, Add for agingtest
//#ifdef OPLUS_FEATURE_AGINGTEST
#define BOOT_AGINGTEST		13
//#endif /*OPLUS_FEATURE_AGINGTEST*/
#define BOOT_FACTORY		14
//#enddif

#endif
