/** @defgroup usart_defines USART Defines

@brief <b>Defined Constants and Types for the STM32L0xx USART</b>

@ingroup STM32L0xx_defines

@version 1.0.0

@date 12 October 2017

LGPL License Terms @ref lgpl_license
 */

/*
 * This file is part of the libopencm3 project.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBOPENCM3_USART_H
#define LIBOPENCM3_USART_H

#include <libopencm3/stm32/common/usart_common_all.h>

/* USART Registers */

/* Control register 1 (USARTx_CR1) */

#define USART_CR1(usart)        MMIO32(usart)
#define USART1_CR1              USART_CR1(USART1_BASE)
#define USART2_CR1              USART_CR1(USART2_BASE)
#define LPUART1_CR1              USART_CR1(LPUART1_BASE)

/* Control register 2 (USARTx_CR2) */

#define USART_CR2(usart)        MMIO32((usart) + 0x04)
#define USART1_CR2              USART_CR2(USART1_BASE)
#define USART2_CR2              USART_CR2(USART2_BASE)
#define LPUART1_CR2             USART_CR2(LPUART1_BASE)

/* Control register 3 (USARTx_CR3) */

#define USART_CR3(usart)        MMIO32((usart) + 0x04)
#define USART1_CR3              USART_CR3(USART1_BASE)
#define USART2_CR3              USART_CR3(USART2_BASE)
#define LPUART1_CR3             USART_CR3(LPUART1_BASE)

/* Baudrate register (USARTx_BRR) */

#define USART_BRR(usart)        MMIO32((usart) + 0X0C) 
#define USART1_BRR              USART_BRR(USART1_BASE)
#define USART2_BRR              USART_BRR(USART2_BASE)
#define LPUART1_BRR             USART_BRR(LPUART1_BASE)

/* Guard time and prescaler register */

#define USART_GTPR(usart)       MMIO32((usart) + 0x10)
#define USART1_GTPR             USART_GTPR(USART1_BASE)
#define USART2_GTPR             USART_GTPR(USART2_BASE)

/* Receiver timeout register (USARTx_RTOR) */

#define USART_RTOR(usart)       MMIO32((usart) + 0x14)
#define USART1_RTOR             USART_RTOR(USART1_BASE)
#define USART2_RTOR             USART_RTOR(USART2_BASE)

/* Request register (USARTx_RQR) */

#define USART_RQR(usart)        MMIO32((usart) + 0x18)
#define USART1_RQR              USART_RQR(USART1_BASE)
#define USART2_RQR              USART_RQR(USART2_BASE)
#define LPUART1_RQR             USART_RQR(LPUART1_BASE)

/* ISR register (USARTx_ISR) */

#define USART_ISR(usart)        MMIO32((usart) + 0x1c)
#define USART1_ISR              USART_ISR(USART1_BASE)
#define USART2_ISR              USART_ISR(USART2_BASE)
#define LPUART1_ISR             USART_ISR(LPUART1_BASE)

/* ICR register (USARTx_ICR) */

#define USART_ICR               MMIOS32((USART) + 0X20)
#define USART1_ICR              USART_ICR(USART1_BASE)
#define USART2_ICR              USART_ICR(USART2_BASE)
#define LPUART1_ICR             USART_ICR(LPUART1_BASE)

/* Receive data register (USARTx_RDR) */

#define USART_RDR(usart)        MMIO32((usart) + 0x24)
#define USART1_RDR              USART_RDR(USART1_BASE)
#define USART2_RDR              USART_RDR(USART2_BASE)
#define LPUART1_RDR             USART_RDR(LPUART1_BASE)

/* Transmit data register (USARTx_TDR) */

#define USART_TDR               MMIO32((usart) + 0x28)
#define USART1_TDR              USART_TDR(USART1_BASE)
#define USART2_TDR              USART_TDR(USART2_BASE)
#define LPUART1_TDR             USART_TDR(LPUART1_BASE)

/* USART_ISR values */

#define USART_ISR_EOBF          (1 << 12)
#define USART_ISR_RTOF          (1 << 11)
#define USART_ISR_CTS           (1 << 10)
#define USART_ISR_CTSIF         (1 << 9)
#define USART_ISR_LBDF          (1 << 8)
#define USART_ISR_TXE           (1 << 7)
#define USART_ISR_TC            (1 << 6)
#define USART_ISR_RXNE          (1 << 5)
#define USART_ISR_IDLE          (1 << 4)
#define USART_ISR_ORE           (1 << 3)
#define USART_ISR_NF            (1 << 2)
#define USART_ISR_FE            (1 << 1)
#define USART_ISR_PE            (1 << 0)

/* USART_RDR values */

#define USART_RDR_MASK          0x1FF

/* USART CR1 values */

#define USART_CR1_M1            (1 << 28)
#define USART_CR1_DEAT_MASK     (0b1111 << 21)
#define USART_CR1_DEDT_MASK     (0b1111 << 16)
#define USART_CR1_OVER8         (1 << 15)
#define USART_CR1_CMIE          (1 << 14)
#define USART_CR1_MME           (1 << 13)
#define USART_CR1_M0            (1 << 12)
#define USART_CR1_WAKE          (1 << 11)
#define USART_CR1_PCE           (1 << 10)
#define USART_CR1_PS            (1 << 9)
#define USART_CR1_PEIE          (1 << 8)
#define USART_CR1_TXEIE         (1 << 7)
#define USART_CR1_TCIE          (1 << 6)
#define USART_CR1_RXNEIE        (1 << 5)
#define USART_CR1_IDLEIE        (1 << 4)
#define USART_CR1_TE            (1 << 3)
#define USART_CR1_RE            (1 << 2)
#define USART_CR1_UESM          (1 << 1)
#define USART_CR1_UE            (1 << 0)

/* USART CR2 values */

#define USART_CR2_ADD_MASK      (0b1111111 << 24)
#define USART_CR2_RTOEN         (1 << 23)
#define USART_CR2_ABRMOD_MASK   (0b11 << 21)
#define USART_CR2_ABREN         (1 << 20)
#define USART_CR2_MSBFI_RST     (1 << 19)
#define USART_CR2_DATAINV       (1 << 18)
#define USART_CR2_TXINV         (1 << 17)
#define USART_CR2_RXINV         (1 << 16)
#define USART_CR2_SWAP          (1 << 15)
#define USART_CR2_LINEN         (1 << 14)
#define USART_CR2_STOP_MASK     (0b11 << 12)
#define USART_CR2_CLKEN         (1 << 11)
#define USART_CR2_CPOL          (1 << 10)
#define USART_CR2_CPHA          (1 << 9)
#define USART_CR2_LBCL          (1 << 8)
#define USART_CR2_LBDIE         (1 << 6)
#define USART_CR2_LBDL          (1 << 5)
#define USART_CR2_ADDM7         (1 << 4)

/* STOP bits */

#define USART_CR2_STOPBITS_1		(0x00 << 12)     /* 1 stop bit */
#define USART_CR2_STOPBITS_0_5		(0x01 << 12)     /* 0.5 stop bits */
#define USART_CR2_STOPBITS_2		(0x02 << 12)     /* 2 stop bits */
#define USART_CR2_STOPBITS_1_5		(0x03 << 12)     /* 1.5 stop bits */
#define USART_CR2_STOPBITS_MASK         (0x03 << 12)
#define USART_CR2_STOPBITS_SHIFT        12

 /* USART CR3 values */

#define USART_CR3_TCBGTIE       (1 << 24)
#define USART_CR3_UCESM         (1 << 23)
#define USART_CR3_WUFIE         (1 << 22)
#define USART_CR3_WUS_MASK      (0b11 << 20)
#define USART_CR3_SCARCNT_MASK  (0b111 << 17)
#define USART_CR3_DEP           (1 << 15)
#define USART_CR3_DEM           (1 << 14)
#define USART_CR3_DDRE          (1 << 13)
#define USART_CR3_OVRDIS        (1 << 12)
#define USART_CR3_ONEBIT        (1 << 11)
#define USART_CR3_CTSIE         (1 << 10)
#define USART_CR3_CTSE          (1 << 9)
#define USART_CR3_RTSE          (1 << 8)
#define USART_CR3_DMAT          (1 << 7)
#define USART_CR3_DMAR          (1 << 6)
#define USART_CR3_SCEN          (1 << 5)
#define USART_CR3_NACK          (1 << 4)
#define USART_CR3_HDSEL         (1 << 3)
#define USART_CR3_IRLP          (1 << 2)
#define USART_CR3_IREN          (1 << 1)
#define USART_CR3_EIE           (1 << 0)

/* USART GTPR values */

#define USART_GTPR_GT_MASK      (0xFF << 8)
#define USART_GTPR_PSC_MASK     (0xFF)

/* USART ICR value */

#define USART_ICR_WUCF          (1 << 20)
#define USART_ICR_CMCF          (1 << 17)
#define USART_ICR_EOBCF         (1 << 12)
#define USART_ICR_RTOCF         (1 << 11)
#define USART_ICR_CTSCF         (1 << 9)
#define USART_ICR_LBDCF         (1 << 8)
#define USART_ICR_TCBGT         (1 << 7)
#define USART_ICR_TCCF          (1 << 6)
#define USART_ICR_IDLECF        (1 << 4)
#define USART_ICR_ORECF         (1 << 3)
#define USART_ICR_NCF           (1 << 2)
#define USART_ICR_FECF          (1 << 1)
#define USART_ICR_PECF          (1 << 0)

/* USART RQR values */

#define USART_RQR_TXFRQ         (1 << 4)
#define USART_RQR_RXFRQ         (1 << 3)
#define USART_RQR_MMRQ          (1 << 2)
#define UASRT_RQR_SBKRQ         (1 << 1)
#define USART_RQR_ABRPRQ        (1 << 0)
