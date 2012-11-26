/*******************************************************************************
Copyright (C) Marvell International Ltd. and its affiliates

This software file (the "File") is owned and distributed by Marvell
International Ltd. and/or its affiliates ("Marvell") under the following
alternative licensing terms.  Once you have made an election to distribute the
File under one of the following license alternatives, please (i) delete this
introductory statement regarding license alternatives, (ii) delete the two
license alternatives that you have not elected to use and (iii) preserve the
Marvell copyright notice above.

********************************************************************************
Marvell Commercial License Option

If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.

********************************************************************************
Marvell GPL License Option

If you received this File from Marvell, you may opt to use, redistribute and/or
modify this File in accordance with the terms and conditions of the General
Public License Version 2, June 1991 (the "GPL License"), a copy of which is
available along with the File in the license.txt file or by writing to the Free
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 or
on the worldwide web at http://www.gnu.org/licenses/gpl.txt.

THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE IMPLIED
WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY
DISCLAIMED.  The GPL License provides additional details about this warranty
disclaimer.
********************************************************************************
Marvell BSD License Option

If you received this File from Marvell, you may opt to use, redistribute and/or
modify this File under the following licensing terms.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    *   Redistributions of source code must retain the above copyright notice,
	    this list of conditions and the following disclaimer.

    *   Redistributions in binary form must reproduce the above copyright
		notice, this list of conditions and the following disclaimer in the
		documentation and/or other materials provided with the distribution.

    *   Neither the name of Marvell nor the names of its contributors may be
		used to endorse or promote products derived from this software without
		specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*******************************************************************************/

#ifndef _INC_AXP_FREQ_H
#define _INC_AXP_FREQ_H

#if !defined(MV88F78X60_Z1)
#define MULTI_CS_MRS_SUPPORT
#endif


#define SAR_DDR3_FREQ_MASK			0xFE00000
#define SAR_CPU_FAB_GET(cpu, fab)	(((cpu & 0x7) << 21) | ((fab & 0xF) << 24))

#define MAX_CS									4

#define MIN_DIMM_ADDR							0x50
#define FAR_END_DIMM_ADDR						0x50
#define MAX_DIMM_ADDR							0x60

#define SDRAM_CS_SIZE							0xFFFFFFF
#define SDRAM_CS_BASE							0x0
#define SDRAM_DIMM_SIZE							0x80000000

#define CPU_CONFIGURATION_REG(id)				(0x21800 + (id * 0x100))
#define CPU_MRVL_ID_OFFSET						0x10
#define SAR1_CPU_CORE_MASK						0x00000018
#define SAR1_CPU_CORE_OFFSET					3

#define ECC_SUPPORT
#define NEW_FABRIC_TWSI_ADDR					0x4E
#define BUS_WIDTH_ECC_TWSI_ADDR					0x4F

#define MV_MAX_DDR3_STATIC_SIZE					50
#define MV_DDR3_MODES_NUMBER					30

/********************/
/* Registers offset */
/********************/

#define REG_SAMPLE_RESET_LOW_ADDR				0x18230
#define REG_SAMPLE_RESET_HIGH_ADDR				0x18234
#define	REG_SAMPLE_RESET_CPU_FREQ_OFFS			21
#define	REG_SAMPLE_RESET_CPU_FREQ_MASK			0x00E00000
#define	REG_SAMPLE_RESET_FAB_OFFS				24
#define	REG_SAMPLE_RESET_FAB_MASK				0xF000000
#define	REG_SAMPLE_RESET_TCLK_OFFS				28
#define	REG_SAMPLE_RESET_CPU_ARCH_OFFS			31
#define	REG_SAMPLE_RESET_HIGH_CPU_FREQ_OFFS		20


/* MISC */
#define INTER_REGS_BASE							0xD0000000

/* DDR */
#define REG_SDRAM_CONFIG_ADDR					0x1400
#define REG_SDRAM_CONFIG_MASK					0x9FFFFFFF
#define REG_SDRAM_CONFIG_RFRS_MASK				0x3FFF
#define REG_SDRAM_CONFIG_WIDTH_OFFS				15
#define REG_SDRAM_CONFIG_REGDIMM_OFFS			17
#define REG_SDRAM_CONFIG_ECC_OFFS				18
#define REG_SDRAM_CONFIG_IERR_OFFS				19
#define REG_SDRAM_CONFIG_PUPRSTDIV_OFFS			28
#define REG_SDRAM_CONFIG_RSTRD_OFFS				30

#define REG_DUNIT_CTRL_LOW_ADDR					0x1404
#define REG_DUNIT_CTRL_LOW_2T_OFFS				3
#define REG_DUNIT_CTRL_LOW_2T_MASK				0x3
#define REG_DUNIT_CTRL_LOW_DPDE_OFFS			14

#define REG_SDRAM_TIMING_LOW_ADDR				0x1408

#define REG_SDRAM_TIMING_HIGH_ADDR				0x140C

#define REG_SDRAM_ADDRESS_CTRL_ADDR				0x1410
#define REG_SDRAM_ADDRESS_SIZE_OFFS				2
#define REG_SDRAM_ADDRESS_SIZE_HIGH_OFFS		18
#define REG_SDRAM_ADDRESS_CTRL_STRUCT_OFFS		4

#define REG_SDRAM_OPEN_PAGES_ADDR				0x1414
#define REG_SDRAM_OPERATION_CS_OFFS				8

#define REG_SDRAM_OPERATION_ADDR				0x1418
#define REG_SDRAM_OPERATION_CWA_DELAY_SEL_OFFS	24
#define REG_SDRAM_OPERATION_CWA_DATA_OFFS		20
#define REG_SDRAM_OPERATION_CWA_DATA_MASK		0xF
#define REG_SDRAM_OPERATION_CWA_RC_OFFS			16
#define REG_SDRAM_OPERATION_CWA_RC_MASK			0xF
#define REG_SDRAM_OPERATION_CMD_MR0				0xF03
#define REG_SDRAM_OPERATION_CMD_MR1				0xF04
#define REG_SDRAM_OPERATION_CMD_MR2				0xF08
#define REG_SDRAM_OPERATION_CMD_MR3				0xF09
#define REG_SDRAM_OPERATION_CMD_RFRS			0xF02
#define REG_SDRAM_OPERATION_CMD_CWA				0xF0E
#define REG_SDRAM_OPERATION_CMD_RFRS_DONE		0xF
#define REG_SDRAM_OPERATION_CMD_MASK			0xF
#define REG_SDRAM_OPERATION_CS_OFFS				8

#define REG_OUDDR3_TIMING_ADDR					0x142C

#define REG_SDRAM_MODE_ADDR						0x141C

#define REG_SDRAM_EXT_MODE_ADDR					0x1420

#define REG_DDR_CONT_HIGH_ADDR					0x1424

#define REG_ODT_TIME_LOW_ADDR					0x1428

#define REG_ODT_TIME_HIGH_ADDR					0x147C

#define REG_SDRAM_INIT_CTRL_ADDR				0x1480
#define REG_SDRAM_INIT_CTRL_OFFS				0
#define REG_SDRAM_INIT_CKE_ASSERT_OFFS			2
#define REG_SDRAM_INIT_RESET_DEASSERT_OFFS		3

#define REG_SDRAM_ODT_CTRL_LOW_ADDR				0x1494

#define REG_SDRAM_ODT_CTRL_HIGH_ADDR			0x1498
/*#define REG_SDRAM_ODT_CTRL_HIGH_OVRD_MASK		0xFFFFFF55 */
#define REG_SDRAM_ODT_CTRL_HIGH_OVRD_MASK		0x0
#define REG_SDRAM_ODT_CTRL_HIGH_OVRD_ENA		0x3


#define REG_DUNIT_ODT_CTRL_ADDR					0x149C

#define REG_DRAM_FIFO_CTRL_ADDR					0x14A0

#define REG_DRAM_AXI_CTRL_ADDR					0x14A8
#define REG_DRAM_AXI_CTRL_AXIDATABUSWIDTH_OFFS	0

#define REG_METAL_MASK_ADDR						0x14B0
#define REG_METAL_MASK_MASK						0xDFFFFFFF
#define REG_METAL_MASK_RETRY_OFFS				0

#define REG_DRAM_ADDR_CTRL_DRIVE_STRENGTH_ADDR	0x14C0
#define REG_DRAM_DATA_DQS_DRIVE_STRENGTH_ADDR	0x14C4

#define REG_CS_SIZE_SCRATCH_ADDR 				0x1504

#define REG_DDR_IO_ADDR							0x1524
#define REG_DDR_IO_CLK_RATIO_OFFS				15

#define REG_DFS_ADDR							0x1528
#define REG_DFS_DLLNEXTSTATE_OFFS				0
#define REG_DFS_BLOCK_OFFS						1
#define REG_DFS_SR_OFFS							2
#define REG_DFS_ATSR_OFFS						3
#define REG_DFS_RECONF_OFFS						4
#define REG_DFS_CL_NEXT_STATE_OFFS				8
#define REG_DFS_CL_NEXT_STATE_MASK				0xF
#define REG_DFS_CWL_NEXT_STATE_OFFS				12
#define REG_DFS_CWL_NEXT_STATE_MASK				0x7

#define REG_READ_DATA_SAMPLE_DELAYS_ADDR		0x1538
#define REG_READ_DATA_SAMPLE_DELAYS_MASK		0x1F
#define REG_READ_DATA_SAMPLE_DELAYS_OFFS		8

#define REG_READ_DATA_READY_DELAYS_ADDR			0x153C
#define REG_READ_DATA_READY_DELAYS_MASK			0x1F
#define REG_READ_DATA_READY_DELAYS_OFFS			8

#define START_BURST_IN_ADDR						1

#define REG_DRAM_TRAINING_SHADOW_ADDR			0x18488
#define REG_DRAM_TRAINING_ADDR					0x15B0
#define REG_DRAM_TRAINING_LOW_FREQ_OFFS			0
#define REG_DRAM_TRAINING_PATTERNS_OFFS			4
#define REG_DRAM_TRAINING_MED_FREQ_OFFS			2
#define REG_DRAM_TRAINING_WL_OFFS				3
#define REG_DRAM_TRAINING_RL_OFFS				6
#define REG_DRAM_TRAINING_DQS_RX_OFFS			15
#define REG_DRAM_TRAINING_DQS_TX_OFFS			16
#define REG_DRAM_TRAINING_CS_OFFS				20
#define REG_DRAM_TRAINING_RETEST_OFFS			24
#define REG_DRAM_TRAINING_DFS_FREQ_OFFS			27
#define REG_DRAM_TRAINING_DFS_REQ_OFFS			29
#define REG_DRAM_TRAINING_ERROR_OFFS			30
#define REG_DRAM_TRAINING_AUTO_OFFS				31
#define REG_DRAM_TRAINING_RETEST_PAR			0x3
#define REG_DRAM_TRAINING_RETEST_MASK			0xF8FFFFFF
#define REG_DRAM_TRAINING_CS_MASK				0xFF0FFFFF
#define REG_DRAM_TRAINING_PATTERNS_MASK 		0xFF0F0000

#define REG_DRAM_TRAINING_2_ADDR				0x15B8
#define REG_DRAM_TRAINING_2_OVERRUN_OFFS		17
#define REG_DRAM_TRAINING_2_FIFO_RST_OFFS		4
#define REG_DRAM_TRAINING_2_RL_MODE_OFFS		3
#define REG_DRAM_TRAINING_2_WL_MODE_OFFS		2
#define REG_DRAM_TRAINING_2_ECC_MUX_OFFS		1
#define REG_DRAM_TRAINING_2_SW_OVRD_OFFS		0

#define REG_DRAM_TRAINING_PATTERN_BASE_ADDR		0x15BC
#define REG_DRAM_TRAINING_PATTERN_BASE_OFFS		3

#define REG_TRAINING_DEBUG_2_ADDR				0x15C4
#define REG_TRAINING_DEBUG_2_OFFS				16
#define REG_TRAINING_DEBUG_2_MASK				0x3

#define REG_TRAINING_DEBUG_3_ADDR				0x15C8
#define REG_TRAINING_DEBUG_3_OFFS				3
#define REG_TRAINING_DEBUG_3_MASK				0x7

#define	MR_CS_ADDR_OFFS							4

#define	REG_DDR3_MR0_ADDR						0x15D0
#define	REG_DDR3_MR0_CS_ADDR					0x1870
#define REG_DDR3_MR0_CL_MASK					0x74
#define	REG_DDR3_MR0_CL_OFFS					2
#define	REG_DDR3_MR0_CL_HIGH_OFFS				3
#define	CL_MASK									0xF

#define	REG_DDR3_MR1_ADDR						0x15D4
#define	REG_DDR3_MR1_CS_ADDR					0x1874
#define REG_DDR3_MR1_RTT_MASK					0xFFFFFDBB
#define REG_DDR3_MR1_DLL_ENA_OFFS				0
#define REG_DDR3_MR1_RTT_DISABLED				0x0
#define REG_DDR3_MR1_RTT_RZQ2					0x40
#define REG_DDR3_MR1_RTT_RZQ4					0x2
#define REG_DDR3_MR1_RTT_RZQ6					0x42
#define REG_DDR3_MR1_RTT_RZQ8					0x202
#define REG_DDR3_MR1_RTT_RZQ12					0x4
#define REG_DDR3_MR1_OUTBUF_WL_MASK				0xFFFFEF7F		/* WL-disabled,OB-enabled */
#define REG_DDR3_MR1_OUTBUF_DIS_OFFS			12				/* Output Buffer Disabled */
#define REG_DDR3_MR1_WL_ENA_OFFS				7
#define REG_DDR3_MR1_WL_ENA						0x80			/* WL Enabled */
#define REG_DDR3_MR1_ODT_MASK					0xFFFFFDBB

#define	REG_DDR3_MR2_ADDR						0x15D8
#define	REG_DDR3_MR2_CS_ADDR					0x1878
#define	REG_DDR3_MR2_CWL_OFFS					3
#define	REG_DDR3_MR2_CWL_MASK					0x7
#define REG_DDR3_MR2_ODT_MASK					0xFFFFF9FF
#define	REG_DDR3_MR3_ADDR						0x15DC
#define	REG_DDR3_MR3_CS_ADDR					0x187C

#define REG_DDR3_RANK_CTRL_ADDR					0x15E0
#define REG_DDR3_RANK_CTRL_CS_ENA_MASK			0xF
#define REG_DDR3_RANK_CTRL_MIRROR_OFFS			4

#define REG_ZQC_CONF_ADDR						0x15E4

#define REG_DRAM_PHY_CONFIG_ADDR				0x15EC
#define REG_DRAM_PHY_CONFIG_MASK				0x3FFFFFFF

#define REG_ODPG_CNTRL_ADDR						0x1600
#define REG_ODPG_CNTRL_OFFS						21

#define REG_PHY_LOCK_MASK_ADDR					0x1670
#define REG_PHY_LOCK_MASK_MASK					0xFFFFF000

#define REG_PHY_LOCK_STATUS_ADDR				0x1674
#define REG_PHY_LOCK_STATUS_LOCK_OFFS			9
#define REG_PHY_LOCK_STATUS_LOCK_MASK			0xFFF
#define REG_PHY_LOCK_APLL_ADLL_STATUS_MASK		0x7FF

#define REG_PHY_REGISTRY_FILE_ACCESS_ADDR		0x16A0
#define REG_PHY_REGISTRY_FILE_ACCESS_OP_WR		0xC0000000
#define REG_PHY_REGISTRY_FILE_ACCESS_OP_RD		0x80000000
#define REG_PHY_REGISTRY_FILE_ACCESS_OP_DONE	0x80000000
#define REG_PHY_BC_OFFS							27
#define REG_PHY_CS_OFFS							16
#define REG_PHY_DQS_REF_DLY_OFFS				10
#define REG_PHY_PHASE_OFFS						8
#define REG_PHY_PUP_OFFS						22

#define REG_TRAINING_WL_ADDR					0x16AC
#define REG_TRAINING_WL_CS_MASK					0xFFFFFFFC
#define REG_TRAINING_WL_UPD_OFFS				2
#define REG_TRAINING_WL_CS_DONE_OFFS			3
#define REG_TRAINING_WL_RATIO_MASK				0xFFFFFF0F
#define REG_TRAINING_WL_1TO1					0x50
#define REG_TRAINING_WL_2TO1					0x10
#define REG_TRAINING_WL_DELAYEXP_MASK			0x20000000
#define REG_TRAINING_WL_RESULTS_MASK			0x000001FF
#define REG_TRAINING_WL_RESULTS_OFFS			20

#define REG_REGISTERED_DRAM_CTRL_ADDR			0x16D0
#define REG_REGISTERED_DRAM_CTRL_SR_FLOAT_OFFS	15

/* CPU    */
#define REG_BOOTROM_ROUTINE_ADDR				0x182D0
#define REG_BOOTROM_ROUTINE_DRAM_INIT_OFFS		12

#define REG_DRAM_INIT_CTRL_STATUS_ADDR			0x18488
#define REG_DRAM_INIT_CTRL_TRN_CLK_OFFS			16
#define REG_CPU_DIV_CLK_CTRL_0_NEW_RATIO		0x000200FF
#define REG_DRAM_INIT_CTRL_STATUS_2_ADDR		0x1488

#define REG_CPU_DIV_CLK_CTRL_0_ADDR				0x18700

#define REG_CPU_DIV_CLK_CTRL_1_ADDR				0x18704
#define REG_CPU_DIV_CLK_CTRL_2_ADDR				0x18708

#define REG_CPU_DIV_CLK_CTRL_3_ADDR				0x1870C
#define REG_CPU_DIV_CLK_CTRL_3_FREQ_MASK		0xFFFFC0FF
#define REG_CPU_DIV_CLK_CTRL_3_FREQ_OFFS		8

#define REG_CPU_DIV_CLK_CTRL_4_ADDR				0x18710

#define REG_CPU_DIV_CLK_STATUS_0_ADDR			0x18718
#define REG_CPU_DIV_CLK_ALL_STABLE_OFFS			8

#define REG_CPU_PLL_CTRL_0_ADDR					0x1871C
#define REG_CPU_PLL_STATUS_0_ADDR				0x18724
#define REG_CORE_DIV_CLK_CTRL_ADDR				0x18740
#define REG_CORE_DIV_CLK_STATUS_ADDR			0x18744
#define REG_DDRPHY_APLL_CTRL_ADDR				0x18780

#define REG_DDRPHY_APLL_CTRL_2_ADDR				0x18784

#define REG_SFABRIC_CLK_CTRL_ADDR				0x20858
#define REG_SFABRIC_CLK_CTRL_SMPL_OFFS			8

/* DRAM Windows */
#define REG_XBAR_WIN_19_CTRL_ADDR				0x200e8
#define REG_XBAR_WIN_5_CTRL_ADDR				0x20050
#define REG_XBAR_WIN_5_BASE_ADDR				0x20054
#define REG_XBAR_WIN_5_REMAP_ADDR				0x20058
#define REG_FASTPATH_WIN_0_CTRL_ADDR			0x20184

/* SRAM */
#define REG_CDI_CONFIG_ADDR						0x20220
#define REG_SRAM_WINDOW_0_ADDR					0x20240
#define REG_SRAM_WINDOW_0_ENA_OFFS				0
#define REG_SRAM_WINDOW_1_ADDR					0x20244
#define REG_SRAM_L2_ENA_ADDR					0x8500
#define REG_SRAM_CLEAN_BY_WAY_ADDR				0x87BC

/* Timers */
#define REG_TIMERS_CTRL_ADDR					0x20300
#define REG_TIMERS_EVENTS_ADDR					0x20304
#define REG_TIMER0_VALUE_ADDR					0x20314
#define REG_TIMER1_VALUE_ADDR					0x2031C
#define REG_TIMER0_ENABLE_MASK					0x1

/* PMU */
#define REG_PMU_I_F_CTRL_ADDR					0x1C090
#define REG_PMU_DUNIT_BLK_OFFS					16
#define REG_PMU_DUNIT_RFRS_OFFS					20
#define REG_PMU_DUNIT_ACK_OFFS					24

#define REG_PM_STAT_MASK_ADDR					0x2210C
#define REG_PM_STAT_MASK_CPU0_IDLE_MASK_OFFS	16

#define REG_PM_EVENT_STAT_MASK_ADDR				0x22120
#define REG_PM_EVENT_STAT_MASK_DFS_DONE_OFFS	17

#define REG_PM_CTRL_CONFIG_ADDR					0x22104
#define REG_PM_CTRL_CONFIG_DFS_REQ_OFFS			18

#define REG_FABRIC_LOCAL_IRQ_MASK_ADDR			0x218C4
#define REG_FABRIC_LOCAL_IRQ_PMU_MASK_OFFS		18

/*  Power Management Clock Gating Control Register	*/
#define MV_PEX_IF_REGS_OFFSET(pexIf)\
			(pexIf < 8 ? (0x40000 + ((pexIf) / 4) * 0x40000 + ((pexIf) % 4) * 0x4000)\
	: (0X42000 + ((pexIf) % 8) * 0x40000))
#define MV_PEX_IF_REGS_BASE(unit) 				(MV_PEX_IF_REGS_OFFSET(unit))
#define POWER_MNG_CTRL_REG						0x18220
#define PEX_DEVICE_AND_VENDOR_ID				0x000
#define PEX_CFG_DIRECT_ACCESS(pexIf, cfgReg)	(MV_PEX_IF_REGS_BASE(pexIf) + (cfgReg))
#define PMC_PEXSTOPCLOCK_OFFS(port)				((port) < 8 ? (5 + (port)) : (18 + (port)))
#define PMC_PEXSTOPCLOCK_MASK(port)				(1 << PMC_PEXSTOPCLOCK_OFFS(port))
#define PMC_PEXSTOPCLOCK_EN(port)				(1 << PMC_PEXSTOPCLOCK_OFFS(port))
#define PMC_PEXSTOPCLOCK_STOP(port)				(0 << PMC_PEXSTOPCLOCK_OFFS(port))

/* TWSI */
#define TWSI_DATA_ADDR_MASK		0x7
#define TWSI_DATA_ADDR_OFFS		1

/* General */
#define MAX_CS									4

/* Frequencies */
#define FAB_OPT									21
#define CLK_CPU									12
#define CLK_VCO									(2 * CLK_CPU)
#define CLK_DDR									12

/* Cpu Frequencies: */
#define CLK_CPU_1000							0
#define CLK_CPU_1066							1
#define CLK_CPU_1200							2
#define CLK_CPU_1333							3
#define CLK_CPU_1500							4
#define CLK_CPU_1666							5
#define CLK_CPU_1800							6
#define CLK_CPU_2000							7
#define CLK_CPU_600								8
#define CLK_CPU_667								9
#define CLK_CPU_800								0xa

/* Extra Cpu Frequencies: */
#define CLK_CPU_1600							11
#define CLK_CPU_2133							12
#define CLK_CPU_2200							13
#define CLK_CPU_2400							14

/* DDR3 Frequencies: */
#define DDR_100									0
#define DDR_300									1
#define DDR_333									1
#define DDR_360									2
#define DDR_400									3
#define DDR_444									4
#define DDR_500									5
#define DDR_533									6
#define DDR_600									7
#define DDR_640									8
#define DDR_666									8
#define DDR_720									9
#define DDR_750									9
#define DDR_800									10
#define DDR_833									11
#define DDR_S									12
#define DDR_S_1TO1								13
#define MARGIN_FREQ 							DDR_533
#define DFS_MARGIN								DDR_100
/* #define DFS_MARGIN								DDR_400 */

#define ODT_OPT									16
#define ODT20									0x200
#define ODT30									0x204
#define ODT40									0x44
#define ODT120									0x40
#define ODT120D									0x400

#define MRS_DELAY								100

#define SDRAM_WL_SW_OFFS						0x140
#define SDRAM_RL_OFFS							0x100
#define SDRAM_PBS_I_OFFS						0xC0
#define SDRAM_PBS_II_OFFS						0x140
#define SDRAM_PBS_NEXT_OFFS						(SDRAM_PBS_II_OFFS - SDRAM_PBS_I_OFFS)
#define SDRAM_PBS_TX_OFFS						0x180
#define SDRAM_PBS_TX_DM_OFFS					576
#define SDRAM_DQS_RX_OFFS						1024
#define SDRAM_DQS_TX_OFFS						2048
#define SDRAM_DQS_RX_SPECIAL_OFFS				5120

#define LEN_STD_PATTERN							16
#define LEN_KILLER_PATTERN						128
#define LEN_SPECIAL_PATTERN						128
#define LEN_PBS_PATTERN							16

#endif /* _INC_AXP_FREQ_H */
