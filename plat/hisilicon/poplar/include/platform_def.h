/*
 * Copyright (c) 2017, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#include <arch.h>
#include <common_def.h>
#include <tbbr/tbbr_img_def.h>
#include "hi3798cv200.h"
#include "poplar_layout.h"		/* BL memory region sizes, etc */

#define PLATFORM_LINKER_FORMAT		"elf64-littleaarch64"
#define PLATFORM_LINKER_ARCH		aarch64

#define PLAT_ARM_CRASH_UART_BASE	PL011_UART0_BASE
#define PLAT_ARM_CRASH_UART_CLK_IN_HZ	PL011_UART0_CLK_IN_HZ
#define ARM_CONSOLE_BAUDRATE		PL011_BAUDRATE

/* Generic platform constants */
#define PLATFORM_STACK_SIZE		(0x800)

#define FIRMWARE_WELCOME_STR		"Booting Trusted Firmware\n"
#define BOOT_EMMC_NAME			"l-loader.bin"

#define PLATFORM_CACHE_LINE_SIZE	(64)
#define PLATFORM_CLUSTER_COUNT		(1)
#define PLATFORM_CORE_COUNT		(4)
#define PLATFORM_MAX_CPUS_PER_CLUSTER	(4)

/* IO framework user */
#define MAX_IO_DEVICES			(4)
#define MAX_IO_HANDLES			(4)
#define MAX_IO_BLOCK_DEVICES		(2)

/* Memory map related constants */
#define DDR_BASE			(0x00000000)
#define DDR_SIZE			(0x40000000)

#define DEVICE_BASE			(0xF0000000)
#define DEVICE_SIZE			(0x0F000000)

#define TEE_SEC_MEM_BASE		(0x70000000)
#define TEE_SEC_MEM_SIZE		(0x10000000)

#define BL_MEM_BASE			(BL1_RO_BASE)
#define BL_MEM_LIMIT			(BL31_LIMIT)
#define BL_MEM_SIZE			(BL_MEM_LIMIT - BL_MEM_BASE)

#define PLAT_ARM_NS_IMAGE_OFFSET	0x37000000

/* Page table and MMU setup constants */
#define ADDR_SPACE_SIZE			(1ull << 32)
#define MAX_XLAT_TABLES			(4)
#define MAX_MMAP_REGIONS		(16)

#define CACHE_WRITEBACK_SHIFT		(6)
#define CACHE_WRITEBACK_GRANULE		(1 << CACHE_WRITEBACK_SHIFT)

/* Power states */
#define PLAT_MAX_PWR_LVL		(MPIDR_AFFLVL1)
#define PLAT_MAX_OFF_STATE		2
#define PLAT_MAX_RET_STATE		1

/* Interrupt controller */
#define PLAT_ARM_GICD_BASE	GICD_BASE
#define PLAT_ARM_GICC_BASE	GICC_BASE

#define PLAT_ARM_G1S_IRQS	HISI_IRQ_SEC_SGI_0,  \
				HISI_IRQ_SEC_SGI_1,  \
				HISI_IRQ_SEC_SGI_2,  \
				HISI_IRQ_SEC_SGI_3,  \
				HISI_IRQ_SEC_SGI_4,  \
				HISI_IRQ_SEC_SGI_5,  \
				HISI_IRQ_SEC_SGI_6,  \
				HISI_IRQ_SEC_SGI_7,  \
				HISI_IRQ_SEC_TIMER0, \
				HISI_IRQ_SEC_TIMER1, \
				HISI_IRQ_SEC_TIMER2, \
				HISI_IRQ_SEC_TIMER3, \
				HISI_IRQ_SEC_AXI

#define PLAT_ARM_G0_IRQS

#endif /* __PLATFORM_DEF_H__ */
