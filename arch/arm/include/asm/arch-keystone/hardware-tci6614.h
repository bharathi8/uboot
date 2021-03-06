/*
 * Copyright (C) 2011,2012 Texas Instruments
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  THIS  SOFTWARE  IS PROVIDED   ``AS  IS'' AND   ANY  EXPRESS OR IMPLIED
 *  WARRANTIES,   INCLUDING, BUT NOT  LIMITED  TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 *  NO  EVENT  SHALL   THE AUTHOR  BE    LIABLE FOR ANY   DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED   TO, PROCUREMENT OF  SUBSTITUTE GOODS  OR SERVICES; LOSS OF
 *  USE, DATA,  OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */
#ifndef __ASM_ARCH_HARDWARE_TCI6614_H
#define __ASM_ARCH_HARDWARE_TCI6614_H

#define TCI6614_TIMER7_BASE			(0x02270000)
#define TCI6614_TIMER8_BASE			(0x02280000)
#define TCI6614_WDOG_BASE			(TCI6614_TIMER8_BASE)

#define TCI6614_PLL_CNTRL_BASE			(0x02310000)
#define CLOCK_BASE				TCI6614_PLL_CNTRL_BASE
#define TCI6614_PSC_BASE			(0x02350000)
#define TCI6614_DEVICE_STATE_CTRL_BASE		(0x02620000)
#define TCI66XX_DEVICE_STATE_CTRL_BASE		TCI6614_DEVICE_STATE_CTRL_BASE
#define JTAG_ID_REG				(TCI6614_DEVICE_STATE_CTRL_BASE + 0x18)
#define TCI6614_DEVSTAT				(TCI6614_DEVICE_STATE_CTRL_BASE + 0x20)

#define TCI6614_INTC_BASE			(0x0260C000)
#define TCI6614_ASYNC_EMIF_CNTRL_BASE		(0x20C00000)
#define DAVINCI_ASYNC_EMIF_CNTRL_BASE		(TCI6614_ASYNC_EMIF_CNTRL_BASE)
#define TCI6614_ASYNC_EMIF_DATA_CE0_BASE	(0x70000000)
#define TCI6614_ASYNC_EMIF_DATA_CE1_BASE	(0x74000000)
#define TCI6614_ASYNC_EMIF_DATA_CE2_BASE	(0x78000000)
#define TCI6614_ASYNC_EMIF_DATA_CE3_BASE	(0x7c000000)
#define TCI6614_UART0_BASE			(0x02540000)

#define TCI6614_SPI_BASE			(0x20bf0000)

/* PLL control registers */
#define TCI6614_MAINPLLCTL0			(TCI6614_DEVICE_STATE_CTRL_BASE+0x328)
#define TCI6614_MAINPLLCTL1			(TCI6614_DEVICE_STATE_CTRL_BASE+0x32C)
#define TCI6614_DDR3PLLCTL0			(TCI6614_DEVICE_STATE_CTRL_BASE+0x330)
#define TCI6614_DDR3PLLCTL1			(TCI6614_DEVICE_STATE_CTRL_BASE+0x334)
#define TCI6614_PASSPLLCTL0			(TCI6614_DEVICE_STATE_CTRL_BASE+0x338)
#define TCI6614_PASSPLLCTL1			(TCI6614_DEVICE_STATE_CTRL_BASE+0x33C)

/* PA SS Registers */
#define TCI6614_PASS_BASE			(0x02000000)
#define TCI66XX_PASS_BASE			TCI6614_PASS_BASE

/* Chip configuration unlock codes and registers */
#define KEYSTONE_KICK0		(TCI6614_DEVICE_STATE_CTRL_BASE+0x38)
#define KEYSTONE_KICK1		(TCI6614_DEVICE_STATE_CTRL_BASE+0x3c)
#define KEYSTONE_KICK0_MAGIC	0x83e70b13
#define KEYSTONE_KICK1_MAGIC	0x95a4f1e0

/* DDR3 definitions */
#define TCI6614_DDR_EMIF_CTRL_BASE		0x21000000
#define TCI6614_DDR_EMIF_DATA_BASE		0x80000000

#define TCI6614_DDR_MIDR				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000000)
#define TCI6614_DDR_SDCFG				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000008)
#define TCI6614_DDR_SDRFC				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000010)
#define TCI6614_DDR_SDTIM1				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000018)
#define TCI6614_DDR_SDTIM2				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000020)
#define TCI6614_DDR_SDTIM3				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000028)
#define TCI6614_DDR_PMCTL				(TCI6614_DDR_EMIF_CTRL_BASE + 0x00000038)
#define TCI6614_DDR_ZQCFG				(TCI6614_DDR_EMIF_CTRL_BASE + 0x000000C8)
#define TCI6614_DDR_TMPALRT				(TCI6614_DDR_EMIF_CTRL_BASE + 0x000000CC)
#define TCI6614_DDR_RDWR_LVL_RMP_CTRL	(TCI6614_DDR_EMIF_CTRL_BASE + 0x000000D8)
#define TCI6614_DDR_RDWR_LVL_CTRL		(TCI6614_DDR_EMIF_CTRL_BASE + 0x000000DC)
#define TCI6614_DDR_DDRPHYC				(TCI6614_DDR_EMIF_CTRL_BASE + 0x000000E4)

#define TCI6614_XMC_BASE_ADDR 			(0x08000000)
#define TCI6614_XMPAX2_L     			(TCI6614_XMC_BASE_ADDR + 0x00000010)
#define TCI6614_XMPAX2_H     			(TCI6614_XMC_BASE_ADDR + 0x00000014)

// DDR3 tuning registers
#define TCI6614_DATA0_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x043C)
#define TCI6614_DATA1_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0440)
#define TCI6614_DATA2_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0444)
#define TCI6614_DATA3_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0448)
#define TCI6614_DATA4_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x044C)
#define TCI6614_DATA5_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0450)
#define TCI6614_DATA6_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0454)
#define TCI6614_DATA7_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0458)
#define TCI6614_DATA8_GTLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x045C)

#define TCI6614_DATA0_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x040C)
#define TCI6614_DATA1_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0410)
#define TCI6614_DATA2_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0414)
#define TCI6614_DATA3_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0418)
#define TCI6614_DATA4_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x041C)
#define TCI6614_DATA5_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0420)
#define TCI6614_DATA6_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0424)
#define TCI6614_DATA7_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0428)
#define TCI6614_DATA8_WRLVL_INIT_RATIO		(TCI6614_DEVICE_STATE_CTRL_BASE + 0x042C)

#define TCI6614_DDR3_CONFIG_REG_0  			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0404)
#define TCI6614_DDR3_CONFIG_REG_12 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0434)
#define TCI6614_DDR3_CONFIG_REG_13 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x0438)

#define TCI6614_DDR3_CONFIG_REG_52 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04D4)
#define TCI6614_DDR3_CONFIG_REG_53 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04D8)
#define TCI6614_DDR3_CONFIG_REG_54 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04DC)
#define TCI6614_DDR3_CONFIG_REG_55 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04E0)
#define TCI6614_DDR3_CONFIG_REG_56 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04E4)
#define TCI6614_DDR3_CONFIG_REG_57 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04E8)
#define TCI6614_DDR3_CONFIG_REG_58 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04EC)
#define TCI6614_DDR3_CONFIG_REG_59 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04F0)
#define TCI6614_DDR3_CONFIG_REG_60 			(TCI6614_DEVICE_STATE_CTRL_BASE + 0x04F4)

/* Power and Sleep Controller (PSC) Domains */
#define TCI6614_GPSC_ARMDOMAIN		0
#define TCI6614_GPSC_DSPDOMAIN		1

#define TCI6614_LPSC_SHARED		0	/* Always on */
#define TCI6614_LPSC_SMARTREFLEX3	1	/* Always on */
#define TCI6614_LPSC_DDR_EMIF		2	/* Always on */
#define TCI6614_LPSC_TCP3E		3
#define TCI6614_LPSC_VCP2_A		4
#define TCI6614_LPSC_DEBUGSS_TRC	5
#define TCI6614_LPSC_TETB_TRC		6
#define TCI6614_LPSC_PA			7
#define TCI66XX_LPSC_PA			TCI6614_LPSC_PA
#define TCI6614_LPSC_CPGMAC		8
#define TCI66XX_LPSC_CPGMAC		TCI6614_LPSC_CPGMAC
#define TCI6614_LPSC_SA			9
#define TCI6614_LPSC_PCIE		10
#define TCI6614_LPSC_SRIO		11
#define TCI6614_LPSC_VUSR		12
#define TCI6614_LPSC_UNUSED		13
#define TCI6614_LPSC_MSMCSRAM		14
#define TCI6614_LPSC_RAC		15
#define TCI6614_LPSC_TAC		16
#define TCI6614_LPSC_FFTC		17
#define TCI6614_LPSC_DRFE		18
#define TCI6614_LPSC_TCP3D		19
#define TCI6614_LPSC_VCP2_B		20
#define TCI6614_LPSC_VCP2_C		21
#define TCI6614_LPSC_VCP2_D		22
#define TCI6614_LPSC_BCP		23
#define TCI6614_LPSC_GEM1		24
#define TCI6614_LPSC_RSA1		25
#define TCI6614_LPSC_GEM0		26
#define TCI6614_LPSC_RSA2		27
#define TCI6614_LPSC_ARM		28
#define TCI6614_LPSC_TCP2		29
#define TCI6614_LPSC_DXB		30

#define TCI6614_LPSC_TIMER7		TCI6614_LPSC_SHARED
#define TCI6614_LPSC_UART0		TCI6614_LPSC_SHARED
#define TCI6614_LPSC_AEMIF		TCI6614_LPSC_SHARED
#define TCI6614_LPSC_SPI		TCI6614_LPSC_SHARED

/* Queue manager */
#define DEVICE_QM_MANAGER_BASE          0x02a68000
#define DEVICE_QM_DESC_SETUP_BASE       0x02a6a000
#define DEVICE_QM_MANAGER_QUEUES_BASE   0x02a20000
#define DEVICE_QM_MANAGER_Q_PROXY_BASE  0x02a40000
#define DEVICE_QM_QUEUE_STATUS_BASE	0x02a00000
#define DEVICE_QM_NUM_LINKRAMS          2
#define DEVICE_QM_NUM_MEMREGIONS        20

#define DEVICE_PA_CDMA_GLOBAL_CFG_BASE   0x02004000
#define DEVICE_PA_CDMA_TX_CHAN_CFG_BASE  0x02004400
#define DEVICE_PA_CDMA_RX_CHAN_CFG_BASE  0x02004800
#define DEVICE_PA_CDMA_RX_FLOW_CFG_BASE  0x02005000

#define DEVICE_PA_CDMA_RX_NUM_CHANNELS   24
#define DEVICE_PA_CDMA_RX_NUM_FLOWS      32
#define DEVICE_PA_CDMA_TX_NUM_CHANNELS   9


#endif /* __ASM_ARCH_HARDWARE_H */
