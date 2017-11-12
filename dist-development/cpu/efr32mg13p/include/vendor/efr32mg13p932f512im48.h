/**************************************************************************//**
 * @file efr32mg13p932f512im48.h
 * @brief CMSIS Cortex-M Peripheral Access Layer Header File
 *        for EFR32MG13P932F512IM48
 * @version 5.3.3
 ******************************************************************************
 * # License
 * <b>Copyright 2017 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/

#if defined(__ICCARM__)
#pragma system_include       /* Treat file as system include file. */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang system_header  /* Treat file as system include file. */
#endif

#ifndef EFR32MG13P932F512IM48_H
#define EFR32MG13P932F512IM48_H

#ifdef __cplusplus
extern "C" {
#endif

/**************************************************************************//**
 * @addtogroup Parts
 * @{
 *****************************************************************************/

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48 EFR32MG13P932F512IM48
 * @{
 *****************************************************************************/

/** Interrupt Number Definition */
typedef enum IRQn{
/******  Cortex-M4 Processor Exceptions Numbers ********************************************/
  NonMaskableInt_IRQn   = -14,              /*!< 2  Cortex-M4 Non Maskable Interrupt      */
  HardFault_IRQn        = -13,              /*!< 3  Cortex-M4 Hard Fault Interrupt        */
  MemoryManagement_IRQn = -12,              /*!< 4  Cortex-M4 Memory Management Interrupt */
  BusFault_IRQn         = -11,              /*!< 5  Cortex-M4 Bus Fault Interrupt         */
  UsageFault_IRQn       = -10,              /*!< 6  Cortex-M4 Usage Fault Interrupt       */
  SVCall_IRQn           = -5,               /*!< 11 Cortex-M4 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,               /*!< 12 Cortex-M4 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,               /*!< 14 Cortex-M4 Pend SV Interrupt           */
  SysTick_IRQn          = -1,               /*!< 15 Cortex-M4 System Tick Interrupt       */

/******  EFR32MG13P Peripheral Interrupt Numbers ********************************************/

  EMU_IRQn              = 0,  /*!< 16+0 EFR32 EMU Interrupt */
  WDOG0_IRQn            = 2,  /*!< 16+2 EFR32 WDOG0 Interrupt */
  WDOG1_IRQn            = 3,  /*!< 16+3 EFR32 WDOG1 Interrupt */
  LDMA_IRQn             = 9,  /*!< 16+9 EFR32 LDMA Interrupt */
  GPIO_EVEN_IRQn        = 10, /*!< 16+10 EFR32 GPIO_EVEN Interrupt */
  TIMER0_IRQn           = 11, /*!< 16+11 EFR32 TIMER0 Interrupt */
  USART0_RX_IRQn        = 12, /*!< 16+12 EFR32 USART0_RX Interrupt */
  USART0_TX_IRQn        = 13, /*!< 16+13 EFR32 USART0_TX Interrupt */
  ACMP0_IRQn            = 14, /*!< 16+14 EFR32 ACMP0 Interrupt */
  ADC0_IRQn             = 15, /*!< 16+15 EFR32 ADC0 Interrupt */
  I2C0_IRQn             = 17, /*!< 16+17 EFR32 I2C0 Interrupt */
  GPIO_ODD_IRQn         = 18, /*!< 16+18 EFR32 GPIO_ODD Interrupt */
  TIMER1_IRQn           = 19, /*!< 16+19 EFR32 TIMER1 Interrupt */
  USART1_RX_IRQn        = 20, /*!< 16+20 EFR32 USART1_RX Interrupt */
  USART1_TX_IRQn        = 21, /*!< 16+21 EFR32 USART1_TX Interrupt */
  LEUART0_IRQn          = 22, /*!< 16+22 EFR32 LEUART0 Interrupt */
  PCNT0_IRQn            = 23, /*!< 16+23 EFR32 PCNT0 Interrupt */
  CMU_IRQn              = 24, /*!< 16+24 EFR32 CMU Interrupt */
  MSC_IRQn              = 25, /*!< 16+25 EFR32 MSC Interrupt */
  CRYPTO0_IRQn          = 26, /*!< 16+26 EFR32 CRYPTO0 Interrupt */
  LETIMER0_IRQn         = 27, /*!< 16+27 EFR32 LETIMER0 Interrupt */
  RTCC_IRQn             = 31, /*!< 16+31 EFR32 RTCC Interrupt */
  CRYOTIMER_IRQn        = 33, /*!< 16+33 EFR32 CRYOTIMER Interrupt */
  FPUEH_IRQn            = 35, /*!< 16+35 EFR32 FPUEH Interrupt */
  SMU_IRQn              = 36, /*!< 16+36 EFR32 SMU Interrupt */
  WTIMER0_IRQn          = 37, /*!< 16+37 EFR32 WTIMER0 Interrupt */
  USART2_RX_IRQn        = 38, /*!< 16+38 EFR32 USART2_RX Interrupt */
  USART2_TX_IRQn        = 39, /*!< 16+39 EFR32 USART2_TX Interrupt */
  I2C1_IRQn             = 40, /*!< 16+40 EFR32 I2C1 Interrupt */
  LESENSE_IRQn          = 43, /*!< 16+43 EFR32 LESENSE Interrupt */
  CRYPTO1_IRQn          = 44, /*!< 16+44 EFR32 CRYPTO1 Interrupt */
  TRNG0_IRQn            = 45, /*!< 16+45 EFR32 TRNG0 Interrupt */
} IRQn_Type;

#define CRYPTO_IRQn               CRYPTO0_IRQn /*!< Alias for CRYPTO0_IRQn */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_Core Core
 * @{
 * @brief Processor and Core Peripheral Section
 *****************************************************************************/
#define __MPU_PRESENT             1 /**< Presence of MPU  */
#define __FPU_PRESENT             1 /**< Presence of FPU  */
#define __VTOR_PRESENT            1 /**< Presence of VTOR register in SCB */
#define __NVIC_PRIO_BITS          3 /**< NVIC interrupt priority bits */
#define __Vendor_SysTickConfig    0 /**< Is 1 if different SysTick counter is used */

/** @} End of group EFR32MG13P932F512IM48_Core */

/**************************************************************************//**
* @defgroup EFR32MG13P932F512IM48_Part Part
* @{
******************************************************************************/

/** Part family */
#define _EFR32_MIGHTY_FAMILY                    1                               /**< MIGHTY Gecko RF SoC Family  */
#define _EFR_DEVICE                                                             /**< Silicon Labs EFR-type RF SoC */
#define _SILICON_LABS_32B_SERIES_1                                              /**< Silicon Labs series number */
#define _SILICON_LABS_32B_SERIES                1                               /**< Silicon Labs series number */
#define _SILICON_LABS_32B_SERIES_1_CONFIG_3                                     /**< Series 1, Configuration 3 */
#define _SILICON_LABS_32B_SERIES_1_CONFIG       3                               /**< Series 1, Configuration 3 */
#define _SILICON_LABS_GECKO_INTERNAL_SDID       89                              /**< Silicon Labs internal use only, may change any time */
#define _SILICON_LABS_GECKO_INTERNAL_SDID_89                                    /**< Silicon Labs internal use only, may change any time */
#define _SILICON_LABS_EFR32_RADIO_SUBGHZ        1                               /**< Radio supports Sub-GHz */
#define _SILICON_LABS_EFR32_RADIO_2G4HZ         2                               /**< Radio supports 2.4 GHz */
#define _SILICON_LABS_EFR32_RADIO_DUALBAND      3                               /**< Radio supports dual band */
#define _SILICON_LABS_EFR32_RADIO_TYPE          _SILICON_LABS_EFR32_RADIO_2G4HZ /**< Radio type */
#define _SILICON_LABS_32B_PLATFORM_2                                            /**< @deprecated Silicon Labs platform name */
#define _SILICON_LABS_32B_PLATFORM              2                               /**< @deprecated Silicon Labs platform name */
#define _SILICON_LABS_32B_PLATFORM_2_GEN_3                                      /**< @deprecated Platform 2, generation 3 */
#define _SILICON_LABS_32B_PLATFORM_2_GEN        3                               /**< @deprecated Platform 2, generation 3 */

/* If part number is not defined as compiler option, define it */
#if !defined(EFR32MG13P932F512IM48)
#define EFR32MG13P932F512IM48    1 /**< MIGHTY Gecko Part */
#endif

/** Configure part number */
#define PART_NUMBER                "EFR32MG13P932F512IM48" /**< Part Number */

/** Memory Base addresses and limits */
#define RAM0_CODE_MEM_BASE         ((uint32_t) 0x10000000UL) /**< RAM0_CODE base address  */
#define RAM0_CODE_MEM_SIZE         ((uint32_t) 0x8000UL)     /**< RAM0_CODE available address space  */
#define RAM0_CODE_MEM_END          ((uint32_t) 0x10007FFFUL) /**< RAM0_CODE end address  */
#define RAM0_CODE_MEM_BITS         ((uint32_t) 0x0000000FUL) /**< RAM0_CODE used bits  */
#define RAM2_MEM_BASE              ((uint32_t) 0x20010000UL) /**< RAM2 base address  */
#define RAM2_MEM_SIZE              ((uint32_t) 0x800UL)      /**< RAM2 available address space  */
#define RAM2_MEM_END               ((uint32_t) 0x200107FFUL) /**< RAM2 end address  */
#define RAM2_MEM_BITS              ((uint32_t) 0x0000000BUL) /**< RAM2 used bits  */
#define RAM1_MEM_BASE              ((uint32_t) 0x20008000UL) /**< RAM1 base address  */
#define RAM1_MEM_SIZE              ((uint32_t) 0x8000UL)     /**< RAM1 available address space  */
#define RAM1_MEM_END               ((uint32_t) 0x2000FFFFUL) /**< RAM1 end address  */
#define RAM1_MEM_BITS              ((uint32_t) 0x0000000FUL) /**< RAM1 used bits  */
#define CRYPTO1_BITCLR_MEM_BASE    ((uint32_t) 0x440F0400UL) /**< CRYPTO1_BITCLR base address  */
#define CRYPTO1_BITCLR_MEM_SIZE    ((uint32_t) 0x400UL)      /**< CRYPTO1_BITCLR available address space  */
#define CRYPTO1_BITCLR_MEM_END     ((uint32_t) 0x440F07FFUL) /**< CRYPTO1_BITCLR end address  */
#define CRYPTO1_BITCLR_MEM_BITS    ((uint32_t) 0x0000000AUL) /**< CRYPTO1_BITCLR used bits  */
#define PER_MEM_BASE               ((uint32_t) 0x40000000UL) /**< PER base address  */
#define PER_MEM_SIZE               ((uint32_t) 0xF0000UL)    /**< PER available address space  */
#define PER_MEM_END                ((uint32_t) 0x400EFFFFUL) /**< PER end address  */
#define PER_MEM_BITS               ((uint32_t) 0x00000014UL) /**< PER used bits  */
#define RAM1_CODE_MEM_BASE         ((uint32_t) 0x10008000UL) /**< RAM1_CODE base address  */
#define RAM1_CODE_MEM_SIZE         ((uint32_t) 0x8000UL)     /**< RAM1_CODE available address space  */
#define RAM1_CODE_MEM_END          ((uint32_t) 0x1000FFFFUL) /**< RAM1_CODE end address  */
#define RAM1_CODE_MEM_BITS         ((uint32_t) 0x0000000FUL) /**< RAM1_CODE used bits  */
#define CRYPTO1_MEM_BASE           ((uint32_t) 0x400F0400UL) /**< CRYPTO1 base address  */
#define CRYPTO1_MEM_SIZE           ((uint32_t) 0x400UL)      /**< CRYPTO1 available address space  */
#define CRYPTO1_MEM_END            ((uint32_t) 0x400F07FFUL) /**< CRYPTO1 end address  */
#define CRYPTO1_MEM_BITS           ((uint32_t) 0x0000000AUL) /**< CRYPTO1 used bits  */
#define FLASH_MEM_BASE             ((uint32_t) 0x00000000UL) /**< FLASH base address  */
#define FLASH_MEM_SIZE             ((uint32_t) 0x10000000UL) /**< FLASH available address space  */
#define FLASH_MEM_END              ((uint32_t) 0x0FFFFFFFUL) /**< FLASH end address  */
#define FLASH_MEM_BITS             ((uint32_t) 0x0000001CUL) /**< FLASH used bits  */
#define CRYPTO0_MEM_BASE           ((uint32_t) 0x400F0000UL) /**< CRYPTO0 base address  */
#define CRYPTO0_MEM_SIZE           ((uint32_t) 0x400UL)      /**< CRYPTO0 available address space  */
#define CRYPTO0_MEM_END            ((uint32_t) 0x400F03FFUL) /**< CRYPTO0 end address  */
#define CRYPTO0_MEM_BITS           ((uint32_t) 0x0000000AUL) /**< CRYPTO0 used bits  */
#define CRYPTO_MEM_BASE            CRYPTO0_MEM_BASE          /**< Alias for CRYPTO0_MEM_BASE */
#define CRYPTO_MEM_SIZE            CRYPTO0_MEM_SIZE          /**< Alias for CRYPTO0_MEM_SIZE */
#define CRYPTO_MEM_END             CRYPTO0_MEM_END           /**< Alias for CRYPTO0_MEM_END  */
#define CRYPTO_MEM_BITS            CRYPTO0_MEM_BITS          /**< Alias for CRYPTO0_MEM_BITS */
#define PER_BITCLR_MEM_BASE        ((uint32_t) 0x44000000UL) /**< PER_BITCLR base address  */
#define PER_BITCLR_MEM_SIZE        ((uint32_t) 0xF0000UL)    /**< PER_BITCLR available address space  */
#define PER_BITCLR_MEM_END         ((uint32_t) 0x440EFFFFUL) /**< PER_BITCLR end address  */
#define PER_BITCLR_MEM_BITS        ((uint32_t) 0x00000014UL) /**< PER_BITCLR used bits  */
#define CRYPTO0_BITSET_MEM_BASE    ((uint32_t) 0x460F0000UL) /**< CRYPTO0_BITSET base address  */
#define CRYPTO0_BITSET_MEM_SIZE    ((uint32_t) 0x400UL)      /**< CRYPTO0_BITSET available address space  */
#define CRYPTO0_BITSET_MEM_END     ((uint32_t) 0x460F03FFUL) /**< CRYPTO0_BITSET end address  */
#define CRYPTO0_BITSET_MEM_BITS    ((uint32_t) 0x0000000AUL) /**< CRYPTO0_BITSET used bits  */
#define CRYPTO_BITSET_MEM_BASE     CRYPTO0_BITSET_MEM_BASE   /**< Alias for CRYPTO0_BITSET_MEM_BASE */
#define CRYPTO_BITSET_MEM_SIZE     CRYPTO0_BITSET_MEM_SIZE   /**< Alias for CRYPTO0_BITSET_MEM_SIZE */
#define CRYPTO_BITSET_MEM_END      CRYPTO0_BITSET_MEM_END    /**< Alias for CRYPTO0_BITSET_MEM_END  */
#define CRYPTO_BITSET_MEM_BITS     CRYPTO0_BITSET_MEM_BITS   /**< Alias for CRYPTO0_BITSET_MEM_BITS */
#define CRYPTO0_BITCLR_MEM_BASE    ((uint32_t) 0x440F0000UL) /**< CRYPTO0_BITCLR base address  */
#define CRYPTO0_BITCLR_MEM_SIZE    ((uint32_t) 0x400UL)      /**< CRYPTO0_BITCLR available address space  */
#define CRYPTO0_BITCLR_MEM_END     ((uint32_t) 0x440F03FFUL) /**< CRYPTO0_BITCLR end address  */
#define CRYPTO0_BITCLR_MEM_BITS    ((uint32_t) 0x0000000AUL) /**< CRYPTO0_BITCLR used bits  */
#define CRYPTO_BITCLR_MEM_BASE     CRYPTO0_BITCLR_MEM_BASE   /**< Alias for CRYPTO0_BITCLR_MEM_BASE */
#define CRYPTO_BITCLR_MEM_SIZE     CRYPTO0_BITCLR_MEM_SIZE   /**< Alias for CRYPTO0_BITCLR_MEM_SIZE */
#define CRYPTO_BITCLR_MEM_END      CRYPTO0_BITCLR_MEM_END    /**< Alias for CRYPTO0_BITCLR_MEM_END  */
#define CRYPTO_BITCLR_MEM_BITS     CRYPTO0_BITCLR_MEM_BITS   /**< Alias for CRYPTO0_BITCLR_MEM_BITS */
#define PER_BITSET_MEM_BASE        ((uint32_t) 0x46000000UL) /**< PER_BITSET base address  */
#define PER_BITSET_MEM_SIZE        ((uint32_t) 0xF0000UL)    /**< PER_BITSET available address space  */
#define PER_BITSET_MEM_END         ((uint32_t) 0x460EFFFFUL) /**< PER_BITSET end address  */
#define PER_BITSET_MEM_BITS        ((uint32_t) 0x00000014UL) /**< PER_BITSET used bits  */
#define CRYPTO1_BITSET_MEM_BASE    ((uint32_t) 0x460F0400UL) /**< CRYPTO1_BITSET base address  */
#define CRYPTO1_BITSET_MEM_SIZE    ((uint32_t) 0x400UL)      /**< CRYPTO1_BITSET available address space  */
#define CRYPTO1_BITSET_MEM_END     ((uint32_t) 0x460F07FFUL) /**< CRYPTO1_BITSET end address  */
#define CRYPTO1_BITSET_MEM_BITS    ((uint32_t) 0x0000000AUL) /**< CRYPTO1_BITSET used bits  */
#define RAM2_CODE_MEM_BASE         ((uint32_t) 0x10010000UL) /**< RAM2_CODE base address  */
#define RAM2_CODE_MEM_SIZE         ((uint32_t) 0x800UL)      /**< RAM2_CODE available address space  */
#define RAM2_CODE_MEM_END          ((uint32_t) 0x100107FFUL) /**< RAM2_CODE end address  */
#define RAM2_CODE_MEM_BITS         ((uint32_t) 0x0000000BUL) /**< RAM2_CODE used bits  */
#define RAM_MEM_BASE               ((uint32_t) 0x20000000UL) /**< RAM base address  */
#define RAM_MEM_SIZE               ((uint32_t) 0x8000UL)     /**< RAM available address space  */
#define RAM_MEM_END                ((uint32_t) 0x20007FFFUL) /**< RAM end address  */
#define RAM_MEM_BITS               ((uint32_t) 0x0000000FUL) /**< RAM used bits  */

/** Bit banding area */
#define BITBAND_PER_BASE           ((uint32_t) 0x42000000UL) /**< Peripheral Address Space bit-band area */
#define BITBAND_RAM_BASE           ((uint32_t) 0x22000000UL) /**< SRAM Address Space bit-band area */

/** Flash and SRAM limits for EFR32MG13P932F512IM48 */
#define FLASH_BASE                 (0x00000000UL) /**< Flash Base Address */
#define FLASH_SIZE                 (0x00080000UL) /**< Available Flash Memory */
#define FLASH_PAGE_SIZE            2048U          /**< Flash Memory page size */
#define SRAM_BASE                  (0x20000000UL) /**< SRAM Base Address */
#define SRAM_SIZE                  (0x00010000UL) /**< Available SRAM Memory */
#define __CM4_REV                  0x001          /**< Cortex-M4 Core revision r0p1 */
#define PRS_CHAN_COUNT             12             /**< Number of PRS channels */
#define DMA_CHAN_COUNT             8              /**< Number of DMA channels */
#define EXT_IRQ_COUNT              47             /**< Number of External (NVIC) interrupts */

/** AF channels connect the different on-chip peripherals with the af-mux */
#define AFCHAN_MAX                 118
/** AF channel maximum location number */
#define AFCHANLOC_MAX              32
/** Analog AF channels */
#define AFACHAN_MAX                118

/* Part number capabilities */

#define CRYPTO_PRESENT          /**< CRYPTO is available in this part */
#define CRYPTO_COUNT          2 /**< 2 CRYPTOs available  */
#define TIMER_PRESENT           /**< TIMER is available in this part */
#define TIMER_COUNT           2 /**< 2 TIMERs available  */
#define WTIMER_PRESENT          /**< WTIMER is available in this part */
#define WTIMER_COUNT          1 /**< 1 WTIMERs available  */
#define USART_PRESENT           /**< USART is available in this part */
#define USART_COUNT           3 /**< 3 USARTs available  */
#define LEUART_PRESENT          /**< LEUART is available in this part */
#define LEUART_COUNT          1 /**< 1 LEUARTs available  */
#define LETIMER_PRESENT         /**< LETIMER is available in this part */
#define LETIMER_COUNT         1 /**< 1 LETIMERs available  */
#define PCNT_PRESENT            /**< PCNT is available in this part */
#define PCNT_COUNT            1 /**< 1 PCNTs available  */
#define I2C_PRESENT             /**< I2C is available in this part */
#define I2C_COUNT             2 /**< 2 I2Cs available  */
#define ADC_PRESENT             /**< ADC is available in this part */
#define ADC_COUNT             1 /**< 1 ADCs available  */
#define ACMP_PRESENT            /**< ACMP is available in this part */
#define ACMP_COUNT            2 /**< 2 ACMPs available  */
#define WDOG_PRESENT            /**< WDOG is available in this part */
#define WDOG_COUNT            2 /**< 2 WDOGs available  */
#define TRNG_PRESENT            /**< TRNG is available in this part */
#define TRNG_COUNT            1 /**< 1 TRNGs available  */
#define MSC_PRESENT             /**< MSC is available in this part */
#define MSC_COUNT             1 /**< 1 MSC available */
#define EMU_PRESENT             /**< EMU is available in this part */
#define EMU_COUNT             1 /**< 1 EMU available */
#define RMU_PRESENT             /**< RMU is available in this part */
#define RMU_COUNT             1 /**< 1 RMU available */
#define CMU_PRESENT             /**< CMU is available in this part */
#define CMU_COUNT             1 /**< 1 CMU available */
#define GPIO_PRESENT            /**< GPIO is available in this part */
#define GPIO_COUNT            1 /**< 1 GPIO available */
#define PRS_PRESENT             /**< PRS is available in this part */
#define PRS_COUNT             1 /**< 1 PRS available */
#define LDMA_PRESENT            /**< LDMA is available in this part */
#define LDMA_COUNT            1 /**< 1 LDMA available */
#define FPUEH_PRESENT           /**< FPUEH is available in this part */
#define FPUEH_COUNT           1 /**< 1 FPUEH available */
#define GPCRC_PRESENT           /**< GPCRC is available in this part */
#define GPCRC_COUNT           1 /**< 1 GPCRC available */
#define CRYOTIMER_PRESENT       /**< CRYOTIMER is available in this part */
#define CRYOTIMER_COUNT       1 /**< 1 CRYOTIMER available */
#define LESENSE_PRESENT         /**< LESENSE is available in this part */
#define LESENSE_COUNT         1 /**< 1 LESENSE available */
#define RTCC_PRESENT            /**< RTCC is available in this part */
#define RTCC_COUNT            1 /**< 1 RTCC available */
#define ETM_PRESENT             /**< ETM is available in this part */
#define ETM_COUNT             1 /**< 1 ETM available */
#define BOOTLOADER_PRESENT      /**< BOOTLOADER is available in this part */
#define BOOTLOADER_COUNT      1 /**< 1 BOOTLOADER available */
#define SMU_PRESENT             /**< SMU is available in this part */
#define SMU_COUNT             1 /**< 1 SMU available */
#define DCDC_PRESENT            /**< DCDC is available in this part */
#define DCDC_COUNT            1 /**< 1 DCDC available */

#include "core_cm4.h"           /* Cortex-M4 processor and core peripherals */
#include "system_efr32mg13p.h"  /* System Header File */

/** @} End of group EFR32MG13P932F512IM48_Part */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_Peripheral_TypeDefs Peripheral TypeDefs
 * @{
 * @brief Device Specific Peripheral Register Structures
 *****************************************************************************/

#include "efr32mg13p_msc.h"
#include "efr32mg13p_emu.h"
#include "efr32mg13p_rmu.h"

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_CMU CMU
 * @{
 * @brief EFR32MG13P932F512IM48_CMU Register Declaration
 *****************************************************************************/
/** CMU Register Declaration */
typedef struct {
  __IOM uint32_t CTRL;                /**< CMU Control Register  */

  uint32_t       RESERVED0[3];        /**< Reserved for future use **/
  __IOM uint32_t HFRCOCTRL;           /**< HFRCO Control Register  */

  uint32_t       RESERVED1[1];        /**< Reserved for future use **/
  __IOM uint32_t AUXHFRCOCTRL;        /**< AUXHFRCO Control Register  */

  uint32_t       RESERVED2[1];        /**< Reserved for future use **/
  __IOM uint32_t LFRCOCTRL;           /**< LFRCO Control Register  */
  __IOM uint32_t HFXOCTRL;            /**< HFXO Control Register  */

  uint32_t       RESERVED3[1];        /**< Reserved for future use **/
  __IOM uint32_t HFXOSTARTUPCTRL;     /**< HFXO Startup Control  */
  __IOM uint32_t HFXOSTEADYSTATECTRL; /**< HFXO Steady State control  */
  __IOM uint32_t HFXOTIMEOUTCTRL;     /**< HFXO Timeout Control  */
  __IOM uint32_t LFXOCTRL;            /**< LFXO Control Register  */

  uint32_t       RESERVED4[1];        /**< Reserved for future use **/
  __IOM uint32_t DPLLCTRL;            /**< DPLL Control Register  */
  __IOM uint32_t DPLLCTRL1;           /**< DPLL Control Register  */
  uint32_t       RESERVED5[2];        /**< Reserved for future use **/
  __IOM uint32_t CALCTRL;             /**< Calibration Control Register  */
  __IOM uint32_t CALCNT;              /**< Calibration Counter Register  */
  uint32_t       RESERVED6[2];        /**< Reserved for future use **/
  __IOM uint32_t OSCENCMD;            /**< Oscillator Enable/Disable Command Register  */
  __IOM uint32_t CMD;                 /**< Command Register  */
  uint32_t       RESERVED7[2];        /**< Reserved for future use **/
  __IOM uint32_t DBGCLKSEL;           /**< Debug Trace Clock Select  */
  __IOM uint32_t HFCLKSEL;            /**< High Frequency Clock Select Command Register  */
  uint32_t       RESERVED8[2];        /**< Reserved for future use **/
  __IOM uint32_t LFACLKSEL;           /**< Low Frequency A Clock Select Register  */
  __IOM uint32_t LFBCLKSEL;           /**< Low Frequency B Clock Select Register  */
  __IOM uint32_t LFECLKSEL;           /**< Low Frequency E Clock Select Register  */

  uint32_t       RESERVED9[1];        /**< Reserved for future use **/
  __IM uint32_t  STATUS;              /**< Status Register  */
  __IM uint32_t  HFCLKSTATUS;         /**< HFCLK Status Register  */
  uint32_t       RESERVED10[1];       /**< Reserved for future use **/
  __IM uint32_t  HFXOTRIMSTATUS;      /**< HFXO Trim Status  */
  __IM uint32_t  IF;                  /**< Interrupt Flag Register  */
  __IOM uint32_t IFS;                 /**< Interrupt Flag Set Register  */
  __IOM uint32_t IFC;                 /**< Interrupt Flag Clear Register  */
  __IOM uint32_t IEN;                 /**< Interrupt Enable Register  */
  __IOM uint32_t HFBUSCLKEN0;         /**< High Frequency Bus Clock Enable Register 0  */

  uint32_t       RESERVED11[3];       /**< Reserved for future use **/
  __IOM uint32_t HFPERCLKEN0;         /**< High Frequency Peripheral Clock Enable Register 0  */

  uint32_t       RESERVED12[7];       /**< Reserved for future use **/
  __IOM uint32_t LFACLKEN0;           /**< Low Frequency A Clock Enable Register 0  (Async Reg)  */
  uint32_t       RESERVED13[1];       /**< Reserved for future use **/
  __IOM uint32_t LFBCLKEN0;           /**< Low Frequency B Clock Enable Register 0 (Async Reg)  */

  uint32_t       RESERVED14[1];       /**< Reserved for future use **/
  __IOM uint32_t LFECLKEN0;           /**< Low Frequency E Clock Enable Register 0 (Async Reg)  */
  uint32_t       RESERVED15[3];       /**< Reserved for future use **/
  __IOM uint32_t HFPRESC;             /**< High Frequency Clock Prescaler Register  */

  uint32_t       RESERVED16[1];       /**< Reserved for future use **/
  __IOM uint32_t HFCOREPRESC;         /**< High Frequency Core Clock Prescaler Register  */
  __IOM uint32_t HFPERPRESC;          /**< High Frequency Peripheral Clock Prescaler Register  */

  uint32_t       RESERVED17[1];       /**< Reserved for future use **/
  __IOM uint32_t HFEXPPRESC;          /**< High Frequency Export Clock Prescaler Register  */

  uint32_t       RESERVED18[2];       /**< Reserved for future use **/
  __IOM uint32_t LFAPRESC0;           /**< Low Frequency A Prescaler Register 0 (Async Reg)  */
  uint32_t       RESERVED19[1];       /**< Reserved for future use **/
  __IOM uint32_t LFBPRESC0;           /**< Low Frequency B Prescaler Register 0  (Async Reg)  */
  uint32_t       RESERVED20[1];       /**< Reserved for future use **/
  __IOM uint32_t LFEPRESC0;           /**< Low Frequency E Prescaler Register 0  (Async Reg)  */

  uint32_t       RESERVED21[3];       /**< Reserved for future use **/
  __IM uint32_t  SYNCBUSY;            /**< Synchronization Busy Register  */
  __IOM uint32_t FREEZE;              /**< Freeze Register  */
  uint32_t       RESERVED22[2];       /**< Reserved for future use **/
  __IOM uint32_t PCNTCTRL;            /**< PCNT Control Register  */

  uint32_t       RESERVED23[2];       /**< Reserved for future use **/
  __IOM uint32_t ADCCTRL;             /**< ADC Control Register  */

  uint32_t       RESERVED24[4];       /**< Reserved for future use **/
  __IOM uint32_t ROUTEPEN;            /**< I/O Routing Pin Enable Register  */
  __IOM uint32_t ROUTELOC0;           /**< I/O Routing Location Register  */
  __IOM uint32_t ROUTELOC1;           /**< I/O Routing Location Register  */
  uint32_t       RESERVED25[1];       /**< Reserved for future use **/
  __IOM uint32_t LOCK;                /**< Configuration Lock Register  */
  __IOM uint32_t HFRCOSS;             /**< HFRCO Spread Spectrum Register  */
} CMU_TypeDef;                        /** @} */

#include "efr32mg13p_crypto.h"
#include "efr32mg13p_gpio_p.h"
#include "efr32mg13p_gpio.h"
#include "efr32mg13p_prs_ch.h"

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_PRS PRS
 * @{
 * @brief EFR32MG13P932F512IM48_PRS Register Declaration
 *****************************************************************************/
/** PRS Register Declaration */
typedef struct {
  __IOM uint32_t SWPULSE;      /**< Software Pulse Register  */
  __IOM uint32_t SWLEVEL;      /**< Software Level Register  */
  __IOM uint32_t ROUTEPEN;     /**< I/O Routing Pin Enable Register  */
  uint32_t       RESERVED0[1]; /**< Reserved for future use **/
  __IOM uint32_t ROUTELOC0;    /**< I/O Routing Location Register  */
  __IOM uint32_t ROUTELOC1;    /**< I/O Routing Location Register  */
  __IOM uint32_t ROUTELOC2;    /**< I/O Routing Location Register  */

  uint32_t       RESERVED1[5]; /**< Reserved for future use **/
  __IOM uint32_t CTRL;         /**< Control Register  */
  __IOM uint32_t DMAREQ0;      /**< DMA Request 0 Register  */
  __IOM uint32_t DMAREQ1;      /**< DMA Request 1 Register  */
  uint32_t       RESERVED2[1]; /**< Reserved for future use **/
  __IM uint32_t  PEEK;         /**< PRS Channel Values  */

  uint32_t       RESERVED3[3]; /**< Reserved registers */
  PRS_CH_TypeDef CH[12];       /**< Channel registers */
} PRS_TypeDef;                 /** @} */

#include "efr32mg13p_ldma_ch.h"

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_LDMA LDMA
 * @{
 * @brief EFR32MG13P932F512IM48_LDMA Register Declaration
 *****************************************************************************/
/** LDMA Register Declaration */
typedef struct {
  __IOM uint32_t  CTRL;         /**< DMA Control Register  */
  __IM uint32_t   STATUS;       /**< DMA Status Register  */
  __IOM uint32_t  SYNC;         /**< DMA Synchronization Trigger Register (Single-Cycle RMW)  */
  uint32_t        RESERVED0[5]; /**< Reserved for future use **/
  __IOM uint32_t  CHEN;         /**< DMA Channel Enable Register (Single-Cycle RMW)  */
  __IM uint32_t   CHBUSY;       /**< DMA Channel Busy Register  */
  __IOM uint32_t  CHDONE;       /**< DMA Channel Linking Done Register (Single-Cycle RMW)  */
  __IOM uint32_t  DBGHALT;      /**< DMA Channel Debug Halt Register  */
  __IOM uint32_t  SWREQ;        /**< DMA Channel Software Transfer Request Register  */
  __IOM uint32_t  REQDIS;       /**< DMA Channel Request Disable Register  */
  __IM uint32_t   REQPEND;      /**< DMA Channel Requests Pending Register  */
  __IOM uint32_t  LINKLOAD;     /**< DMA Channel Link Load Register  */
  __IOM uint32_t  REQCLEAR;     /**< DMA Channel Request Clear Register  */
  uint32_t        RESERVED1[7]; /**< Reserved for future use **/
  __IM uint32_t   IF;           /**< Interrupt Flag Register  */
  __IOM uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __IOM uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IOM uint32_t  IEN;          /**< Interrupt Enable register  */

  uint32_t        RESERVED2[4]; /**< Reserved registers */
  LDMA_CH_TypeDef CH[8];        /**< DMA Channel Registers */
} LDMA_TypeDef;                 /** @} */

#include "efr32mg13p_fpueh.h"
#include "efr32mg13p_gpcrc.h"
#include "efr32mg13p_timer_cc.h"
#include "efr32mg13p_timer.h"
#include "efr32mg13p_usart.h"
#include "efr32mg13p_leuart.h"
#include "efr32mg13p_letimer.h"
#include "efr32mg13p_cryotimer.h"
#include "efr32mg13p_pcnt.h"
#include "efr32mg13p_i2c.h"
#include "efr32mg13p_adc.h"
#include "efr32mg13p_acmp.h"
#include "efr32mg13p_lesense_st.h"
#include "efr32mg13p_lesense_buf.h"
#include "efr32mg13p_lesense_ch.h"
#include "efr32mg13p_lesense.h"
#include "efr32mg13p_rtcc_cc.h"
#include "efr32mg13p_rtcc_ret.h"
#include "efr32mg13p_rtcc.h"
#include "efr32mg13p_wdog_pch.h"
#include "efr32mg13p_wdog.h"
#include "efr32mg13p_etm.h"

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_SMU SMU
 * @{
 * @brief EFR32MG13P932F512IM48_SMU Register Declaration
 *****************************************************************************/
/** SMU Register Declaration */
typedef struct {
  uint32_t       RESERVED0[3];  /**< Reserved for future use **/
  __IM uint32_t  IF;            /**< Interrupt Flag Register  */
  __IOM uint32_t IFS;           /**< Interrupt Flag Set Register  */
  __IOM uint32_t IFC;           /**< Interrupt Flag Clear Register  */
  __IOM uint32_t IEN;           /**< Interrupt Enable Register  */

  uint32_t       RESERVED1[9];  /**< Reserved for future use **/
  __IOM uint32_t PPUCTRL;       /**< PPU Control Register  */
  uint32_t       RESERVED2[3];  /**< Reserved for future use **/
  __IOM uint32_t PPUPATD0;      /**< PPU Privilege Access Type Descriptor 0  */
  __IOM uint32_t PPUPATD1;      /**< PPU Privilege Access Type Descriptor 1  */

  uint32_t       RESERVED3[14]; /**< Reserved for future use **/
  __IM uint32_t  PPUFS;         /**< PPU Fault Status  */
} SMU_TypeDef;                  /** @} */

#include "efr32mg13p_trng.h"
#include "efr32mg13p_dma_descriptor.h"
#include "efr32mg13p_devinfo.h"
#include "efr32mg13p_romtable.h"

/** @} End of group EFR32MG13P932F512IM48_Peripheral_TypeDefs  */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_Peripheral_Base Peripheral Memory Map
 * @{
 *****************************************************************************/

#define MSC_BASE          (0x400E0000UL) /**< MSC base address  */
#define EMU_BASE          (0x400E3000UL) /**< EMU base address  */
#define RMU_BASE          (0x400E5000UL) /**< RMU base address  */
#define CMU_BASE          (0x400E4000UL) /**< CMU base address  */
#define CRYPTO0_BASE      (0x400F0000UL) /**< CRYPTO0 base address  */
#define CRYPTO_BASE       CRYPTO0_BASE   /**< Alias for CRYPTO0 base address */
#define CRYPTO1_BASE      (0x400F0400UL) /**< CRYPTO1 base address  */
#define GPIO_BASE         (0x4000A000UL) /**< GPIO base address  */
#define PRS_BASE          (0x400E6000UL) /**< PRS base address  */
#define LDMA_BASE         (0x400E2000UL) /**< LDMA base address  */
#define FPUEH_BASE        (0x400E1000UL) /**< FPUEH base address  */
#define GPCRC_BASE        (0x4001C000UL) /**< GPCRC base address  */
#define TIMER0_BASE       (0x40018000UL) /**< TIMER0 base address  */
#define TIMER1_BASE       (0x40018400UL) /**< TIMER1 base address  */
#define WTIMER0_BASE      (0x4001A000UL) /**< WTIMER0 base address  */
#define USART0_BASE       (0x40010000UL) /**< USART0 base address  */
#define USART1_BASE       (0x40010400UL) /**< USART1 base address  */
#define USART2_BASE       (0x40010800UL) /**< USART2 base address  */
#define LEUART0_BASE      (0x4004A000UL) /**< LEUART0 base address  */
#define LETIMER0_BASE     (0x40046000UL) /**< LETIMER0 base address  */
#define CRYOTIMER_BASE    (0x4001E000UL) /**< CRYOTIMER base address  */
#define PCNT0_BASE        (0x4004E000UL) /**< PCNT0 base address  */
#define I2C0_BASE         (0x4000C000UL) /**< I2C0 base address  */
#define I2C1_BASE         (0x4000C400UL) /**< I2C1 base address  */
#define ADC0_BASE         (0x40002000UL) /**< ADC0 base address  */
#define ACMP0_BASE        (0x40000000UL) /**< ACMP0 base address  */
#define ACMP1_BASE        (0x40000400UL) /**< ACMP1 base address  */
#define LESENSE_BASE      (0x40055000UL) /**< LESENSE base address  */
#define RTCC_BASE         (0x40042000UL) /**< RTCC base address  */
#define WDOG0_BASE        (0x40052000UL) /**< WDOG0 base address  */
#define WDOG1_BASE        (0x40052400UL) /**< WDOG1 base address  */
#define ETM_BASE          (0xE0041000UL) /**< ETM base address  */
#define SMU_BASE          (0x40022000UL) /**< SMU base address  */
#define TRNG0_BASE        (0x4001D000UL) /**< TRNG0 base address  */
#define DEVINFO_BASE      (0x0FE081B0UL) /**< DEVINFO base address */
#define ROMTABLE_BASE     (0xE00FFFD0UL) /**< ROMTABLE base address */
#define LOCKBITS_BASE     (0x0FE04000UL) /**< Lock-bits page base address */
#define USERDATA_BASE     (0x0FE00000UL) /**< User data page base address */

/** @} End of group EFR32MG13P932F512IM48_Peripheral_Base */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_Peripheral_Declaration Peripheral Declarations
 * @{
 *****************************************************************************/

#define MSC          ((MSC_TypeDef *) MSC_BASE)             /**< MSC base pointer */
#define EMU          ((EMU_TypeDef *) EMU_BASE)             /**< EMU base pointer */
#define RMU          ((RMU_TypeDef *) RMU_BASE)             /**< RMU base pointer */
#define CMU          ((CMU_TypeDef *) CMU_BASE)             /**< CMU base pointer */
#define CRYPTO0      ((CRYPTO_TypeDef *) CRYPTO0_BASE)      /**< CRYPTO0 base pointer */
#define CRYPTO       CRYPTO0                                /**< Alias for CRYPTO0 base pointer */
#define CRYPTO1      ((CRYPTO_TypeDef *) CRYPTO1_BASE)      /**< CRYPTO1 base pointer */
#define GPIO         ((GPIO_TypeDef *) GPIO_BASE)           /**< GPIO base pointer */
#define PRS          ((PRS_TypeDef *) PRS_BASE)             /**< PRS base pointer */
#define LDMA         ((LDMA_TypeDef *) LDMA_BASE)           /**< LDMA base pointer */
#define FPUEH        ((FPUEH_TypeDef *) FPUEH_BASE)         /**< FPUEH base pointer */
#define GPCRC        ((GPCRC_TypeDef *) GPCRC_BASE)         /**< GPCRC base pointer */
#define TIMER0       ((TIMER_TypeDef *) TIMER0_BASE)        /**< TIMER0 base pointer */
#define TIMER1       ((TIMER_TypeDef *) TIMER1_BASE)        /**< TIMER1 base pointer */
#define WTIMER0      ((TIMER_TypeDef *) WTIMER0_BASE)       /**< WTIMER0 base pointer */
#define USART0       ((USART_TypeDef *) USART0_BASE)        /**< USART0 base pointer */
#define USART1       ((USART_TypeDef *) USART1_BASE)        /**< USART1 base pointer */
#define USART2       ((USART_TypeDef *) USART2_BASE)        /**< USART2 base pointer */
#define LEUART0      ((LEUART_TypeDef *) LEUART0_BASE)      /**< LEUART0 base pointer */
#define LETIMER0     ((LETIMER_TypeDef *) LETIMER0_BASE)    /**< LETIMER0 base pointer */
#define CRYOTIMER    ((CRYOTIMER_TypeDef *) CRYOTIMER_BASE) /**< CRYOTIMER base pointer */
#define PCNT0        ((PCNT_TypeDef *) PCNT0_BASE)          /**< PCNT0 base pointer */
#define I2C0         ((I2C_TypeDef *) I2C0_BASE)            /**< I2C0 base pointer */
#define I2C1         ((I2C_TypeDef *) I2C1_BASE)            /**< I2C1 base pointer */
#define ADC0         ((ADC_TypeDef *) ADC0_BASE)            /**< ADC0 base pointer */
#define ACMP0        ((ACMP_TypeDef *) ACMP0_BASE)          /**< ACMP0 base pointer */
#define ACMP1        ((ACMP_TypeDef *) ACMP1_BASE)          /**< ACMP1 base pointer */
#define LESENSE      ((LESENSE_TypeDef *) LESENSE_BASE)     /**< LESENSE base pointer */
#define RTCC         ((RTCC_TypeDef *) RTCC_BASE)           /**< RTCC base pointer */
#define WDOG0        ((WDOG_TypeDef *) WDOG0_BASE)          /**< WDOG0 base pointer */
#define WDOG1        ((WDOG_TypeDef *) WDOG1_BASE)          /**< WDOG1 base pointer */
#define ETM          ((ETM_TypeDef *) ETM_BASE)             /**< ETM base pointer */
#define SMU          ((SMU_TypeDef *) SMU_BASE)             /**< SMU base pointer */
#define TRNG0        ((TRNG_TypeDef *) TRNG0_BASE)          /**< TRNG0 base pointer */
#define DEVINFO      ((DEVINFO_TypeDef *) DEVINFO_BASE)     /**< DEVINFO base pointer */
#define ROMTABLE     ((ROMTABLE_TypeDef *) ROMTABLE_BASE)   /**< ROMTABLE base pointer */

/** @} End of group EFR32MG13P932F512IM48_Peripheral_Declaration */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_Peripheral_Offsets Peripheral Offsets
 * @{
 *****************************************************************************/

#define CRYPTO_OFFSET     0x400 /**< Offset in bytes between CRYPTO instances */
#define TIMER_OFFSET      0x400 /**< Offset in bytes between TIMER instances */
#define WTIMER_OFFSET     0x400 /**< Offset in bytes between WTIMER instances */
#define USART_OFFSET      0x400 /**< Offset in bytes between USART instances */
#define LEUART_OFFSET     0x400 /**< Offset in bytes between LEUART instances */
#define LETIMER_OFFSET    0x400 /**< Offset in bytes between LETIMER instances */
#define PCNT_OFFSET       0x400 /**< Offset in bytes between PCNT instances */
#define I2C_OFFSET        0x400 /**< Offset in bytes between I2C instances */
#define ADC_OFFSET        0x400 /**< Offset in bytes between ADC instances */
#define ACMP_OFFSET       0x400 /**< Offset in bytes between ACMP instances */
#define WDOG_OFFSET       0x400 /**< Offset in bytes between WDOG instances */
#define TRNG_OFFSET       0x400 /**< Offset in bytes between TRNG instances */

/** @} End of group EFR32MG13P932F512IM48_Peripheral_Offsets */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_BitFields Bit Fields
 * @{
 *****************************************************************************/

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_PRS
 * @{
 * @addtogroup EFR32MG13P932F512IM48_PRS_Signals PRS Signals
 * @{
 * @brief PRS Signal names
 *****************************************************************************/
#define PRS_PRS_CH0                 ((1 << 8) + 0)  /**< PRS PRS channel 0 */
#define PRS_PRS_CH1                 ((1 << 8) + 1)  /**< PRS PRS channel 1 */
#define PRS_PRS_CH2                 ((1 << 8) + 2)  /**< PRS PRS channel 2 */
#define PRS_PRS_CH3                 ((1 << 8) + 3)  /**< PRS PRS channel 3 */
#define PRS_PRS_CH4                 ((1 << 8) + 4)  /**< PRS PRS channel 4 */
#define PRS_PRS_CH5                 ((1 << 8) + 5)  /**< PRS PRS channel 5 */
#define PRS_PRS_CH6                 ((1 << 8) + 6)  /**< PRS PRS channel 6 */
#define PRS_PRS_CH7                 ((1 << 8) + 7)  /**< PRS PRS channel 7 */
#define PRS_PRS_CH8                 ((2 << 8) + 0)  /**< PRS PRS channel 8 */
#define PRS_PRS_CH9                 ((2 << 8) + 1)  /**< PRS PRS channel 9 */
#define PRS_PRS_CH10                ((2 << 8) + 2)  /**< PRS PRS channel 10 */
#define PRS_PRS_CH11                ((2 << 8) + 3)  /**< PRS PRS channel 11 */
#define PRS_ACMP0_OUT               ((3 << 8) + 0)  /**< PRS Analog comparator output */
#define PRS_ACMP1_OUT               ((4 << 8) + 0)  /**< PRS Analog comparator output */
#define PRS_ADC0_SINGLE             ((5 << 8) + 0)  /**< PRS ADC single conversion done */
#define PRS_ADC0_SCAN               ((5 << 8) + 1)  /**< PRS ADC scan conversion done */
#define PRS_LESENSE_SCANRES0        ((7 << 8) + 0)  /**< PRS LESENSE SCANRES register, bit 0 */
#define PRS_LESENSE_SCANRES1        ((7 << 8) + 1)  /**< PRS LESENSE SCANRES register, bit 1 */
#define PRS_LESENSE_SCANRES2        ((7 << 8) + 2)  /**< PRS LESENSE SCANRES register, bit 2 */
#define PRS_LESENSE_SCANRES3        ((7 << 8) + 3)  /**< PRS LESENSE SCANRES register, bit 3 */
#define PRS_LESENSE_SCANRES4        ((7 << 8) + 4)  /**< PRS LESENSE SCANRES register, bit 4 */
#define PRS_LESENSE_SCANRES5        ((7 << 8) + 5)  /**< PRS LESENSE SCANRES register, bit 5 */
#define PRS_LESENSE_SCANRES6        ((7 << 8) + 6)  /**< PRS LESENSE SCANRES register, bit 6 */
#define PRS_LESENSE_SCANRES7        ((7 << 8) + 7)  /**< PRS LESENSE SCANRES register, bit 7 */
#define PRS_LESENSE_SCANRES8        ((8 << 8) + 0)  /**< PRS LESENSE SCANRES register, bit 8 */
#define PRS_LESENSE_SCANRES9        ((8 << 8) + 1)  /**< PRS LESENSE SCANRES register, bit 9 */
#define PRS_LESENSE_SCANRES10       ((8 << 8) + 2)  /**< PRS LESENSE SCANRES register, bit 10 */
#define PRS_LESENSE_SCANRES11       ((8 << 8) + 3)  /**< PRS LESENSE SCANRES register, bit 11 */
#define PRS_LESENSE_SCANRES12       ((8 << 8) + 4)  /**< PRS LESENSE SCANRES register, bit 12 */
#define PRS_LESENSE_SCANRES13       ((8 << 8) + 5)  /**< PRS LESENSE SCANRES register, bit 13 */
#define PRS_LESENSE_SCANRES14       ((8 << 8) + 6)  /**< PRS LESENSE SCANRES register, bit 14 */
#define PRS_LESENSE_SCANRES15       ((8 << 8) + 7)  /**< PRS LESENSE SCANRES register, bit 15 */
#define PRS_LESENSE_DEC0            ((9 << 8) + 0)  /**< PRS LESENSE Decoder PRS out 0 */
#define PRS_LESENSE_DEC1            ((9 << 8) + 1)  /**< PRS LESENSE Decoder PRS out 1 */
#define PRS_LESENSE_DEC2            ((9 << 8) + 2)  /**< PRS LESENSE Decoder PRS out 2 */
#define PRS_LESENSE_DECCMP          ((9 << 8) + 3)  /**< PRS LESENSE Decoder PRS compare value match channel */
#define PRS_LESENSE_MEASACT         ((10 << 8) + 0) /**< PRS LESENSE Measurement active */
#define PRS_RTCC_CCV0               ((11 << 8) + 1) /**< PRS RTCC Compare 0 */
#define PRS_RTCC_CCV1               ((11 << 8) + 2) /**< PRS RTCC Compare 1 */
#define PRS_RTCC_CCV2               ((11 << 8) + 3) /**< PRS RTCC Compare 2 */
#define PRS_GPIO_PIN0               ((12 << 8) + 0) /**< PRS GPIO pin 0 */
#define PRS_GPIO_PIN1               ((12 << 8) + 1) /**< PRS GPIO pin 1 */
#define PRS_GPIO_PIN2               ((12 << 8) + 2) /**< PRS GPIO pin 2 */
#define PRS_GPIO_PIN3               ((12 << 8) + 3) /**< PRS GPIO pin 3 */
#define PRS_GPIO_PIN4               ((12 << 8) + 4) /**< PRS GPIO pin 4 */
#define PRS_GPIO_PIN5               ((12 << 8) + 5) /**< PRS GPIO pin 5 */
#define PRS_GPIO_PIN6               ((12 << 8) + 6) /**< PRS GPIO pin 6 */
#define PRS_GPIO_PIN7               ((12 << 8) + 7) /**< PRS GPIO pin 7 */
#define PRS_GPIO_PIN8               ((13 << 8) + 0) /**< PRS GPIO pin 8 */
#define PRS_GPIO_PIN9               ((13 << 8) + 1) /**< PRS GPIO pin 9 */
#define PRS_GPIO_PIN10              ((13 << 8) + 2) /**< PRS GPIO pin 10 */
#define PRS_GPIO_PIN11              ((13 << 8) + 3) /**< PRS GPIO pin 11 */
#define PRS_GPIO_PIN12              ((13 << 8) + 4) /**< PRS GPIO pin 12 */
#define PRS_GPIO_PIN13              ((13 << 8) + 5) /**< PRS GPIO pin 13 */
#define PRS_GPIO_PIN14              ((13 << 8) + 6) /**< PRS GPIO pin 14 */
#define PRS_GPIO_PIN15              ((13 << 8) + 7) /**< PRS GPIO pin 15 */
#define PRS_LETIMER0_CH0            ((14 << 8) + 0) /**< PRS LETIMER CH0 Out */
#define PRS_LETIMER0_CH1            ((14 << 8) + 1) /**< PRS LETIMER CH1 Out */
#define PRS_PCNT0_TCC               ((15 << 8) + 0) /**< PRS PCNT0 Triggered compare match */
#define PRS_PCNT0_UFOF              ((15 << 8) + 1) /**< PRS PCNT0 Counter overflow or underflow */
#define PRS_PCNT0_DIR               ((15 << 8) + 2) /**< PRS PCNT0 Counter direction */
#define PRS_CMU_CLKOUT0             ((18 << 8) + 0) /**< PRS Clock Output 0 */
#define PRS_CMU_CLKOUT1             ((18 << 8) + 1) /**< PRS Clock Output 1 */
#define PRS_RFSENSE_WU              ((25 << 8) + 0) /**< PRS RFSENSE Output */
#define PRS_CRYOTIMER_PERIOD        ((26 << 8) + 0) /**< PRS CRYOTIMER Output */
#define PRS_USART0_IRTX             ((48 << 8) + 0) /**< PRS USART 0 IRDA out */
#define PRS_USART0_TXC              ((48 << 8) + 1) /**< PRS USART 0 TX complete */
#define PRS_USART0_RXDATAV          ((48 << 8) + 2) /**< PRS USART 0 RX Data Valid */
#define PRS_USART0_RTS              ((48 << 8) + 3) /**< PRS USART 0 RTS */
#define PRS_USART0_TX               ((48 << 8) + 5) /**< PRS USART 0 TX */
#define PRS_USART0_CS               ((48 << 8) + 6) /**< PRS USART 0 CS */
#define PRS_USART1_TXC              ((49 << 8) + 1) /**< PRS USART 1 TX complete */
#define PRS_USART1_RXDATAV          ((49 << 8) + 2) /**< PRS USART 1 RX Data Valid */
#define PRS_USART1_RTS              ((49 << 8) + 3) /**< PRS USART 1 RTS */
#define PRS_USART1_TX               ((49 << 8) + 5) /**< PRS USART 1 TX */
#define PRS_USART1_CS               ((49 << 8) + 6) /**< PRS USART 1 CS */
#define PRS_USART2_IRTX             ((50 << 8) + 0) /**< PRS USART 2 IRDA out */
#define PRS_USART2_TXC              ((50 << 8) + 1) /**< PRS USART 2 TX complete */
#define PRS_USART2_RXDATAV          ((50 << 8) + 2) /**< PRS USART 2 RX Data Valid */
#define PRS_USART2_RTS              ((50 << 8) + 3) /**< PRS USART 2 RTS */
#define PRS_USART2_TX               ((50 << 8) + 5) /**< PRS USART 2 TX */
#define PRS_USART2_CS               ((50 << 8) + 6) /**< PRS USART 2 CS */
#define PRS_TIMER0_UF               ((60 << 8) + 0) /**< PRS Timer 0 Underflow */
#define PRS_TIMER0_OF               ((60 << 8) + 1) /**< PRS Timer 0 Overflow */
#define PRS_TIMER0_CC0              ((60 << 8) + 2) /**< PRS Timer 0 Compare/Capture 0 */
#define PRS_TIMER0_CC1              ((60 << 8) + 3) /**< PRS Timer 0 Compare/Capture 1 */
#define PRS_TIMER0_CC2              ((60 << 8) + 4) /**< PRS Timer 0 Compare/Capture 2 */
#define PRS_TIMER1_UF               ((61 << 8) + 0) /**< PRS Timer 1 Underflow */
#define PRS_TIMER1_OF               ((61 << 8) + 1) /**< PRS Timer 1 Overflow */
#define PRS_TIMER1_CC0              ((61 << 8) + 2) /**< PRS Timer 1 Compare/Capture 0 */
#define PRS_TIMER1_CC1              ((61 << 8) + 3) /**< PRS Timer 1 Compare/Capture 1 */
#define PRS_TIMER1_CC2              ((61 << 8) + 4) /**< PRS Timer 1 Compare/Capture 2 */
#define PRS_TIMER1_CC3              ((61 << 8) + 5) /**< PRS Timer 1 Compare/Capture 3 */
#define PRS_WTIMER0_UF              ((62 << 8) + 0) /**< PRS Timer 2 Underflow */
#define PRS_WTIMER0_OF              ((62 << 8) + 1) /**< PRS Timer 2 Overflow */
#define PRS_WTIMER0_CC0             ((62 << 8) + 2) /**< PRS Timer 2 Compare/Capture 0 */
#define PRS_WTIMER0_CC1             ((62 << 8) + 3) /**< PRS Timer 2 Compare/Capture 1 */
#define PRS_WTIMER0_CC2             ((62 << 8) + 4) /**< PRS Timer 2 Compare/Capture 2 */
#define PRS_CM4_TXEV                ((67 << 8) + 0) /**< PRS  */
#define PRS_CM4_ICACHEPCHITSOF      ((67 << 8) + 1) /**< PRS  */
#define PRS_CM4_ICACHEPCMISSESOF    ((67 << 8) + 2) /**< PRS  */
#define PRS_RAC_ACTIVE              ((81 << 8) + 0) /**< PRS RAC is active */
#define PRS_RAC_TX                  ((81 << 8) + 1) /**< PRS RAC is in TX */
#define PRS_RAC_RX                  ((81 << 8) + 2) /**< PRS RAC is in RX */
#define PRS_RAC_LNAEN               ((81 << 8) + 3) /**< PRS LNA enable */
#define PRS_RAC_PAEN                ((81 << 8) + 4) /**< PRS PA enable */
#define PRS_PROTIMER_LBTS           ((84 << 8) + 5) /**< PRS Listen Before Talk Success */
#define PRS_PROTIMER_LBTR           ((84 << 8) + 6) /**< PRS Listen Before Talk Retry */
#define PRS_PROTIMER_LBTF           ((84 << 8) + 7) /**< PRS Listen Before Talk Failure */
#define PRS_MODEM_FRAMEDET          ((86 << 8) + 0) /**< PRS Frame detected */
#define PRS_MODEM_PREDET            ((86 << 8) + 1) /**< PRS Receive preamble detected */
#define PRS_MODEM_TIMDET            ((86 << 8) + 2) /**< PRS Receive timing detected */
#define PRS_MODEM_FRAMESENT         ((86 << 8) + 3) /**< PRS Entire frame transmitted */
#define PRS_MODEM_SYNCSENT          ((86 << 8) + 4) /**< PRS Syncword transmitted */
#define PRS_MODEM_PRESENT           ((86 << 8) + 5) /**< PRS Preamble transmitted */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_PRS */

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_DMAREQ DMAREQ
 * @{
 * @defgroup EFR32MG13P932F512IM48_DMAREQ_BitFields DMAREQ Bit Fields
 * @{
 *****************************************************************************/
#define DMAREQ_PRS_REQ0               ((1 << 16) + 0)         /**< DMA channel select for PRS_REQ0 */
#define DMAREQ_PRS_REQ1               ((1 << 16) + 1)         /**< DMA channel select for PRS_REQ1 */
#define DMAREQ_ADC0_SINGLE            ((8 << 16) + 0)         /**< DMA channel select for ADC0_SINGLE */
#define DMAREQ_ADC0_SCAN              ((8 << 16) + 1)         /**< DMA channel select for ADC0_SCAN */
#define DMAREQ_USART0_RXDATAV         ((12 << 16) + 0)        /**< DMA channel select for USART0_RXDATAV */
#define DMAREQ_USART0_TXBL            ((12 << 16) + 1)        /**< DMA channel select for USART0_TXBL */
#define DMAREQ_USART0_TXEMPTY         ((12 << 16) + 2)        /**< DMA channel select for USART0_TXEMPTY */
#define DMAREQ_USART1_RXDATAV         ((13 << 16) + 0)        /**< DMA channel select for USART1_RXDATAV */
#define DMAREQ_USART1_TXBL            ((13 << 16) + 1)        /**< DMA channel select for USART1_TXBL */
#define DMAREQ_USART1_TXEMPTY         ((13 << 16) + 2)        /**< DMA channel select for USART1_TXEMPTY */
#define DMAREQ_USART1_RXDATAVRIGHT    ((13 << 16) + 3)        /**< DMA channel select for USART1_RXDATAVRIGHT */
#define DMAREQ_USART1_TXBLRIGHT       ((13 << 16) + 4)        /**< DMA channel select for USART1_TXBLRIGHT */
#define DMAREQ_USART2_RXDATAV         ((14 << 16) + 0)        /**< DMA channel select for USART2_RXDATAV */
#define DMAREQ_USART2_TXBL            ((14 << 16) + 1)        /**< DMA channel select for USART2_TXBL */
#define DMAREQ_USART2_TXEMPTY         ((14 << 16) + 2)        /**< DMA channel select for USART2_TXEMPTY */
#define DMAREQ_LEUART0_RXDATAV        ((16 << 16) + 0)        /**< DMA channel select for LEUART0_RXDATAV */
#define DMAREQ_LEUART0_TXBL           ((16 << 16) + 1)        /**< DMA channel select for LEUART0_TXBL */
#define DMAREQ_LEUART0_TXEMPTY        ((16 << 16) + 2)        /**< DMA channel select for LEUART0_TXEMPTY */
#define DMAREQ_I2C0_RXDATAV           ((20 << 16) + 0)        /**< DMA channel select for I2C0_RXDATAV */
#define DMAREQ_I2C0_TXBL              ((20 << 16) + 1)        /**< DMA channel select for I2C0_TXBL */
#define DMAREQ_I2C1_RXDATAV           ((21 << 16) + 0)        /**< DMA channel select for I2C1_RXDATAV */
#define DMAREQ_I2C1_TXBL              ((21 << 16) + 1)        /**< DMA channel select for I2C1_TXBL */
#define DMAREQ_TIMER0_UFOF            ((24 << 16) + 0)        /**< DMA channel select for TIMER0_UFOF */
#define DMAREQ_TIMER0_CC0             ((24 << 16) + 1)        /**< DMA channel select for TIMER0_CC0 */
#define DMAREQ_TIMER0_CC1             ((24 << 16) + 2)        /**< DMA channel select for TIMER0_CC1 */
#define DMAREQ_TIMER0_CC2             ((24 << 16) + 3)        /**< DMA channel select for TIMER0_CC2 */
#define DMAREQ_TIMER1_UFOF            ((25 << 16) + 0)        /**< DMA channel select for TIMER1_UFOF */
#define DMAREQ_TIMER1_CC0             ((25 << 16) + 1)        /**< DMA channel select for TIMER1_CC0 */
#define DMAREQ_TIMER1_CC1             ((25 << 16) + 2)        /**< DMA channel select for TIMER1_CC1 */
#define DMAREQ_TIMER1_CC2             ((25 << 16) + 3)        /**< DMA channel select for TIMER1_CC2 */
#define DMAREQ_TIMER1_CC3             ((25 << 16) + 4)        /**< DMA channel select for TIMER1_CC3 */
#define DMAREQ_WTIMER0_UFOF           ((26 << 16) + 0)        /**< DMA channel select for WTIMER0_UFOF */
#define DMAREQ_WTIMER0_CC0            ((26 << 16) + 1)        /**< DMA channel select for WTIMER0_CC0 */
#define DMAREQ_WTIMER0_CC1            ((26 << 16) + 2)        /**< DMA channel select for WTIMER0_CC1 */
#define DMAREQ_WTIMER0_CC2            ((26 << 16) + 3)        /**< DMA channel select for WTIMER0_CC2 */
#define DMAREQ_MSC_WDATA              ((48 << 16) + 0)        /**< DMA channel select for MSC_WDATA */
#define DMAREQ_CRYPTO0_DATA0WR        ((49 << 16) + 0)        /**< DMA channel select for CRYPTO0_DATA0WR */
#define DMAREQ_CRYPTO_DATA0WR         DMAREQ_CRYPTO0_DATA0WR  /**< Alias for DMAREQ_CRYPTO0_DATA0WR */
#define DMAREQ_CRYPTO0_DATA0XWR       ((49 << 16) + 1)        /**< DMA channel select for CRYPTO0_DATA0XWR */
#define DMAREQ_CRYPTO_DATA0XWR        DMAREQ_CRYPTO0_DATA0XWR /**< Alias for DMAREQ_CRYPTO0_DATA0XWR */
#define DMAREQ_CRYPTO0_DATA0RD        ((49 << 16) + 2)        /**< DMA channel select for CRYPTO0_DATA0RD */
#define DMAREQ_CRYPTO_DATA0RD         DMAREQ_CRYPTO0_DATA0RD  /**< Alias for DMAREQ_CRYPTO0_DATA0RD */
#define DMAREQ_CRYPTO0_DATA1WR        ((49 << 16) + 3)        /**< DMA channel select for CRYPTO0_DATA1WR */
#define DMAREQ_CRYPTO_DATA1WR         DMAREQ_CRYPTO0_DATA1WR  /**< Alias for DMAREQ_CRYPTO0_DATA1WR */
#define DMAREQ_CRYPTO0_DATA1RD        ((49 << 16) + 4)        /**< DMA channel select for CRYPTO0_DATA1RD */
#define DMAREQ_CRYPTO_DATA1RD         DMAREQ_CRYPTO0_DATA1RD  /**< Alias for DMAREQ_CRYPTO0_DATA1RD */
#define DMAREQ_LESENSE_BUFDATAV       ((51 << 16) + 0)        /**< DMA channel select for LESENSE_BUFDATAV */
#define DMAREQ_CRYPTO1_DATA0WR        ((52 << 16) + 0)        /**< DMA channel select for CRYPTO1_DATA0WR */
#define DMAREQ_CRYPTO1_DATA0XWR       ((52 << 16) + 1)        /**< DMA channel select for CRYPTO1_DATA0XWR */
#define DMAREQ_CRYPTO1_DATA0RD        ((52 << 16) + 2)        /**< DMA channel select for CRYPTO1_DATA0RD */
#define DMAREQ_CRYPTO1_DATA1WR        ((52 << 16) + 3)        /**< DMA channel select for CRYPTO1_DATA1WR */
#define DMAREQ_CRYPTO1_DATA1RD        ((52 << 16) + 4)        /**< DMA channel select for CRYPTO1_DATA1RD */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_DMAREQ */

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_WTIMER
 * @{
 * @defgroup EFR32MG13P932F512IM48_WTIMER_BitFields  WTIMER Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for WTIMER CTRL */
#define _WTIMER_CTRL_RESETVALUE                     0x00000000UL                              /**< Default value for WTIMER_CTRL */
#define _WTIMER_CTRL_MASK                           0x3F036FFBUL                              /**< Mask for WTIMER_CTRL */
#define _WTIMER_CTRL_MODE_SHIFT                     0                                         /**< Shift value for TIMER_MODE */
#define _WTIMER_CTRL_MODE_MASK                      0x3UL                                     /**< Bit mask for TIMER_MODE */
#define _WTIMER_CTRL_MODE_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_MODE_UP                        0x00000000UL                              /**< Mode UP for WTIMER_CTRL */
#define _WTIMER_CTRL_MODE_DOWN                      0x00000001UL                              /**< Mode DOWN for WTIMER_CTRL */
#define _WTIMER_CTRL_MODE_UPDOWN                    0x00000002UL                              /**< Mode UPDOWN for WTIMER_CTRL */
#define _WTIMER_CTRL_MODE_QDEC                      0x00000003UL                              /**< Mode QDEC for WTIMER_CTRL */
#define WTIMER_CTRL_MODE_DEFAULT                    (_WTIMER_CTRL_MODE_DEFAULT << 0)          /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_MODE_UP                         (_WTIMER_CTRL_MODE_UP << 0)               /**< Shifted mode UP for WTIMER_CTRL */
#define WTIMER_CTRL_MODE_DOWN                       (_WTIMER_CTRL_MODE_DOWN << 0)             /**< Shifted mode DOWN for WTIMER_CTRL */
#define WTIMER_CTRL_MODE_UPDOWN                     (_WTIMER_CTRL_MODE_UPDOWN << 0)           /**< Shifted mode UPDOWN for WTIMER_CTRL */
#define WTIMER_CTRL_MODE_QDEC                       (_WTIMER_CTRL_MODE_QDEC << 0)             /**< Shifted mode QDEC for WTIMER_CTRL */
#define WTIMER_CTRL_SYNC                            (0x1UL << 3)                              /**< Timer Start/Stop/Reload Synchronization */
#define _WTIMER_CTRL_SYNC_SHIFT                     3                                         /**< Shift value for TIMER_SYNC */
#define _WTIMER_CTRL_SYNC_MASK                      0x8UL                                     /**< Bit mask for TIMER_SYNC */
#define _WTIMER_CTRL_SYNC_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_SYNC_DEFAULT                    (_WTIMER_CTRL_SYNC_DEFAULT << 3)          /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_OSMEN                           (0x1UL << 4)                              /**< One-shot Mode Enable */
#define _WTIMER_CTRL_OSMEN_SHIFT                    4                                         /**< Shift value for TIMER_OSMEN */
#define _WTIMER_CTRL_OSMEN_MASK                     0x10UL                                    /**< Bit mask for TIMER_OSMEN */
#define _WTIMER_CTRL_OSMEN_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_OSMEN_DEFAULT                   (_WTIMER_CTRL_OSMEN_DEFAULT << 4)         /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_QDM                             (0x1UL << 5)                              /**< Quadrature Decoder Mode Selection */
#define _WTIMER_CTRL_QDM_SHIFT                      5                                         /**< Shift value for TIMER_QDM */
#define _WTIMER_CTRL_QDM_MASK                       0x20UL                                    /**< Bit mask for TIMER_QDM */
#define _WTIMER_CTRL_QDM_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_QDM_X2                         0x00000000UL                              /**< Mode X2 for WTIMER_CTRL */
#define _WTIMER_CTRL_QDM_X4                         0x00000001UL                              /**< Mode X4 for WTIMER_CTRL */
#define WTIMER_CTRL_QDM_DEFAULT                     (_WTIMER_CTRL_QDM_DEFAULT << 5)           /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_QDM_X2                          (_WTIMER_CTRL_QDM_X2 << 5)                /**< Shifted mode X2 for WTIMER_CTRL */
#define WTIMER_CTRL_QDM_X4                          (_WTIMER_CTRL_QDM_X4 << 5)                /**< Shifted mode X4 for WTIMER_CTRL */
#define WTIMER_CTRL_DEBUGRUN                        (0x1UL << 6)                              /**< Debug Mode Run Enable */
#define _WTIMER_CTRL_DEBUGRUN_SHIFT                 6                                         /**< Shift value for TIMER_DEBUGRUN */
#define _WTIMER_CTRL_DEBUGRUN_MASK                  0x40UL                                    /**< Bit mask for TIMER_DEBUGRUN */
#define _WTIMER_CTRL_DEBUGRUN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_DEBUGRUN_DEFAULT                (_WTIMER_CTRL_DEBUGRUN_DEFAULT << 6)      /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_DMACLRACT                       (0x1UL << 7)                              /**< DMA Request Clear on Active */
#define _WTIMER_CTRL_DMACLRACT_SHIFT                7                                         /**< Shift value for TIMER_DMACLRACT */
#define _WTIMER_CTRL_DMACLRACT_MASK                 0x80UL                                    /**< Bit mask for TIMER_DMACLRACT */
#define _WTIMER_CTRL_DMACLRACT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_DMACLRACT_DEFAULT               (_WTIMER_CTRL_DMACLRACT_DEFAULT << 7)     /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_RISEA_SHIFT                    8                                         /**< Shift value for TIMER_RISEA */
#define _WTIMER_CTRL_RISEA_MASK                     0x300UL                                   /**< Bit mask for TIMER_RISEA */
#define _WTIMER_CTRL_RISEA_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_RISEA_NONE                     0x00000000UL                              /**< Mode NONE for WTIMER_CTRL */
#define _WTIMER_CTRL_RISEA_START                    0x00000001UL                              /**< Mode START for WTIMER_CTRL */
#define _WTIMER_CTRL_RISEA_STOP                     0x00000002UL                              /**< Mode STOP for WTIMER_CTRL */
#define _WTIMER_CTRL_RISEA_RELOADSTART              0x00000003UL                              /**< Mode RELOADSTART for WTIMER_CTRL */
#define WTIMER_CTRL_RISEA_DEFAULT                   (_WTIMER_CTRL_RISEA_DEFAULT << 8)         /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_RISEA_NONE                      (_WTIMER_CTRL_RISEA_NONE << 8)            /**< Shifted mode NONE for WTIMER_CTRL */
#define WTIMER_CTRL_RISEA_START                     (_WTIMER_CTRL_RISEA_START << 8)           /**< Shifted mode START for WTIMER_CTRL */
#define WTIMER_CTRL_RISEA_STOP                      (_WTIMER_CTRL_RISEA_STOP << 8)            /**< Shifted mode STOP for WTIMER_CTRL */
#define WTIMER_CTRL_RISEA_RELOADSTART               (_WTIMER_CTRL_RISEA_RELOADSTART << 8)     /**< Shifted mode RELOADSTART for WTIMER_CTRL */
#define _WTIMER_CTRL_FALLA_SHIFT                    10                                        /**< Shift value for TIMER_FALLA */
#define _WTIMER_CTRL_FALLA_MASK                     0xC00UL                                   /**< Bit mask for TIMER_FALLA */
#define _WTIMER_CTRL_FALLA_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_FALLA_NONE                     0x00000000UL                              /**< Mode NONE for WTIMER_CTRL */
#define _WTIMER_CTRL_FALLA_START                    0x00000001UL                              /**< Mode START for WTIMER_CTRL */
#define _WTIMER_CTRL_FALLA_STOP                     0x00000002UL                              /**< Mode STOP for WTIMER_CTRL */
#define _WTIMER_CTRL_FALLA_RELOADSTART              0x00000003UL                              /**< Mode RELOADSTART for WTIMER_CTRL */
#define WTIMER_CTRL_FALLA_DEFAULT                   (_WTIMER_CTRL_FALLA_DEFAULT << 10)        /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_FALLA_NONE                      (_WTIMER_CTRL_FALLA_NONE << 10)           /**< Shifted mode NONE for WTIMER_CTRL */
#define WTIMER_CTRL_FALLA_START                     (_WTIMER_CTRL_FALLA_START << 10)          /**< Shifted mode START for WTIMER_CTRL */
#define WTIMER_CTRL_FALLA_STOP                      (_WTIMER_CTRL_FALLA_STOP << 10)           /**< Shifted mode STOP for WTIMER_CTRL */
#define WTIMER_CTRL_FALLA_RELOADSTART               (_WTIMER_CTRL_FALLA_RELOADSTART << 10)    /**< Shifted mode RELOADSTART for WTIMER_CTRL */
#define WTIMER_CTRL_X2CNT                           (0x1UL << 13)                             /**< 2x Count Mode */
#define _WTIMER_CTRL_X2CNT_SHIFT                    13                                        /**< Shift value for TIMER_X2CNT */
#define _WTIMER_CTRL_X2CNT_MASK                     0x2000UL                                  /**< Bit mask for TIMER_X2CNT */
#define _WTIMER_CTRL_X2CNT_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_X2CNT_DEFAULT                   (_WTIMER_CTRL_X2CNT_DEFAULT << 13)        /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_DISSYNCOUT                      (0x1UL << 14)                             /**< Disable Timer from Start/Stop/Reload other Synchronized Timers */
#define _WTIMER_CTRL_DISSYNCOUT_SHIFT               14                                        /**< Shift value for TIMER_DISSYNCOUT */
#define _WTIMER_CTRL_DISSYNCOUT_MASK                0x4000UL                                  /**< Bit mask for TIMER_DISSYNCOUT */
#define _WTIMER_CTRL_DISSYNCOUT_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_DISSYNCOUT_DEFAULT              (_WTIMER_CTRL_DISSYNCOUT_DEFAULT << 14)   /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_CLKSEL_SHIFT                   16                                        /**< Shift value for TIMER_CLKSEL */
#define _WTIMER_CTRL_CLKSEL_MASK                    0x30000UL                                 /**< Bit mask for TIMER_CLKSEL */
#define _WTIMER_CTRL_CLKSEL_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_CLKSEL_PRESCHFPERCLK           0x00000000UL                              /**< Mode PRESCHFPERCLK for WTIMER_CTRL */
#define _WTIMER_CTRL_CLKSEL_CC1                     0x00000001UL                              /**< Mode CC1 for WTIMER_CTRL */
#define _WTIMER_CTRL_CLKSEL_TIMEROUF                0x00000002UL                              /**< Mode TIMEROUF for WTIMER_CTRL */
#define WTIMER_CTRL_CLKSEL_DEFAULT                  (_WTIMER_CTRL_CLKSEL_DEFAULT << 16)       /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_CLKSEL_PRESCHFPERCLK            (_WTIMER_CTRL_CLKSEL_PRESCHFPERCLK << 16) /**< Shifted mode PRESCHFPERCLK for WTIMER_CTRL */
#define WTIMER_CTRL_CLKSEL_CC1                      (_WTIMER_CTRL_CLKSEL_CC1 << 16)           /**< Shifted mode CC1 for WTIMER_CTRL */
#define WTIMER_CTRL_CLKSEL_TIMEROUF                 (_WTIMER_CTRL_CLKSEL_TIMEROUF << 16)      /**< Shifted mode TIMEROUF for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_SHIFT                    24                                        /**< Shift value for TIMER_PRESC */
#define _WTIMER_CTRL_PRESC_MASK                     0xF000000UL                               /**< Bit mask for TIMER_PRESC */
#define _WTIMER_CTRL_PRESC_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV1                     0x00000000UL                              /**< Mode DIV1 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV2                     0x00000001UL                              /**< Mode DIV2 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV4                     0x00000002UL                              /**< Mode DIV4 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV8                     0x00000003UL                              /**< Mode DIV8 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV16                    0x00000004UL                              /**< Mode DIV16 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV32                    0x00000005UL                              /**< Mode DIV32 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV64                    0x00000006UL                              /**< Mode DIV64 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV128                   0x00000007UL                              /**< Mode DIV128 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV256                   0x00000008UL                              /**< Mode DIV256 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV512                   0x00000009UL                              /**< Mode DIV512 for WTIMER_CTRL */
#define _WTIMER_CTRL_PRESC_DIV1024                  0x0000000AUL                              /**< Mode DIV1024 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DEFAULT                   (_WTIMER_CTRL_PRESC_DEFAULT << 24)        /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV1                      (_WTIMER_CTRL_PRESC_DIV1 << 24)           /**< Shifted mode DIV1 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV2                      (_WTIMER_CTRL_PRESC_DIV2 << 24)           /**< Shifted mode DIV2 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV4                      (_WTIMER_CTRL_PRESC_DIV4 << 24)           /**< Shifted mode DIV4 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV8                      (_WTIMER_CTRL_PRESC_DIV8 << 24)           /**< Shifted mode DIV8 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV16                     (_WTIMER_CTRL_PRESC_DIV16 << 24)          /**< Shifted mode DIV16 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV32                     (_WTIMER_CTRL_PRESC_DIV32 << 24)          /**< Shifted mode DIV32 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV64                     (_WTIMER_CTRL_PRESC_DIV64 << 24)          /**< Shifted mode DIV64 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV128                    (_WTIMER_CTRL_PRESC_DIV128 << 24)         /**< Shifted mode DIV128 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV256                    (_WTIMER_CTRL_PRESC_DIV256 << 24)         /**< Shifted mode DIV256 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV512                    (_WTIMER_CTRL_PRESC_DIV512 << 24)         /**< Shifted mode DIV512 for WTIMER_CTRL */
#define WTIMER_CTRL_PRESC_DIV1024                   (_WTIMER_CTRL_PRESC_DIV1024 << 24)        /**< Shifted mode DIV1024 for WTIMER_CTRL */
#define WTIMER_CTRL_ATI                             (0x1UL << 28)                             /**< Always Track Inputs */
#define _WTIMER_CTRL_ATI_SHIFT                      28                                        /**< Shift value for TIMER_ATI */
#define _WTIMER_CTRL_ATI_MASK                       0x10000000UL                              /**< Bit mask for TIMER_ATI */
#define _WTIMER_CTRL_ATI_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_ATI_DEFAULT                     (_WTIMER_CTRL_ATI_DEFAULT << 28)          /**< Shifted mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_RSSCOIST                        (0x1UL << 29)                             /**< Reload-Start Sets Compare Output initial State */
#define _WTIMER_CTRL_RSSCOIST_SHIFT                 29                                        /**< Shift value for TIMER_RSSCOIST */
#define _WTIMER_CTRL_RSSCOIST_MASK                  0x20000000UL                              /**< Bit mask for TIMER_RSSCOIST */
#define _WTIMER_CTRL_RSSCOIST_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for WTIMER_CTRL */
#define WTIMER_CTRL_RSSCOIST_DEFAULT                (_WTIMER_CTRL_RSSCOIST_DEFAULT << 29)     /**< Shifted mode DEFAULT for WTIMER_CTRL */

/* Bit fields for WTIMER CMD */
#define _WTIMER_CMD_RESETVALUE                      0x00000000UL                     /**< Default value for WTIMER_CMD */
#define _WTIMER_CMD_MASK                            0x00000003UL                     /**< Mask for WTIMER_CMD */
#define WTIMER_CMD_START                            (0x1UL << 0)                     /**< Start Timer */
#define _WTIMER_CMD_START_SHIFT                     0                                /**< Shift value for TIMER_START */
#define _WTIMER_CMD_START_MASK                      0x1UL                            /**< Bit mask for TIMER_START */
#define _WTIMER_CMD_START_DEFAULT                   0x00000000UL                     /**< Mode DEFAULT for WTIMER_CMD */
#define WTIMER_CMD_START_DEFAULT                    (_WTIMER_CMD_START_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_CMD */
#define WTIMER_CMD_STOP                             (0x1UL << 1)                     /**< Stop Timer */
#define _WTIMER_CMD_STOP_SHIFT                      1                                /**< Shift value for TIMER_STOP */
#define _WTIMER_CMD_STOP_MASK                       0x2UL                            /**< Bit mask for TIMER_STOP */
#define _WTIMER_CMD_STOP_DEFAULT                    0x00000000UL                     /**< Mode DEFAULT for WTIMER_CMD */
#define WTIMER_CMD_STOP_DEFAULT                     (_WTIMER_CMD_STOP_DEFAULT << 1)  /**< Shifted mode DEFAULT for WTIMER_CMD */

/* Bit fields for WTIMER STATUS */
#define _WTIMER_STATUS_RESETVALUE                   0x00000000UL                           /**< Default value for WTIMER_STATUS */
#define _WTIMER_STATUS_MASK                         0x0F0F0F07UL                           /**< Mask for WTIMER_STATUS */
#define WTIMER_STATUS_RUNNING                       (0x1UL << 0)                           /**< Running */
#define _WTIMER_STATUS_RUNNING_SHIFT                0                                      /**< Shift value for TIMER_RUNNING */
#define _WTIMER_STATUS_RUNNING_MASK                 0x1UL                                  /**< Bit mask for TIMER_RUNNING */
#define _WTIMER_STATUS_RUNNING_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_RUNNING_DEFAULT               (_WTIMER_STATUS_RUNNING_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_DIR                           (0x1UL << 1)                           /**< Direction */
#define _WTIMER_STATUS_DIR_SHIFT                    1                                      /**< Shift value for TIMER_DIR */
#define _WTIMER_STATUS_DIR_MASK                     0x2UL                                  /**< Bit mask for TIMER_DIR */
#define _WTIMER_STATUS_DIR_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define _WTIMER_STATUS_DIR_UP                       0x00000000UL                           /**< Mode UP for WTIMER_STATUS */
#define _WTIMER_STATUS_DIR_DOWN                     0x00000001UL                           /**< Mode DOWN for WTIMER_STATUS */
#define WTIMER_STATUS_DIR_DEFAULT                   (_WTIMER_STATUS_DIR_DEFAULT << 1)      /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_DIR_UP                        (_WTIMER_STATUS_DIR_UP << 1)           /**< Shifted mode UP for WTIMER_STATUS */
#define WTIMER_STATUS_DIR_DOWN                      (_WTIMER_STATUS_DIR_DOWN << 1)         /**< Shifted mode DOWN for WTIMER_STATUS */
#define WTIMER_STATUS_TOPBV                         (0x1UL << 2)                           /**< TOPB Valid */
#define _WTIMER_STATUS_TOPBV_SHIFT                  2                                      /**< Shift value for TIMER_TOPBV */
#define _WTIMER_STATUS_TOPBV_MASK                   0x4UL                                  /**< Bit mask for TIMER_TOPBV */
#define _WTIMER_STATUS_TOPBV_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_TOPBV_DEFAULT                 (_WTIMER_STATUS_TOPBV_DEFAULT << 2)    /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV0                        (0x1UL << 8)                           /**< CC0 CCVB Valid */
#define _WTIMER_STATUS_CCVBV0_SHIFT                 8                                      /**< Shift value for TIMER_CCVBV0 */
#define _WTIMER_STATUS_CCVBV0_MASK                  0x100UL                                /**< Bit mask for TIMER_CCVBV0 */
#define _WTIMER_STATUS_CCVBV0_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV0_DEFAULT                (_WTIMER_STATUS_CCVBV0_DEFAULT << 8)   /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV1                        (0x1UL << 9)                           /**< CC1 CCVB Valid */
#define _WTIMER_STATUS_CCVBV1_SHIFT                 9                                      /**< Shift value for TIMER_CCVBV1 */
#define _WTIMER_STATUS_CCVBV1_MASK                  0x200UL                                /**< Bit mask for TIMER_CCVBV1 */
#define _WTIMER_STATUS_CCVBV1_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV1_DEFAULT                (_WTIMER_STATUS_CCVBV1_DEFAULT << 9)   /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV2                        (0x1UL << 10)                          /**< CC2 CCVB Valid */
#define _WTIMER_STATUS_CCVBV2_SHIFT                 10                                     /**< Shift value for TIMER_CCVBV2 */
#define _WTIMER_STATUS_CCVBV2_MASK                  0x400UL                                /**< Bit mask for TIMER_CCVBV2 */
#define _WTIMER_STATUS_CCVBV2_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV2_DEFAULT                (_WTIMER_STATUS_CCVBV2_DEFAULT << 10)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV3                        (0x1UL << 11)                          /**< CC3 CCVB Valid */
#define _WTIMER_STATUS_CCVBV3_SHIFT                 11                                     /**< Shift value for TIMER_CCVBV3 */
#define _WTIMER_STATUS_CCVBV3_MASK                  0x800UL                                /**< Bit mask for TIMER_CCVBV3 */
#define _WTIMER_STATUS_CCVBV3_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCVBV3_DEFAULT                (_WTIMER_STATUS_CCVBV3_DEFAULT << 11)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV0                          (0x1UL << 16)                          /**< CC0 Input Capture Valid */
#define _WTIMER_STATUS_ICV0_SHIFT                   16                                     /**< Shift value for TIMER_ICV0 */
#define _WTIMER_STATUS_ICV0_MASK                    0x10000UL                              /**< Bit mask for TIMER_ICV0 */
#define _WTIMER_STATUS_ICV0_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV0_DEFAULT                  (_WTIMER_STATUS_ICV0_DEFAULT << 16)    /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV1                          (0x1UL << 17)                          /**< CC1 Input Capture Valid */
#define _WTIMER_STATUS_ICV1_SHIFT                   17                                     /**< Shift value for TIMER_ICV1 */
#define _WTIMER_STATUS_ICV1_MASK                    0x20000UL                              /**< Bit mask for TIMER_ICV1 */
#define _WTIMER_STATUS_ICV1_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV1_DEFAULT                  (_WTIMER_STATUS_ICV1_DEFAULT << 17)    /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV2                          (0x1UL << 18)                          /**< CC2 Input Capture Valid */
#define _WTIMER_STATUS_ICV2_SHIFT                   18                                     /**< Shift value for TIMER_ICV2 */
#define _WTIMER_STATUS_ICV2_MASK                    0x40000UL                              /**< Bit mask for TIMER_ICV2 */
#define _WTIMER_STATUS_ICV2_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV2_DEFAULT                  (_WTIMER_STATUS_ICV2_DEFAULT << 18)    /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV3                          (0x1UL << 19)                          /**< CC3 Input Capture Valid */
#define _WTIMER_STATUS_ICV3_SHIFT                   19                                     /**< Shift value for TIMER_ICV3 */
#define _WTIMER_STATUS_ICV3_MASK                    0x80000UL                              /**< Bit mask for TIMER_ICV3 */
#define _WTIMER_STATUS_ICV3_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_ICV3_DEFAULT                  (_WTIMER_STATUS_ICV3_DEFAULT << 19)    /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL0                        (0x1UL << 24)                          /**< CC0 Polarity */
#define _WTIMER_STATUS_CCPOL0_SHIFT                 24                                     /**< Shift value for TIMER_CCPOL0 */
#define _WTIMER_STATUS_CCPOL0_MASK                  0x1000000UL                            /**< Bit mask for TIMER_CCPOL0 */
#define _WTIMER_STATUS_CCPOL0_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL0_LOWRISE               0x00000000UL                           /**< Mode LOWRISE for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL0_HIGHFALL              0x00000001UL                           /**< Mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL0_DEFAULT                (_WTIMER_STATUS_CCPOL0_DEFAULT << 24)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL0_LOWRISE                (_WTIMER_STATUS_CCPOL0_LOWRISE << 24)  /**< Shifted mode LOWRISE for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL0_HIGHFALL               (_WTIMER_STATUS_CCPOL0_HIGHFALL << 24) /**< Shifted mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL1                        (0x1UL << 25)                          /**< CC1 Polarity */
#define _WTIMER_STATUS_CCPOL1_SHIFT                 25                                     /**< Shift value for TIMER_CCPOL1 */
#define _WTIMER_STATUS_CCPOL1_MASK                  0x2000000UL                            /**< Bit mask for TIMER_CCPOL1 */
#define _WTIMER_STATUS_CCPOL1_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL1_LOWRISE               0x00000000UL                           /**< Mode LOWRISE for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL1_HIGHFALL              0x00000001UL                           /**< Mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL1_DEFAULT                (_WTIMER_STATUS_CCPOL1_DEFAULT << 25)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL1_LOWRISE                (_WTIMER_STATUS_CCPOL1_LOWRISE << 25)  /**< Shifted mode LOWRISE for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL1_HIGHFALL               (_WTIMER_STATUS_CCPOL1_HIGHFALL << 25) /**< Shifted mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL2                        (0x1UL << 26)                          /**< CC2 Polarity */
#define _WTIMER_STATUS_CCPOL2_SHIFT                 26                                     /**< Shift value for TIMER_CCPOL2 */
#define _WTIMER_STATUS_CCPOL2_MASK                  0x4000000UL                            /**< Bit mask for TIMER_CCPOL2 */
#define _WTIMER_STATUS_CCPOL2_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL2_LOWRISE               0x00000000UL                           /**< Mode LOWRISE for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL2_HIGHFALL              0x00000001UL                           /**< Mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL2_DEFAULT                (_WTIMER_STATUS_CCPOL2_DEFAULT << 26)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL2_LOWRISE                (_WTIMER_STATUS_CCPOL2_LOWRISE << 26)  /**< Shifted mode LOWRISE for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL2_HIGHFALL               (_WTIMER_STATUS_CCPOL2_HIGHFALL << 26) /**< Shifted mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL3                        (0x1UL << 27)                          /**< CC3 Polarity */
#define _WTIMER_STATUS_CCPOL3_SHIFT                 27                                     /**< Shift value for TIMER_CCPOL3 */
#define _WTIMER_STATUS_CCPOL3_MASK                  0x8000000UL                            /**< Bit mask for TIMER_CCPOL3 */
#define _WTIMER_STATUS_CCPOL3_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL3_LOWRISE               0x00000000UL                           /**< Mode LOWRISE for WTIMER_STATUS */
#define _WTIMER_STATUS_CCPOL3_HIGHFALL              0x00000001UL                           /**< Mode HIGHFALL for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL3_DEFAULT                (_WTIMER_STATUS_CCPOL3_DEFAULT << 27)  /**< Shifted mode DEFAULT for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL3_LOWRISE                (_WTIMER_STATUS_CCPOL3_LOWRISE << 27)  /**< Shifted mode LOWRISE for WTIMER_STATUS */
#define WTIMER_STATUS_CCPOL3_HIGHFALL               (_WTIMER_STATUS_CCPOL3_HIGHFALL << 27) /**< Shifted mode HIGHFALL for WTIMER_STATUS */

/* Bit fields for WTIMER IF */
#define _WTIMER_IF_RESETVALUE                       0x00000000UL                      /**< Default value for WTIMER_IF */
#define _WTIMER_IF_MASK                             0x00000FF7UL                      /**< Mask for WTIMER_IF */
#define WTIMER_IF_OF                                (0x1UL << 0)                      /**< Overflow Interrupt Flag */
#define _WTIMER_IF_OF_SHIFT                         0                                 /**< Shift value for TIMER_OF */
#define _WTIMER_IF_OF_MASK                          0x1UL                             /**< Bit mask for TIMER_OF */
#define _WTIMER_IF_OF_DEFAULT                       0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_OF_DEFAULT                        (_WTIMER_IF_OF_DEFAULT << 0)      /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_UF                                (0x1UL << 1)                      /**< Underflow Interrupt Flag */
#define _WTIMER_IF_UF_SHIFT                         1                                 /**< Shift value for TIMER_UF */
#define _WTIMER_IF_UF_MASK                          0x2UL                             /**< Bit mask for TIMER_UF */
#define _WTIMER_IF_UF_DEFAULT                       0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_UF_DEFAULT                        (_WTIMER_IF_UF_DEFAULT << 1)      /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_DIRCHG                            (0x1UL << 2)                      /**< Direction Change Detect Interrupt Flag */
#define _WTIMER_IF_DIRCHG_SHIFT                     2                                 /**< Shift value for TIMER_DIRCHG */
#define _WTIMER_IF_DIRCHG_MASK                      0x4UL                             /**< Bit mask for TIMER_DIRCHG */
#define _WTIMER_IF_DIRCHG_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_DIRCHG_DEFAULT                    (_WTIMER_IF_DIRCHG_DEFAULT << 2)  /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC0                               (0x1UL << 4)                      /**< CC Channel 0 Interrupt Flag */
#define _WTIMER_IF_CC0_SHIFT                        4                                 /**< Shift value for TIMER_CC0 */
#define _WTIMER_IF_CC0_MASK                         0x10UL                            /**< Bit mask for TIMER_CC0 */
#define _WTIMER_IF_CC0_DEFAULT                      0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC0_DEFAULT                       (_WTIMER_IF_CC0_DEFAULT << 4)     /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC1                               (0x1UL << 5)                      /**< CC Channel 1 Interrupt Flag */
#define _WTIMER_IF_CC1_SHIFT                        5                                 /**< Shift value for TIMER_CC1 */
#define _WTIMER_IF_CC1_MASK                         0x20UL                            /**< Bit mask for TIMER_CC1 */
#define _WTIMER_IF_CC1_DEFAULT                      0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC1_DEFAULT                       (_WTIMER_IF_CC1_DEFAULT << 5)     /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC2                               (0x1UL << 6)                      /**< CC Channel 2 Interrupt Flag */
#define _WTIMER_IF_CC2_SHIFT                        6                                 /**< Shift value for TIMER_CC2 */
#define _WTIMER_IF_CC2_MASK                         0x40UL                            /**< Bit mask for TIMER_CC2 */
#define _WTIMER_IF_CC2_DEFAULT                      0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC2_DEFAULT                       (_WTIMER_IF_CC2_DEFAULT << 6)     /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC3                               (0x1UL << 7)                      /**< CC Channel 3 Interrupt Flag */
#define _WTIMER_IF_CC3_SHIFT                        7                                 /**< Shift value for TIMER_CC3 */
#define _WTIMER_IF_CC3_MASK                         0x80UL                            /**< Bit mask for TIMER_CC3 */
#define _WTIMER_IF_CC3_DEFAULT                      0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_CC3_DEFAULT                       (_WTIMER_IF_CC3_DEFAULT << 7)     /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF0                            (0x1UL << 8)                      /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag */
#define _WTIMER_IF_ICBOF0_SHIFT                     8                                 /**< Shift value for TIMER_ICBOF0 */
#define _WTIMER_IF_ICBOF0_MASK                      0x100UL                           /**< Bit mask for TIMER_ICBOF0 */
#define _WTIMER_IF_ICBOF0_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF0_DEFAULT                    (_WTIMER_IF_ICBOF0_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF1                            (0x1UL << 9)                      /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag */
#define _WTIMER_IF_ICBOF1_SHIFT                     9                                 /**< Shift value for TIMER_ICBOF1 */
#define _WTIMER_IF_ICBOF1_MASK                      0x200UL                           /**< Bit mask for TIMER_ICBOF1 */
#define _WTIMER_IF_ICBOF1_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF1_DEFAULT                    (_WTIMER_IF_ICBOF1_DEFAULT << 9)  /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF2                            (0x1UL << 10)                     /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag */
#define _WTIMER_IF_ICBOF2_SHIFT                     10                                /**< Shift value for TIMER_ICBOF2 */
#define _WTIMER_IF_ICBOF2_MASK                      0x400UL                           /**< Bit mask for TIMER_ICBOF2 */
#define _WTIMER_IF_ICBOF2_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF2_DEFAULT                    (_WTIMER_IF_ICBOF2_DEFAULT << 10) /**< Shifted mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF3                            (0x1UL << 11)                     /**< CC Channel 3 Input Capture Buffer Overflow Interrupt Flag */
#define _WTIMER_IF_ICBOF3_SHIFT                     11                                /**< Shift value for TIMER_ICBOF3 */
#define _WTIMER_IF_ICBOF3_MASK                      0x800UL                           /**< Bit mask for TIMER_ICBOF3 */
#define _WTIMER_IF_ICBOF3_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for WTIMER_IF */
#define WTIMER_IF_ICBOF3_DEFAULT                    (_WTIMER_IF_ICBOF3_DEFAULT << 11) /**< Shifted mode DEFAULT for WTIMER_IF */

/* Bit fields for WTIMER IFS */
#define _WTIMER_IFS_RESETVALUE                      0x00000000UL                       /**< Default value for WTIMER_IFS */
#define _WTIMER_IFS_MASK                            0x00000FF7UL                       /**< Mask for WTIMER_IFS */
#define WTIMER_IFS_OF                               (0x1UL << 0)                       /**< Set OF Interrupt Flag */
#define _WTIMER_IFS_OF_SHIFT                        0                                  /**< Shift value for TIMER_OF */
#define _WTIMER_IFS_OF_MASK                         0x1UL                              /**< Bit mask for TIMER_OF */
#define _WTIMER_IFS_OF_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_OF_DEFAULT                       (_WTIMER_IFS_OF_DEFAULT << 0)      /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_UF                               (0x1UL << 1)                       /**< Set UF Interrupt Flag */
#define _WTIMER_IFS_UF_SHIFT                        1                                  /**< Shift value for TIMER_UF */
#define _WTIMER_IFS_UF_MASK                         0x2UL                              /**< Bit mask for TIMER_UF */
#define _WTIMER_IFS_UF_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_UF_DEFAULT                       (_WTIMER_IFS_UF_DEFAULT << 1)      /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_DIRCHG                           (0x1UL << 2)                       /**< Set DIRCHG Interrupt Flag */
#define _WTIMER_IFS_DIRCHG_SHIFT                    2                                  /**< Shift value for TIMER_DIRCHG */
#define _WTIMER_IFS_DIRCHG_MASK                     0x4UL                              /**< Bit mask for TIMER_DIRCHG */
#define _WTIMER_IFS_DIRCHG_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_DIRCHG_DEFAULT                   (_WTIMER_IFS_DIRCHG_DEFAULT << 2)  /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC0                              (0x1UL << 4)                       /**< Set CC0 Interrupt Flag */
#define _WTIMER_IFS_CC0_SHIFT                       4                                  /**< Shift value for TIMER_CC0 */
#define _WTIMER_IFS_CC0_MASK                        0x10UL                             /**< Bit mask for TIMER_CC0 */
#define _WTIMER_IFS_CC0_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC0_DEFAULT                      (_WTIMER_IFS_CC0_DEFAULT << 4)     /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC1                              (0x1UL << 5)                       /**< Set CC1 Interrupt Flag */
#define _WTIMER_IFS_CC1_SHIFT                       5                                  /**< Shift value for TIMER_CC1 */
#define _WTIMER_IFS_CC1_MASK                        0x20UL                             /**< Bit mask for TIMER_CC1 */
#define _WTIMER_IFS_CC1_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC1_DEFAULT                      (_WTIMER_IFS_CC1_DEFAULT << 5)     /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC2                              (0x1UL << 6)                       /**< Set CC2 Interrupt Flag */
#define _WTIMER_IFS_CC2_SHIFT                       6                                  /**< Shift value for TIMER_CC2 */
#define _WTIMER_IFS_CC2_MASK                        0x40UL                             /**< Bit mask for TIMER_CC2 */
#define _WTIMER_IFS_CC2_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC2_DEFAULT                      (_WTIMER_IFS_CC2_DEFAULT << 6)     /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC3                              (0x1UL << 7)                       /**< Set CC3 Interrupt Flag */
#define _WTIMER_IFS_CC3_SHIFT                       7                                  /**< Shift value for TIMER_CC3 */
#define _WTIMER_IFS_CC3_MASK                        0x80UL                             /**< Bit mask for TIMER_CC3 */
#define _WTIMER_IFS_CC3_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_CC3_DEFAULT                      (_WTIMER_IFS_CC3_DEFAULT << 7)     /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF0                           (0x1UL << 8)                       /**< Set ICBOF0 Interrupt Flag */
#define _WTIMER_IFS_ICBOF0_SHIFT                    8                                  /**< Shift value for TIMER_ICBOF0 */
#define _WTIMER_IFS_ICBOF0_MASK                     0x100UL                            /**< Bit mask for TIMER_ICBOF0 */
#define _WTIMER_IFS_ICBOF0_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF0_DEFAULT                   (_WTIMER_IFS_ICBOF0_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF1                           (0x1UL << 9)                       /**< Set ICBOF1 Interrupt Flag */
#define _WTIMER_IFS_ICBOF1_SHIFT                    9                                  /**< Shift value for TIMER_ICBOF1 */
#define _WTIMER_IFS_ICBOF1_MASK                     0x200UL                            /**< Bit mask for TIMER_ICBOF1 */
#define _WTIMER_IFS_ICBOF1_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF1_DEFAULT                   (_WTIMER_IFS_ICBOF1_DEFAULT << 9)  /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF2                           (0x1UL << 10)                      /**< Set ICBOF2 Interrupt Flag */
#define _WTIMER_IFS_ICBOF2_SHIFT                    10                                 /**< Shift value for TIMER_ICBOF2 */
#define _WTIMER_IFS_ICBOF2_MASK                     0x400UL                            /**< Bit mask for TIMER_ICBOF2 */
#define _WTIMER_IFS_ICBOF2_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF2_DEFAULT                   (_WTIMER_IFS_ICBOF2_DEFAULT << 10) /**< Shifted mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF3                           (0x1UL << 11)                      /**< Set ICBOF3 Interrupt Flag */
#define _WTIMER_IFS_ICBOF3_SHIFT                    11                                 /**< Shift value for TIMER_ICBOF3 */
#define _WTIMER_IFS_ICBOF3_MASK                     0x800UL                            /**< Bit mask for TIMER_ICBOF3 */
#define _WTIMER_IFS_ICBOF3_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFS */
#define WTIMER_IFS_ICBOF3_DEFAULT                   (_WTIMER_IFS_ICBOF3_DEFAULT << 11) /**< Shifted mode DEFAULT for WTIMER_IFS */

/* Bit fields for WTIMER IFC */
#define _WTIMER_IFC_RESETVALUE                      0x00000000UL                       /**< Default value for WTIMER_IFC */
#define _WTIMER_IFC_MASK                            0x00000FF7UL                       /**< Mask for WTIMER_IFC */
#define WTIMER_IFC_OF                               (0x1UL << 0)                       /**< Clear OF Interrupt Flag */
#define _WTIMER_IFC_OF_SHIFT                        0                                  /**< Shift value for TIMER_OF */
#define _WTIMER_IFC_OF_MASK                         0x1UL                              /**< Bit mask for TIMER_OF */
#define _WTIMER_IFC_OF_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_OF_DEFAULT                       (_WTIMER_IFC_OF_DEFAULT << 0)      /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_UF                               (0x1UL << 1)                       /**< Clear UF Interrupt Flag */
#define _WTIMER_IFC_UF_SHIFT                        1                                  /**< Shift value for TIMER_UF */
#define _WTIMER_IFC_UF_MASK                         0x2UL                              /**< Bit mask for TIMER_UF */
#define _WTIMER_IFC_UF_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_UF_DEFAULT                       (_WTIMER_IFC_UF_DEFAULT << 1)      /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_DIRCHG                           (0x1UL << 2)                       /**< Clear DIRCHG Interrupt Flag */
#define _WTIMER_IFC_DIRCHG_SHIFT                    2                                  /**< Shift value for TIMER_DIRCHG */
#define _WTIMER_IFC_DIRCHG_MASK                     0x4UL                              /**< Bit mask for TIMER_DIRCHG */
#define _WTIMER_IFC_DIRCHG_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_DIRCHG_DEFAULT                   (_WTIMER_IFC_DIRCHG_DEFAULT << 2)  /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC0                              (0x1UL << 4)                       /**< Clear CC0 Interrupt Flag */
#define _WTIMER_IFC_CC0_SHIFT                       4                                  /**< Shift value for TIMER_CC0 */
#define _WTIMER_IFC_CC0_MASK                        0x10UL                             /**< Bit mask for TIMER_CC0 */
#define _WTIMER_IFC_CC0_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC0_DEFAULT                      (_WTIMER_IFC_CC0_DEFAULT << 4)     /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC1                              (0x1UL << 5)                       /**< Clear CC1 Interrupt Flag */
#define _WTIMER_IFC_CC1_SHIFT                       5                                  /**< Shift value for TIMER_CC1 */
#define _WTIMER_IFC_CC1_MASK                        0x20UL                             /**< Bit mask for TIMER_CC1 */
#define _WTIMER_IFC_CC1_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC1_DEFAULT                      (_WTIMER_IFC_CC1_DEFAULT << 5)     /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC2                              (0x1UL << 6)                       /**< Clear CC2 Interrupt Flag */
#define _WTIMER_IFC_CC2_SHIFT                       6                                  /**< Shift value for TIMER_CC2 */
#define _WTIMER_IFC_CC2_MASK                        0x40UL                             /**< Bit mask for TIMER_CC2 */
#define _WTIMER_IFC_CC2_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC2_DEFAULT                      (_WTIMER_IFC_CC2_DEFAULT << 6)     /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC3                              (0x1UL << 7)                       /**< Clear CC3 Interrupt Flag */
#define _WTIMER_IFC_CC3_SHIFT                       7                                  /**< Shift value for TIMER_CC3 */
#define _WTIMER_IFC_CC3_MASK                        0x80UL                             /**< Bit mask for TIMER_CC3 */
#define _WTIMER_IFC_CC3_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_CC3_DEFAULT                      (_WTIMER_IFC_CC3_DEFAULT << 7)     /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF0                           (0x1UL << 8)                       /**< Clear ICBOF0 Interrupt Flag */
#define _WTIMER_IFC_ICBOF0_SHIFT                    8                                  /**< Shift value for TIMER_ICBOF0 */
#define _WTIMER_IFC_ICBOF0_MASK                     0x100UL                            /**< Bit mask for TIMER_ICBOF0 */
#define _WTIMER_IFC_ICBOF0_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF0_DEFAULT                   (_WTIMER_IFC_ICBOF0_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF1                           (0x1UL << 9)                       /**< Clear ICBOF1 Interrupt Flag */
#define _WTIMER_IFC_ICBOF1_SHIFT                    9                                  /**< Shift value for TIMER_ICBOF1 */
#define _WTIMER_IFC_ICBOF1_MASK                     0x200UL                            /**< Bit mask for TIMER_ICBOF1 */
#define _WTIMER_IFC_ICBOF1_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF1_DEFAULT                   (_WTIMER_IFC_ICBOF1_DEFAULT << 9)  /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF2                           (0x1UL << 10)                      /**< Clear ICBOF2 Interrupt Flag */
#define _WTIMER_IFC_ICBOF2_SHIFT                    10                                 /**< Shift value for TIMER_ICBOF2 */
#define _WTIMER_IFC_ICBOF2_MASK                     0x400UL                            /**< Bit mask for TIMER_ICBOF2 */
#define _WTIMER_IFC_ICBOF2_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF2_DEFAULT                   (_WTIMER_IFC_ICBOF2_DEFAULT << 10) /**< Shifted mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF3                           (0x1UL << 11)                      /**< Clear ICBOF3 Interrupt Flag */
#define _WTIMER_IFC_ICBOF3_SHIFT                    11                                 /**< Shift value for TIMER_ICBOF3 */
#define _WTIMER_IFC_ICBOF3_MASK                     0x800UL                            /**< Bit mask for TIMER_ICBOF3 */
#define _WTIMER_IFC_ICBOF3_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IFC */
#define WTIMER_IFC_ICBOF3_DEFAULT                   (_WTIMER_IFC_ICBOF3_DEFAULT << 11) /**< Shifted mode DEFAULT for WTIMER_IFC */

/* Bit fields for WTIMER IEN */
#define _WTIMER_IEN_RESETVALUE                      0x00000000UL                       /**< Default value for WTIMER_IEN */
#define _WTIMER_IEN_MASK                            0x00000FF7UL                       /**< Mask for WTIMER_IEN */
#define WTIMER_IEN_OF                               (0x1UL << 0)                       /**< OF Interrupt Enable */
#define _WTIMER_IEN_OF_SHIFT                        0                                  /**< Shift value for TIMER_OF */
#define _WTIMER_IEN_OF_MASK                         0x1UL                              /**< Bit mask for TIMER_OF */
#define _WTIMER_IEN_OF_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_OF_DEFAULT                       (_WTIMER_IEN_OF_DEFAULT << 0)      /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_UF                               (0x1UL << 1)                       /**< UF Interrupt Enable */
#define _WTIMER_IEN_UF_SHIFT                        1                                  /**< Shift value for TIMER_UF */
#define _WTIMER_IEN_UF_MASK                         0x2UL                              /**< Bit mask for TIMER_UF */
#define _WTIMER_IEN_UF_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_UF_DEFAULT                       (_WTIMER_IEN_UF_DEFAULT << 1)      /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_DIRCHG                           (0x1UL << 2)                       /**< DIRCHG Interrupt Enable */
#define _WTIMER_IEN_DIRCHG_SHIFT                    2                                  /**< Shift value for TIMER_DIRCHG */
#define _WTIMER_IEN_DIRCHG_MASK                     0x4UL                              /**< Bit mask for TIMER_DIRCHG */
#define _WTIMER_IEN_DIRCHG_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_DIRCHG_DEFAULT                   (_WTIMER_IEN_DIRCHG_DEFAULT << 2)  /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC0                              (0x1UL << 4)                       /**< CC0 Interrupt Enable */
#define _WTIMER_IEN_CC0_SHIFT                       4                                  /**< Shift value for TIMER_CC0 */
#define _WTIMER_IEN_CC0_MASK                        0x10UL                             /**< Bit mask for TIMER_CC0 */
#define _WTIMER_IEN_CC0_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC0_DEFAULT                      (_WTIMER_IEN_CC0_DEFAULT << 4)     /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC1                              (0x1UL << 5)                       /**< CC1 Interrupt Enable */
#define _WTIMER_IEN_CC1_SHIFT                       5                                  /**< Shift value for TIMER_CC1 */
#define _WTIMER_IEN_CC1_MASK                        0x20UL                             /**< Bit mask for TIMER_CC1 */
#define _WTIMER_IEN_CC1_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC1_DEFAULT                      (_WTIMER_IEN_CC1_DEFAULT << 5)     /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC2                              (0x1UL << 6)                       /**< CC2 Interrupt Enable */
#define _WTIMER_IEN_CC2_SHIFT                       6                                  /**< Shift value for TIMER_CC2 */
#define _WTIMER_IEN_CC2_MASK                        0x40UL                             /**< Bit mask for TIMER_CC2 */
#define _WTIMER_IEN_CC2_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC2_DEFAULT                      (_WTIMER_IEN_CC2_DEFAULT << 6)     /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC3                              (0x1UL << 7)                       /**< CC3 Interrupt Enable */
#define _WTIMER_IEN_CC3_SHIFT                       7                                  /**< Shift value for TIMER_CC3 */
#define _WTIMER_IEN_CC3_MASK                        0x80UL                             /**< Bit mask for TIMER_CC3 */
#define _WTIMER_IEN_CC3_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_CC3_DEFAULT                      (_WTIMER_IEN_CC3_DEFAULT << 7)     /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF0                           (0x1UL << 8)                       /**< ICBOF0 Interrupt Enable */
#define _WTIMER_IEN_ICBOF0_SHIFT                    8                                  /**< Shift value for TIMER_ICBOF0 */
#define _WTIMER_IEN_ICBOF0_MASK                     0x100UL                            /**< Bit mask for TIMER_ICBOF0 */
#define _WTIMER_IEN_ICBOF0_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF0_DEFAULT                   (_WTIMER_IEN_ICBOF0_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF1                           (0x1UL << 9)                       /**< ICBOF1 Interrupt Enable */
#define _WTIMER_IEN_ICBOF1_SHIFT                    9                                  /**< Shift value for TIMER_ICBOF1 */
#define _WTIMER_IEN_ICBOF1_MASK                     0x200UL                            /**< Bit mask for TIMER_ICBOF1 */
#define _WTIMER_IEN_ICBOF1_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF1_DEFAULT                   (_WTIMER_IEN_ICBOF1_DEFAULT << 9)  /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF2                           (0x1UL << 10)                      /**< ICBOF2 Interrupt Enable */
#define _WTIMER_IEN_ICBOF2_SHIFT                    10                                 /**< Shift value for TIMER_ICBOF2 */
#define _WTIMER_IEN_ICBOF2_MASK                     0x400UL                            /**< Bit mask for TIMER_ICBOF2 */
#define _WTIMER_IEN_ICBOF2_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF2_DEFAULT                   (_WTIMER_IEN_ICBOF2_DEFAULT << 10) /**< Shifted mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF3                           (0x1UL << 11)                      /**< ICBOF3 Interrupt Enable */
#define _WTIMER_IEN_ICBOF3_SHIFT                    11                                 /**< Shift value for TIMER_ICBOF3 */
#define _WTIMER_IEN_ICBOF3_MASK                     0x800UL                            /**< Bit mask for TIMER_ICBOF3 */
#define _WTIMER_IEN_ICBOF3_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for WTIMER_IEN */
#define WTIMER_IEN_ICBOF3_DEFAULT                   (_WTIMER_IEN_ICBOF3_DEFAULT << 11) /**< Shifted mode DEFAULT for WTIMER_IEN */

/* Bit fields for WTIMER TOP */
#define _WTIMER_TOP_RESETVALUE                      0x0000FFFFUL                   /**< Default value for WTIMER_TOP */
#define _WTIMER_TOP_MASK                            0xFFFFFFFFUL                   /**< Mask for WTIMER_TOP */
#define _WTIMER_TOP_TOP_SHIFT                       0                              /**< Shift value for TIMER_TOP */
#define _WTIMER_TOP_TOP_MASK                        0xFFFFFFFFUL                   /**< Bit mask for TIMER_TOP */
#define _WTIMER_TOP_TOP_DEFAULT                     0x0000FFFFUL                   /**< Mode DEFAULT for WTIMER_TOP */
#define WTIMER_TOP_TOP_DEFAULT                      (_WTIMER_TOP_TOP_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_TOP */

/* Bit fields for WTIMER TOPB */
#define _WTIMER_TOPB_RESETVALUE                     0x00000000UL                     /**< Default value for WTIMER_TOPB */
#define _WTIMER_TOPB_MASK                           0xFFFFFFFFUL                     /**< Mask for WTIMER_TOPB */
#define _WTIMER_TOPB_TOPB_SHIFT                     0                                /**< Shift value for TIMER_TOPB */
#define _WTIMER_TOPB_TOPB_MASK                      0xFFFFFFFFUL                     /**< Bit mask for TIMER_TOPB */
#define _WTIMER_TOPB_TOPB_DEFAULT                   0x00000000UL                     /**< Mode DEFAULT for WTIMER_TOPB */
#define WTIMER_TOPB_TOPB_DEFAULT                    (_WTIMER_TOPB_TOPB_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_TOPB */

/* Bit fields for WTIMER CNT */
#define _WTIMER_CNT_RESETVALUE                      0x00000000UL                   /**< Default value for WTIMER_CNT */
#define _WTIMER_CNT_MASK                            0xFFFFFFFFUL                   /**< Mask for WTIMER_CNT */
#define _WTIMER_CNT_CNT_SHIFT                       0                              /**< Shift value for TIMER_CNT */
#define _WTIMER_CNT_CNT_MASK                        0xFFFFFFFFUL                   /**< Bit mask for TIMER_CNT */
#define _WTIMER_CNT_CNT_DEFAULT                     0x00000000UL                   /**< Mode DEFAULT for WTIMER_CNT */
#define WTIMER_CNT_CNT_DEFAULT                      (_WTIMER_CNT_CNT_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_CNT */

/* Bit fields for WTIMER LOCK */
#define _WTIMER_LOCK_RESETVALUE                     0x00000000UL                              /**< Default value for WTIMER_LOCK */
#define _WTIMER_LOCK_MASK                           0x0000FFFFUL                              /**< Mask for WTIMER_LOCK */
#define _WTIMER_LOCK_TIMERLOCKKEY_SHIFT             0                                         /**< Shift value for TIMER_TIMERLOCKKEY */
#define _WTIMER_LOCK_TIMERLOCKKEY_MASK              0xFFFFUL                                  /**< Bit mask for TIMER_TIMERLOCKKEY */
#define _WTIMER_LOCK_TIMERLOCKKEY_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for WTIMER_LOCK */
#define _WTIMER_LOCK_TIMERLOCKKEY_LOCK              0x00000000UL                              /**< Mode LOCK for WTIMER_LOCK */
#define _WTIMER_LOCK_TIMERLOCKKEY_UNLOCKED          0x00000000UL                              /**< Mode UNLOCKED for WTIMER_LOCK */
#define _WTIMER_LOCK_TIMERLOCKKEY_LOCKED            0x00000001UL                              /**< Mode LOCKED for WTIMER_LOCK */
#define _WTIMER_LOCK_TIMERLOCKKEY_UNLOCK            0x0000CE80UL                              /**< Mode UNLOCK for WTIMER_LOCK */
#define WTIMER_LOCK_TIMERLOCKKEY_DEFAULT            (_WTIMER_LOCK_TIMERLOCKKEY_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_LOCK */
#define WTIMER_LOCK_TIMERLOCKKEY_LOCK               (_WTIMER_LOCK_TIMERLOCKKEY_LOCK << 0)     /**< Shifted mode LOCK for WTIMER_LOCK */
#define WTIMER_LOCK_TIMERLOCKKEY_UNLOCKED           (_WTIMER_LOCK_TIMERLOCKKEY_UNLOCKED << 0) /**< Shifted mode UNLOCKED for WTIMER_LOCK */
#define WTIMER_LOCK_TIMERLOCKKEY_LOCKED             (_WTIMER_LOCK_TIMERLOCKKEY_LOCKED << 0)   /**< Shifted mode LOCKED for WTIMER_LOCK */
#define WTIMER_LOCK_TIMERLOCKKEY_UNLOCK             (_WTIMER_LOCK_TIMERLOCKKEY_UNLOCK << 0)   /**< Shifted mode UNLOCK for WTIMER_LOCK */

/* Bit fields for WTIMER ROUTEPEN */
#define _WTIMER_ROUTEPEN_RESETVALUE                 0x00000000UL                              /**< Default value for WTIMER_ROUTEPEN */
#define _WTIMER_ROUTEPEN_MASK                       0x0000070FUL                              /**< Mask for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC0PEN                      (0x1UL << 0)                              /**< CC Channel 0 Pin Enable */
#define _WTIMER_ROUTEPEN_CC0PEN_SHIFT               0                                         /**< Shift value for TIMER_CC0PEN */
#define _WTIMER_ROUTEPEN_CC0PEN_MASK                0x1UL                                     /**< Bit mask for TIMER_CC0PEN */
#define _WTIMER_ROUTEPEN_CC0PEN_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC0PEN_DEFAULT              (_WTIMER_ROUTEPEN_CC0PEN_DEFAULT << 0)    /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC1PEN                      (0x1UL << 1)                              /**< CC Channel 1 Pin Enable */
#define _WTIMER_ROUTEPEN_CC1PEN_SHIFT               1                                         /**< Shift value for TIMER_CC1PEN */
#define _WTIMER_ROUTEPEN_CC1PEN_MASK                0x2UL                                     /**< Bit mask for TIMER_CC1PEN */
#define _WTIMER_ROUTEPEN_CC1PEN_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC1PEN_DEFAULT              (_WTIMER_ROUTEPEN_CC1PEN_DEFAULT << 1)    /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC2PEN                      (0x1UL << 2)                              /**< CC Channel 2 Pin Enable */
#define _WTIMER_ROUTEPEN_CC2PEN_SHIFT               2                                         /**< Shift value for TIMER_CC2PEN */
#define _WTIMER_ROUTEPEN_CC2PEN_MASK                0x4UL                                     /**< Bit mask for TIMER_CC2PEN */
#define _WTIMER_ROUTEPEN_CC2PEN_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC2PEN_DEFAULT              (_WTIMER_ROUTEPEN_CC2PEN_DEFAULT << 2)    /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC3PEN                      (0x1UL << 3)                              /**< CC Channel 3 Pin Enable */
#define _WTIMER_ROUTEPEN_CC3PEN_SHIFT               3                                         /**< Shift value for TIMER_CC3PEN */
#define _WTIMER_ROUTEPEN_CC3PEN_MASK                0x8UL                                     /**< Bit mask for TIMER_CC3PEN */
#define _WTIMER_ROUTEPEN_CC3PEN_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CC3PEN_DEFAULT              (_WTIMER_ROUTEPEN_CC3PEN_DEFAULT << 3)    /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CDTI0PEN                    (0x1UL << 8)                              /**< CC Channel 0 Complementary Dead-Time Insertion Pin Enable */
#define _WTIMER_ROUTEPEN_CDTI0PEN_SHIFT             8                                         /**< Shift value for TIMER_CDTI0PEN */
#define _WTIMER_ROUTEPEN_CDTI0PEN_MASK              0x100UL                                   /**< Bit mask for TIMER_CDTI0PEN */
#define _WTIMER_ROUTEPEN_CDTI0PEN_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CDTI0PEN_DEFAULT            (_WTIMER_ROUTEPEN_CDTI0PEN_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CDTI1PEN                    (0x1UL << 9)                              /**< CC Channel 1 Complementary Dead-Time Insertion Pin Enable */
#define _WTIMER_ROUTEPEN_CDTI1PEN_SHIFT             9                                         /**< Shift value for TIMER_CDTI1PEN */
#define _WTIMER_ROUTEPEN_CDTI1PEN_MASK              0x200UL                                   /**< Bit mask for TIMER_CDTI1PEN */
#define _WTIMER_ROUTEPEN_CDTI1PEN_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CDTI1PEN_DEFAULT            (_WTIMER_ROUTEPEN_CDTI1PEN_DEFAULT << 9)  /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CDTI2PEN                    (0x1UL << 10)                             /**< CC Channel 2 Complementary Dead-Time Insertion Pin Enable */
#define _WTIMER_ROUTEPEN_CDTI2PEN_SHIFT             10                                        /**< Shift value for TIMER_CDTI2PEN */
#define _WTIMER_ROUTEPEN_CDTI2PEN_MASK              0x400UL                                   /**< Bit mask for TIMER_CDTI2PEN */
#define _WTIMER_ROUTEPEN_CDTI2PEN_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for WTIMER_ROUTEPEN */
#define WTIMER_ROUTEPEN_CDTI2PEN_DEFAULT            (_WTIMER_ROUTEPEN_CDTI2PEN_DEFAULT << 10) /**< Shifted mode DEFAULT for WTIMER_ROUTEPEN */

/* Bit fields for WTIMER ROUTELOC0 */
#define _WTIMER_ROUTELOC0_RESETVALUE                0x00000000UL                             /**< Default value for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_MASK                      0x1F1F1F1FUL                             /**< Mask for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_SHIFT              0                                        /**< Shift value for TIMER_CC0LOC */
#define _WTIMER_ROUTELOC0_CC0LOC_MASK               0x1FUL                                   /**< Bit mask for TIMER_CC0LOC */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC0               0x00000000UL                             /**< Mode LOC0 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC1               0x00000001UL                             /**< Mode LOC1 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC2               0x00000002UL                             /**< Mode LOC2 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC3               0x00000003UL                             /**< Mode LOC3 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC4               0x00000004UL                             /**< Mode LOC4 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC5               0x00000005UL                             /**< Mode LOC5 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC6               0x00000006UL                             /**< Mode LOC6 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC7               0x00000007UL                             /**< Mode LOC7 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC8               0x00000008UL                             /**< Mode LOC8 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC9               0x00000009UL                             /**< Mode LOC9 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC10              0x0000000AUL                             /**< Mode LOC10 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC11              0x0000000BUL                             /**< Mode LOC11 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC12              0x0000000CUL                             /**< Mode LOC12 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC13              0x0000000DUL                             /**< Mode LOC13 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC14              0x0000000EUL                             /**< Mode LOC14 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC15              0x0000000FUL                             /**< Mode LOC15 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC16              0x00000010UL                             /**< Mode LOC16 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC17              0x00000011UL                             /**< Mode LOC17 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC18              0x00000012UL                             /**< Mode LOC18 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC19              0x00000013UL                             /**< Mode LOC19 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC20              0x00000014UL                             /**< Mode LOC20 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC21              0x00000015UL                             /**< Mode LOC21 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC22              0x00000016UL                             /**< Mode LOC22 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC23              0x00000017UL                             /**< Mode LOC23 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC24              0x00000018UL                             /**< Mode LOC24 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC25              0x00000019UL                             /**< Mode LOC25 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC26              0x0000001AUL                             /**< Mode LOC26 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC27              0x0000001BUL                             /**< Mode LOC27 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC28              0x0000001CUL                             /**< Mode LOC28 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC29              0x0000001DUL                             /**< Mode LOC29 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC30              0x0000001EUL                             /**< Mode LOC30 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC0LOC_LOC31              0x0000001FUL                             /**< Mode LOC31 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC0                (_WTIMER_ROUTELOC0_CC0LOC_LOC0 << 0)     /**< Shifted mode LOC0 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_DEFAULT             (_WTIMER_ROUTELOC0_CC0LOC_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC1                (_WTIMER_ROUTELOC0_CC0LOC_LOC1 << 0)     /**< Shifted mode LOC1 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC2                (_WTIMER_ROUTELOC0_CC0LOC_LOC2 << 0)     /**< Shifted mode LOC2 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC3                (_WTIMER_ROUTELOC0_CC0LOC_LOC3 << 0)     /**< Shifted mode LOC3 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC4                (_WTIMER_ROUTELOC0_CC0LOC_LOC4 << 0)     /**< Shifted mode LOC4 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC5                (_WTIMER_ROUTELOC0_CC0LOC_LOC5 << 0)     /**< Shifted mode LOC5 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC6                (_WTIMER_ROUTELOC0_CC0LOC_LOC6 << 0)     /**< Shifted mode LOC6 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC7                (_WTIMER_ROUTELOC0_CC0LOC_LOC7 << 0)     /**< Shifted mode LOC7 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC8                (_WTIMER_ROUTELOC0_CC0LOC_LOC8 << 0)     /**< Shifted mode LOC8 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC9                (_WTIMER_ROUTELOC0_CC0LOC_LOC9 << 0)     /**< Shifted mode LOC9 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC10               (_WTIMER_ROUTELOC0_CC0LOC_LOC10 << 0)    /**< Shifted mode LOC10 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC11               (_WTIMER_ROUTELOC0_CC0LOC_LOC11 << 0)    /**< Shifted mode LOC11 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC12               (_WTIMER_ROUTELOC0_CC0LOC_LOC12 << 0)    /**< Shifted mode LOC12 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC13               (_WTIMER_ROUTELOC0_CC0LOC_LOC13 << 0)    /**< Shifted mode LOC13 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC14               (_WTIMER_ROUTELOC0_CC0LOC_LOC14 << 0)    /**< Shifted mode LOC14 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC15               (_WTIMER_ROUTELOC0_CC0LOC_LOC15 << 0)    /**< Shifted mode LOC15 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC16               (_WTIMER_ROUTELOC0_CC0LOC_LOC16 << 0)    /**< Shifted mode LOC16 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC17               (_WTIMER_ROUTELOC0_CC0LOC_LOC17 << 0)    /**< Shifted mode LOC17 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC18               (_WTIMER_ROUTELOC0_CC0LOC_LOC18 << 0)    /**< Shifted mode LOC18 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC19               (_WTIMER_ROUTELOC0_CC0LOC_LOC19 << 0)    /**< Shifted mode LOC19 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC20               (_WTIMER_ROUTELOC0_CC0LOC_LOC20 << 0)    /**< Shifted mode LOC20 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC21               (_WTIMER_ROUTELOC0_CC0LOC_LOC21 << 0)    /**< Shifted mode LOC21 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC22               (_WTIMER_ROUTELOC0_CC0LOC_LOC22 << 0)    /**< Shifted mode LOC22 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC23               (_WTIMER_ROUTELOC0_CC0LOC_LOC23 << 0)    /**< Shifted mode LOC23 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC24               (_WTIMER_ROUTELOC0_CC0LOC_LOC24 << 0)    /**< Shifted mode LOC24 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC25               (_WTIMER_ROUTELOC0_CC0LOC_LOC25 << 0)    /**< Shifted mode LOC25 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC26               (_WTIMER_ROUTELOC0_CC0LOC_LOC26 << 0)    /**< Shifted mode LOC26 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC27               (_WTIMER_ROUTELOC0_CC0LOC_LOC27 << 0)    /**< Shifted mode LOC27 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC28               (_WTIMER_ROUTELOC0_CC0LOC_LOC28 << 0)    /**< Shifted mode LOC28 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC29               (_WTIMER_ROUTELOC0_CC0LOC_LOC29 << 0)    /**< Shifted mode LOC29 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC30               (_WTIMER_ROUTELOC0_CC0LOC_LOC30 << 0)    /**< Shifted mode LOC30 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC0LOC_LOC31               (_WTIMER_ROUTELOC0_CC0LOC_LOC31 << 0)    /**< Shifted mode LOC31 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_SHIFT              8                                        /**< Shift value for TIMER_CC1LOC */
#define _WTIMER_ROUTELOC0_CC1LOC_MASK               0x1F00UL                                 /**< Bit mask for TIMER_CC1LOC */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC0               0x00000000UL                             /**< Mode LOC0 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC1               0x00000001UL                             /**< Mode LOC1 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC2               0x00000002UL                             /**< Mode LOC2 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC3               0x00000003UL                             /**< Mode LOC3 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC4               0x00000004UL                             /**< Mode LOC4 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC5               0x00000005UL                             /**< Mode LOC5 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC6               0x00000006UL                             /**< Mode LOC6 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC7               0x00000007UL                             /**< Mode LOC7 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC8               0x00000008UL                             /**< Mode LOC8 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC9               0x00000009UL                             /**< Mode LOC9 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC10              0x0000000AUL                             /**< Mode LOC10 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC11              0x0000000BUL                             /**< Mode LOC11 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC12              0x0000000CUL                             /**< Mode LOC12 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC13              0x0000000DUL                             /**< Mode LOC13 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC14              0x0000000EUL                             /**< Mode LOC14 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC15              0x0000000FUL                             /**< Mode LOC15 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC16              0x00000010UL                             /**< Mode LOC16 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC17              0x00000011UL                             /**< Mode LOC17 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC18              0x00000012UL                             /**< Mode LOC18 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC19              0x00000013UL                             /**< Mode LOC19 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC20              0x00000014UL                             /**< Mode LOC20 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC21              0x00000015UL                             /**< Mode LOC21 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC22              0x00000016UL                             /**< Mode LOC22 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC23              0x00000017UL                             /**< Mode LOC23 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC24              0x00000018UL                             /**< Mode LOC24 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC25              0x00000019UL                             /**< Mode LOC25 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC26              0x0000001AUL                             /**< Mode LOC26 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC27              0x0000001BUL                             /**< Mode LOC27 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC28              0x0000001CUL                             /**< Mode LOC28 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC29              0x0000001DUL                             /**< Mode LOC29 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC30              0x0000001EUL                             /**< Mode LOC30 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC1LOC_LOC31              0x0000001FUL                             /**< Mode LOC31 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC0                (_WTIMER_ROUTELOC0_CC1LOC_LOC0 << 8)     /**< Shifted mode LOC0 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_DEFAULT             (_WTIMER_ROUTELOC0_CC1LOC_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC1                (_WTIMER_ROUTELOC0_CC1LOC_LOC1 << 8)     /**< Shifted mode LOC1 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC2                (_WTIMER_ROUTELOC0_CC1LOC_LOC2 << 8)     /**< Shifted mode LOC2 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC3                (_WTIMER_ROUTELOC0_CC1LOC_LOC3 << 8)     /**< Shifted mode LOC3 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC4                (_WTIMER_ROUTELOC0_CC1LOC_LOC4 << 8)     /**< Shifted mode LOC4 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC5                (_WTIMER_ROUTELOC0_CC1LOC_LOC5 << 8)     /**< Shifted mode LOC5 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC6                (_WTIMER_ROUTELOC0_CC1LOC_LOC6 << 8)     /**< Shifted mode LOC6 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC7                (_WTIMER_ROUTELOC0_CC1LOC_LOC7 << 8)     /**< Shifted mode LOC7 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC8                (_WTIMER_ROUTELOC0_CC1LOC_LOC8 << 8)     /**< Shifted mode LOC8 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC9                (_WTIMER_ROUTELOC0_CC1LOC_LOC9 << 8)     /**< Shifted mode LOC9 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC10               (_WTIMER_ROUTELOC0_CC1LOC_LOC10 << 8)    /**< Shifted mode LOC10 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC11               (_WTIMER_ROUTELOC0_CC1LOC_LOC11 << 8)    /**< Shifted mode LOC11 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC12               (_WTIMER_ROUTELOC0_CC1LOC_LOC12 << 8)    /**< Shifted mode LOC12 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC13               (_WTIMER_ROUTELOC0_CC1LOC_LOC13 << 8)    /**< Shifted mode LOC13 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC14               (_WTIMER_ROUTELOC0_CC1LOC_LOC14 << 8)    /**< Shifted mode LOC14 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC15               (_WTIMER_ROUTELOC0_CC1LOC_LOC15 << 8)    /**< Shifted mode LOC15 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC16               (_WTIMER_ROUTELOC0_CC1LOC_LOC16 << 8)    /**< Shifted mode LOC16 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC17               (_WTIMER_ROUTELOC0_CC1LOC_LOC17 << 8)    /**< Shifted mode LOC17 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC18               (_WTIMER_ROUTELOC0_CC1LOC_LOC18 << 8)    /**< Shifted mode LOC18 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC19               (_WTIMER_ROUTELOC0_CC1LOC_LOC19 << 8)    /**< Shifted mode LOC19 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC20               (_WTIMER_ROUTELOC0_CC1LOC_LOC20 << 8)    /**< Shifted mode LOC20 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC21               (_WTIMER_ROUTELOC0_CC1LOC_LOC21 << 8)    /**< Shifted mode LOC21 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC22               (_WTIMER_ROUTELOC0_CC1LOC_LOC22 << 8)    /**< Shifted mode LOC22 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC23               (_WTIMER_ROUTELOC0_CC1LOC_LOC23 << 8)    /**< Shifted mode LOC23 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC24               (_WTIMER_ROUTELOC0_CC1LOC_LOC24 << 8)    /**< Shifted mode LOC24 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC25               (_WTIMER_ROUTELOC0_CC1LOC_LOC25 << 8)    /**< Shifted mode LOC25 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC26               (_WTIMER_ROUTELOC0_CC1LOC_LOC26 << 8)    /**< Shifted mode LOC26 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC27               (_WTIMER_ROUTELOC0_CC1LOC_LOC27 << 8)    /**< Shifted mode LOC27 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC28               (_WTIMER_ROUTELOC0_CC1LOC_LOC28 << 8)    /**< Shifted mode LOC28 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC29               (_WTIMER_ROUTELOC0_CC1LOC_LOC29 << 8)    /**< Shifted mode LOC29 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC30               (_WTIMER_ROUTELOC0_CC1LOC_LOC30 << 8)    /**< Shifted mode LOC30 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC1LOC_LOC31               (_WTIMER_ROUTELOC0_CC1LOC_LOC31 << 8)    /**< Shifted mode LOC31 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_SHIFT              16                                       /**< Shift value for TIMER_CC2LOC */
#define _WTIMER_ROUTELOC0_CC2LOC_MASK               0x1F0000UL                               /**< Bit mask for TIMER_CC2LOC */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC0               0x00000000UL                             /**< Mode LOC0 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC1               0x00000001UL                             /**< Mode LOC1 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC2               0x00000002UL                             /**< Mode LOC2 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC3               0x00000003UL                             /**< Mode LOC3 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC4               0x00000004UL                             /**< Mode LOC4 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC5               0x00000005UL                             /**< Mode LOC5 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC6               0x00000006UL                             /**< Mode LOC6 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC7               0x00000007UL                             /**< Mode LOC7 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC8               0x00000008UL                             /**< Mode LOC8 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC9               0x00000009UL                             /**< Mode LOC9 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC10              0x0000000AUL                             /**< Mode LOC10 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC11              0x0000000BUL                             /**< Mode LOC11 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC12              0x0000000CUL                             /**< Mode LOC12 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC13              0x0000000DUL                             /**< Mode LOC13 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC14              0x0000000EUL                             /**< Mode LOC14 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC15              0x0000000FUL                             /**< Mode LOC15 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC16              0x00000010UL                             /**< Mode LOC16 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC17              0x00000011UL                             /**< Mode LOC17 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC18              0x00000012UL                             /**< Mode LOC18 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC19              0x00000013UL                             /**< Mode LOC19 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC20              0x00000014UL                             /**< Mode LOC20 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC21              0x00000015UL                             /**< Mode LOC21 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC22              0x00000016UL                             /**< Mode LOC22 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC23              0x00000017UL                             /**< Mode LOC23 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC24              0x00000018UL                             /**< Mode LOC24 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC25              0x00000019UL                             /**< Mode LOC25 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC26              0x0000001AUL                             /**< Mode LOC26 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC27              0x0000001BUL                             /**< Mode LOC27 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC28              0x0000001CUL                             /**< Mode LOC28 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC29              0x0000001DUL                             /**< Mode LOC29 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC30              0x0000001EUL                             /**< Mode LOC30 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC2LOC_LOC31              0x0000001FUL                             /**< Mode LOC31 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC0                (_WTIMER_ROUTELOC0_CC2LOC_LOC0 << 16)    /**< Shifted mode LOC0 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_DEFAULT             (_WTIMER_ROUTELOC0_CC2LOC_DEFAULT << 16) /**< Shifted mode DEFAULT for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC1                (_WTIMER_ROUTELOC0_CC2LOC_LOC1 << 16)    /**< Shifted mode LOC1 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC2                (_WTIMER_ROUTELOC0_CC2LOC_LOC2 << 16)    /**< Shifted mode LOC2 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC3                (_WTIMER_ROUTELOC0_CC2LOC_LOC3 << 16)    /**< Shifted mode LOC3 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC4                (_WTIMER_ROUTELOC0_CC2LOC_LOC4 << 16)    /**< Shifted mode LOC4 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC5                (_WTIMER_ROUTELOC0_CC2LOC_LOC5 << 16)    /**< Shifted mode LOC5 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC6                (_WTIMER_ROUTELOC0_CC2LOC_LOC6 << 16)    /**< Shifted mode LOC6 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC7                (_WTIMER_ROUTELOC0_CC2LOC_LOC7 << 16)    /**< Shifted mode LOC7 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC8                (_WTIMER_ROUTELOC0_CC2LOC_LOC8 << 16)    /**< Shifted mode LOC8 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC9                (_WTIMER_ROUTELOC0_CC2LOC_LOC9 << 16)    /**< Shifted mode LOC9 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC10               (_WTIMER_ROUTELOC0_CC2LOC_LOC10 << 16)   /**< Shifted mode LOC10 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC11               (_WTIMER_ROUTELOC0_CC2LOC_LOC11 << 16)   /**< Shifted mode LOC11 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC12               (_WTIMER_ROUTELOC0_CC2LOC_LOC12 << 16)   /**< Shifted mode LOC12 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC13               (_WTIMER_ROUTELOC0_CC2LOC_LOC13 << 16)   /**< Shifted mode LOC13 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC14               (_WTIMER_ROUTELOC0_CC2LOC_LOC14 << 16)   /**< Shifted mode LOC14 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC15               (_WTIMER_ROUTELOC0_CC2LOC_LOC15 << 16)   /**< Shifted mode LOC15 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC16               (_WTIMER_ROUTELOC0_CC2LOC_LOC16 << 16)   /**< Shifted mode LOC16 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC17               (_WTIMER_ROUTELOC0_CC2LOC_LOC17 << 16)   /**< Shifted mode LOC17 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC18               (_WTIMER_ROUTELOC0_CC2LOC_LOC18 << 16)   /**< Shifted mode LOC18 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC19               (_WTIMER_ROUTELOC0_CC2LOC_LOC19 << 16)   /**< Shifted mode LOC19 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC20               (_WTIMER_ROUTELOC0_CC2LOC_LOC20 << 16)   /**< Shifted mode LOC20 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC21               (_WTIMER_ROUTELOC0_CC2LOC_LOC21 << 16)   /**< Shifted mode LOC21 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC22               (_WTIMER_ROUTELOC0_CC2LOC_LOC22 << 16)   /**< Shifted mode LOC22 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC23               (_WTIMER_ROUTELOC0_CC2LOC_LOC23 << 16)   /**< Shifted mode LOC23 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC24               (_WTIMER_ROUTELOC0_CC2LOC_LOC24 << 16)   /**< Shifted mode LOC24 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC25               (_WTIMER_ROUTELOC0_CC2LOC_LOC25 << 16)   /**< Shifted mode LOC25 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC26               (_WTIMER_ROUTELOC0_CC2LOC_LOC26 << 16)   /**< Shifted mode LOC26 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC27               (_WTIMER_ROUTELOC0_CC2LOC_LOC27 << 16)   /**< Shifted mode LOC27 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC28               (_WTIMER_ROUTELOC0_CC2LOC_LOC28 << 16)   /**< Shifted mode LOC28 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC29               (_WTIMER_ROUTELOC0_CC2LOC_LOC29 << 16)   /**< Shifted mode LOC29 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC30               (_WTIMER_ROUTELOC0_CC2LOC_LOC30 << 16)   /**< Shifted mode LOC30 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC2LOC_LOC31               (_WTIMER_ROUTELOC0_CC2LOC_LOC31 << 16)   /**< Shifted mode LOC31 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_SHIFT              24                                       /**< Shift value for TIMER_CC3LOC */
#define _WTIMER_ROUTELOC0_CC3LOC_MASK               0x1F000000UL                             /**< Bit mask for TIMER_CC3LOC */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC0               0x00000000UL                             /**< Mode LOC0 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC1               0x00000001UL                             /**< Mode LOC1 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC2               0x00000002UL                             /**< Mode LOC2 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC3               0x00000003UL                             /**< Mode LOC3 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC4               0x00000004UL                             /**< Mode LOC4 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC5               0x00000005UL                             /**< Mode LOC5 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC6               0x00000006UL                             /**< Mode LOC6 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC7               0x00000007UL                             /**< Mode LOC7 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC8               0x00000008UL                             /**< Mode LOC8 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC9               0x00000009UL                             /**< Mode LOC9 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC10              0x0000000AUL                             /**< Mode LOC10 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC11              0x0000000BUL                             /**< Mode LOC11 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC12              0x0000000CUL                             /**< Mode LOC12 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC13              0x0000000DUL                             /**< Mode LOC13 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC14              0x0000000EUL                             /**< Mode LOC14 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC15              0x0000000FUL                             /**< Mode LOC15 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC16              0x00000010UL                             /**< Mode LOC16 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC17              0x00000011UL                             /**< Mode LOC17 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC18              0x00000012UL                             /**< Mode LOC18 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC19              0x00000013UL                             /**< Mode LOC19 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC20              0x00000014UL                             /**< Mode LOC20 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC21              0x00000015UL                             /**< Mode LOC21 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC22              0x00000016UL                             /**< Mode LOC22 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC23              0x00000017UL                             /**< Mode LOC23 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC24              0x00000018UL                             /**< Mode LOC24 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC25              0x00000019UL                             /**< Mode LOC25 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC26              0x0000001AUL                             /**< Mode LOC26 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC27              0x0000001BUL                             /**< Mode LOC27 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC28              0x0000001CUL                             /**< Mode LOC28 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC29              0x0000001DUL                             /**< Mode LOC29 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC30              0x0000001EUL                             /**< Mode LOC30 for WTIMER_ROUTELOC0 */
#define _WTIMER_ROUTELOC0_CC3LOC_LOC31              0x0000001FUL                             /**< Mode LOC31 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC0                (_WTIMER_ROUTELOC0_CC3LOC_LOC0 << 24)    /**< Shifted mode LOC0 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_DEFAULT             (_WTIMER_ROUTELOC0_CC3LOC_DEFAULT << 24) /**< Shifted mode DEFAULT for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC1                (_WTIMER_ROUTELOC0_CC3LOC_LOC1 << 24)    /**< Shifted mode LOC1 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC2                (_WTIMER_ROUTELOC0_CC3LOC_LOC2 << 24)    /**< Shifted mode LOC2 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC3                (_WTIMER_ROUTELOC0_CC3LOC_LOC3 << 24)    /**< Shifted mode LOC3 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC4                (_WTIMER_ROUTELOC0_CC3LOC_LOC4 << 24)    /**< Shifted mode LOC4 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC5                (_WTIMER_ROUTELOC0_CC3LOC_LOC5 << 24)    /**< Shifted mode LOC5 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC6                (_WTIMER_ROUTELOC0_CC3LOC_LOC6 << 24)    /**< Shifted mode LOC6 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC7                (_WTIMER_ROUTELOC0_CC3LOC_LOC7 << 24)    /**< Shifted mode LOC7 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC8                (_WTIMER_ROUTELOC0_CC3LOC_LOC8 << 24)    /**< Shifted mode LOC8 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC9                (_WTIMER_ROUTELOC0_CC3LOC_LOC9 << 24)    /**< Shifted mode LOC9 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC10               (_WTIMER_ROUTELOC0_CC3LOC_LOC10 << 24)   /**< Shifted mode LOC10 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC11               (_WTIMER_ROUTELOC0_CC3LOC_LOC11 << 24)   /**< Shifted mode LOC11 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC12               (_WTIMER_ROUTELOC0_CC3LOC_LOC12 << 24)   /**< Shifted mode LOC12 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC13               (_WTIMER_ROUTELOC0_CC3LOC_LOC13 << 24)   /**< Shifted mode LOC13 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC14               (_WTIMER_ROUTELOC0_CC3LOC_LOC14 << 24)   /**< Shifted mode LOC14 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC15               (_WTIMER_ROUTELOC0_CC3LOC_LOC15 << 24)   /**< Shifted mode LOC15 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC16               (_WTIMER_ROUTELOC0_CC3LOC_LOC16 << 24)   /**< Shifted mode LOC16 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC17               (_WTIMER_ROUTELOC0_CC3LOC_LOC17 << 24)   /**< Shifted mode LOC17 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC18               (_WTIMER_ROUTELOC0_CC3LOC_LOC18 << 24)   /**< Shifted mode LOC18 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC19               (_WTIMER_ROUTELOC0_CC3LOC_LOC19 << 24)   /**< Shifted mode LOC19 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC20               (_WTIMER_ROUTELOC0_CC3LOC_LOC20 << 24)   /**< Shifted mode LOC20 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC21               (_WTIMER_ROUTELOC0_CC3LOC_LOC21 << 24)   /**< Shifted mode LOC21 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC22               (_WTIMER_ROUTELOC0_CC3LOC_LOC22 << 24)   /**< Shifted mode LOC22 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC23               (_WTIMER_ROUTELOC0_CC3LOC_LOC23 << 24)   /**< Shifted mode LOC23 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC24               (_WTIMER_ROUTELOC0_CC3LOC_LOC24 << 24)   /**< Shifted mode LOC24 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC25               (_WTIMER_ROUTELOC0_CC3LOC_LOC25 << 24)   /**< Shifted mode LOC25 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC26               (_WTIMER_ROUTELOC0_CC3LOC_LOC26 << 24)   /**< Shifted mode LOC26 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC27               (_WTIMER_ROUTELOC0_CC3LOC_LOC27 << 24)   /**< Shifted mode LOC27 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC28               (_WTIMER_ROUTELOC0_CC3LOC_LOC28 << 24)   /**< Shifted mode LOC28 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC29               (_WTIMER_ROUTELOC0_CC3LOC_LOC29 << 24)   /**< Shifted mode LOC29 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC30               (_WTIMER_ROUTELOC0_CC3LOC_LOC30 << 24)   /**< Shifted mode LOC30 for WTIMER_ROUTELOC0 */
#define WTIMER_ROUTELOC0_CC3LOC_LOC31               (_WTIMER_ROUTELOC0_CC3LOC_LOC31 << 24)   /**< Shifted mode LOC31 for WTIMER_ROUTELOC0 */

/* Bit fields for WTIMER ROUTELOC2 */
#define _WTIMER_ROUTELOC2_RESETVALUE                0x00000000UL                               /**< Default value for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_MASK                      0x001F1F1FUL                               /**< Mask for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_SHIFT            0                                          /**< Shift value for TIMER_CDTI0LOC */
#define _WTIMER_ROUTELOC2_CDTI0LOC_MASK             0x1FUL                                     /**< Bit mask for TIMER_CDTI0LOC */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC0             0x00000000UL                               /**< Mode LOC0 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_DEFAULT          0x00000000UL                               /**< Mode DEFAULT for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC1             0x00000001UL                               /**< Mode LOC1 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC2             0x00000002UL                               /**< Mode LOC2 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC3             0x00000003UL                               /**< Mode LOC3 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC4             0x00000004UL                               /**< Mode LOC4 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC5             0x00000005UL                               /**< Mode LOC5 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC6             0x00000006UL                               /**< Mode LOC6 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC7             0x00000007UL                               /**< Mode LOC7 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC8             0x00000008UL                               /**< Mode LOC8 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC9             0x00000009UL                               /**< Mode LOC9 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC10            0x0000000AUL                               /**< Mode LOC10 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC11            0x0000000BUL                               /**< Mode LOC11 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC12            0x0000000CUL                               /**< Mode LOC12 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC13            0x0000000DUL                               /**< Mode LOC13 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC14            0x0000000EUL                               /**< Mode LOC14 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC15            0x0000000FUL                               /**< Mode LOC15 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC16            0x00000010UL                               /**< Mode LOC16 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC17            0x00000011UL                               /**< Mode LOC17 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC18            0x00000012UL                               /**< Mode LOC18 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC19            0x00000013UL                               /**< Mode LOC19 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC20            0x00000014UL                               /**< Mode LOC20 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC21            0x00000015UL                               /**< Mode LOC21 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC22            0x00000016UL                               /**< Mode LOC22 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC23            0x00000017UL                               /**< Mode LOC23 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC24            0x00000018UL                               /**< Mode LOC24 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC25            0x00000019UL                               /**< Mode LOC25 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC26            0x0000001AUL                               /**< Mode LOC26 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC27            0x0000001BUL                               /**< Mode LOC27 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC28            0x0000001CUL                               /**< Mode LOC28 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC29            0x0000001DUL                               /**< Mode LOC29 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC30            0x0000001EUL                               /**< Mode LOC30 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI0LOC_LOC31            0x0000001FUL                               /**< Mode LOC31 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC0              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC0 << 0)     /**< Shifted mode LOC0 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_DEFAULT           (_WTIMER_ROUTELOC2_CDTI0LOC_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC1              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC1 << 0)     /**< Shifted mode LOC1 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC2              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC2 << 0)     /**< Shifted mode LOC2 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC3              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC3 << 0)     /**< Shifted mode LOC3 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC4              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC4 << 0)     /**< Shifted mode LOC4 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC5              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC5 << 0)     /**< Shifted mode LOC5 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC6              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC6 << 0)     /**< Shifted mode LOC6 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC7              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC7 << 0)     /**< Shifted mode LOC7 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC8              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC8 << 0)     /**< Shifted mode LOC8 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC9              (_WTIMER_ROUTELOC2_CDTI0LOC_LOC9 << 0)     /**< Shifted mode LOC9 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC10             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC10 << 0)    /**< Shifted mode LOC10 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC11             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC11 << 0)    /**< Shifted mode LOC11 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC12             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC12 << 0)    /**< Shifted mode LOC12 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC13             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC13 << 0)    /**< Shifted mode LOC13 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC14             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC14 << 0)    /**< Shifted mode LOC14 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC15             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC15 << 0)    /**< Shifted mode LOC15 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC16             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC16 << 0)    /**< Shifted mode LOC16 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC17             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC17 << 0)    /**< Shifted mode LOC17 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC18             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC18 << 0)    /**< Shifted mode LOC18 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC19             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC19 << 0)    /**< Shifted mode LOC19 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC20             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC20 << 0)    /**< Shifted mode LOC20 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC21             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC21 << 0)    /**< Shifted mode LOC21 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC22             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC22 << 0)    /**< Shifted mode LOC22 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC23             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC23 << 0)    /**< Shifted mode LOC23 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC24             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC24 << 0)    /**< Shifted mode LOC24 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC25             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC25 << 0)    /**< Shifted mode LOC25 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC26             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC26 << 0)    /**< Shifted mode LOC26 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC27             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC27 << 0)    /**< Shifted mode LOC27 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC28             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC28 << 0)    /**< Shifted mode LOC28 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC29             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC29 << 0)    /**< Shifted mode LOC29 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC30             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC30 << 0)    /**< Shifted mode LOC30 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI0LOC_LOC31             (_WTIMER_ROUTELOC2_CDTI0LOC_LOC31 << 0)    /**< Shifted mode LOC31 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_SHIFT            8                                          /**< Shift value for TIMER_CDTI1LOC */
#define _WTIMER_ROUTELOC2_CDTI1LOC_MASK             0x1F00UL                                   /**< Bit mask for TIMER_CDTI1LOC */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC0             0x00000000UL                               /**< Mode LOC0 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_DEFAULT          0x00000000UL                               /**< Mode DEFAULT for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC1             0x00000001UL                               /**< Mode LOC1 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC2             0x00000002UL                               /**< Mode LOC2 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC3             0x00000003UL                               /**< Mode LOC3 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC4             0x00000004UL                               /**< Mode LOC4 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC5             0x00000005UL                               /**< Mode LOC5 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC6             0x00000006UL                               /**< Mode LOC6 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC7             0x00000007UL                               /**< Mode LOC7 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC8             0x00000008UL                               /**< Mode LOC8 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC9             0x00000009UL                               /**< Mode LOC9 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC10            0x0000000AUL                               /**< Mode LOC10 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC11            0x0000000BUL                               /**< Mode LOC11 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC12            0x0000000CUL                               /**< Mode LOC12 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC13            0x0000000DUL                               /**< Mode LOC13 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC14            0x0000000EUL                               /**< Mode LOC14 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC15            0x0000000FUL                               /**< Mode LOC15 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC16            0x00000010UL                               /**< Mode LOC16 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC17            0x00000011UL                               /**< Mode LOC17 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC18            0x00000012UL                               /**< Mode LOC18 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC19            0x00000013UL                               /**< Mode LOC19 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC20            0x00000014UL                               /**< Mode LOC20 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC21            0x00000015UL                               /**< Mode LOC21 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC22            0x00000016UL                               /**< Mode LOC22 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC23            0x00000017UL                               /**< Mode LOC23 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC24            0x00000018UL                               /**< Mode LOC24 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC25            0x00000019UL                               /**< Mode LOC25 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC26            0x0000001AUL                               /**< Mode LOC26 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC27            0x0000001BUL                               /**< Mode LOC27 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC28            0x0000001CUL                               /**< Mode LOC28 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC29            0x0000001DUL                               /**< Mode LOC29 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC30            0x0000001EUL                               /**< Mode LOC30 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI1LOC_LOC31            0x0000001FUL                               /**< Mode LOC31 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC0              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC0 << 8)     /**< Shifted mode LOC0 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_DEFAULT           (_WTIMER_ROUTELOC2_CDTI1LOC_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC1              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC1 << 8)     /**< Shifted mode LOC1 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC2              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC2 << 8)     /**< Shifted mode LOC2 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC3              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC3 << 8)     /**< Shifted mode LOC3 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC4              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC4 << 8)     /**< Shifted mode LOC4 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC5              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC5 << 8)     /**< Shifted mode LOC5 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC6              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC6 << 8)     /**< Shifted mode LOC6 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC7              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC7 << 8)     /**< Shifted mode LOC7 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC8              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC8 << 8)     /**< Shifted mode LOC8 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC9              (_WTIMER_ROUTELOC2_CDTI1LOC_LOC9 << 8)     /**< Shifted mode LOC9 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC10             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC10 << 8)    /**< Shifted mode LOC10 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC11             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC11 << 8)    /**< Shifted mode LOC11 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC12             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC12 << 8)    /**< Shifted mode LOC12 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC13             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC13 << 8)    /**< Shifted mode LOC13 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC14             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC14 << 8)    /**< Shifted mode LOC14 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC15             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC15 << 8)    /**< Shifted mode LOC15 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC16             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC16 << 8)    /**< Shifted mode LOC16 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC17             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC17 << 8)    /**< Shifted mode LOC17 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC18             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC18 << 8)    /**< Shifted mode LOC18 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC19             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC19 << 8)    /**< Shifted mode LOC19 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC20             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC20 << 8)    /**< Shifted mode LOC20 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC21             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC21 << 8)    /**< Shifted mode LOC21 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC22             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC22 << 8)    /**< Shifted mode LOC22 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC23             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC23 << 8)    /**< Shifted mode LOC23 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC24             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC24 << 8)    /**< Shifted mode LOC24 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC25             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC25 << 8)    /**< Shifted mode LOC25 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC26             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC26 << 8)    /**< Shifted mode LOC26 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC27             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC27 << 8)    /**< Shifted mode LOC27 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC28             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC28 << 8)    /**< Shifted mode LOC28 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC29             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC29 << 8)    /**< Shifted mode LOC29 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC30             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC30 << 8)    /**< Shifted mode LOC30 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI1LOC_LOC31             (_WTIMER_ROUTELOC2_CDTI1LOC_LOC31 << 8)    /**< Shifted mode LOC31 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_SHIFT            16                                         /**< Shift value for TIMER_CDTI2LOC */
#define _WTIMER_ROUTELOC2_CDTI2LOC_MASK             0x1F0000UL                                 /**< Bit mask for TIMER_CDTI2LOC */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC0             0x00000000UL                               /**< Mode LOC0 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_DEFAULT          0x00000000UL                               /**< Mode DEFAULT for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC1             0x00000001UL                               /**< Mode LOC1 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC2             0x00000002UL                               /**< Mode LOC2 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC3             0x00000003UL                               /**< Mode LOC3 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC4             0x00000004UL                               /**< Mode LOC4 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC5             0x00000005UL                               /**< Mode LOC5 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC6             0x00000006UL                               /**< Mode LOC6 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC7             0x00000007UL                               /**< Mode LOC7 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC8             0x00000008UL                               /**< Mode LOC8 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC9             0x00000009UL                               /**< Mode LOC9 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC10            0x0000000AUL                               /**< Mode LOC10 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC11            0x0000000BUL                               /**< Mode LOC11 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC12            0x0000000CUL                               /**< Mode LOC12 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC13            0x0000000DUL                               /**< Mode LOC13 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC14            0x0000000EUL                               /**< Mode LOC14 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC15            0x0000000FUL                               /**< Mode LOC15 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC16            0x00000010UL                               /**< Mode LOC16 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC17            0x00000011UL                               /**< Mode LOC17 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC18            0x00000012UL                               /**< Mode LOC18 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC19            0x00000013UL                               /**< Mode LOC19 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC20            0x00000014UL                               /**< Mode LOC20 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC21            0x00000015UL                               /**< Mode LOC21 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC22            0x00000016UL                               /**< Mode LOC22 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC23            0x00000017UL                               /**< Mode LOC23 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC24            0x00000018UL                               /**< Mode LOC24 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC25            0x00000019UL                               /**< Mode LOC25 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC26            0x0000001AUL                               /**< Mode LOC26 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC27            0x0000001BUL                               /**< Mode LOC27 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC28            0x0000001CUL                               /**< Mode LOC28 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC29            0x0000001DUL                               /**< Mode LOC29 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC30            0x0000001EUL                               /**< Mode LOC30 for WTIMER_ROUTELOC2 */
#define _WTIMER_ROUTELOC2_CDTI2LOC_LOC31            0x0000001FUL                               /**< Mode LOC31 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC0              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC0 << 16)    /**< Shifted mode LOC0 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_DEFAULT           (_WTIMER_ROUTELOC2_CDTI2LOC_DEFAULT << 16) /**< Shifted mode DEFAULT for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC1              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC1 << 16)    /**< Shifted mode LOC1 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC2              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC2 << 16)    /**< Shifted mode LOC2 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC3              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC3 << 16)    /**< Shifted mode LOC3 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC4              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC4 << 16)    /**< Shifted mode LOC4 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC5              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC5 << 16)    /**< Shifted mode LOC5 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC6              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC6 << 16)    /**< Shifted mode LOC6 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC7              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC7 << 16)    /**< Shifted mode LOC7 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC8              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC8 << 16)    /**< Shifted mode LOC8 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC9              (_WTIMER_ROUTELOC2_CDTI2LOC_LOC9 << 16)    /**< Shifted mode LOC9 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC10             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC10 << 16)   /**< Shifted mode LOC10 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC11             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC11 << 16)   /**< Shifted mode LOC11 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC12             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC12 << 16)   /**< Shifted mode LOC12 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC13             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC13 << 16)   /**< Shifted mode LOC13 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC14             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC14 << 16)   /**< Shifted mode LOC14 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC15             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC15 << 16)   /**< Shifted mode LOC15 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC16             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC16 << 16)   /**< Shifted mode LOC16 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC17             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC17 << 16)   /**< Shifted mode LOC17 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC18             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC18 << 16)   /**< Shifted mode LOC18 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC19             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC19 << 16)   /**< Shifted mode LOC19 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC20             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC20 << 16)   /**< Shifted mode LOC20 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC21             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC21 << 16)   /**< Shifted mode LOC21 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC22             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC22 << 16)   /**< Shifted mode LOC22 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC23             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC23 << 16)   /**< Shifted mode LOC23 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC24             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC24 << 16)   /**< Shifted mode LOC24 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC25             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC25 << 16)   /**< Shifted mode LOC25 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC26             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC26 << 16)   /**< Shifted mode LOC26 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC27             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC27 << 16)   /**< Shifted mode LOC27 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC28             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC28 << 16)   /**< Shifted mode LOC28 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC29             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC29 << 16)   /**< Shifted mode LOC29 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC30             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC30 << 16)   /**< Shifted mode LOC30 for WTIMER_ROUTELOC2 */
#define WTIMER_ROUTELOC2_CDTI2LOC_LOC31             (_WTIMER_ROUTELOC2_CDTI2LOC_LOC31 << 16)   /**< Shifted mode LOC31 for WTIMER_ROUTELOC2 */

/* Bit fields for WTIMER CC_CTRL */
#define _WTIMER_CC_CTRL_RESETVALUE                  0x00000000UL                                     /**< Default value for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_MASK                        0x7F0F3F17UL                                     /**< Mask for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_MODE_SHIFT                  0                                                /**< Shift value for TIMER_MODE */
#define _WTIMER_CC_CTRL_MODE_MASK                   0x3UL                                            /**< Bit mask for TIMER_MODE */
#define _WTIMER_CC_CTRL_MODE_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_MODE_OFF                    0x00000000UL                                     /**< Mode OFF for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_MODE_INPUTCAPTURE           0x00000001UL                                     /**< Mode INPUTCAPTURE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_MODE_OUTPUTCOMPARE          0x00000002UL                                     /**< Mode OUTPUTCOMPARE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_MODE_PWM                    0x00000003UL                                     /**< Mode PWM for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_MODE_DEFAULT                 (_WTIMER_CC_CTRL_MODE_DEFAULT << 0)              /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_MODE_OFF                     (_WTIMER_CC_CTRL_MODE_OFF << 0)                  /**< Shifted mode OFF for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_MODE_INPUTCAPTURE            (_WTIMER_CC_CTRL_MODE_INPUTCAPTURE << 0)         /**< Shifted mode INPUTCAPTURE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_MODE_OUTPUTCOMPARE           (_WTIMER_CC_CTRL_MODE_OUTPUTCOMPARE << 0)        /**< Shifted mode OUTPUTCOMPARE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_MODE_PWM                     (_WTIMER_CC_CTRL_MODE_PWM << 0)                  /**< Shifted mode PWM for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_OUTINV                       (0x1UL << 2)                                     /**< Output Invert */
#define _WTIMER_CC_CTRL_OUTINV_SHIFT                2                                                /**< Shift value for TIMER_OUTINV */
#define _WTIMER_CC_CTRL_OUTINV_MASK                 0x4UL                                            /**< Bit mask for TIMER_OUTINV */
#define _WTIMER_CC_CTRL_OUTINV_DEFAULT              0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_OUTINV_DEFAULT               (_WTIMER_CC_CTRL_OUTINV_DEFAULT << 2)            /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COIST                        (0x1UL << 4)                                     /**< Compare Output Initial State */
#define _WTIMER_CC_CTRL_COIST_SHIFT                 4                                                /**< Shift value for TIMER_COIST */
#define _WTIMER_CC_CTRL_COIST_MASK                  0x10UL                                           /**< Bit mask for TIMER_COIST */
#define _WTIMER_CC_CTRL_COIST_DEFAULT               0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COIST_DEFAULT                (_WTIMER_CC_CTRL_COIST_DEFAULT << 4)             /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CMOA_SHIFT                  8                                                /**< Shift value for TIMER_CMOA */
#define _WTIMER_CC_CTRL_CMOA_MASK                   0x300UL                                          /**< Bit mask for TIMER_CMOA */
#define _WTIMER_CC_CTRL_CMOA_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CMOA_NONE                   0x00000000UL                                     /**< Mode NONE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CMOA_TOGGLE                 0x00000001UL                                     /**< Mode TOGGLE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CMOA_CLEAR                  0x00000002UL                                     /**< Mode CLEAR for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CMOA_SET                    0x00000003UL                                     /**< Mode SET for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CMOA_DEFAULT                 (_WTIMER_CC_CTRL_CMOA_DEFAULT << 8)              /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CMOA_NONE                    (_WTIMER_CC_CTRL_CMOA_NONE << 8)                 /**< Shifted mode NONE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CMOA_TOGGLE                  (_WTIMER_CC_CTRL_CMOA_TOGGLE << 8)               /**< Shifted mode TOGGLE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CMOA_CLEAR                   (_WTIMER_CC_CTRL_CMOA_CLEAR << 8)                /**< Shifted mode CLEAR for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CMOA_SET                     (_WTIMER_CC_CTRL_CMOA_SET << 8)                  /**< Shifted mode SET for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_COFOA_SHIFT                 10                                               /**< Shift value for TIMER_COFOA */
#define _WTIMER_CC_CTRL_COFOA_MASK                  0xC00UL                                          /**< Bit mask for TIMER_COFOA */
#define _WTIMER_CC_CTRL_COFOA_DEFAULT               0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_COFOA_NONE                  0x00000000UL                                     /**< Mode NONE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_COFOA_TOGGLE                0x00000001UL                                     /**< Mode TOGGLE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_COFOA_CLEAR                 0x00000002UL                                     /**< Mode CLEAR for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_COFOA_SET                   0x00000003UL                                     /**< Mode SET for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COFOA_DEFAULT                (_WTIMER_CC_CTRL_COFOA_DEFAULT << 10)            /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COFOA_NONE                   (_WTIMER_CC_CTRL_COFOA_NONE << 10)               /**< Shifted mode NONE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COFOA_TOGGLE                 (_WTIMER_CC_CTRL_COFOA_TOGGLE << 10)             /**< Shifted mode TOGGLE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COFOA_CLEAR                  (_WTIMER_CC_CTRL_COFOA_CLEAR << 10)              /**< Shifted mode CLEAR for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_COFOA_SET                    (_WTIMER_CC_CTRL_COFOA_SET << 10)                /**< Shifted mode SET for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CUFOA_SHIFT                 12                                               /**< Shift value for TIMER_CUFOA */
#define _WTIMER_CC_CTRL_CUFOA_MASK                  0x3000UL                                         /**< Bit mask for TIMER_CUFOA */
#define _WTIMER_CC_CTRL_CUFOA_DEFAULT               0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CUFOA_NONE                  0x00000000UL                                     /**< Mode NONE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CUFOA_TOGGLE                0x00000001UL                                     /**< Mode TOGGLE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CUFOA_CLEAR                 0x00000002UL                                     /**< Mode CLEAR for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_CUFOA_SET                   0x00000003UL                                     /**< Mode SET for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CUFOA_DEFAULT                (_WTIMER_CC_CTRL_CUFOA_DEFAULT << 12)            /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CUFOA_NONE                   (_WTIMER_CC_CTRL_CUFOA_NONE << 12)               /**< Shifted mode NONE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CUFOA_TOGGLE                 (_WTIMER_CC_CTRL_CUFOA_TOGGLE << 12)             /**< Shifted mode TOGGLE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CUFOA_CLEAR                  (_WTIMER_CC_CTRL_CUFOA_CLEAR << 12)              /**< Shifted mode CLEAR for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_CUFOA_SET                    (_WTIMER_CC_CTRL_CUFOA_SET << 12)                /**< Shifted mode SET for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_SHIFT                16                                               /**< Shift value for TIMER_PRSSEL */
#define _WTIMER_CC_CTRL_PRSSEL_MASK                 0xF0000UL                                        /**< Bit mask for TIMER_PRSSEL */
#define _WTIMER_CC_CTRL_PRSSEL_DEFAULT              0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH0               0x00000000UL                                     /**< Mode PRSCH0 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH1               0x00000001UL                                     /**< Mode PRSCH1 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH2               0x00000002UL                                     /**< Mode PRSCH2 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH3               0x00000003UL                                     /**< Mode PRSCH3 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH4               0x00000004UL                                     /**< Mode PRSCH4 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH5               0x00000005UL                                     /**< Mode PRSCH5 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH6               0x00000006UL                                     /**< Mode PRSCH6 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH7               0x00000007UL                                     /**< Mode PRSCH7 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH8               0x00000008UL                                     /**< Mode PRSCH8 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH9               0x00000009UL                                     /**< Mode PRSCH9 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH10              0x0000000AUL                                     /**< Mode PRSCH10 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSSEL_PRSCH11              0x0000000BUL                                     /**< Mode PRSCH11 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_DEFAULT               (_WTIMER_CC_CTRL_PRSSEL_DEFAULT << 16)           /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH0                (_WTIMER_CC_CTRL_PRSSEL_PRSCH0 << 16)            /**< Shifted mode PRSCH0 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH1                (_WTIMER_CC_CTRL_PRSSEL_PRSCH1 << 16)            /**< Shifted mode PRSCH1 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH2                (_WTIMER_CC_CTRL_PRSSEL_PRSCH2 << 16)            /**< Shifted mode PRSCH2 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH3                (_WTIMER_CC_CTRL_PRSSEL_PRSCH3 << 16)            /**< Shifted mode PRSCH3 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH4                (_WTIMER_CC_CTRL_PRSSEL_PRSCH4 << 16)            /**< Shifted mode PRSCH4 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH5                (_WTIMER_CC_CTRL_PRSSEL_PRSCH5 << 16)            /**< Shifted mode PRSCH5 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH6                (_WTIMER_CC_CTRL_PRSSEL_PRSCH6 << 16)            /**< Shifted mode PRSCH6 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH7                (_WTIMER_CC_CTRL_PRSSEL_PRSCH7 << 16)            /**< Shifted mode PRSCH7 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH8                (_WTIMER_CC_CTRL_PRSSEL_PRSCH8 << 16)            /**< Shifted mode PRSCH8 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH9                (_WTIMER_CC_CTRL_PRSSEL_PRSCH9 << 16)            /**< Shifted mode PRSCH9 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH10               (_WTIMER_CC_CTRL_PRSSEL_PRSCH10 << 16)           /**< Shifted mode PRSCH10 for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSSEL_PRSCH11               (_WTIMER_CC_CTRL_PRSSEL_PRSCH11 << 16)           /**< Shifted mode PRSCH11 for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEDGE_SHIFT                24                                               /**< Shift value for TIMER_ICEDGE */
#define _WTIMER_CC_CTRL_ICEDGE_MASK                 0x3000000UL                                      /**< Bit mask for TIMER_ICEDGE */
#define _WTIMER_CC_CTRL_ICEDGE_DEFAULT              0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEDGE_RISING               0x00000000UL                                     /**< Mode RISING for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEDGE_FALLING              0x00000001UL                                     /**< Mode FALLING for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEDGE_BOTH                 0x00000002UL                                     /**< Mode BOTH for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEDGE_NONE                 0x00000003UL                                     /**< Mode NONE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEDGE_DEFAULT               (_WTIMER_CC_CTRL_ICEDGE_DEFAULT << 24)           /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEDGE_RISING                (_WTIMER_CC_CTRL_ICEDGE_RISING << 24)            /**< Shifted mode RISING for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEDGE_FALLING               (_WTIMER_CC_CTRL_ICEDGE_FALLING << 24)           /**< Shifted mode FALLING for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEDGE_BOTH                  (_WTIMER_CC_CTRL_ICEDGE_BOTH << 24)              /**< Shifted mode BOTH for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEDGE_NONE                  (_WTIMER_CC_CTRL_ICEDGE_NONE << 24)              /**< Shifted mode NONE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_SHIFT              26                                               /**< Shift value for TIMER_ICEVCTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_MASK               0xC000000UL                                      /**< Bit mask for TIMER_ICEVCTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_DEFAULT            0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_EVERYEDGE          0x00000000UL                                     /**< Mode EVERYEDGE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE    0x00000001UL                                     /**< Mode EVERYSECONDEDGE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_RISING             0x00000002UL                                     /**< Mode RISING for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_ICEVCTRL_FALLING            0x00000003UL                                     /**< Mode FALLING for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEVCTRL_DEFAULT             (_WTIMER_CC_CTRL_ICEVCTRL_DEFAULT << 26)         /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEVCTRL_EVERYEDGE           (_WTIMER_CC_CTRL_ICEVCTRL_EVERYEDGE << 26)       /**< Shifted mode EVERYEDGE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE     (_WTIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE << 26) /**< Shifted mode EVERYSECONDEDGE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEVCTRL_RISING              (_WTIMER_CC_CTRL_ICEVCTRL_RISING << 26)          /**< Shifted mode RISING for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_ICEVCTRL_FALLING             (_WTIMER_CC_CTRL_ICEVCTRL_FALLING << 26)         /**< Shifted mode FALLING for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSCONF                      (0x1UL << 28)                                    /**< PRS Configuration */
#define _WTIMER_CC_CTRL_PRSCONF_SHIFT               28                                               /**< Shift value for TIMER_PRSCONF */
#define _WTIMER_CC_CTRL_PRSCONF_MASK                0x10000000UL                                     /**< Bit mask for TIMER_PRSCONF */
#define _WTIMER_CC_CTRL_PRSCONF_DEFAULT             0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSCONF_PULSE               0x00000000UL                                     /**< Mode PULSE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_PRSCONF_LEVEL               0x00000001UL                                     /**< Mode LEVEL for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSCONF_DEFAULT              (_WTIMER_CC_CTRL_PRSCONF_DEFAULT << 28)          /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSCONF_PULSE                (_WTIMER_CC_CTRL_PRSCONF_PULSE << 28)            /**< Shifted mode PULSE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_PRSCONF_LEVEL                (_WTIMER_CC_CTRL_PRSCONF_LEVEL << 28)            /**< Shifted mode LEVEL for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_INSEL                        (0x1UL << 29)                                    /**< Input Selection */
#define _WTIMER_CC_CTRL_INSEL_SHIFT                 29                                               /**< Shift value for TIMER_INSEL */
#define _WTIMER_CC_CTRL_INSEL_MASK                  0x20000000UL                                     /**< Bit mask for TIMER_INSEL */
#define _WTIMER_CC_CTRL_INSEL_DEFAULT               0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_INSEL_PIN                   0x00000000UL                                     /**< Mode PIN for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_INSEL_PRS                   0x00000001UL                                     /**< Mode PRS for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_INSEL_DEFAULT                (_WTIMER_CC_CTRL_INSEL_DEFAULT << 29)            /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_INSEL_PIN                    (_WTIMER_CC_CTRL_INSEL_PIN << 29)                /**< Shifted mode PIN for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_INSEL_PRS                    (_WTIMER_CC_CTRL_INSEL_PRS << 29)                /**< Shifted mode PRS for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_FILT                         (0x1UL << 30)                                    /**< Digital Filter */
#define _WTIMER_CC_CTRL_FILT_SHIFT                  30                                               /**< Shift value for TIMER_FILT */
#define _WTIMER_CC_CTRL_FILT_MASK                   0x40000000UL                                     /**< Bit mask for TIMER_FILT */
#define _WTIMER_CC_CTRL_FILT_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_FILT_DISABLE                0x00000000UL                                     /**< Mode DISABLE for WTIMER_CC_CTRL */
#define _WTIMER_CC_CTRL_FILT_ENABLE                 0x00000001UL                                     /**< Mode ENABLE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_FILT_DEFAULT                 (_WTIMER_CC_CTRL_FILT_DEFAULT << 30)             /**< Shifted mode DEFAULT for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_FILT_DISABLE                 (_WTIMER_CC_CTRL_FILT_DISABLE << 30)             /**< Shifted mode DISABLE for WTIMER_CC_CTRL */
#define WTIMER_CC_CTRL_FILT_ENABLE                  (_WTIMER_CC_CTRL_FILT_ENABLE << 30)              /**< Shifted mode ENABLE for WTIMER_CC_CTRL */

/* Bit fields for WTIMER CC_CCV */
#define _WTIMER_CC_CCV_RESETVALUE                   0x00000000UL                      /**< Default value for WTIMER_CC_CCV */
#define _WTIMER_CC_CCV_MASK                         0xFFFFFFFFUL                      /**< Mask for WTIMER_CC_CCV */
#define _WTIMER_CC_CCV_CCV_SHIFT                    0                                 /**< Shift value for TIMER_CCV */
#define _WTIMER_CC_CCV_CCV_MASK                     0xFFFFFFFFUL                      /**< Bit mask for TIMER_CCV */
#define _WTIMER_CC_CCV_CCV_DEFAULT                  0x00000000UL                      /**< Mode DEFAULT for WTIMER_CC_CCV */
#define WTIMER_CC_CCV_CCV_DEFAULT                   (_WTIMER_CC_CCV_CCV_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_CC_CCV */

/* Bit fields for WTIMER CC_CCVP */
#define _WTIMER_CC_CCVP_RESETVALUE                  0x00000000UL                        /**< Default value for WTIMER_CC_CCVP */
#define _WTIMER_CC_CCVP_MASK                        0xFFFFFFFFUL                        /**< Mask for WTIMER_CC_CCVP */
#define _WTIMER_CC_CCVP_CCVP_SHIFT                  0                                   /**< Shift value for TIMER_CCVP */
#define _WTIMER_CC_CCVP_CCVP_MASK                   0xFFFFFFFFUL                        /**< Bit mask for TIMER_CCVP */
#define _WTIMER_CC_CCVP_CCVP_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for WTIMER_CC_CCVP */
#define WTIMER_CC_CCVP_CCVP_DEFAULT                 (_WTIMER_CC_CCVP_CCVP_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_CC_CCVP */

/* Bit fields for WTIMER CC_CCVB */
#define _WTIMER_CC_CCVB_RESETVALUE                  0x00000000UL                        /**< Default value for WTIMER_CC_CCVB */
#define _WTIMER_CC_CCVB_MASK                        0xFFFFFFFFUL                        /**< Mask for WTIMER_CC_CCVB */
#define _WTIMER_CC_CCVB_CCVB_SHIFT                  0                                   /**< Shift value for TIMER_CCVB */
#define _WTIMER_CC_CCVB_CCVB_MASK                   0xFFFFFFFFUL                        /**< Bit mask for TIMER_CCVB */
#define _WTIMER_CC_CCVB_CCVB_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for WTIMER_CC_CCVB */
#define WTIMER_CC_CCVB_CCVB_DEFAULT                 (_WTIMER_CC_CCVB_CCVB_DEFAULT << 0) /**< Shifted mode DEFAULT for WTIMER_CC_CCVB */

/* Bit fields for WTIMER DTCTRL */
#define _WTIMER_DTCTRL_RESETVALUE                   0x00000000UL                           /**< Default value for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_MASK                         0x010006FFUL                           /**< Mask for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTEN                          (0x1UL << 0)                           /**< DTI Enable */
#define _WTIMER_DTCTRL_DTEN_SHIFT                   0                                      /**< Shift value for TIMER_DTEN */
#define _WTIMER_DTCTRL_DTEN_MASK                    0x1UL                                  /**< Bit mask for TIMER_DTEN */
#define _WTIMER_DTCTRL_DTEN_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTEN_DEFAULT                  (_WTIMER_DTCTRL_DTEN_DEFAULT << 0)     /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTDAS                         (0x1UL << 1)                           /**< DTI Automatic Start-up Functionality */
#define _WTIMER_DTCTRL_DTDAS_SHIFT                  1                                      /**< Shift value for TIMER_DTDAS */
#define _WTIMER_DTCTRL_DTDAS_MASK                   0x2UL                                  /**< Bit mask for TIMER_DTDAS */
#define _WTIMER_DTCTRL_DTDAS_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTDAS_NORESTART              0x00000000UL                           /**< Mode NORESTART for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTDAS_RESTART                0x00000001UL                           /**< Mode RESTART for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTDAS_DEFAULT                 (_WTIMER_DTCTRL_DTDAS_DEFAULT << 1)    /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTDAS_NORESTART               (_WTIMER_DTCTRL_DTDAS_NORESTART << 1)  /**< Shifted mode NORESTART for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTDAS_RESTART                 (_WTIMER_DTCTRL_DTDAS_RESTART << 1)    /**< Shifted mode RESTART for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTIPOL                        (0x1UL << 2)                           /**< DTI Inactive Polarity */
#define _WTIMER_DTCTRL_DTIPOL_SHIFT                 2                                      /**< Shift value for TIMER_DTIPOL */
#define _WTIMER_DTCTRL_DTIPOL_MASK                  0x4UL                                  /**< Bit mask for TIMER_DTIPOL */
#define _WTIMER_DTCTRL_DTIPOL_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTIPOL_DEFAULT                (_WTIMER_DTCTRL_DTIPOL_DEFAULT << 2)   /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTCINV                        (0x1UL << 3)                           /**< DTI Complementary Output Invert. */
#define _WTIMER_DTCTRL_DTCINV_SHIFT                 3                                      /**< Shift value for TIMER_DTCINV */
#define _WTIMER_DTCTRL_DTCINV_MASK                  0x8UL                                  /**< Bit mask for TIMER_DTCINV */
#define _WTIMER_DTCTRL_DTCINV_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTCINV_DEFAULT                (_WTIMER_DTCTRL_DTCINV_DEFAULT << 3)   /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_SHIFT               4                                      /**< Shift value for TIMER_DTPRSSEL */
#define _WTIMER_DTCTRL_DTPRSSEL_MASK                0xF0UL                                 /**< Bit mask for TIMER_DTPRSSEL */
#define _WTIMER_DTCTRL_DTPRSSEL_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH0              0x00000000UL                           /**< Mode PRSCH0 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH1              0x00000001UL                           /**< Mode PRSCH1 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH2              0x00000002UL                           /**< Mode PRSCH2 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH3              0x00000003UL                           /**< Mode PRSCH3 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH4              0x00000004UL                           /**< Mode PRSCH4 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH5              0x00000005UL                           /**< Mode PRSCH5 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH6              0x00000006UL                           /**< Mode PRSCH6 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH7              0x00000007UL                           /**< Mode PRSCH7 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH8              0x00000008UL                           /**< Mode PRSCH8 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH9              0x00000009UL                           /**< Mode PRSCH9 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH10             0x0000000AUL                           /**< Mode PRSCH10 for WTIMER_DTCTRL */
#define _WTIMER_DTCTRL_DTPRSSEL_PRSCH11             0x0000000BUL                           /**< Mode PRSCH11 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_DEFAULT              (_WTIMER_DTCTRL_DTPRSSEL_DEFAULT << 4) /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH0               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH0 << 4)  /**< Shifted mode PRSCH0 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH1               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH1 << 4)  /**< Shifted mode PRSCH1 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH2               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH2 << 4)  /**< Shifted mode PRSCH2 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH3               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH3 << 4)  /**< Shifted mode PRSCH3 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH4               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH4 << 4)  /**< Shifted mode PRSCH4 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH5               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH5 << 4)  /**< Shifted mode PRSCH5 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH6               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH6 << 4)  /**< Shifted mode PRSCH6 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH7               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH7 << 4)  /**< Shifted mode PRSCH7 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH8               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH8 << 4)  /**< Shifted mode PRSCH8 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH9               (_WTIMER_DTCTRL_DTPRSSEL_PRSCH9 << 4)  /**< Shifted mode PRSCH9 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH10              (_WTIMER_DTCTRL_DTPRSSEL_PRSCH10 << 4) /**< Shifted mode PRSCH10 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSSEL_PRSCH11              (_WTIMER_DTCTRL_DTPRSSEL_PRSCH11 << 4) /**< Shifted mode PRSCH11 for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTAR                          (0x1UL << 9)                           /**< DTI Always Run */
#define _WTIMER_DTCTRL_DTAR_SHIFT                   9                                      /**< Shift value for TIMER_DTAR */
#define _WTIMER_DTCTRL_DTAR_MASK                    0x200UL                                /**< Bit mask for TIMER_DTAR */
#define _WTIMER_DTCTRL_DTAR_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTAR_DEFAULT                  (_WTIMER_DTCTRL_DTAR_DEFAULT << 9)     /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTFATS                        (0x1UL << 10)                          /**< DTI Fault Action on Timer Stop */
#define _WTIMER_DTCTRL_DTFATS_SHIFT                 10                                     /**< Shift value for TIMER_DTFATS */
#define _WTIMER_DTCTRL_DTFATS_MASK                  0x400UL                                /**< Bit mask for TIMER_DTFATS */
#define _WTIMER_DTCTRL_DTFATS_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTFATS_DEFAULT                (_WTIMER_DTCTRL_DTFATS_DEFAULT << 10)  /**< Shifted mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSEN                       (0x1UL << 24)                          /**< DTI PRS Source Enable */
#define _WTIMER_DTCTRL_DTPRSEN_SHIFT                24                                     /**< Shift value for TIMER_DTPRSEN */
#define _WTIMER_DTCTRL_DTPRSEN_MASK                 0x1000000UL                            /**< Bit mask for TIMER_DTPRSEN */
#define _WTIMER_DTCTRL_DTPRSEN_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTCTRL */
#define WTIMER_DTCTRL_DTPRSEN_DEFAULT               (_WTIMER_DTCTRL_DTPRSEN_DEFAULT << 24) /**< Shifted mode DEFAULT for WTIMER_DTCTRL */

/* Bit fields for WTIMER DTTIME */
#define _WTIMER_DTTIME_RESETVALUE                   0x00000000UL                           /**< Default value for WTIMER_DTTIME */
#define _WTIMER_DTTIME_MASK                         0x003F3F0FUL                           /**< Mask for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_SHIFT                0                                      /**< Shift value for TIMER_DTPRESC */
#define _WTIMER_DTTIME_DTPRESC_MASK                 0xFUL                                  /**< Bit mask for TIMER_DTPRESC */
#define _WTIMER_DTTIME_DTPRESC_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV1                 0x00000000UL                           /**< Mode DIV1 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV2                 0x00000001UL                           /**< Mode DIV2 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV4                 0x00000002UL                           /**< Mode DIV4 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV8                 0x00000003UL                           /**< Mode DIV8 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV16                0x00000004UL                           /**< Mode DIV16 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV32                0x00000005UL                           /**< Mode DIV32 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV64                0x00000006UL                           /**< Mode DIV64 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV128               0x00000007UL                           /**< Mode DIV128 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV256               0x00000008UL                           /**< Mode DIV256 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV512               0x00000009UL                           /**< Mode DIV512 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTPRESC_DIV1024              0x0000000AUL                           /**< Mode DIV1024 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DEFAULT               (_WTIMER_DTTIME_DTPRESC_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV1                  (_WTIMER_DTTIME_DTPRESC_DIV1 << 0)     /**< Shifted mode DIV1 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV2                  (_WTIMER_DTTIME_DTPRESC_DIV2 << 0)     /**< Shifted mode DIV2 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV4                  (_WTIMER_DTTIME_DTPRESC_DIV4 << 0)     /**< Shifted mode DIV4 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV8                  (_WTIMER_DTTIME_DTPRESC_DIV8 << 0)     /**< Shifted mode DIV8 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV16                 (_WTIMER_DTTIME_DTPRESC_DIV16 << 0)    /**< Shifted mode DIV16 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV32                 (_WTIMER_DTTIME_DTPRESC_DIV32 << 0)    /**< Shifted mode DIV32 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV64                 (_WTIMER_DTTIME_DTPRESC_DIV64 << 0)    /**< Shifted mode DIV64 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV128                (_WTIMER_DTTIME_DTPRESC_DIV128 << 0)   /**< Shifted mode DIV128 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV256                (_WTIMER_DTTIME_DTPRESC_DIV256 << 0)   /**< Shifted mode DIV256 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV512                (_WTIMER_DTTIME_DTPRESC_DIV512 << 0)   /**< Shifted mode DIV512 for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTPRESC_DIV1024               (_WTIMER_DTTIME_DTPRESC_DIV1024 << 0)  /**< Shifted mode DIV1024 for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTRISET_SHIFT                8                                      /**< Shift value for TIMER_DTRISET */
#define _WTIMER_DTTIME_DTRISET_MASK                 0x3F00UL                               /**< Bit mask for TIMER_DTRISET */
#define _WTIMER_DTTIME_DTRISET_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTRISET_DEFAULT               (_WTIMER_DTTIME_DTRISET_DEFAULT << 8)  /**< Shifted mode DEFAULT for WTIMER_DTTIME */
#define _WTIMER_DTTIME_DTFALLT_SHIFT                16                                     /**< Shift value for TIMER_DTFALLT */
#define _WTIMER_DTTIME_DTFALLT_MASK                 0x3F0000UL                             /**< Bit mask for TIMER_DTFALLT */
#define _WTIMER_DTTIME_DTFALLT_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTTIME */
#define WTIMER_DTTIME_DTFALLT_DEFAULT               (_WTIMER_DTTIME_DTFALLT_DEFAULT << 16) /**< Shifted mode DEFAULT for WTIMER_DTTIME */

/* Bit fields for WTIMER DTFC */
#define _WTIMER_DTFC_RESETVALUE                     0x00000000UL                             /**< Default value for WTIMER_DTFC */
#define _WTIMER_DTFC_MASK                           0x0F030F0FUL                             /**< Mask for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_SHIFT               0                                        /**< Shift value for TIMER_DTPRS0FSEL */
#define _WTIMER_DTFC_DTPRS0FSEL_MASK                0xFUL                                    /**< Bit mask for TIMER_DTPRS0FSEL */
#define _WTIMER_DTFC_DTPRS0FSEL_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH0              0x00000000UL                             /**< Mode PRSCH0 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH1              0x00000001UL                             /**< Mode PRSCH1 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH2              0x00000002UL                             /**< Mode PRSCH2 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH3              0x00000003UL                             /**< Mode PRSCH3 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH4              0x00000004UL                             /**< Mode PRSCH4 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH5              0x00000005UL                             /**< Mode PRSCH5 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH6              0x00000006UL                             /**< Mode PRSCH6 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH7              0x00000007UL                             /**< Mode PRSCH7 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH8              0x00000008UL                             /**< Mode PRSCH8 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH9              0x00000009UL                             /**< Mode PRSCH9 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH10             0x0000000AUL                             /**< Mode PRSCH10 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS0FSEL_PRSCH11             0x0000000BUL                             /**< Mode PRSCH11 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_DEFAULT              (_WTIMER_DTFC_DTPRS0FSEL_DEFAULT << 0)   /**< Shifted mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH0               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH0 << 0)    /**< Shifted mode PRSCH0 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH1               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH1 << 0)    /**< Shifted mode PRSCH1 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH2               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH2 << 0)    /**< Shifted mode PRSCH2 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH3               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH3 << 0)    /**< Shifted mode PRSCH3 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH4               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH4 << 0)    /**< Shifted mode PRSCH4 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH5               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH5 << 0)    /**< Shifted mode PRSCH5 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH6               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH6 << 0)    /**< Shifted mode PRSCH6 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH7               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH7 << 0)    /**< Shifted mode PRSCH7 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH8               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH8 << 0)    /**< Shifted mode PRSCH8 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH9               (_WTIMER_DTFC_DTPRS0FSEL_PRSCH9 << 0)    /**< Shifted mode PRSCH9 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH10              (_WTIMER_DTFC_DTPRS0FSEL_PRSCH10 << 0)   /**< Shifted mode PRSCH10 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FSEL_PRSCH11              (_WTIMER_DTFC_DTPRS0FSEL_PRSCH11 << 0)   /**< Shifted mode PRSCH11 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_SHIFT               8                                        /**< Shift value for TIMER_DTPRS1FSEL */
#define _WTIMER_DTFC_DTPRS1FSEL_MASK                0xF00UL                                  /**< Bit mask for TIMER_DTPRS1FSEL */
#define _WTIMER_DTFC_DTPRS1FSEL_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH0              0x00000000UL                             /**< Mode PRSCH0 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH1              0x00000001UL                             /**< Mode PRSCH1 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH2              0x00000002UL                             /**< Mode PRSCH2 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH3              0x00000003UL                             /**< Mode PRSCH3 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH4              0x00000004UL                             /**< Mode PRSCH4 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH5              0x00000005UL                             /**< Mode PRSCH5 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH6              0x00000006UL                             /**< Mode PRSCH6 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH7              0x00000007UL                             /**< Mode PRSCH7 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH8              0x00000008UL                             /**< Mode PRSCH8 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH9              0x00000009UL                             /**< Mode PRSCH9 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH10             0x0000000AUL                             /**< Mode PRSCH10 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTPRS1FSEL_PRSCH11             0x0000000BUL                             /**< Mode PRSCH11 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_DEFAULT              (_WTIMER_DTFC_DTPRS1FSEL_DEFAULT << 8)   /**< Shifted mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH0               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH0 << 8)    /**< Shifted mode PRSCH0 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH1               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH1 << 8)    /**< Shifted mode PRSCH1 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH2               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH2 << 8)    /**< Shifted mode PRSCH2 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH3               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH3 << 8)    /**< Shifted mode PRSCH3 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH4               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH4 << 8)    /**< Shifted mode PRSCH4 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH5               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH5 << 8)    /**< Shifted mode PRSCH5 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH6               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH6 << 8)    /**< Shifted mode PRSCH6 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH7               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH7 << 8)    /**< Shifted mode PRSCH7 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH8               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH8 << 8)    /**< Shifted mode PRSCH8 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH9               (_WTIMER_DTFC_DTPRS1FSEL_PRSCH9 << 8)    /**< Shifted mode PRSCH9 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH10              (_WTIMER_DTFC_DTPRS1FSEL_PRSCH10 << 8)   /**< Shifted mode PRSCH10 for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FSEL_PRSCH11              (_WTIMER_DTFC_DTPRS1FSEL_PRSCH11 << 8)   /**< Shifted mode PRSCH11 for WTIMER_DTFC */
#define _WTIMER_DTFC_DTFA_SHIFT                     16                                       /**< Shift value for TIMER_DTFA */
#define _WTIMER_DTFC_DTFA_MASK                      0x30000UL                                /**< Bit mask for TIMER_DTFA */
#define _WTIMER_DTFC_DTFA_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define _WTIMER_DTFC_DTFA_NONE                      0x00000000UL                             /**< Mode NONE for WTIMER_DTFC */
#define _WTIMER_DTFC_DTFA_INACTIVE                  0x00000001UL                             /**< Mode INACTIVE for WTIMER_DTFC */
#define _WTIMER_DTFC_DTFA_CLEAR                     0x00000002UL                             /**< Mode CLEAR for WTIMER_DTFC */
#define _WTIMER_DTFC_DTFA_TRISTATE                  0x00000003UL                             /**< Mode TRISTATE for WTIMER_DTFC */
#define WTIMER_DTFC_DTFA_DEFAULT                    (_WTIMER_DTFC_DTFA_DEFAULT << 16)        /**< Shifted mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTFA_NONE                       (_WTIMER_DTFC_DTFA_NONE << 16)           /**< Shifted mode NONE for WTIMER_DTFC */
#define WTIMER_DTFC_DTFA_INACTIVE                   (_WTIMER_DTFC_DTFA_INACTIVE << 16)       /**< Shifted mode INACTIVE for WTIMER_DTFC */
#define WTIMER_DTFC_DTFA_CLEAR                      (_WTIMER_DTFC_DTFA_CLEAR << 16)          /**< Shifted mode CLEAR for WTIMER_DTFC */
#define WTIMER_DTFC_DTFA_TRISTATE                   (_WTIMER_DTFC_DTFA_TRISTATE << 16)       /**< Shifted mode TRISTATE for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FEN                       (0x1UL << 24)                            /**< DTI PRS 0 Fault Enable */
#define _WTIMER_DTFC_DTPRS0FEN_SHIFT                24                                       /**< Shift value for TIMER_DTPRS0FEN */
#define _WTIMER_DTFC_DTPRS0FEN_MASK                 0x1000000UL                              /**< Bit mask for TIMER_DTPRS0FEN */
#define _WTIMER_DTFC_DTPRS0FEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS0FEN_DEFAULT               (_WTIMER_DTFC_DTPRS0FEN_DEFAULT << 24)   /**< Shifted mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FEN                       (0x1UL << 25)                            /**< DTI PRS 1 Fault Enable */
#define _WTIMER_DTFC_DTPRS1FEN_SHIFT                25                                       /**< Shift value for TIMER_DTPRS1FEN */
#define _WTIMER_DTFC_DTPRS1FEN_MASK                 0x2000000UL                              /**< Bit mask for TIMER_DTPRS1FEN */
#define _WTIMER_DTFC_DTPRS1FEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTPRS1FEN_DEFAULT               (_WTIMER_DTFC_DTPRS1FEN_DEFAULT << 25)   /**< Shifted mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTDBGFEN                        (0x1UL << 26)                            /**< DTI Debugger Fault Enable */
#define _WTIMER_DTFC_DTDBGFEN_SHIFT                 26                                       /**< Shift value for TIMER_DTDBGFEN */
#define _WTIMER_DTFC_DTDBGFEN_MASK                  0x4000000UL                              /**< Bit mask for TIMER_DTDBGFEN */
#define _WTIMER_DTFC_DTDBGFEN_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTDBGFEN_DEFAULT                (_WTIMER_DTFC_DTDBGFEN_DEFAULT << 26)    /**< Shifted mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTLOCKUPFEN                     (0x1UL << 27)                            /**< DTI Lockup Fault Enable */
#define _WTIMER_DTFC_DTLOCKUPFEN_SHIFT              27                                       /**< Shift value for TIMER_DTLOCKUPFEN */
#define _WTIMER_DTFC_DTLOCKUPFEN_MASK               0x8000000UL                              /**< Bit mask for TIMER_DTLOCKUPFEN */
#define _WTIMER_DTFC_DTLOCKUPFEN_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFC */
#define WTIMER_DTFC_DTLOCKUPFEN_DEFAULT             (_WTIMER_DTFC_DTLOCKUPFEN_DEFAULT << 27) /**< Shifted mode DEFAULT for WTIMER_DTFC */

/* Bit fields for WTIMER DTOGEN */
#define _WTIMER_DTOGEN_RESETVALUE                   0x00000000UL                              /**< Default value for WTIMER_DTOGEN */
#define _WTIMER_DTOGEN_MASK                         0x0000003FUL                              /**< Mask for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCC0EN                     (0x1UL << 0)                              /**< DTI CC0 Output Generation Enable */
#define _WTIMER_DTOGEN_DTOGCC0EN_SHIFT              0                                         /**< Shift value for TIMER_DTOGCC0EN */
#define _WTIMER_DTOGEN_DTOGCC0EN_MASK               0x1UL                                     /**< Bit mask for TIMER_DTOGCC0EN */
#define _WTIMER_DTOGEN_DTOGCC0EN_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCC0EN_DEFAULT             (_WTIMER_DTOGEN_DTOGCC0EN_DEFAULT << 0)   /**< Shifted mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCC1EN                     (0x1UL << 1)                              /**< DTI CC1 Output Generation Enable */
#define _WTIMER_DTOGEN_DTOGCC1EN_SHIFT              1                                         /**< Shift value for TIMER_DTOGCC1EN */
#define _WTIMER_DTOGEN_DTOGCC1EN_MASK               0x2UL                                     /**< Bit mask for TIMER_DTOGCC1EN */
#define _WTIMER_DTOGEN_DTOGCC1EN_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCC1EN_DEFAULT             (_WTIMER_DTOGEN_DTOGCC1EN_DEFAULT << 1)   /**< Shifted mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCC2EN                     (0x1UL << 2)                              /**< DTI CC2 Output Generation Enable */
#define _WTIMER_DTOGEN_DTOGCC2EN_SHIFT              2                                         /**< Shift value for TIMER_DTOGCC2EN */
#define _WTIMER_DTOGEN_DTOGCC2EN_MASK               0x4UL                                     /**< Bit mask for TIMER_DTOGCC2EN */
#define _WTIMER_DTOGEN_DTOGCC2EN_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCC2EN_DEFAULT             (_WTIMER_DTOGEN_DTOGCC2EN_DEFAULT << 2)   /**< Shifted mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCDTI0EN                   (0x1UL << 3)                              /**< DTI CDTI0 Output Generation Enable */
#define _WTIMER_DTOGEN_DTOGCDTI0EN_SHIFT            3                                         /**< Shift value for TIMER_DTOGCDTI0EN */
#define _WTIMER_DTOGEN_DTOGCDTI0EN_MASK             0x8UL                                     /**< Bit mask for TIMER_DTOGCDTI0EN */
#define _WTIMER_DTOGEN_DTOGCDTI0EN_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCDTI0EN_DEFAULT           (_WTIMER_DTOGEN_DTOGCDTI0EN_DEFAULT << 3) /**< Shifted mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCDTI1EN                   (0x1UL << 4)                              /**< DTI CDTI1 Output Generation Enable */
#define _WTIMER_DTOGEN_DTOGCDTI1EN_SHIFT            4                                         /**< Shift value for TIMER_DTOGCDTI1EN */
#define _WTIMER_DTOGEN_DTOGCDTI1EN_MASK             0x10UL                                    /**< Bit mask for TIMER_DTOGCDTI1EN */
#define _WTIMER_DTOGEN_DTOGCDTI1EN_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCDTI1EN_DEFAULT           (_WTIMER_DTOGEN_DTOGCDTI1EN_DEFAULT << 4) /**< Shifted mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCDTI2EN                   (0x1UL << 5)                              /**< DTI CDTI2 Output Generation Enable */
#define _WTIMER_DTOGEN_DTOGCDTI2EN_SHIFT            5                                         /**< Shift value for TIMER_DTOGCDTI2EN */
#define _WTIMER_DTOGEN_DTOGCDTI2EN_MASK             0x20UL                                    /**< Bit mask for TIMER_DTOGCDTI2EN */
#define _WTIMER_DTOGEN_DTOGCDTI2EN_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTOGEN */
#define WTIMER_DTOGEN_DTOGCDTI2EN_DEFAULT           (_WTIMER_DTOGEN_DTOGCDTI2EN_DEFAULT << 5) /**< Shifted mode DEFAULT for WTIMER_DTOGEN */

/* Bit fields for WTIMER DTFAULT */
#define _WTIMER_DTFAULT_RESETVALUE                  0x00000000UL                             /**< Default value for WTIMER_DTFAULT */
#define _WTIMER_DTFAULT_MASK                        0x0000000FUL                             /**< Mask for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTPRS0F                      (0x1UL << 0)                             /**< DTI PRS 0 Fault */
#define _WTIMER_DTFAULT_DTPRS0F_SHIFT               0                                        /**< Shift value for TIMER_DTPRS0F */
#define _WTIMER_DTFAULT_DTPRS0F_MASK                0x1UL                                    /**< Bit mask for TIMER_DTPRS0F */
#define _WTIMER_DTFAULT_DTPRS0F_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTPRS0F_DEFAULT              (_WTIMER_DTFAULT_DTPRS0F_DEFAULT << 0)   /**< Shifted mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTPRS1F                      (0x1UL << 1)                             /**< DTI PRS 1 Fault */
#define _WTIMER_DTFAULT_DTPRS1F_SHIFT               1                                        /**< Shift value for TIMER_DTPRS1F */
#define _WTIMER_DTFAULT_DTPRS1F_MASK                0x2UL                                    /**< Bit mask for TIMER_DTPRS1F */
#define _WTIMER_DTFAULT_DTPRS1F_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTPRS1F_DEFAULT              (_WTIMER_DTFAULT_DTPRS1F_DEFAULT << 1)   /**< Shifted mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTDBGF                       (0x1UL << 2)                             /**< DTI Debugger Fault */
#define _WTIMER_DTFAULT_DTDBGF_SHIFT                2                                        /**< Shift value for TIMER_DTDBGF */
#define _WTIMER_DTFAULT_DTDBGF_MASK                 0x4UL                                    /**< Bit mask for TIMER_DTDBGF */
#define _WTIMER_DTFAULT_DTDBGF_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTDBGF_DEFAULT               (_WTIMER_DTFAULT_DTDBGF_DEFAULT << 2)    /**< Shifted mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTLOCKUPF                    (0x1UL << 3)                             /**< DTI Lockup Fault */
#define _WTIMER_DTFAULT_DTLOCKUPF_SHIFT             3                                        /**< Shift value for TIMER_DTLOCKUPF */
#define _WTIMER_DTFAULT_DTLOCKUPF_MASK              0x8UL                                    /**< Bit mask for TIMER_DTLOCKUPF */
#define _WTIMER_DTFAULT_DTLOCKUPF_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for WTIMER_DTFAULT */
#define WTIMER_DTFAULT_DTLOCKUPF_DEFAULT            (_WTIMER_DTFAULT_DTLOCKUPF_DEFAULT << 3) /**< Shifted mode DEFAULT for WTIMER_DTFAULT */

/* Bit fields for WTIMER DTFAULTC */
#define _WTIMER_DTFAULTC_RESETVALUE                 0x00000000UL                              /**< Default value for WTIMER_DTFAULTC */
#define _WTIMER_DTFAULTC_MASK                       0x0000000FUL                              /**< Mask for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_DTPRS0FC                    (0x1UL << 0)                              /**< DTI PRS0 Fault Clear */
#define _WTIMER_DTFAULTC_DTPRS0FC_SHIFT             0                                         /**< Shift value for TIMER_DTPRS0FC */
#define _WTIMER_DTFAULTC_DTPRS0FC_MASK              0x1UL                                     /**< Bit mask for TIMER_DTPRS0FC */
#define _WTIMER_DTFAULTC_DTPRS0FC_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_DTPRS0FC_DEFAULT            (_WTIMER_DTFAULTC_DTPRS0FC_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_DTPRS1FC                    (0x1UL << 1)                              /**< DTI PRS1 Fault Clear */
#define _WTIMER_DTFAULTC_DTPRS1FC_SHIFT             1                                         /**< Shift value for TIMER_DTPRS1FC */
#define _WTIMER_DTFAULTC_DTPRS1FC_MASK              0x2UL                                     /**< Bit mask for TIMER_DTPRS1FC */
#define _WTIMER_DTFAULTC_DTPRS1FC_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_DTPRS1FC_DEFAULT            (_WTIMER_DTFAULTC_DTPRS1FC_DEFAULT << 1)  /**< Shifted mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_DTDBGFC                     (0x1UL << 2)                              /**< DTI Debugger Fault Clear */
#define _WTIMER_DTFAULTC_DTDBGFC_SHIFT              2                                         /**< Shift value for TIMER_DTDBGFC */
#define _WTIMER_DTFAULTC_DTDBGFC_MASK               0x4UL                                     /**< Bit mask for TIMER_DTDBGFC */
#define _WTIMER_DTFAULTC_DTDBGFC_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_DTDBGFC_DEFAULT             (_WTIMER_DTFAULTC_DTDBGFC_DEFAULT << 2)   /**< Shifted mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_TLOCKUPFC                   (0x1UL << 3)                              /**< DTI Lockup Fault Clear */
#define _WTIMER_DTFAULTC_TLOCKUPFC_SHIFT            3                                         /**< Shift value for TIMER_TLOCKUPFC */
#define _WTIMER_DTFAULTC_TLOCKUPFC_MASK             0x8UL                                     /**< Bit mask for TIMER_TLOCKUPFC */
#define _WTIMER_DTFAULTC_TLOCKUPFC_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for WTIMER_DTFAULTC */
#define WTIMER_DTFAULTC_TLOCKUPFC_DEFAULT           (_WTIMER_DTFAULTC_TLOCKUPFC_DEFAULT << 3) /**< Shifted mode DEFAULT for WTIMER_DTFAULTC */

/* Bit fields for WTIMER DTLOCK */
#define _WTIMER_DTLOCK_RESETVALUE                   0x00000000UL                           /**< Default value for WTIMER_DTLOCK */
#define _WTIMER_DTLOCK_MASK                         0x0000FFFFUL                           /**< Mask for WTIMER_DTLOCK */
#define _WTIMER_DTLOCK_LOCKKEY_SHIFT                0                                      /**< Shift value for TIMER_LOCKKEY */
#define _WTIMER_DTLOCK_LOCKKEY_MASK                 0xFFFFUL                               /**< Bit mask for TIMER_LOCKKEY */
#define _WTIMER_DTLOCK_LOCKKEY_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for WTIMER_DTLOCK */
#define _WTIMER_DTLOCK_LOCKKEY_LOCK                 0x00000000UL                           /**< Mode LOCK for WTIMER_DTLOCK */
#define _WTIMER_DTLOCK_LOCKKEY_UNLOCKED             0x00000000UL                           /**< Mode UNLOCKED for WTIMER_DTLOCK */
#define _WTIMER_DTLOCK_LOCKKEY_LOCKED               0x00000001UL                           /**< Mode LOCKED for WTIMER_DTLOCK */
#define _WTIMER_DTLOCK_LOCKKEY_UNLOCK               0x0000CE80UL                           /**< Mode UNLOCK for WTIMER_DTLOCK */
#define WTIMER_DTLOCK_LOCKKEY_DEFAULT               (_WTIMER_DTLOCK_LOCKKEY_DEFAULT << 0)  /**< Shifted mode DEFAULT for WTIMER_DTLOCK */
#define WTIMER_DTLOCK_LOCKKEY_LOCK                  (_WTIMER_DTLOCK_LOCKKEY_LOCK << 0)     /**< Shifted mode LOCK for WTIMER_DTLOCK */
#define WTIMER_DTLOCK_LOCKKEY_UNLOCKED              (_WTIMER_DTLOCK_LOCKKEY_UNLOCKED << 0) /**< Shifted mode UNLOCKED for WTIMER_DTLOCK */
#define WTIMER_DTLOCK_LOCKKEY_LOCKED                (_WTIMER_DTLOCK_LOCKKEY_LOCKED << 0)   /**< Shifted mode LOCKED for WTIMER_DTLOCK */
#define WTIMER_DTLOCK_LOCKKEY_UNLOCK                (_WTIMER_DTLOCK_LOCKKEY_UNLOCK << 0)   /**< Shifted mode UNLOCK for WTIMER_DTLOCK */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_WTIMER */

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_CMU
 * @{
 * @defgroup EFR32MG13P932F512IM48_CMU_BitFields  CMU Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for CMU CTRL */
#define _CMU_CTRL_RESETVALUE                              0x00300000UL                          /**< Default value for CMU_CTRL */
#define _CMU_CTRL_MASK                                    0x001103FFUL                          /**< Mask for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_SHIFT                        0                                     /**< Shift value for CMU_CLKOUTSEL0 */
#define _CMU_CTRL_CLKOUTSEL0_MASK                         0x1FUL                                /**< Bit mask for CMU_CLKOUTSEL0 */
#define _CMU_CTRL_CLKOUTSEL0_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_DISABLED                     0x00000000UL                          /**< Mode DISABLED for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_ULFRCO                       0x00000001UL                          /**< Mode ULFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_LFRCO                        0x00000002UL                          /**< Mode LFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_LFXO                         0x00000003UL                          /**< Mode LFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFXO                         0x00000006UL                          /**< Mode HFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFEXPCLK                     0x00000007UL                          /**< Mode HFEXPCLK for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_ULFRCOQ                      0x00000009UL                          /**< Mode ULFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_LFRCOQ                       0x0000000AUL                          /**< Mode LFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_LFXOQ                        0x0000000BUL                          /**< Mode LFXOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFRCOQ                       0x0000000CUL                          /**< Mode HFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_AUXHFRCOQ                    0x0000000DUL                          /**< Mode AUXHFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFXOQ                        0x0000000EUL                          /**< Mode HFXOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFSRCCLK                     0x0000000FUL                          /**< Mode HFSRCCLK for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_DEFAULT                       (_CMU_CTRL_CLKOUTSEL0_DEFAULT << 0)   /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_DISABLED                      (_CMU_CTRL_CLKOUTSEL0_DISABLED << 0)  /**< Shifted mode DISABLED for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_ULFRCO                        (_CMU_CTRL_CLKOUTSEL0_ULFRCO << 0)    /**< Shifted mode ULFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_LFRCO                         (_CMU_CTRL_CLKOUTSEL0_LFRCO << 0)     /**< Shifted mode LFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_LFXO                          (_CMU_CTRL_CLKOUTSEL0_LFXO << 0)      /**< Shifted mode LFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFXO                          (_CMU_CTRL_CLKOUTSEL0_HFXO << 0)      /**< Shifted mode HFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFEXPCLK                      (_CMU_CTRL_CLKOUTSEL0_HFEXPCLK << 0)  /**< Shifted mode HFEXPCLK for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_ULFRCOQ                       (_CMU_CTRL_CLKOUTSEL0_ULFRCOQ << 0)   /**< Shifted mode ULFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_LFRCOQ                        (_CMU_CTRL_CLKOUTSEL0_LFRCOQ << 0)    /**< Shifted mode LFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_LFXOQ                         (_CMU_CTRL_CLKOUTSEL0_LFXOQ << 0)     /**< Shifted mode LFXOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFRCOQ                        (_CMU_CTRL_CLKOUTSEL0_HFRCOQ << 0)    /**< Shifted mode HFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_AUXHFRCOQ                     (_CMU_CTRL_CLKOUTSEL0_AUXHFRCOQ << 0) /**< Shifted mode AUXHFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFXOQ                         (_CMU_CTRL_CLKOUTSEL0_HFXOQ << 0)     /**< Shifted mode HFXOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFSRCCLK                      (_CMU_CTRL_CLKOUTSEL0_HFSRCCLK << 0)  /**< Shifted mode HFSRCCLK for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_SHIFT                        5                                     /**< Shift value for CMU_CLKOUTSEL1 */
#define _CMU_CTRL_CLKOUTSEL1_MASK                         0x3E0UL                               /**< Bit mask for CMU_CLKOUTSEL1 */
#define _CMU_CTRL_CLKOUTSEL1_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_DISABLED                     0x00000000UL                          /**< Mode DISABLED for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_ULFRCO                       0x00000001UL                          /**< Mode ULFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFRCO                        0x00000002UL                          /**< Mode LFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFXO                         0x00000003UL                          /**< Mode LFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_HFXO                         0x00000006UL                          /**< Mode HFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_HFEXPCLK                     0x00000007UL                          /**< Mode HFEXPCLK for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_ULFRCOQ                      0x00000009UL                          /**< Mode ULFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFRCOQ                       0x0000000AUL                          /**< Mode LFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFXOQ                        0x0000000BUL                          /**< Mode LFXOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_HFRCOQ                       0x0000000CUL                          /**< Mode HFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_AUXHFRCOQ                    0x0000000DUL                          /**< Mode AUXHFRCOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_HFXOQ                        0x0000000EUL                          /**< Mode HFXOQ for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_HFSRCCLK                     0x0000000FUL                          /**< Mode HFSRCCLK for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_DEFAULT                       (_CMU_CTRL_CLKOUTSEL1_DEFAULT << 5)   /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_DISABLED                      (_CMU_CTRL_CLKOUTSEL1_DISABLED << 5)  /**< Shifted mode DISABLED for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_ULFRCO                        (_CMU_CTRL_CLKOUTSEL1_ULFRCO << 5)    /**< Shifted mode ULFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFRCO                         (_CMU_CTRL_CLKOUTSEL1_LFRCO << 5)     /**< Shifted mode LFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFXO                          (_CMU_CTRL_CLKOUTSEL1_LFXO << 5)      /**< Shifted mode LFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_HFXO                          (_CMU_CTRL_CLKOUTSEL1_HFXO << 5)      /**< Shifted mode HFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_HFEXPCLK                      (_CMU_CTRL_CLKOUTSEL1_HFEXPCLK << 5)  /**< Shifted mode HFEXPCLK for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_ULFRCOQ                       (_CMU_CTRL_CLKOUTSEL1_ULFRCOQ << 5)   /**< Shifted mode ULFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFRCOQ                        (_CMU_CTRL_CLKOUTSEL1_LFRCOQ << 5)    /**< Shifted mode LFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFXOQ                         (_CMU_CTRL_CLKOUTSEL1_LFXOQ << 5)     /**< Shifted mode LFXOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_HFRCOQ                        (_CMU_CTRL_CLKOUTSEL1_HFRCOQ << 5)    /**< Shifted mode HFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_AUXHFRCOQ                     (_CMU_CTRL_CLKOUTSEL1_AUXHFRCOQ << 5) /**< Shifted mode AUXHFRCOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_HFXOQ                         (_CMU_CTRL_CLKOUTSEL1_HFXOQ << 5)     /**< Shifted mode HFXOQ for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_HFSRCCLK                      (_CMU_CTRL_CLKOUTSEL1_HFSRCCLK << 5)  /**< Shifted mode HFSRCCLK for CMU_CTRL */
#define CMU_CTRL_WSHFLE                                   (0x1UL << 16)                         /**< Wait State for High-Frequency LE Interface */
#define _CMU_CTRL_WSHFLE_SHIFT                            16                                    /**< Shift value for CMU_WSHFLE */
#define _CMU_CTRL_WSHFLE_MASK                             0x10000UL                             /**< Bit mask for CMU_WSHFLE */
#define _CMU_CTRL_WSHFLE_DEFAULT                          0x00000000UL                          /**< Mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_WSHFLE_DEFAULT                           (_CMU_CTRL_WSHFLE_DEFAULT << 16)      /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFPERCLKEN                               (0x1UL << 20)                         /**< HFPERCLK Enable */
#define _CMU_CTRL_HFPERCLKEN_SHIFT                        20                                    /**< Shift value for CMU_HFPERCLKEN */
#define _CMU_CTRL_HFPERCLKEN_MASK                         0x100000UL                            /**< Bit mask for CMU_HFPERCLKEN */
#define _CMU_CTRL_HFPERCLKEN_DEFAULT                      0x00000001UL                          /**< Mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFPERCLKEN_DEFAULT                       (_CMU_CTRL_HFPERCLKEN_DEFAULT << 20)  /**< Shifted mode DEFAULT for CMU_CTRL */

/* Bit fields for CMU HFRCOCTRL */
#define _CMU_HFRCOCTRL_RESETVALUE                         0xB1481F7FUL                                /**< Default value for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_MASK                               0xFFFF3F7FUL                                /**< Mask for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_TUNING_SHIFT                       0                                           /**< Shift value for CMU_TUNING */
#define _CMU_HFRCOCTRL_TUNING_MASK                        0x7FUL                                      /**< Bit mask for CMU_TUNING */
#define _CMU_HFRCOCTRL_TUNING_DEFAULT                     0x0000007FUL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_TUNING_DEFAULT                      (_CMU_HFRCOCTRL_TUNING_DEFAULT << 0)        /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_FINETUNING_SHIFT                   8                                           /**< Shift value for CMU_FINETUNING */
#define _CMU_HFRCOCTRL_FINETUNING_MASK                    0x3F00UL                                    /**< Bit mask for CMU_FINETUNING */
#define _CMU_HFRCOCTRL_FINETUNING_DEFAULT                 0x0000001FUL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_FINETUNING_DEFAULT                  (_CMU_HFRCOCTRL_FINETUNING_DEFAULT << 8)    /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_FREQRANGE_SHIFT                    16                                          /**< Shift value for CMU_FREQRANGE */
#define _CMU_HFRCOCTRL_FREQRANGE_MASK                     0x1F0000UL                                  /**< Bit mask for CMU_FREQRANGE */
#define _CMU_HFRCOCTRL_FREQRANGE_DEFAULT                  0x00000008UL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_FREQRANGE_DEFAULT                   (_CMU_HFRCOCTRL_FREQRANGE_DEFAULT << 16)    /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_CMPBIAS_SHIFT                      21                                          /**< Shift value for CMU_CMPBIAS */
#define _CMU_HFRCOCTRL_CMPBIAS_MASK                       0xE00000UL                                  /**< Bit mask for CMU_CMPBIAS */
#define _CMU_HFRCOCTRL_CMPBIAS_DEFAULT                    0x00000002UL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_CMPBIAS_DEFAULT                     (_CMU_HFRCOCTRL_CMPBIAS_DEFAULT << 21)      /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_LDOHP                               (0x1UL << 24)                               /**< HFRCO LDO High Power Mode */
#define _CMU_HFRCOCTRL_LDOHP_SHIFT                        24                                          /**< Shift value for CMU_LDOHP */
#define _CMU_HFRCOCTRL_LDOHP_MASK                         0x1000000UL                                 /**< Bit mask for CMU_LDOHP */
#define _CMU_HFRCOCTRL_LDOHP_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_LDOHP_DEFAULT                       (_CMU_HFRCOCTRL_LDOHP_DEFAULT << 24)        /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_CLKDIV_SHIFT                       25                                          /**< Shift value for CMU_CLKDIV */
#define _CMU_HFRCOCTRL_CLKDIV_MASK                        0x6000000UL                                 /**< Bit mask for CMU_CLKDIV */
#define _CMU_HFRCOCTRL_CLKDIV_DEFAULT                     0x00000000UL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_CLKDIV_DIV1                        0x00000000UL                                /**< Mode DIV1 for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_CLKDIV_DIV2                        0x00000001UL                                /**< Mode DIV2 for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_CLKDIV_DIV4                        0x00000002UL                                /**< Mode DIV4 for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_CLKDIV_DEFAULT                      (_CMU_HFRCOCTRL_CLKDIV_DEFAULT << 25)       /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_CLKDIV_DIV1                         (_CMU_HFRCOCTRL_CLKDIV_DIV1 << 25)          /**< Shifted mode DIV1 for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_CLKDIV_DIV2                         (_CMU_HFRCOCTRL_CLKDIV_DIV2 << 25)          /**< Shifted mode DIV2 for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_CLKDIV_DIV4                         (_CMU_HFRCOCTRL_CLKDIV_DIV4 << 25)          /**< Shifted mode DIV4 for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_FINETUNINGEN                        (0x1UL << 27)                               /**< Enable reference for fine tuning */
#define _CMU_HFRCOCTRL_FINETUNINGEN_SHIFT                 27                                          /**< Shift value for CMU_FINETUNINGEN */
#define _CMU_HFRCOCTRL_FINETUNINGEN_MASK                  0x8000000UL                                 /**< Bit mask for CMU_FINETUNINGEN */
#define _CMU_HFRCOCTRL_FINETUNINGEN_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_FINETUNINGEN_DEFAULT                (_CMU_HFRCOCTRL_FINETUNINGEN_DEFAULT << 27) /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_VREFTC_SHIFT                       28                                          /**< Shift value for CMU_VREFTC */
#define _CMU_HFRCOCTRL_VREFTC_MASK                        0xF0000000UL                                /**< Bit mask for CMU_VREFTC */
#define _CMU_HFRCOCTRL_VREFTC_DEFAULT                     0x0000000BUL                                /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_VREFTC_DEFAULT                      (_CMU_HFRCOCTRL_VREFTC_DEFAULT << 28)       /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */

/* Bit fields for CMU AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_RESETVALUE                      0xB1481F7FUL                                   /**< Default value for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_MASK                            0xFFFF3F7FUL                                   /**< Mask for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_TUNING_SHIFT                    0                                              /**< Shift value for CMU_TUNING */
#define _CMU_AUXHFRCOCTRL_TUNING_MASK                     0x7FUL                                         /**< Bit mask for CMU_TUNING */
#define _CMU_AUXHFRCOCTRL_TUNING_DEFAULT                  0x0000007FUL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_TUNING_DEFAULT                   (_CMU_AUXHFRCOCTRL_TUNING_DEFAULT << 0)        /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_FINETUNING_SHIFT                8                                              /**< Shift value for CMU_FINETUNING */
#define _CMU_AUXHFRCOCTRL_FINETUNING_MASK                 0x3F00UL                                       /**< Bit mask for CMU_FINETUNING */
#define _CMU_AUXHFRCOCTRL_FINETUNING_DEFAULT              0x0000001FUL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_FINETUNING_DEFAULT               (_CMU_AUXHFRCOCTRL_FINETUNING_DEFAULT << 8)    /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_FREQRANGE_SHIFT                 16                                             /**< Shift value for CMU_FREQRANGE */
#define _CMU_AUXHFRCOCTRL_FREQRANGE_MASK                  0x1F0000UL                                     /**< Bit mask for CMU_FREQRANGE */
#define _CMU_AUXHFRCOCTRL_FREQRANGE_DEFAULT               0x00000008UL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_FREQRANGE_DEFAULT                (_CMU_AUXHFRCOCTRL_FREQRANGE_DEFAULT << 16)    /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_CMPBIAS_SHIFT                   21                                             /**< Shift value for CMU_CMPBIAS */
#define _CMU_AUXHFRCOCTRL_CMPBIAS_MASK                    0xE00000UL                                     /**< Bit mask for CMU_CMPBIAS */
#define _CMU_AUXHFRCOCTRL_CMPBIAS_DEFAULT                 0x00000002UL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_CMPBIAS_DEFAULT                  (_CMU_AUXHFRCOCTRL_CMPBIAS_DEFAULT << 21)      /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_LDOHP                            (0x1UL << 24)                                  /**< AUXHFRCO LDO High Power Mode */
#define _CMU_AUXHFRCOCTRL_LDOHP_SHIFT                     24                                             /**< Shift value for CMU_LDOHP */
#define _CMU_AUXHFRCOCTRL_LDOHP_MASK                      0x1000000UL                                    /**< Bit mask for CMU_LDOHP */
#define _CMU_AUXHFRCOCTRL_LDOHP_DEFAULT                   0x00000001UL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_LDOHP_DEFAULT                    (_CMU_AUXHFRCOCTRL_LDOHP_DEFAULT << 24)        /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_CLKDIV_SHIFT                    25                                             /**< Shift value for CMU_CLKDIV */
#define _CMU_AUXHFRCOCTRL_CLKDIV_MASK                     0x6000000UL                                    /**< Bit mask for CMU_CLKDIV */
#define _CMU_AUXHFRCOCTRL_CLKDIV_DEFAULT                  0x00000000UL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_CLKDIV_DIV1                     0x00000000UL                                   /**< Mode DIV1 for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_CLKDIV_DIV2                     0x00000001UL                                   /**< Mode DIV2 for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_CLKDIV_DIV4                     0x00000002UL                                   /**< Mode DIV4 for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_CLKDIV_DEFAULT                   (_CMU_AUXHFRCOCTRL_CLKDIV_DEFAULT << 25)       /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_CLKDIV_DIV1                      (_CMU_AUXHFRCOCTRL_CLKDIV_DIV1 << 25)          /**< Shifted mode DIV1 for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_CLKDIV_DIV2                      (_CMU_AUXHFRCOCTRL_CLKDIV_DIV2 << 25)          /**< Shifted mode DIV2 for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_CLKDIV_DIV4                      (_CMU_AUXHFRCOCTRL_CLKDIV_DIV4 << 25)          /**< Shifted mode DIV4 for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_FINETUNINGEN                     (0x1UL << 27)                                  /**< Enable reference for fine tuning */
#define _CMU_AUXHFRCOCTRL_FINETUNINGEN_SHIFT              27                                             /**< Shift value for CMU_FINETUNINGEN */
#define _CMU_AUXHFRCOCTRL_FINETUNINGEN_MASK               0x8000000UL                                    /**< Bit mask for CMU_FINETUNINGEN */
#define _CMU_AUXHFRCOCTRL_FINETUNINGEN_DEFAULT            0x00000000UL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_FINETUNINGEN_DEFAULT             (_CMU_AUXHFRCOCTRL_FINETUNINGEN_DEFAULT << 27) /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_VREFTC_SHIFT                    28                                             /**< Shift value for CMU_VREFTC */
#define _CMU_AUXHFRCOCTRL_VREFTC_MASK                     0xF0000000UL                                   /**< Bit mask for CMU_VREFTC */
#define _CMU_AUXHFRCOCTRL_VREFTC_DEFAULT                  0x0000000BUL                                   /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_VREFTC_DEFAULT                   (_CMU_AUXHFRCOCTRL_VREFTC_DEFAULT << 28)       /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */

/* Bit fields for CMU LFRCOCTRL */
#define _CMU_LFRCOCTRL_RESETVALUE                         0x81060100UL                                /**< Default value for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_MASK                               0xF33701FFUL                                /**< Mask for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TUNING_SHIFT                       0                                           /**< Shift value for CMU_TUNING */
#define _CMU_LFRCOCTRL_TUNING_MASK                        0x1FFUL                                     /**< Bit mask for CMU_TUNING */
#define _CMU_LFRCOCTRL_TUNING_DEFAULT                     0x00000100UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_TUNING_DEFAULT                      (_CMU_LFRCOCTRL_TUNING_DEFAULT << 0)        /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_ENVREF                              (0x1UL << 16)                               /**< Enable duty cycling of vref */
#define _CMU_LFRCOCTRL_ENVREF_SHIFT                       16                                          /**< Shift value for CMU_ENVREF */
#define _CMU_LFRCOCTRL_ENVREF_MASK                        0x10000UL                                   /**< Bit mask for CMU_ENVREF */
#define _CMU_LFRCOCTRL_ENVREF_DEFAULT                     0x00000000UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_ENVREF_DEFAULT                      (_CMU_LFRCOCTRL_ENVREF_DEFAULT << 16)       /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_ENCHOP                              (0x1UL << 17)                               /**< Enable comparator chopping */
#define _CMU_LFRCOCTRL_ENCHOP_SHIFT                       17                                          /**< Shift value for CMU_ENCHOP */
#define _CMU_LFRCOCTRL_ENCHOP_MASK                        0x20000UL                                   /**< Bit mask for CMU_ENCHOP */
#define _CMU_LFRCOCTRL_ENCHOP_DEFAULT                     0x00000001UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_ENCHOP_DEFAULT                      (_CMU_LFRCOCTRL_ENCHOP_DEFAULT << 17)       /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_ENDEM                               (0x1UL << 18)                               /**< Enable dynamic element matching */
#define _CMU_LFRCOCTRL_ENDEM_SHIFT                        18                                          /**< Shift value for CMU_ENDEM */
#define _CMU_LFRCOCTRL_ENDEM_MASK                         0x40000UL                                   /**< Bit mask for CMU_ENDEM */
#define _CMU_LFRCOCTRL_ENDEM_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_ENDEM_DEFAULT                       (_CMU_LFRCOCTRL_ENDEM_DEFAULT << 18)        /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_VREFUPDATE_SHIFT                   20                                          /**< Shift value for CMU_VREFUPDATE */
#define _CMU_LFRCOCTRL_VREFUPDATE_MASK                    0x300000UL                                  /**< Bit mask for CMU_VREFUPDATE */
#define _CMU_LFRCOCTRL_VREFUPDATE_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_VREFUPDATE_32CYCLES                0x00000000UL                                /**< Mode 32CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_VREFUPDATE_64CYCLES                0x00000001UL                                /**< Mode 64CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_VREFUPDATE_128CYCLES               0x00000002UL                                /**< Mode 128CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_VREFUPDATE_256CYCLES               0x00000003UL                                /**< Mode 256CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_VREFUPDATE_DEFAULT                  (_CMU_LFRCOCTRL_VREFUPDATE_DEFAULT << 20)   /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_VREFUPDATE_32CYCLES                 (_CMU_LFRCOCTRL_VREFUPDATE_32CYCLES << 20)  /**< Shifted mode 32CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_VREFUPDATE_64CYCLES                 (_CMU_LFRCOCTRL_VREFUPDATE_64CYCLES << 20)  /**< Shifted mode 64CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_VREFUPDATE_128CYCLES                (_CMU_LFRCOCTRL_VREFUPDATE_128CYCLES << 20) /**< Shifted mode 128CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_VREFUPDATE_256CYCLES                (_CMU_LFRCOCTRL_VREFUPDATE_256CYCLES << 20) /**< Shifted mode 256CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TIMEOUT_SHIFT                      24                                          /**< Shift value for CMU_TIMEOUT */
#define _CMU_LFRCOCTRL_TIMEOUT_MASK                       0x3000000UL                                 /**< Bit mask for CMU_TIMEOUT */
#define _CMU_LFRCOCTRL_TIMEOUT_2CYCLES                    0x00000000UL                                /**< Mode 2CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TIMEOUT_DEFAULT                    0x00000001UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TIMEOUT_16CYCLES                   0x00000001UL                                /**< Mode 16CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TIMEOUT_32CYCLES                   0x00000002UL                                /**< Mode 32CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_TIMEOUT_2CYCLES                     (_CMU_LFRCOCTRL_TIMEOUT_2CYCLES << 24)      /**< Shifted mode 2CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_TIMEOUT_DEFAULT                     (_CMU_LFRCOCTRL_TIMEOUT_DEFAULT << 24)      /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_TIMEOUT_16CYCLES                    (_CMU_LFRCOCTRL_TIMEOUT_16CYCLES << 24)     /**< Shifted mode 16CYCLES for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_TIMEOUT_32CYCLES                    (_CMU_LFRCOCTRL_TIMEOUT_32CYCLES << 24)     /**< Shifted mode 32CYCLES for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_GMCCURTUNE_SHIFT                   28                                          /**< Shift value for CMU_GMCCURTUNE */
#define _CMU_LFRCOCTRL_GMCCURTUNE_MASK                    0xF0000000UL                                /**< Bit mask for CMU_GMCCURTUNE */
#define _CMU_LFRCOCTRL_GMCCURTUNE_DEFAULT                 0x00000008UL                                /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_GMCCURTUNE_DEFAULT                  (_CMU_LFRCOCTRL_GMCCURTUNE_DEFAULT << 28)   /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */

/* Bit fields for CMU HFXOCTRL */
#define _CMU_HFXOCTRL_RESETVALUE                          0x00000000UL                                     /**< Default value for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_MASK                                0x37000731UL                                     /**< Mask for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_MODE                                 (0x1UL << 0)                                     /**< HFXO Mode */
#define _CMU_HFXOCTRL_MODE_SHIFT                          0                                                /**< Shift value for CMU_MODE */
#define _CMU_HFXOCTRL_MODE_MASK                           0x1UL                                            /**< Bit mask for CMU_MODE */
#define _CMU_HFXOCTRL_MODE_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_MODE_XTAL                           0x00000000UL                                     /**< Mode XTAL for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_MODE_EXTCLK                         0x00000001UL                                     /**< Mode EXTCLK for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_MODE_DEFAULT                         (_CMU_HFXOCTRL_MODE_DEFAULT << 0)                /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_MODE_XTAL                            (_CMU_HFXOCTRL_MODE_XTAL << 0)                   /**< Shifted mode XTAL for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_MODE_EXTCLK                          (_CMU_HFXOCTRL_MODE_EXTCLK << 0)                 /**< Shifted mode EXTCLK for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_SHIFT           4                                                /**< Shift value for CMU_PEAKDETSHUNTOPTMODE */
#define _CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_MASK            0x30UL                                           /**< Bit mask for CMU_PEAKDETSHUNTOPTMODE */
#define _CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_DEFAULT         0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_AUTOCMD         0x00000000UL                                     /**< Mode AUTOCMD for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_CMD             0x00000001UL                                     /**< Mode CMD for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_MANUAL          0x00000002UL                                     /**< Mode MANUAL for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_DEFAULT          (_CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_AUTOCMD          (_CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_AUTOCMD << 4) /**< Shifted mode AUTOCMD for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_CMD              (_CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_CMD << 4)     /**< Shifted mode CMD for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_MANUAL           (_CMU_HFXOCTRL_PEAKDETSHUNTOPTMODE_MANUAL << 4)  /**< Shifted mode MANUAL for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LOWPOWER                             (0x1UL << 8)                                     /**< Low power mode control. PSR performance is reduced to enable low current consumption. */
#define _CMU_HFXOCTRL_LOWPOWER_SHIFT                      8                                                /**< Shift value for CMU_LOWPOWER */
#define _CMU_HFXOCTRL_LOWPOWER_MASK                       0x100UL                                          /**< Bit mask for CMU_LOWPOWER */
#define _CMU_HFXOCTRL_LOWPOWER_DEFAULT                    0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LOWPOWER_DEFAULT                     (_CMU_HFXOCTRL_LOWPOWER_DEFAULT << 8)            /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_XTI2GND                              (0x1UL << 9)                                     /**< Clamp HFXTAL_N pin to ground when HFXO oscillator is off. */
#define _CMU_HFXOCTRL_XTI2GND_SHIFT                       9                                                /**< Shift value for CMU_XTI2GND */
#define _CMU_HFXOCTRL_XTI2GND_MASK                        0x200UL                                          /**< Bit mask for CMU_XTI2GND */
#define _CMU_HFXOCTRL_XTI2GND_DEFAULT                     0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_XTI2GND_DEFAULT                      (_CMU_HFXOCTRL_XTI2GND_DEFAULT << 9)             /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_XTO2GND                              (0x1UL << 10)                                    /**< Clamp HFXTAL_P pin to ground when HFXO oscillator is off. */
#define _CMU_HFXOCTRL_XTO2GND_SHIFT                       10                                               /**< Shift value for CMU_XTO2GND */
#define _CMU_HFXOCTRL_XTO2GND_MASK                        0x400UL                                          /**< Bit mask for CMU_XTO2GND */
#define _CMU_HFXOCTRL_XTO2GND_DEFAULT                     0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_XTO2GND_DEFAULT                      (_CMU_HFXOCTRL_XTO2GND_DEFAULT << 10)            /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_SHIFT                     24                                               /**< Shift value for CMU_LFTIMEOUT */
#define _CMU_HFXOCTRL_LFTIMEOUT_MASK                      0x7000000UL                                      /**< Bit mask for CMU_LFTIMEOUT */
#define _CMU_HFXOCTRL_LFTIMEOUT_DEFAULT                   0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_0CYCLES                   0x00000000UL                                     /**< Mode 0CYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_2CYCLES                   0x00000001UL                                     /**< Mode 2CYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_4CYCLES                   0x00000002UL                                     /**< Mode 4CYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_16CYCLES                  0x00000003UL                                     /**< Mode 16CYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_32CYCLES                  0x00000004UL                                     /**< Mode 32CYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_64CYCLES                  0x00000005UL                                     /**< Mode 64CYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_1KCYCLES                  0x00000006UL                                     /**< Mode 1KCYCLES for CMU_HFXOCTRL */
#define _CMU_HFXOCTRL_LFTIMEOUT_4KCYCLES                  0x00000007UL                                     /**< Mode 4KCYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_DEFAULT                    (_CMU_HFXOCTRL_LFTIMEOUT_DEFAULT << 24)          /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_0CYCLES                    (_CMU_HFXOCTRL_LFTIMEOUT_0CYCLES << 24)          /**< Shifted mode 0CYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_2CYCLES                    (_CMU_HFXOCTRL_LFTIMEOUT_2CYCLES << 24)          /**< Shifted mode 2CYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_4CYCLES                    (_CMU_HFXOCTRL_LFTIMEOUT_4CYCLES << 24)          /**< Shifted mode 4CYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_16CYCLES                   (_CMU_HFXOCTRL_LFTIMEOUT_16CYCLES << 24)         /**< Shifted mode 16CYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_32CYCLES                   (_CMU_HFXOCTRL_LFTIMEOUT_32CYCLES << 24)         /**< Shifted mode 32CYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_64CYCLES                   (_CMU_HFXOCTRL_LFTIMEOUT_64CYCLES << 24)         /**< Shifted mode 64CYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_1KCYCLES                   (_CMU_HFXOCTRL_LFTIMEOUT_1KCYCLES << 24)         /**< Shifted mode 1KCYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_LFTIMEOUT_4KCYCLES                   (_CMU_HFXOCTRL_LFTIMEOUT_4KCYCLES << 24)         /**< Shifted mode 4KCYCLES for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_AUTOSTARTEM0EM1                      (0x1UL << 28)                                    /**< Automatically start of HFXO upon EM0/EM1 entry from EM2/EM3 */
#define _CMU_HFXOCTRL_AUTOSTARTEM0EM1_SHIFT               28                                               /**< Shift value for CMU_AUTOSTARTEM0EM1 */
#define _CMU_HFXOCTRL_AUTOSTARTEM0EM1_MASK                0x10000000UL                                     /**< Bit mask for CMU_AUTOSTARTEM0EM1 */
#define _CMU_HFXOCTRL_AUTOSTARTEM0EM1_DEFAULT             0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_AUTOSTARTEM0EM1_DEFAULT              (_CMU_HFXOCTRL_AUTOSTARTEM0EM1_DEFAULT << 28)    /**< Shifted mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_AUTOSTARTSELEM0EM1                   (0x1UL << 29)                                    /**< Automatically start and select of HFXO upon EM0/EM1 entry from EM2/EM3 */
#define _CMU_HFXOCTRL_AUTOSTARTSELEM0EM1_SHIFT            29                                               /**< Shift value for CMU_AUTOSTARTSELEM0EM1 */
#define _CMU_HFXOCTRL_AUTOSTARTSELEM0EM1_MASK             0x20000000UL                                     /**< Bit mask for CMU_AUTOSTARTSELEM0EM1 */
#define _CMU_HFXOCTRL_AUTOSTARTSELEM0EM1_DEFAULT          0x00000000UL                                     /**< Mode DEFAULT for CMU_HFXOCTRL */
#define CMU_HFXOCTRL_AUTOSTARTSELEM0EM1_DEFAULT           (_CMU_HFXOCTRL_AUTOSTARTSELEM0EM1_DEFAULT << 29) /**< Shifted mode DEFAULT for CMU_HFXOCTRL */

/* Bit fields for CMU HFXOSTARTUPCTRL */
#define _CMU_HFXOSTARTUPCTRL_RESETVALUE                   0x00050020UL                                     /**< Default value for CMU_HFXOSTARTUPCTRL */
#define _CMU_HFXOSTARTUPCTRL_MASK                         0x000FF87FUL                                     /**< Mask for CMU_HFXOSTARTUPCTRL */
#define _CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_SHIFT           0                                                /**< Shift value for CMU_IBTRIMXOCORE */
#define _CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_MASK            0x7FUL                                           /**< Bit mask for CMU_IBTRIMXOCORE */
#define _CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_DEFAULT         0x00000020UL                                     /**< Mode DEFAULT for CMU_HFXOSTARTUPCTRL */
#define CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_DEFAULT          (_CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFXOSTARTUPCTRL */
#define _CMU_HFXOSTARTUPCTRL_CTUNE_SHIFT                  11                                               /**< Shift value for CMU_CTUNE */
#define _CMU_HFXOSTARTUPCTRL_CTUNE_MASK                   0xFF800UL                                        /**< Bit mask for CMU_CTUNE */
#define _CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT                0x000000A0UL                                     /**< Mode DEFAULT for CMU_HFXOSTARTUPCTRL */
#define CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT                 (_CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT << 11)       /**< Shifted mode DEFAULT for CMU_HFXOSTARTUPCTRL */

/* Bit fields for CMU HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_RESETVALUE               0xA30B4507UL                                         /**< Default value for CMU_HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_MASK                     0xF70FFFFFUL                                         /**< Mask for CMU_HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_IBTRIMXOCORE_SHIFT       0                                                    /**< Shift value for CMU_IBTRIMXOCORE */
#define _CMU_HFXOSTEADYSTATECTRL_IBTRIMXOCORE_MASK        0x7FUL                                               /**< Bit mask for CMU_IBTRIMXOCORE */
#define _CMU_HFXOSTEADYSTATECTRL_IBTRIMXOCORE_DEFAULT     0x00000007UL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_IBTRIMXOCORE_DEFAULT      (_CMU_HFXOSTEADYSTATECTRL_IBTRIMXOCORE_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_REGISH_SHIFT             7                                                    /**< Shift value for CMU_REGISH */
#define _CMU_HFXOSTEADYSTATECTRL_REGISH_MASK              0x780UL                                              /**< Bit mask for CMU_REGISH */
#define _CMU_HFXOSTEADYSTATECTRL_REGISH_DEFAULT           0x0000000AUL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_REGISH_DEFAULT            (_CMU_HFXOSTEADYSTATECTRL_REGISH_DEFAULT << 7)       /**< Shifted mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_CTUNE_SHIFT              11                                                   /**< Shift value for CMU_CTUNE */
#define _CMU_HFXOSTEADYSTATECTRL_CTUNE_MASK               0xFF800UL                                            /**< Bit mask for CMU_CTUNE */
#define _CMU_HFXOSTEADYSTATECTRL_CTUNE_DEFAULT            0x00000168UL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_CTUNE_DEFAULT             (_CMU_HFXOSTEADYSTATECTRL_CTUNE_DEFAULT << 11)       /**< Shifted mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_REGSELILOW_SHIFT         24                                                   /**< Shift value for CMU_REGSELILOW */
#define _CMU_HFXOSTEADYSTATECTRL_REGSELILOW_MASK          0x3000000UL                                          /**< Bit mask for CMU_REGSELILOW */
#define _CMU_HFXOSTEADYSTATECTRL_REGSELILOW_DEFAULT       0x00000003UL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_REGSELILOW_DEFAULT        (_CMU_HFXOSTEADYSTATECTRL_REGSELILOW_DEFAULT << 24)  /**< Shifted mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_PEAKDETEN                 (0x1UL << 26)                                        /**< Enables oscillator peak detectors */
#define _CMU_HFXOSTEADYSTATECTRL_PEAKDETEN_SHIFT          26                                                   /**< Shift value for CMU_PEAKDETEN */
#define _CMU_HFXOSTEADYSTATECTRL_PEAKDETEN_MASK           0x4000000UL                                          /**< Bit mask for CMU_PEAKDETEN */
#define _CMU_HFXOSTEADYSTATECTRL_PEAKDETEN_DEFAULT        0x00000000UL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_PEAKDETEN_DEFAULT         (_CMU_HFXOSTEADYSTATECTRL_PEAKDETEN_DEFAULT << 26)   /**< Shifted mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define _CMU_HFXOSTEADYSTATECTRL_REGISHUPPER_SHIFT        28                                                   /**< Shift value for CMU_REGISHUPPER */
#define _CMU_HFXOSTEADYSTATECTRL_REGISHUPPER_MASK         0xF0000000UL                                         /**< Bit mask for CMU_REGISHUPPER */
#define _CMU_HFXOSTEADYSTATECTRL_REGISHUPPER_DEFAULT      0x0000000AUL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
#define CMU_HFXOSTEADYSTATECTRL_REGISHUPPER_DEFAULT       (_CMU_HFXOSTEADYSTATECTRL_REGISHUPPER_DEFAULT << 28) /**< Shifted mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */

/* Bit fields for CMU HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_RESETVALUE                   0x0002A067UL                                           /**< Default value for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_MASK                         0x000FF0FFUL                                           /**< Mask for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_SHIFT         0                                                      /**< Shift value for CMU_STARTUPTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_MASK          0xFUL                                                  /**< Bit mask for CMU_STARTUPTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_2CYCLES       0x00000000UL                                           /**< Mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_4CYCLES       0x00000001UL                                           /**< Mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_16CYCLES      0x00000002UL                                           /**< Mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_32CYCLES      0x00000003UL                                           /**< Mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_256CYCLES     0x00000004UL                                           /**< Mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_1KCYCLES      0x00000005UL                                           /**< Mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_2KCYCLES      0x00000006UL                                           /**< Mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT       0x00000007UL                                           /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_4KCYCLES      0x00000007UL                                           /**< Mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_8KCYCLES      0x00000008UL                                           /**< Mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_16KCYCLES     0x00000009UL                                           /**< Mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_32KCYCLES     0x0000000AUL                                           /**< Mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_2CYCLES        (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_2CYCLES << 0)     /**< Shifted mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_4CYCLES        (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_4CYCLES << 0)     /**< Shifted mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_16CYCLES       (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_16CYCLES << 0)    /**< Shifted mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_32CYCLES       (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_32CYCLES << 0)    /**< Shifted mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_256CYCLES      (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_256CYCLES << 0)   /**< Shifted mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_1KCYCLES       (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_1KCYCLES << 0)    /**< Shifted mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_2KCYCLES       (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_2KCYCLES << 0)    /**< Shifted mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT        (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT << 0)     /**< Shifted mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_4KCYCLES       (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_4KCYCLES << 0)    /**< Shifted mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_8KCYCLES       (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_8KCYCLES << 0)    /**< Shifted mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_16KCYCLES      (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_16KCYCLES << 0)   /**< Shifted mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_32KCYCLES      (_CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_32KCYCLES << 0)   /**< Shifted mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_SHIFT          4                                                      /**< Shift value for CMU_STEADYTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_MASK           0xF0UL                                                 /**< Bit mask for CMU_STEADYTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_2CYCLES        0x00000000UL                                           /**< Mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_4CYCLES        0x00000001UL                                           /**< Mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_16CYCLES       0x00000002UL                                           /**< Mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_32CYCLES       0x00000003UL                                           /**< Mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_256CYCLES      0x00000004UL                                           /**< Mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_1KCYCLES       0x00000005UL                                           /**< Mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_DEFAULT        0x00000006UL                                           /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_2KCYCLES       0x00000006UL                                           /**< Mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_4KCYCLES       0x00000007UL                                           /**< Mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_8KCYCLES       0x00000008UL                                           /**< Mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_16KCYCLES      0x00000009UL                                           /**< Mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_32KCYCLES      0x0000000AUL                                           /**< Mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_2CYCLES         (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_2CYCLES << 4)      /**< Shifted mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_4CYCLES         (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_4CYCLES << 4)      /**< Shifted mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_16CYCLES        (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_16CYCLES << 4)     /**< Shifted mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_32CYCLES        (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_32CYCLES << 4)     /**< Shifted mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_256CYCLES       (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_256CYCLES << 4)    /**< Shifted mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_1KCYCLES        (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_1KCYCLES << 4)     /**< Shifted mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_DEFAULT         (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_DEFAULT << 4)      /**< Shifted mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_2KCYCLES        (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_2KCYCLES << 4)     /**< Shifted mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_4KCYCLES        (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_4KCYCLES << 4)     /**< Shifted mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_8KCYCLES        (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_8KCYCLES << 4)     /**< Shifted mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_16KCYCLES       (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_16KCYCLES << 4)    /**< Shifted mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_32KCYCLES       (_CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_32KCYCLES << 4)    /**< Shifted mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_SHIFT         12                                                     /**< Shift value for CMU_PEAKDETTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_MASK          0xF000UL                                               /**< Bit mask for CMU_PEAKDETTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_2CYCLES       0x00000000UL                                           /**< Mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_4CYCLES       0x00000001UL                                           /**< Mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_16CYCLES      0x00000002UL                                           /**< Mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_32CYCLES      0x00000003UL                                           /**< Mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_256CYCLES     0x00000004UL                                           /**< Mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_1KCYCLES      0x00000005UL                                           /**< Mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_2KCYCLES      0x00000006UL                                           /**< Mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_4KCYCLES      0x00000007UL                                           /**< Mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_8KCYCLES      0x00000008UL                                           /**< Mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_16KCYCLES     0x00000009UL                                           /**< Mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_DEFAULT       0x0000000AUL                                           /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_32KCYCLES     0x0000000AUL                                           /**< Mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_2CYCLES        (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_2CYCLES << 12)    /**< Shifted mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_4CYCLES        (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_4CYCLES << 12)    /**< Shifted mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_16CYCLES       (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_16CYCLES << 12)   /**< Shifted mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_32CYCLES       (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_32CYCLES << 12)   /**< Shifted mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_256CYCLES      (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_256CYCLES << 12)  /**< Shifted mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_1KCYCLES       (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_1KCYCLES << 12)   /**< Shifted mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_2KCYCLES       (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_2KCYCLES << 12)   /**< Shifted mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_4KCYCLES       (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_4KCYCLES << 12)   /**< Shifted mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_8KCYCLES       (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_8KCYCLES << 12)   /**< Shifted mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_16KCYCLES      (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_16KCYCLES << 12)  /**< Shifted mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_DEFAULT        (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_DEFAULT << 12)    /**< Shifted mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_32KCYCLES      (_CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_32KCYCLES << 12)  /**< Shifted mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_SHIFT        16                                                     /**< Shift value for CMU_SHUNTOPTTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_MASK         0xF0000UL                                              /**< Bit mask for CMU_SHUNTOPTTIMEOUT */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_2CYCLES      0x00000000UL                                           /**< Mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_4CYCLES      0x00000001UL                                           /**< Mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_DEFAULT      0x00000002UL                                           /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_16CYCLES     0x00000002UL                                           /**< Mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_32CYCLES     0x00000003UL                                           /**< Mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_256CYCLES    0x00000004UL                                           /**< Mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_1KCYCLES     0x00000005UL                                           /**< Mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_2KCYCLES     0x00000006UL                                           /**< Mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_4KCYCLES     0x00000007UL                                           /**< Mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_8KCYCLES     0x00000008UL                                           /**< Mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_16KCYCLES    0x00000009UL                                           /**< Mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_32KCYCLES    0x0000000AUL                                           /**< Mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_2CYCLES       (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_2CYCLES << 16)   /**< Shifted mode 2CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_4CYCLES       (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_4CYCLES << 16)   /**< Shifted mode 4CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_DEFAULT       (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_DEFAULT << 16)   /**< Shifted mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_16CYCLES      (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_16CYCLES << 16)  /**< Shifted mode 16CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_32CYCLES      (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_32CYCLES << 16)  /**< Shifted mode 32CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_256CYCLES     (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_256CYCLES << 16) /**< Shifted mode 256CYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_1KCYCLES      (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_1KCYCLES << 16)  /**< Shifted mode 1KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_2KCYCLES      (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_2KCYCLES << 16)  /**< Shifted mode 2KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_4KCYCLES      (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_4KCYCLES << 16)  /**< Shifted mode 4KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_8KCYCLES      (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_8KCYCLES << 16)  /**< Shifted mode 8KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_16KCYCLES     (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_16KCYCLES << 16) /**< Shifted mode 16KCYCLES for CMU_HFXOTIMEOUTCTRL */
#define CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_32KCYCLES     (_CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_32KCYCLES << 16) /**< Shifted mode 32KCYCLES for CMU_HFXOTIMEOUTCTRL */

/* Bit fields for CMU LFXOCTRL */
#define _CMU_LFXOCTRL_RESETVALUE                          0x07009000UL                            /**< Default value for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_MASK                                0x0713DB7FUL                            /**< Mask for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TUNING_SHIFT                        0                                       /**< Shift value for CMU_TUNING */
#define _CMU_LFXOCTRL_TUNING_MASK                         0x7FUL                                  /**< Bit mask for CMU_TUNING */
#define _CMU_LFXOCTRL_TUNING_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TUNING_DEFAULT                       (_CMU_LFXOCTRL_TUNING_DEFAULT << 0)     /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_MODE_SHIFT                          8                                       /**< Shift value for CMU_MODE */
#define _CMU_LFXOCTRL_MODE_MASK                           0x300UL                                 /**< Bit mask for CMU_MODE */
#define _CMU_LFXOCTRL_MODE_DEFAULT                        0x00000000UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_MODE_XTAL                           0x00000000UL                            /**< Mode XTAL for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_MODE_BUFEXTCLK                      0x00000001UL                            /**< Mode BUFEXTCLK for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_MODE_DIGEXTCLK                      0x00000002UL                            /**< Mode DIGEXTCLK for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_MODE_DEFAULT                         (_CMU_LFXOCTRL_MODE_DEFAULT << 8)       /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_MODE_XTAL                            (_CMU_LFXOCTRL_MODE_XTAL << 8)          /**< Shifted mode XTAL for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_MODE_BUFEXTCLK                       (_CMU_LFXOCTRL_MODE_BUFEXTCLK << 8)     /**< Shifted mode BUFEXTCLK for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_MODE_DIGEXTCLK                       (_CMU_LFXOCTRL_MODE_DIGEXTCLK << 8)     /**< Shifted mode DIGEXTCLK for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_GAIN_SHIFT                          11                                      /**< Shift value for CMU_GAIN */
#define _CMU_LFXOCTRL_GAIN_MASK                           0x1800UL                                /**< Bit mask for CMU_GAIN */
#define _CMU_LFXOCTRL_GAIN_DEFAULT                        0x00000002UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_GAIN_DEFAULT                         (_CMU_LFXOCTRL_GAIN_DEFAULT << 11)      /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_HIGHAMPL                             (0x1UL << 14)                           /**< LFXO High XTAL Oscillation Amplitude Enable */
#define _CMU_LFXOCTRL_HIGHAMPL_SHIFT                      14                                      /**< Shift value for CMU_HIGHAMPL */
#define _CMU_LFXOCTRL_HIGHAMPL_MASK                       0x4000UL                                /**< Bit mask for CMU_HIGHAMPL */
#define _CMU_LFXOCTRL_HIGHAMPL_DEFAULT                    0x00000000UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_HIGHAMPL_DEFAULT                     (_CMU_LFXOCTRL_HIGHAMPL_DEFAULT << 14)  /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_AGC                                  (0x1UL << 15)                           /**< LFXO AGC Enable */
#define _CMU_LFXOCTRL_AGC_SHIFT                           15                                      /**< Shift value for CMU_AGC */
#define _CMU_LFXOCTRL_AGC_MASK                            0x8000UL                                /**< Bit mask for CMU_AGC */
#define _CMU_LFXOCTRL_AGC_DEFAULT                         0x00000001UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_AGC_DEFAULT                          (_CMU_LFXOCTRL_AGC_DEFAULT << 15)       /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_CUR_SHIFT                           16                                      /**< Shift value for CMU_CUR */
#define _CMU_LFXOCTRL_CUR_MASK                            0x30000UL                               /**< Bit mask for CMU_CUR */
#define _CMU_LFXOCTRL_CUR_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_CUR_DEFAULT                          (_CMU_LFXOCTRL_CUR_DEFAULT << 16)       /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_BUFCUR                               (0x1UL << 20)                           /**< LFXO Buffer Bias Current */
#define _CMU_LFXOCTRL_BUFCUR_SHIFT                        20                                      /**< Shift value for CMU_BUFCUR */
#define _CMU_LFXOCTRL_BUFCUR_MASK                         0x100000UL                              /**< Bit mask for CMU_BUFCUR */
#define _CMU_LFXOCTRL_BUFCUR_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_BUFCUR_DEFAULT                       (_CMU_LFXOCTRL_BUFCUR_DEFAULT << 20)    /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_SHIFT                       24                                      /**< Shift value for CMU_TIMEOUT */
#define _CMU_LFXOCTRL_TIMEOUT_MASK                        0x7000000UL                             /**< Bit mask for CMU_TIMEOUT */
#define _CMU_LFXOCTRL_TIMEOUT_2CYCLES                     0x00000000UL                            /**< Mode 2CYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_256CYCLES                   0x00000001UL                            /**< Mode 256CYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_1KCYCLES                    0x00000002UL                            /**< Mode 1KCYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_2KCYCLES                    0x00000003UL                            /**< Mode 2KCYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_4KCYCLES                    0x00000004UL                            /**< Mode 4KCYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_8KCYCLES                    0x00000005UL                            /**< Mode 8KCYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_16KCYCLES                   0x00000006UL                            /**< Mode 16KCYCLES for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_DEFAULT                     0x00000007UL                            /**< Mode DEFAULT for CMU_LFXOCTRL */
#define _CMU_LFXOCTRL_TIMEOUT_32KCYCLES                   0x00000007UL                            /**< Mode 32KCYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_2CYCLES                      (_CMU_LFXOCTRL_TIMEOUT_2CYCLES << 24)   /**< Shifted mode 2CYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_256CYCLES                    (_CMU_LFXOCTRL_TIMEOUT_256CYCLES << 24) /**< Shifted mode 256CYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_1KCYCLES                     (_CMU_LFXOCTRL_TIMEOUT_1KCYCLES << 24)  /**< Shifted mode 1KCYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_2KCYCLES                     (_CMU_LFXOCTRL_TIMEOUT_2KCYCLES << 24)  /**< Shifted mode 2KCYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_4KCYCLES                     (_CMU_LFXOCTRL_TIMEOUT_4KCYCLES << 24)  /**< Shifted mode 4KCYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_8KCYCLES                     (_CMU_LFXOCTRL_TIMEOUT_8KCYCLES << 24)  /**< Shifted mode 8KCYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_16KCYCLES                    (_CMU_LFXOCTRL_TIMEOUT_16KCYCLES << 24) /**< Shifted mode 16KCYCLES for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_DEFAULT                      (_CMU_LFXOCTRL_TIMEOUT_DEFAULT << 24)   /**< Shifted mode DEFAULT for CMU_LFXOCTRL */
#define CMU_LFXOCTRL_TIMEOUT_32KCYCLES                    (_CMU_LFXOCTRL_TIMEOUT_32KCYCLES << 24) /**< Shifted mode 32KCYCLES for CMU_LFXOCTRL */

/* Bit fields for CMU DPLLCTRL */
#define _CMU_DPLLCTRL_RESETVALUE                          0x00000000UL                             /**< Default value for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_MASK                                0x0000001FUL                             /**< Mask for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_MODE                                 (0x1UL << 0)                             /**< Operating Mode Control */
#define _CMU_DPLLCTRL_MODE_SHIFT                          0                                        /**< Shift value for CMU_MODE */
#define _CMU_DPLLCTRL_MODE_MASK                           0x1UL                                    /**< Bit mask for CMU_MODE */
#define _CMU_DPLLCTRL_MODE_DEFAULT                        0x00000000UL                             /**< Mode DEFAULT for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_MODE_FREQLL                         0x00000000UL                             /**< Mode FREQLL for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_MODE_PHASELL                        0x00000001UL                             /**< Mode PHASELL for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_MODE_DEFAULT                         (_CMU_DPLLCTRL_MODE_DEFAULT << 0)        /**< Shifted mode DEFAULT for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_MODE_FREQLL                          (_CMU_DPLLCTRL_MODE_FREQLL << 0)         /**< Shifted mode FREQLL for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_MODE_PHASELL                         (_CMU_DPLLCTRL_MODE_PHASELL << 0)        /**< Shifted mode PHASELL for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_EDGESEL                              (0x1UL << 1)                             /**< Reference Edge Select */
#define _CMU_DPLLCTRL_EDGESEL_SHIFT                       1                                        /**< Shift value for CMU_EDGESEL */
#define _CMU_DPLLCTRL_EDGESEL_MASK                        0x2UL                                    /**< Bit mask for CMU_EDGESEL */
#define _CMU_DPLLCTRL_EDGESEL_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_EDGESEL_FALL                        0x00000000UL                             /**< Mode FALL for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_EDGESEL_RISE                        0x00000001UL                             /**< Mode RISE for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_EDGESEL_DEFAULT                      (_CMU_DPLLCTRL_EDGESEL_DEFAULT << 1)     /**< Shifted mode DEFAULT for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_EDGESEL_FALL                         (_CMU_DPLLCTRL_EDGESEL_FALL << 1)        /**< Shifted mode FALL for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_EDGESEL_RISE                         (_CMU_DPLLCTRL_EDGESEL_RISE << 1)        /**< Shifted mode RISE for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_AUTORECOVER                          (0x1UL << 2)                             /**< automatic recovery ctrl */
#define _CMU_DPLLCTRL_AUTORECOVER_SHIFT                   2                                        /**< Shift value for CMU_AUTORECOVER */
#define _CMU_DPLLCTRL_AUTORECOVER_MASK                    0x4UL                                    /**< Bit mask for CMU_AUTORECOVER */
#define _CMU_DPLLCTRL_AUTORECOVER_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_AUTORECOVER_DEFAULT                  (_CMU_DPLLCTRL_AUTORECOVER_DEFAULT << 2) /**< Shifted mode DEFAULT for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_REFSEL_SHIFT                        3                                        /**< Shift value for CMU_REFSEL */
#define _CMU_DPLLCTRL_REFSEL_MASK                         0x18UL                                   /**< Bit mask for CMU_REFSEL */
#define _CMU_DPLLCTRL_REFSEL_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_REFSEL_HFXO                         0x00000000UL                             /**< Mode HFXO for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_REFSEL_LFXO                         0x00000001UL                             /**< Mode LFXO for CMU_DPLLCTRL */
#define _CMU_DPLLCTRL_REFSEL_CLKIN0                       0x00000003UL                             /**< Mode CLKIN0 for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_REFSEL_DEFAULT                       (_CMU_DPLLCTRL_REFSEL_DEFAULT << 3)      /**< Shifted mode DEFAULT for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_REFSEL_HFXO                          (_CMU_DPLLCTRL_REFSEL_HFXO << 3)         /**< Shifted mode HFXO for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_REFSEL_LFXO                          (_CMU_DPLLCTRL_REFSEL_LFXO << 3)         /**< Shifted mode LFXO for CMU_DPLLCTRL */
#define CMU_DPLLCTRL_REFSEL_CLKIN0                        (_CMU_DPLLCTRL_REFSEL_CLKIN0 << 3)       /**< Shifted mode CLKIN0 for CMU_DPLLCTRL */

/* Bit fields for CMU DPLLCTRL1 */
#define _CMU_DPLLCTRL1_RESETVALUE                         0x00000000UL                     /**< Default value for CMU_DPLLCTRL1 */
#define _CMU_DPLLCTRL1_MASK                               0x0FFF0FFFUL                     /**< Mask for CMU_DPLLCTRL1 */
#define _CMU_DPLLCTRL1_M_SHIFT                            0                                /**< Shift value for CMU_M */
#define _CMU_DPLLCTRL1_M_MASK                             0xFFFUL                          /**< Bit mask for CMU_M */
#define _CMU_DPLLCTRL1_M_DEFAULT                          0x00000000UL                     /**< Mode DEFAULT for CMU_DPLLCTRL1 */
#define CMU_DPLLCTRL1_M_DEFAULT                           (_CMU_DPLLCTRL1_M_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_DPLLCTRL1 */
#define _CMU_DPLLCTRL1_N_SHIFT                            16                               /**< Shift value for CMU_N */
#define _CMU_DPLLCTRL1_N_MASK                             0xFFF0000UL                      /**< Bit mask for CMU_N */
#define _CMU_DPLLCTRL1_N_DEFAULT                          0x00000000UL                     /**< Mode DEFAULT for CMU_DPLLCTRL1 */
#define CMU_DPLLCTRL1_N_DEFAULT                           (_CMU_DPLLCTRL1_N_DEFAULT << 16) /**< Shifted mode DEFAULT for CMU_DPLLCTRL1 */

/* Bit fields for CMU CALCTRL */
#define _CMU_CALCTRL_RESETVALUE                           0x00000000UL                            /**< Default value for CMU_CALCTRL */
#define _CMU_CALCTRL_MASK                                 0x0F0F01FFUL                            /**< Mask for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_SHIFT                          0                                       /**< Shift value for CMU_UPSEL */
#define _CMU_CALCTRL_UPSEL_MASK                           0xFUL                                   /**< Bit mask for CMU_UPSEL */
#define _CMU_CALCTRL_UPSEL_DEFAULT                        0x00000000UL                            /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_HFXO                           0x00000000UL                            /**< Mode HFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_LFXO                           0x00000001UL                            /**< Mode LFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_HFRCO                          0x00000002UL                            /**< Mode HFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_LFRCO                          0x00000003UL                            /**< Mode LFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_AUXHFRCO                       0x00000004UL                            /**< Mode AUXHFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_PRS                            0x00000005UL                            /**< Mode PRS for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_DEFAULT                         (_CMU_CALCTRL_UPSEL_DEFAULT << 0)       /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_HFXO                            (_CMU_CALCTRL_UPSEL_HFXO << 0)          /**< Shifted mode HFXO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_LFXO                            (_CMU_CALCTRL_UPSEL_LFXO << 0)          /**< Shifted mode LFXO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_HFRCO                           (_CMU_CALCTRL_UPSEL_HFRCO << 0)         /**< Shifted mode HFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_LFRCO                           (_CMU_CALCTRL_UPSEL_LFRCO << 0)         /**< Shifted mode LFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_AUXHFRCO                        (_CMU_CALCTRL_UPSEL_AUXHFRCO << 0)      /**< Shifted mode AUXHFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_PRS                             (_CMU_CALCTRL_UPSEL_PRS << 0)           /**< Shifted mode PRS for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_SHIFT                        4                                       /**< Shift value for CMU_DOWNSEL */
#define _CMU_CALCTRL_DOWNSEL_MASK                         0xF0UL                                  /**< Bit mask for CMU_DOWNSEL */
#define _CMU_CALCTRL_DOWNSEL_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_HFCLK                        0x00000000UL                            /**< Mode HFCLK for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_HFXO                         0x00000001UL                            /**< Mode HFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_LFXO                         0x00000002UL                            /**< Mode LFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_HFRCO                        0x00000003UL                            /**< Mode HFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_LFRCO                        0x00000004UL                            /**< Mode LFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_AUXHFRCO                     0x00000005UL                            /**< Mode AUXHFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_DOWNSEL_PRS                          0x00000006UL                            /**< Mode PRS for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_DEFAULT                       (_CMU_CALCTRL_DOWNSEL_DEFAULT << 4)     /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_HFCLK                         (_CMU_CALCTRL_DOWNSEL_HFCLK << 4)       /**< Shifted mode HFCLK for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_HFXO                          (_CMU_CALCTRL_DOWNSEL_HFXO << 4)        /**< Shifted mode HFXO for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_LFXO                          (_CMU_CALCTRL_DOWNSEL_LFXO << 4)        /**< Shifted mode LFXO for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_HFRCO                         (_CMU_CALCTRL_DOWNSEL_HFRCO << 4)       /**< Shifted mode HFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_LFRCO                         (_CMU_CALCTRL_DOWNSEL_LFRCO << 4)       /**< Shifted mode LFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_AUXHFRCO                      (_CMU_CALCTRL_DOWNSEL_AUXHFRCO << 4)    /**< Shifted mode AUXHFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_DOWNSEL_PRS                           (_CMU_CALCTRL_DOWNSEL_PRS << 4)         /**< Shifted mode PRS for CMU_CALCTRL */
#define CMU_CALCTRL_CONT                                  (0x1UL << 8)                            /**< Continuous Calibration */
#define _CMU_CALCTRL_CONT_SHIFT                           8                                       /**< Shift value for CMU_CONT */
#define _CMU_CALCTRL_CONT_MASK                            0x100UL                                 /**< Bit mask for CMU_CONT */
#define _CMU_CALCTRL_CONT_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_CONT_DEFAULT                          (_CMU_CALCTRL_CONT_DEFAULT << 8)        /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_SHIFT                       16                                      /**< Shift value for CMU_PRSUPSEL */
#define _CMU_CALCTRL_PRSUPSEL_MASK                        0xF0000UL                               /**< Bit mask for CMU_PRSUPSEL */
#define _CMU_CALCTRL_PRSUPSEL_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH0                      0x00000000UL                            /**< Mode PRSCH0 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH1                      0x00000001UL                            /**< Mode PRSCH1 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH2                      0x00000002UL                            /**< Mode PRSCH2 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH3                      0x00000003UL                            /**< Mode PRSCH3 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH4                      0x00000004UL                            /**< Mode PRSCH4 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH5                      0x00000005UL                            /**< Mode PRSCH5 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH6                      0x00000006UL                            /**< Mode PRSCH6 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH7                      0x00000007UL                            /**< Mode PRSCH7 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH8                      0x00000008UL                            /**< Mode PRSCH8 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH9                      0x00000009UL                            /**< Mode PRSCH9 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH10                     0x0000000AUL                            /**< Mode PRSCH10 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSUPSEL_PRSCH11                     0x0000000BUL                            /**< Mode PRSCH11 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_DEFAULT                      (_CMU_CALCTRL_PRSUPSEL_DEFAULT << 16)   /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH0                       (_CMU_CALCTRL_PRSUPSEL_PRSCH0 << 16)    /**< Shifted mode PRSCH0 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH1                       (_CMU_CALCTRL_PRSUPSEL_PRSCH1 << 16)    /**< Shifted mode PRSCH1 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH2                       (_CMU_CALCTRL_PRSUPSEL_PRSCH2 << 16)    /**< Shifted mode PRSCH2 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH3                       (_CMU_CALCTRL_PRSUPSEL_PRSCH3 << 16)    /**< Shifted mode PRSCH3 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH4                       (_CMU_CALCTRL_PRSUPSEL_PRSCH4 << 16)    /**< Shifted mode PRSCH4 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH5                       (_CMU_CALCTRL_PRSUPSEL_PRSCH5 << 16)    /**< Shifted mode PRSCH5 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH6                       (_CMU_CALCTRL_PRSUPSEL_PRSCH6 << 16)    /**< Shifted mode PRSCH6 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH7                       (_CMU_CALCTRL_PRSUPSEL_PRSCH7 << 16)    /**< Shifted mode PRSCH7 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH8                       (_CMU_CALCTRL_PRSUPSEL_PRSCH8 << 16)    /**< Shifted mode PRSCH8 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH9                       (_CMU_CALCTRL_PRSUPSEL_PRSCH9 << 16)    /**< Shifted mode PRSCH9 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH10                      (_CMU_CALCTRL_PRSUPSEL_PRSCH10 << 16)   /**< Shifted mode PRSCH10 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSUPSEL_PRSCH11                      (_CMU_CALCTRL_PRSUPSEL_PRSCH11 << 16)   /**< Shifted mode PRSCH11 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_SHIFT                     24                                      /**< Shift value for CMU_PRSDOWNSEL */
#define _CMU_CALCTRL_PRSDOWNSEL_MASK                      0xF000000UL                             /**< Bit mask for CMU_PRSDOWNSEL */
#define _CMU_CALCTRL_PRSDOWNSEL_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH0                    0x00000000UL                            /**< Mode PRSCH0 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH1                    0x00000001UL                            /**< Mode PRSCH1 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH2                    0x00000002UL                            /**< Mode PRSCH2 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH3                    0x00000003UL                            /**< Mode PRSCH3 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH4                    0x00000004UL                            /**< Mode PRSCH4 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH5                    0x00000005UL                            /**< Mode PRSCH5 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH6                    0x00000006UL                            /**< Mode PRSCH6 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH7                    0x00000007UL                            /**< Mode PRSCH7 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH8                    0x00000008UL                            /**< Mode PRSCH8 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH9                    0x00000009UL                            /**< Mode PRSCH9 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH10                   0x0000000AUL                            /**< Mode PRSCH10 for CMU_CALCTRL */
#define _CMU_CALCTRL_PRSDOWNSEL_PRSCH11                   0x0000000BUL                            /**< Mode PRSCH11 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_DEFAULT                    (_CMU_CALCTRL_PRSDOWNSEL_DEFAULT << 24) /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH0                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH0 << 24)  /**< Shifted mode PRSCH0 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH1                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH1 << 24)  /**< Shifted mode PRSCH1 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH2                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH2 << 24)  /**< Shifted mode PRSCH2 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH3                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH3 << 24)  /**< Shifted mode PRSCH3 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH4                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH4 << 24)  /**< Shifted mode PRSCH4 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH5                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH5 << 24)  /**< Shifted mode PRSCH5 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH6                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH6 << 24)  /**< Shifted mode PRSCH6 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH7                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH7 << 24)  /**< Shifted mode PRSCH7 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH8                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH8 << 24)  /**< Shifted mode PRSCH8 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH9                     (_CMU_CALCTRL_PRSDOWNSEL_PRSCH9 << 24)  /**< Shifted mode PRSCH9 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH10                    (_CMU_CALCTRL_PRSDOWNSEL_PRSCH10 << 24) /**< Shifted mode PRSCH10 for CMU_CALCTRL */
#define CMU_CALCTRL_PRSDOWNSEL_PRSCH11                    (_CMU_CALCTRL_PRSDOWNSEL_PRSCH11 << 24) /**< Shifted mode PRSCH11 for CMU_CALCTRL */

/* Bit fields for CMU CALCNT */
#define _CMU_CALCNT_RESETVALUE                            0x00000000UL                      /**< Default value for CMU_CALCNT */
#define _CMU_CALCNT_MASK                                  0x000FFFFFUL                      /**< Mask for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_SHIFT                          0                                 /**< Shift value for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_MASK                           0xFFFFFUL                         /**< Bit mask for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_DEFAULT                        0x00000000UL                      /**< Mode DEFAULT for CMU_CALCNT */
#define CMU_CALCNT_CALCNT_DEFAULT                         (_CMU_CALCNT_CALCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_CALCNT */

/* Bit fields for CMU OSCENCMD */
#define _CMU_OSCENCMD_RESETVALUE                          0x00000000UL                             /**< Default value for CMU_OSCENCMD */
#define _CMU_OSCENCMD_MASK                                0x000033FFUL                             /**< Mask for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCOEN                              (0x1UL << 0)                             /**< HFRCO Enable */
#define _CMU_OSCENCMD_HFRCOEN_SHIFT                       0                                        /**< Shift value for CMU_HFRCOEN */
#define _CMU_OSCENCMD_HFRCOEN_MASK                        0x1UL                                    /**< Bit mask for CMU_HFRCOEN */
#define _CMU_OSCENCMD_HFRCOEN_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCOEN_DEFAULT                      (_CMU_OSCENCMD_HFRCOEN_DEFAULT << 0)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCODIS                             (0x1UL << 1)                             /**< HFRCO Disable */
#define _CMU_OSCENCMD_HFRCODIS_SHIFT                      1                                        /**< Shift value for CMU_HFRCODIS */
#define _CMU_OSCENCMD_HFRCODIS_MASK                       0x2UL                                    /**< Bit mask for CMU_HFRCODIS */
#define _CMU_OSCENCMD_HFRCODIS_DEFAULT                    0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCODIS_DEFAULT                     (_CMU_OSCENCMD_HFRCODIS_DEFAULT << 1)    /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXOEN                               (0x1UL << 2)                             /**< HFXO Enable */
#define _CMU_OSCENCMD_HFXOEN_SHIFT                        2                                        /**< Shift value for CMU_HFXOEN */
#define _CMU_OSCENCMD_HFXOEN_MASK                         0x4UL                                    /**< Bit mask for CMU_HFXOEN */
#define _CMU_OSCENCMD_HFXOEN_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXOEN_DEFAULT                       (_CMU_OSCENCMD_HFXOEN_DEFAULT << 2)      /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXODIS                              (0x1UL << 3)                             /**< HFXO Disable */
#define _CMU_OSCENCMD_HFXODIS_SHIFT                       3                                        /**< Shift value for CMU_HFXODIS */
#define _CMU_OSCENCMD_HFXODIS_MASK                        0x8UL                                    /**< Bit mask for CMU_HFXODIS */
#define _CMU_OSCENCMD_HFXODIS_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXODIS_DEFAULT                      (_CMU_OSCENCMD_HFXODIS_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCOEN                           (0x1UL << 4)                             /**< AUXHFRCO Enable */
#define _CMU_OSCENCMD_AUXHFRCOEN_SHIFT                    4                                        /**< Shift value for CMU_AUXHFRCOEN */
#define _CMU_OSCENCMD_AUXHFRCOEN_MASK                     0x10UL                                   /**< Bit mask for CMU_AUXHFRCOEN */
#define _CMU_OSCENCMD_AUXHFRCOEN_DEFAULT                  0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCOEN_DEFAULT                   (_CMU_OSCENCMD_AUXHFRCOEN_DEFAULT << 4)  /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCODIS                          (0x1UL << 5)                             /**< AUXHFRCO Disable */
#define _CMU_OSCENCMD_AUXHFRCODIS_SHIFT                   5                                        /**< Shift value for CMU_AUXHFRCODIS */
#define _CMU_OSCENCMD_AUXHFRCODIS_MASK                    0x20UL                                   /**< Bit mask for CMU_AUXHFRCODIS */
#define _CMU_OSCENCMD_AUXHFRCODIS_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCODIS_DEFAULT                  (_CMU_OSCENCMD_AUXHFRCODIS_DEFAULT << 5) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCOEN                              (0x1UL << 6)                             /**< LFRCO Enable */
#define _CMU_OSCENCMD_LFRCOEN_SHIFT                       6                                        /**< Shift value for CMU_LFRCOEN */
#define _CMU_OSCENCMD_LFRCOEN_MASK                        0x40UL                                   /**< Bit mask for CMU_LFRCOEN */
#define _CMU_OSCENCMD_LFRCOEN_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCOEN_DEFAULT                      (_CMU_OSCENCMD_LFRCOEN_DEFAULT << 6)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCODIS                             (0x1UL << 7)                             /**< LFRCO Disable */
#define _CMU_OSCENCMD_LFRCODIS_SHIFT                      7                                        /**< Shift value for CMU_LFRCODIS */
#define _CMU_OSCENCMD_LFRCODIS_MASK                       0x80UL                                   /**< Bit mask for CMU_LFRCODIS */
#define _CMU_OSCENCMD_LFRCODIS_DEFAULT                    0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCODIS_DEFAULT                     (_CMU_OSCENCMD_LFRCODIS_DEFAULT << 7)    /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXOEN                               (0x1UL << 8)                             /**< LFXO Enable */
#define _CMU_OSCENCMD_LFXOEN_SHIFT                        8                                        /**< Shift value for CMU_LFXOEN */
#define _CMU_OSCENCMD_LFXOEN_MASK                         0x100UL                                  /**< Bit mask for CMU_LFXOEN */
#define _CMU_OSCENCMD_LFXOEN_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXOEN_DEFAULT                       (_CMU_OSCENCMD_LFXOEN_DEFAULT << 8)      /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXODIS                              (0x1UL << 9)                             /**< LFXO Disable */
#define _CMU_OSCENCMD_LFXODIS_SHIFT                       9                                        /**< Shift value for CMU_LFXODIS */
#define _CMU_OSCENCMD_LFXODIS_MASK                        0x200UL                                  /**< Bit mask for CMU_LFXODIS */
#define _CMU_OSCENCMD_LFXODIS_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXODIS_DEFAULT                      (_CMU_OSCENCMD_LFXODIS_DEFAULT << 9)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_DPLLEN                               (0x1UL << 12)                            /**< DPLL Enable */
#define _CMU_OSCENCMD_DPLLEN_SHIFT                        12                                       /**< Shift value for CMU_DPLLEN */
#define _CMU_OSCENCMD_DPLLEN_MASK                         0x1000UL                                 /**< Bit mask for CMU_DPLLEN */
#define _CMU_OSCENCMD_DPLLEN_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_DPLLEN_DEFAULT                       (_CMU_OSCENCMD_DPLLEN_DEFAULT << 12)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_DPLLDIS                              (0x1UL << 13)                            /**< DPLL Disable */
#define _CMU_OSCENCMD_DPLLDIS_SHIFT                       13                                       /**< Shift value for CMU_DPLLDIS */
#define _CMU_OSCENCMD_DPLLDIS_MASK                        0x2000UL                                 /**< Bit mask for CMU_DPLLDIS */
#define _CMU_OSCENCMD_DPLLDIS_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_DPLLDIS_DEFAULT                      (_CMU_OSCENCMD_DPLLDIS_DEFAULT << 13)    /**< Shifted mode DEFAULT for CMU_OSCENCMD */

/* Bit fields for CMU CMD */
#define _CMU_CMD_RESETVALUE                               0x00000000UL                              /**< Default value for CMU_CMD */
#define _CMU_CMD_MASK                                     0x00000033UL                              /**< Mask for CMU_CMD */
#define CMU_CMD_CALSTART                                  (0x1UL << 0)                              /**< Calibration Start */
#define _CMU_CMD_CALSTART_SHIFT                           0                                         /**< Shift value for CMU_CALSTART */
#define _CMU_CMD_CALSTART_MASK                            0x1UL                                     /**< Bit mask for CMU_CALSTART */
#define _CMU_CMD_CALSTART_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_CMD */
#define CMU_CMD_CALSTART_DEFAULT                          (_CMU_CMD_CALSTART_DEFAULT << 0)          /**< Shifted mode DEFAULT for CMU_CMD */
#define CMU_CMD_CALSTOP                                   (0x1UL << 1)                              /**< Calibration Stop */
#define _CMU_CMD_CALSTOP_SHIFT                            1                                         /**< Shift value for CMU_CALSTOP */
#define _CMU_CMD_CALSTOP_MASK                             0x2UL                                     /**< Bit mask for CMU_CALSTOP */
#define _CMU_CMD_CALSTOP_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_CMD */
#define CMU_CMD_CALSTOP_DEFAULT                           (_CMU_CMD_CALSTOP_DEFAULT << 1)           /**< Shifted mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFXOPEAKDETSTART                          (0x1UL << 4)                              /**< HFXO Peak Detection Start */
#define _CMU_CMD_HFXOPEAKDETSTART_SHIFT                   4                                         /**< Shift value for CMU_HFXOPEAKDETSTART */
#define _CMU_CMD_HFXOPEAKDETSTART_MASK                    0x10UL                                    /**< Bit mask for CMU_HFXOPEAKDETSTART */
#define _CMU_CMD_HFXOPEAKDETSTART_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFXOPEAKDETSTART_DEFAULT                  (_CMU_CMD_HFXOPEAKDETSTART_DEFAULT << 4)  /**< Shifted mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFXOSHUNTOPTSTART                         (0x1UL << 5)                              /**< HFXO Shunt Current Optimization Start */
#define _CMU_CMD_HFXOSHUNTOPTSTART_SHIFT                  5                                         /**< Shift value for CMU_HFXOSHUNTOPTSTART */
#define _CMU_CMD_HFXOSHUNTOPTSTART_MASK                   0x20UL                                    /**< Bit mask for CMU_HFXOSHUNTOPTSTART */
#define _CMU_CMD_HFXOSHUNTOPTSTART_DEFAULT                0x00000000UL                              /**< Mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFXOSHUNTOPTSTART_DEFAULT                 (_CMU_CMD_HFXOSHUNTOPTSTART_DEFAULT << 5) /**< Shifted mode DEFAULT for CMU_CMD */

/* Bit fields for CMU DBGCLKSEL */
#define _CMU_DBGCLKSEL_RESETVALUE                         0x00000000UL                       /**< Default value for CMU_DBGCLKSEL */
#define _CMU_DBGCLKSEL_MASK                               0x00000001UL                       /**< Mask for CMU_DBGCLKSEL */
#define _CMU_DBGCLKSEL_DBG_SHIFT                          0                                  /**< Shift value for CMU_DBG */
#define _CMU_DBGCLKSEL_DBG_MASK                           0x1UL                              /**< Bit mask for CMU_DBG */
#define _CMU_DBGCLKSEL_DBG_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for CMU_DBGCLKSEL */
#define _CMU_DBGCLKSEL_DBG_AUXHFRCO                       0x00000000UL                       /**< Mode AUXHFRCO for CMU_DBGCLKSEL */
#define _CMU_DBGCLKSEL_DBG_HFCLK                          0x00000001UL                       /**< Mode HFCLK for CMU_DBGCLKSEL */
#define CMU_DBGCLKSEL_DBG_DEFAULT                         (_CMU_DBGCLKSEL_DBG_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_DBGCLKSEL */
#define CMU_DBGCLKSEL_DBG_AUXHFRCO                        (_CMU_DBGCLKSEL_DBG_AUXHFRCO << 0) /**< Shifted mode AUXHFRCO for CMU_DBGCLKSEL */
#define CMU_DBGCLKSEL_DBG_HFCLK                           (_CMU_DBGCLKSEL_DBG_HFCLK << 0)    /**< Shifted mode HFCLK for CMU_DBGCLKSEL */

/* Bit fields for CMU HFCLKSEL */
#define _CMU_HFCLKSEL_RESETVALUE                          0x00000000UL                      /**< Default value for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_MASK                                0x00000007UL                      /**< Mask for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_SHIFT                            0                                 /**< Shift value for CMU_HF */
#define _CMU_HFCLKSEL_HF_MASK                             0x7UL                             /**< Bit mask for CMU_HF */
#define _CMU_HFCLKSEL_HF_DEFAULT                          0x00000000UL                      /**< Mode DEFAULT for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_HFRCO                            0x00000001UL                      /**< Mode HFRCO for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_HFXO                             0x00000002UL                      /**< Mode HFXO for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_LFRCO                            0x00000003UL                      /**< Mode LFRCO for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_LFXO                             0x00000004UL                      /**< Mode LFXO for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_HFRCODIV2                        0x00000005UL                      /**< Mode HFRCODIV2 for CMU_HFCLKSEL */
#define _CMU_HFCLKSEL_HF_CLKIN0                           0x00000007UL                      /**< Mode CLKIN0 for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_DEFAULT                           (_CMU_HFCLKSEL_HF_DEFAULT << 0)   /**< Shifted mode DEFAULT for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_HFRCO                             (_CMU_HFCLKSEL_HF_HFRCO << 0)     /**< Shifted mode HFRCO for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_HFXO                              (_CMU_HFCLKSEL_HF_HFXO << 0)      /**< Shifted mode HFXO for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_LFRCO                             (_CMU_HFCLKSEL_HF_LFRCO << 0)     /**< Shifted mode LFRCO for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_LFXO                              (_CMU_HFCLKSEL_HF_LFXO << 0)      /**< Shifted mode LFXO for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_HFRCODIV2                         (_CMU_HFCLKSEL_HF_HFRCODIV2 << 0) /**< Shifted mode HFRCODIV2 for CMU_HFCLKSEL */
#define CMU_HFCLKSEL_HF_CLKIN0                            (_CMU_HFCLKSEL_HF_CLKIN0 << 0)    /**< Shifted mode CLKIN0 for CMU_HFCLKSEL */

/* Bit fields for CMU LFACLKSEL */
#define _CMU_LFACLKSEL_RESETVALUE                         0x00000000UL                       /**< Default value for CMU_LFACLKSEL */
#define _CMU_LFACLKSEL_MASK                               0x00000007UL                       /**< Mask for CMU_LFACLKSEL */
#define _CMU_LFACLKSEL_LFA_SHIFT                          0                                  /**< Shift value for CMU_LFA */
#define _CMU_LFACLKSEL_LFA_MASK                           0x7UL                              /**< Bit mask for CMU_LFA */
#define _CMU_LFACLKSEL_LFA_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for CMU_LFACLKSEL */
#define _CMU_LFACLKSEL_LFA_DISABLED                       0x00000000UL                       /**< Mode DISABLED for CMU_LFACLKSEL */
#define _CMU_LFACLKSEL_LFA_LFRCO                          0x00000001UL                       /**< Mode LFRCO for CMU_LFACLKSEL */
#define _CMU_LFACLKSEL_LFA_LFXO                           0x00000002UL                       /**< Mode LFXO for CMU_LFACLKSEL */
#define _CMU_LFACLKSEL_LFA_ULFRCO                         0x00000004UL                       /**< Mode ULFRCO for CMU_LFACLKSEL */
#define CMU_LFACLKSEL_LFA_DEFAULT                         (_CMU_LFACLKSEL_LFA_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_LFACLKSEL */
#define CMU_LFACLKSEL_LFA_DISABLED                        (_CMU_LFACLKSEL_LFA_DISABLED << 0) /**< Shifted mode DISABLED for CMU_LFACLKSEL */
#define CMU_LFACLKSEL_LFA_LFRCO                           (_CMU_LFACLKSEL_LFA_LFRCO << 0)    /**< Shifted mode LFRCO for CMU_LFACLKSEL */
#define CMU_LFACLKSEL_LFA_LFXO                            (_CMU_LFACLKSEL_LFA_LFXO << 0)     /**< Shifted mode LFXO for CMU_LFACLKSEL */
#define CMU_LFACLKSEL_LFA_ULFRCO                          (_CMU_LFACLKSEL_LFA_ULFRCO << 0)   /**< Shifted mode ULFRCO for CMU_LFACLKSEL */

/* Bit fields for CMU LFBCLKSEL */
#define _CMU_LFBCLKSEL_RESETVALUE                         0x00000000UL                       /**< Default value for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_MASK                               0x00000007UL                       /**< Mask for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_LFB_SHIFT                          0                                  /**< Shift value for CMU_LFB */
#define _CMU_LFBCLKSEL_LFB_MASK                           0x7UL                              /**< Bit mask for CMU_LFB */
#define _CMU_LFBCLKSEL_LFB_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_LFB_DISABLED                       0x00000000UL                       /**< Mode DISABLED for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_LFB_LFRCO                          0x00000001UL                       /**< Mode LFRCO for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_LFB_LFXO                           0x00000002UL                       /**< Mode LFXO for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_LFB_HFCLKLE                        0x00000003UL                       /**< Mode HFCLKLE for CMU_LFBCLKSEL */
#define _CMU_LFBCLKSEL_LFB_ULFRCO                         0x00000004UL                       /**< Mode ULFRCO for CMU_LFBCLKSEL */
#define CMU_LFBCLKSEL_LFB_DEFAULT                         (_CMU_LFBCLKSEL_LFB_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_LFBCLKSEL */
#define CMU_LFBCLKSEL_LFB_DISABLED                        (_CMU_LFBCLKSEL_LFB_DISABLED << 0) /**< Shifted mode DISABLED for CMU_LFBCLKSEL */
#define CMU_LFBCLKSEL_LFB_LFRCO                           (_CMU_LFBCLKSEL_LFB_LFRCO << 0)    /**< Shifted mode LFRCO for CMU_LFBCLKSEL */
#define CMU_LFBCLKSEL_LFB_LFXO                            (_CMU_LFBCLKSEL_LFB_LFXO << 0)     /**< Shifted mode LFXO for CMU_LFBCLKSEL */
#define CMU_LFBCLKSEL_LFB_HFCLKLE                         (_CMU_LFBCLKSEL_LFB_HFCLKLE << 0)  /**< Shifted mode HFCLKLE for CMU_LFBCLKSEL */
#define CMU_LFBCLKSEL_LFB_ULFRCO                          (_CMU_LFBCLKSEL_LFB_ULFRCO << 0)   /**< Shifted mode ULFRCO for CMU_LFBCLKSEL */

/* Bit fields for CMU LFECLKSEL */
#define _CMU_LFECLKSEL_RESETVALUE                         0x00000000UL                       /**< Default value for CMU_LFECLKSEL */
#define _CMU_LFECLKSEL_MASK                               0x00000007UL                       /**< Mask for CMU_LFECLKSEL */
#define _CMU_LFECLKSEL_LFE_SHIFT                          0                                  /**< Shift value for CMU_LFE */
#define _CMU_LFECLKSEL_LFE_MASK                           0x7UL                              /**< Bit mask for CMU_LFE */
#define _CMU_LFECLKSEL_LFE_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for CMU_LFECLKSEL */
#define _CMU_LFECLKSEL_LFE_DISABLED                       0x00000000UL                       /**< Mode DISABLED for CMU_LFECLKSEL */
#define _CMU_LFECLKSEL_LFE_LFRCO                          0x00000001UL                       /**< Mode LFRCO for CMU_LFECLKSEL */
#define _CMU_LFECLKSEL_LFE_LFXO                           0x00000002UL                       /**< Mode LFXO for CMU_LFECLKSEL */
#define _CMU_LFECLKSEL_LFE_ULFRCO                         0x00000004UL                       /**< Mode ULFRCO for CMU_LFECLKSEL */
#define CMU_LFECLKSEL_LFE_DEFAULT                         (_CMU_LFECLKSEL_LFE_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_LFECLKSEL */
#define CMU_LFECLKSEL_LFE_DISABLED                        (_CMU_LFECLKSEL_LFE_DISABLED << 0) /**< Shifted mode DISABLED for CMU_LFECLKSEL */
#define CMU_LFECLKSEL_LFE_LFRCO                           (_CMU_LFECLKSEL_LFE_LFRCO << 0)    /**< Shifted mode LFRCO for CMU_LFECLKSEL */
#define CMU_LFECLKSEL_LFE_LFXO                            (_CMU_LFECLKSEL_LFE_LFXO << 0)     /**< Shifted mode LFXO for CMU_LFECLKSEL */
#define CMU_LFECLKSEL_LFE_ULFRCO                          (_CMU_LFECLKSEL_LFE_ULFRCO << 0)   /**< Shifted mode ULFRCO for CMU_LFECLKSEL */

/* Bit fields for CMU STATUS */
#define _CMU_STATUS_RESETVALUE                            0x00010003UL                                /**< Default value for CMU_STATUS */
#define _CMU_STATUS_MASK                                  0x3FE133FFUL                                /**< Mask for CMU_STATUS */
#define CMU_STATUS_HFRCOENS                               (0x1UL << 0)                                /**< HFRCO Enable Status */
#define _CMU_STATUS_HFRCOENS_SHIFT                        0                                           /**< Shift value for CMU_HFRCOENS */
#define _CMU_STATUS_HFRCOENS_MASK                         0x1UL                                       /**< Bit mask for CMU_HFRCOENS */
#define _CMU_STATUS_HFRCOENS_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCOENS_DEFAULT                       (_CMU_STATUS_HFRCOENS_DEFAULT << 0)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCORDY                               (0x1UL << 1)                                /**< HFRCO Ready */
#define _CMU_STATUS_HFRCORDY_SHIFT                        1                                           /**< Shift value for CMU_HFRCORDY */
#define _CMU_STATUS_HFRCORDY_MASK                         0x2UL                                       /**< Bit mask for CMU_HFRCORDY */
#define _CMU_STATUS_HFRCORDY_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCORDY_DEFAULT                       (_CMU_STATUS_HFRCORDY_DEFAULT << 1)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOENS                                (0x1UL << 2)                                /**< HFXO Enable Status */
#define _CMU_STATUS_HFXOENS_SHIFT                         2                                           /**< Shift value for CMU_HFXOENS */
#define _CMU_STATUS_HFXOENS_MASK                          0x4UL                                       /**< Bit mask for CMU_HFXOENS */
#define _CMU_STATUS_HFXOENS_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOENS_DEFAULT                        (_CMU_STATUS_HFXOENS_DEFAULT << 2)          /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXORDY                                (0x1UL << 3)                                /**< HFXO Ready */
#define _CMU_STATUS_HFXORDY_SHIFT                         3                                           /**< Shift value for CMU_HFXORDY */
#define _CMU_STATUS_HFXORDY_MASK                          0x8UL                                       /**< Bit mask for CMU_HFXORDY */
#define _CMU_STATUS_HFXORDY_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXORDY_DEFAULT                        (_CMU_STATUS_HFXORDY_DEFAULT << 3)          /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCOENS                            (0x1UL << 4)                                /**< AUXHFRCO Enable Status */
#define _CMU_STATUS_AUXHFRCOENS_SHIFT                     4                                           /**< Shift value for CMU_AUXHFRCOENS */
#define _CMU_STATUS_AUXHFRCOENS_MASK                      0x10UL                                      /**< Bit mask for CMU_AUXHFRCOENS */
#define _CMU_STATUS_AUXHFRCOENS_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCOENS_DEFAULT                    (_CMU_STATUS_AUXHFRCOENS_DEFAULT << 4)      /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCORDY                            (0x1UL << 5)                                /**< AUXHFRCO Ready */
#define _CMU_STATUS_AUXHFRCORDY_SHIFT                     5                                           /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_STATUS_AUXHFRCORDY_MASK                      0x20UL                                      /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_STATUS_AUXHFRCORDY_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCORDY_DEFAULT                    (_CMU_STATUS_AUXHFRCORDY_DEFAULT << 5)      /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOENS                               (0x1UL << 6)                                /**< LFRCO Enable Status */
#define _CMU_STATUS_LFRCOENS_SHIFT                        6                                           /**< Shift value for CMU_LFRCOENS */
#define _CMU_STATUS_LFRCOENS_MASK                         0x40UL                                      /**< Bit mask for CMU_LFRCOENS */
#define _CMU_STATUS_LFRCOENS_DEFAULT                      0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOENS_DEFAULT                       (_CMU_STATUS_LFRCOENS_DEFAULT << 6)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCORDY                               (0x1UL << 7)                                /**< LFRCO Ready */
#define _CMU_STATUS_LFRCORDY_SHIFT                        7                                           /**< Shift value for CMU_LFRCORDY */
#define _CMU_STATUS_LFRCORDY_MASK                         0x80UL                                      /**< Bit mask for CMU_LFRCORDY */
#define _CMU_STATUS_LFRCORDY_DEFAULT                      0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCORDY_DEFAULT                       (_CMU_STATUS_LFRCORDY_DEFAULT << 7)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOENS                                (0x1UL << 8)                                /**< LFXO Enable Status */
#define _CMU_STATUS_LFXOENS_SHIFT                         8                                           /**< Shift value for CMU_LFXOENS */
#define _CMU_STATUS_LFXOENS_MASK                          0x100UL                                     /**< Bit mask for CMU_LFXOENS */
#define _CMU_STATUS_LFXOENS_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOENS_DEFAULT                        (_CMU_STATUS_LFXOENS_DEFAULT << 8)          /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXORDY                                (0x1UL << 9)                                /**< LFXO Ready */
#define _CMU_STATUS_LFXORDY_SHIFT                         9                                           /**< Shift value for CMU_LFXORDY */
#define _CMU_STATUS_LFXORDY_MASK                          0x200UL                                     /**< Bit mask for CMU_LFXORDY */
#define _CMU_STATUS_LFXORDY_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXORDY_DEFAULT                        (_CMU_STATUS_LFXORDY_DEFAULT << 9)          /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_DPLLENS                                (0x1UL << 12)                               /**< DPLL Enable Status */
#define _CMU_STATUS_DPLLENS_SHIFT                         12                                          /**< Shift value for CMU_DPLLENS */
#define _CMU_STATUS_DPLLENS_MASK                          0x1000UL                                    /**< Bit mask for CMU_DPLLENS */
#define _CMU_STATUS_DPLLENS_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_DPLLENS_DEFAULT                        (_CMU_STATUS_DPLLENS_DEFAULT << 12)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_DPLLRDY                                (0x1UL << 13)                               /**< DPLL Ready */
#define _CMU_STATUS_DPLLRDY_SHIFT                         13                                          /**< Shift value for CMU_DPLLRDY */
#define _CMU_STATUS_DPLLRDY_MASK                          0x2000UL                                    /**< Bit mask for CMU_DPLLRDY */
#define _CMU_STATUS_DPLLRDY_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_DPLLRDY_DEFAULT                        (_CMU_STATUS_DPLLRDY_DEFAULT << 13)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_CALRDY                                 (0x1UL << 16)                               /**< Calibration Ready */
#define _CMU_STATUS_CALRDY_SHIFT                          16                                          /**< Shift value for CMU_CALRDY */
#define _CMU_STATUS_CALRDY_MASK                           0x10000UL                                   /**< Bit mask for CMU_CALRDY */
#define _CMU_STATUS_CALRDY_DEFAULT                        0x00000001UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_CALRDY_DEFAULT                         (_CMU_STATUS_CALRDY_DEFAULT << 16)          /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOREQ                                (0x1UL << 21)                               /**< HFXO is Required by Hardware */
#define _CMU_STATUS_HFXOREQ_SHIFT                         21                                          /**< Shift value for CMU_HFXOREQ */
#define _CMU_STATUS_HFXOREQ_MASK                          0x200000UL                                  /**< Bit mask for CMU_HFXOREQ */
#define _CMU_STATUS_HFXOREQ_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOREQ_DEFAULT                        (_CMU_STATUS_HFXOREQ_DEFAULT << 21)         /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOPEAKDETRDY                         (0x1UL << 22)                               /**< HFXO Peak Detection Ready */
#define _CMU_STATUS_HFXOPEAKDETRDY_SHIFT                  22                                          /**< Shift value for CMU_HFXOPEAKDETRDY */
#define _CMU_STATUS_HFXOPEAKDETRDY_MASK                   0x400000UL                                  /**< Bit mask for CMU_HFXOPEAKDETRDY */
#define _CMU_STATUS_HFXOPEAKDETRDY_DEFAULT                0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOPEAKDETRDY_DEFAULT                 (_CMU_STATUS_HFXOPEAKDETRDY_DEFAULT << 22)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOSHUNTOPTRDY                        (0x1UL << 23)                               /**< HFXO Shunt Current Optimization ready */
#define _CMU_STATUS_HFXOSHUNTOPTRDY_SHIFT                 23                                          /**< Shift value for CMU_HFXOSHUNTOPTRDY */
#define _CMU_STATUS_HFXOSHUNTOPTRDY_MASK                  0x800000UL                                  /**< Bit mask for CMU_HFXOSHUNTOPTRDY */
#define _CMU_STATUS_HFXOSHUNTOPTRDY_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOSHUNTOPTRDY_DEFAULT                (_CMU_STATUS_HFXOSHUNTOPTRDY_DEFAULT << 23) /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOAMPHIGH                            (0x1UL << 24)                               /**< HFXO oscillation amplitude is too high */
#define _CMU_STATUS_HFXOAMPHIGH_SHIFT                     24                                          /**< Shift value for CMU_HFXOAMPHIGH */
#define _CMU_STATUS_HFXOAMPHIGH_MASK                      0x1000000UL                                 /**< Bit mask for CMU_HFXOAMPHIGH */
#define _CMU_STATUS_HFXOAMPHIGH_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOAMPHIGH_DEFAULT                    (_CMU_STATUS_HFXOAMPHIGH_DEFAULT << 24)     /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOAMPLOW                             (0x1UL << 25)                               /**< HFXO amplitude tuning value too low */
#define _CMU_STATUS_HFXOAMPLOW_SHIFT                      25                                          /**< Shift value for CMU_HFXOAMPLOW */
#define _CMU_STATUS_HFXOAMPLOW_MASK                       0x2000000UL                                 /**< Bit mask for CMU_HFXOAMPLOW */
#define _CMU_STATUS_HFXOAMPLOW_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOAMPLOW_DEFAULT                     (_CMU_STATUS_HFXOAMPLOW_DEFAULT << 25)      /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOREGILOW                            (0x1UL << 26)                               /**< HFXO regulator shunt current too low */
#define _CMU_STATUS_HFXOREGILOW_SHIFT                     26                                          /**< Shift value for CMU_HFXOREGILOW */
#define _CMU_STATUS_HFXOREGILOW_MASK                      0x4000000UL                                 /**< Bit mask for CMU_HFXOREGILOW */
#define _CMU_STATUS_HFXOREGILOW_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOREGILOW_DEFAULT                    (_CMU_STATUS_HFXOREGILOW_DEFAULT << 26)     /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOPHASE                              (0x1UL << 27)                               /**< LFXO clock phase */
#define _CMU_STATUS_LFXOPHASE_SHIFT                       27                                          /**< Shift value for CMU_LFXOPHASE */
#define _CMU_STATUS_LFXOPHASE_MASK                        0x8000000UL                                 /**< Bit mask for CMU_LFXOPHASE */
#define _CMU_STATUS_LFXOPHASE_DEFAULT                     0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOPHASE_DEFAULT                      (_CMU_STATUS_LFXOPHASE_DEFAULT << 27)       /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOPHASE                             (0x1UL << 28)                               /**< LFRCO clock phase */
#define _CMU_STATUS_LFRCOPHASE_SHIFT                      28                                          /**< Shift value for CMU_LFRCOPHASE */
#define _CMU_STATUS_LFRCOPHASE_MASK                       0x10000000UL                                /**< Bit mask for CMU_LFRCOPHASE */
#define _CMU_STATUS_LFRCOPHASE_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOPHASE_DEFAULT                     (_CMU_STATUS_LFRCOPHASE_DEFAULT << 28)      /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_ULFRCOPHASE                            (0x1UL << 29)                               /**< ULFRCO clock phase */
#define _CMU_STATUS_ULFRCOPHASE_SHIFT                     29                                          /**< Shift value for CMU_ULFRCOPHASE */
#define _CMU_STATUS_ULFRCOPHASE_MASK                      0x20000000UL                                /**< Bit mask for CMU_ULFRCOPHASE */
#define _CMU_STATUS_ULFRCOPHASE_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_ULFRCOPHASE_DEFAULT                    (_CMU_STATUS_ULFRCOPHASE_DEFAULT << 29)     /**< Shifted mode DEFAULT for CMU_STATUS */

/* Bit fields for CMU HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_RESETVALUE                       0x00000001UL                               /**< Default value for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_MASK                             0x00000007UL                               /**< Mask for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_SHIFT                   0                                          /**< Shift value for CMU_SELECTED */
#define _CMU_HFCLKSTATUS_SELECTED_MASK                    0x7UL                                      /**< Bit mask for CMU_SELECTED */
#define _CMU_HFCLKSTATUS_SELECTED_DEFAULT                 0x00000001UL                               /**< Mode DEFAULT for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_HFRCO                   0x00000001UL                               /**< Mode HFRCO for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_HFXO                    0x00000002UL                               /**< Mode HFXO for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_LFRCO                   0x00000003UL                               /**< Mode LFRCO for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_LFXO                    0x00000004UL                               /**< Mode LFXO for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_HFRCODIV2               0x00000005UL                               /**< Mode HFRCODIV2 for CMU_HFCLKSTATUS */
#define _CMU_HFCLKSTATUS_SELECTED_CLKIN0                  0x00000007UL                               /**< Mode CLKIN0 for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_DEFAULT                  (_CMU_HFCLKSTATUS_SELECTED_DEFAULT << 0)   /**< Shifted mode DEFAULT for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_HFRCO                    (_CMU_HFCLKSTATUS_SELECTED_HFRCO << 0)     /**< Shifted mode HFRCO for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_HFXO                     (_CMU_HFCLKSTATUS_SELECTED_HFXO << 0)      /**< Shifted mode HFXO for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_LFRCO                    (_CMU_HFCLKSTATUS_SELECTED_LFRCO << 0)     /**< Shifted mode LFRCO for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_LFXO                     (_CMU_HFCLKSTATUS_SELECTED_LFXO << 0)      /**< Shifted mode LFXO for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_HFRCODIV2                (_CMU_HFCLKSTATUS_SELECTED_HFRCODIV2 << 0) /**< Shifted mode HFRCODIV2 for CMU_HFCLKSTATUS */
#define CMU_HFCLKSTATUS_SELECTED_CLKIN0                   (_CMU_HFCLKSTATUS_SELECTED_CLKIN0 << 0)    /**< Shifted mode CLKIN0 for CMU_HFCLKSTATUS */

/* Bit fields for CMU HFXOTRIMSTATUS */
#define _CMU_HFXOTRIMSTATUS_RESETVALUE                    0x00000500UL                                    /**< Default value for CMU_HFXOTRIMSTATUS */
#define _CMU_HFXOTRIMSTATUS_MASK                          0x000007FFUL                                    /**< Mask for CMU_HFXOTRIMSTATUS */
#define _CMU_HFXOTRIMSTATUS_IBTRIMXOCORE_SHIFT            0                                               /**< Shift value for CMU_IBTRIMXOCORE */
#define _CMU_HFXOTRIMSTATUS_IBTRIMXOCORE_MASK             0x7FUL                                          /**< Bit mask for CMU_IBTRIMXOCORE */
#define _CMU_HFXOTRIMSTATUS_IBTRIMXOCORE_DEFAULT          0x00000000UL                                    /**< Mode DEFAULT for CMU_HFXOTRIMSTATUS */
#define CMU_HFXOTRIMSTATUS_IBTRIMXOCORE_DEFAULT           (_CMU_HFXOTRIMSTATUS_IBTRIMXOCORE_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFXOTRIMSTATUS */
#define _CMU_HFXOTRIMSTATUS_REGISH_SHIFT                  7                                               /**< Shift value for CMU_REGISH */
#define _CMU_HFXOTRIMSTATUS_REGISH_MASK                   0x780UL                                         /**< Bit mask for CMU_REGISH */
#define _CMU_HFXOTRIMSTATUS_REGISH_DEFAULT                0x0000000AUL                                    /**< Mode DEFAULT for CMU_HFXOTRIMSTATUS */
#define CMU_HFXOTRIMSTATUS_REGISH_DEFAULT                 (_CMU_HFXOTRIMSTATUS_REGISH_DEFAULT << 7)       /**< Shifted mode DEFAULT for CMU_HFXOTRIMSTATUS */

/* Bit fields for CMU IF */
#define _CMU_IF_RESETVALUE                                0x00000001UL                             /**< Default value for CMU_IF */
#define _CMU_IF_MASK                                      0xB803FF7FUL                             /**< Mask for CMU_IF */
#define CMU_IF_HFRCORDY                                   (0x1UL << 0)                             /**< HFRCO Ready Interrupt Flag */
#define _CMU_IF_HFRCORDY_SHIFT                            0                                        /**< Shift value for CMU_HFRCORDY */
#define _CMU_IF_HFRCORDY_MASK                             0x1UL                                    /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IF_HFRCORDY_DEFAULT                          0x00000001UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFRCORDY_DEFAULT                           (_CMU_IF_HFRCORDY_DEFAULT << 0)          /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXORDY                                    (0x1UL << 1)                             /**< HFXO Ready Interrupt Flag */
#define _CMU_IF_HFXORDY_SHIFT                             1                                        /**< Shift value for CMU_HFXORDY */
#define _CMU_IF_HFXORDY_MASK                              0x2UL                                    /**< Bit mask for CMU_HFXORDY */
#define _CMU_IF_HFXORDY_DEFAULT                           0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXORDY_DEFAULT                            (_CMU_IF_HFXORDY_DEFAULT << 1)           /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCORDY                                   (0x1UL << 2)                             /**< LFRCO Ready Interrupt Flag */
#define _CMU_IF_LFRCORDY_SHIFT                            2                                        /**< Shift value for CMU_LFRCORDY */
#define _CMU_IF_LFRCORDY_MASK                             0x4UL                                    /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IF_LFRCORDY_DEFAULT                          0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCORDY_DEFAULT                           (_CMU_IF_LFRCORDY_DEFAULT << 2)          /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFXORDY                                    (0x1UL << 3)                             /**< LFXO Ready Interrupt Flag */
#define _CMU_IF_LFXORDY_SHIFT                             3                                        /**< Shift value for CMU_LFXORDY */
#define _CMU_IF_LFXORDY_MASK                              0x8UL                                    /**< Bit mask for CMU_LFXORDY */
#define _CMU_IF_LFXORDY_DEFAULT                           0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFXORDY_DEFAULT                            (_CMU_IF_LFXORDY_DEFAULT << 3)           /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_AUXHFRCORDY                                (0x1UL << 4)                             /**< AUXHFRCO Ready Interrupt Flag */
#define _CMU_IF_AUXHFRCORDY_SHIFT                         4                                        /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IF_AUXHFRCORDY_MASK                          0x10UL                                   /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IF_AUXHFRCORDY_DEFAULT                       0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_AUXHFRCORDY_DEFAULT                        (_CMU_IF_AUXHFRCORDY_DEFAULT << 4)       /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_CALRDY                                     (0x1UL << 5)                             /**< Calibration Ready Interrupt Flag */
#define _CMU_IF_CALRDY_SHIFT                              5                                        /**< Shift value for CMU_CALRDY */
#define _CMU_IF_CALRDY_MASK                               0x20UL                                   /**< Bit mask for CMU_CALRDY */
#define _CMU_IF_CALRDY_DEFAULT                            0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_CALRDY_DEFAULT                             (_CMU_IF_CALRDY_DEFAULT << 5)            /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_CALOF                                      (0x1UL << 6)                             /**< Calibration Overflow Interrupt Flag */
#define _CMU_IF_CALOF_SHIFT                               6                                        /**< Shift value for CMU_CALOF */
#define _CMU_IF_CALOF_MASK                                0x40UL                                   /**< Bit mask for CMU_CALOF */
#define _CMU_IF_CALOF_DEFAULT                             0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_CALOF_DEFAULT                              (_CMU_IF_CALOF_DEFAULT << 6)             /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXODISERR                                 (0x1UL << 8)                             /**< HFXO Disable Error Interrupt Flag */
#define _CMU_IF_HFXODISERR_SHIFT                          8                                        /**< Shift value for CMU_HFXODISERR */
#define _CMU_IF_HFXODISERR_MASK                           0x100UL                                  /**< Bit mask for CMU_HFXODISERR */
#define _CMU_IF_HFXODISERR_DEFAULT                        0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXODISERR_DEFAULT                         (_CMU_IF_HFXODISERR_DEFAULT << 8)        /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOAUTOSW                                 (0x1UL << 9)                             /**< HFXO Automatic Switch Interrupt Flag */
#define _CMU_IF_HFXOAUTOSW_SHIFT                          9                                        /**< Shift value for CMU_HFXOAUTOSW */
#define _CMU_IF_HFXOAUTOSW_MASK                           0x200UL                                  /**< Bit mask for CMU_HFXOAUTOSW */
#define _CMU_IF_HFXOAUTOSW_DEFAULT                        0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOAUTOSW_DEFAULT                         (_CMU_IF_HFXOAUTOSW_DEFAULT << 9)        /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOPEAKDETERR                             (0x1UL << 10)                            /**< HFXO Automatic Peak Detection Error Interrupt Flag */
#define _CMU_IF_HFXOPEAKDETERR_SHIFT                      10                                       /**< Shift value for CMU_HFXOPEAKDETERR */
#define _CMU_IF_HFXOPEAKDETERR_MASK                       0x400UL                                  /**< Bit mask for CMU_HFXOPEAKDETERR */
#define _CMU_IF_HFXOPEAKDETERR_DEFAULT                    0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOPEAKDETERR_DEFAULT                     (_CMU_IF_HFXOPEAKDETERR_DEFAULT << 10)   /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOPEAKDETRDY                             (0x1UL << 11)                            /**< HFXO Automatic Peak Detection Ready Interrupt Flag */
#define _CMU_IF_HFXOPEAKDETRDY_SHIFT                      11                                       /**< Shift value for CMU_HFXOPEAKDETRDY */
#define _CMU_IF_HFXOPEAKDETRDY_MASK                       0x800UL                                  /**< Bit mask for CMU_HFXOPEAKDETRDY */
#define _CMU_IF_HFXOPEAKDETRDY_DEFAULT                    0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOPEAKDETRDY_DEFAULT                     (_CMU_IF_HFXOPEAKDETRDY_DEFAULT << 11)   /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOSHUNTOPTRDY                            (0x1UL << 12)                            /**< HFXO Automatic Shunt Current Optimization Ready Interrupt Flag */
#define _CMU_IF_HFXOSHUNTOPTRDY_SHIFT                     12                                       /**< Shift value for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IF_HFXOSHUNTOPTRDY_MASK                      0x1000UL                                 /**< Bit mask for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IF_HFXOSHUNTOPTRDY_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXOSHUNTOPTRDY_DEFAULT                    (_CMU_IF_HFXOSHUNTOPTRDY_DEFAULT << 12)  /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFRCODIS                                   (0x1UL << 13)                            /**< HFRCO Disable Interrupt Flag */
#define _CMU_IF_HFRCODIS_SHIFT                            13                                       /**< Shift value for CMU_HFRCODIS */
#define _CMU_IF_HFRCODIS_MASK                             0x2000UL                                 /**< Bit mask for CMU_HFRCODIS */
#define _CMU_IF_HFRCODIS_DEFAULT                          0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFRCODIS_DEFAULT                           (_CMU_IF_HFRCODIS_DEFAULT << 13)         /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFTIMEOUTERR                               (0x1UL << 14)                            /**< Low Frequency Timeout Error Interrupt Flag */
#define _CMU_IF_LFTIMEOUTERR_SHIFT                        14                                       /**< Shift value for CMU_LFTIMEOUTERR */
#define _CMU_IF_LFTIMEOUTERR_MASK                         0x4000UL                                 /**< Bit mask for CMU_LFTIMEOUTERR */
#define _CMU_IF_LFTIMEOUTERR_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFTIMEOUTERR_DEFAULT                       (_CMU_IF_LFTIMEOUTERR_DEFAULT << 14)     /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_DPLLRDY                                    (0x1UL << 15)                            /**< DPLL Lock Interrupt Flag */
#define _CMU_IF_DPLLRDY_SHIFT                             15                                       /**< Shift value for CMU_DPLLRDY */
#define _CMU_IF_DPLLRDY_MASK                              0x8000UL                                 /**< Bit mask for CMU_DPLLRDY */
#define _CMU_IF_DPLLRDY_DEFAULT                           0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_DPLLRDY_DEFAULT                            (_CMU_IF_DPLLRDY_DEFAULT << 15)          /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_DPLLLOCKFAILLOW                            (0x1UL << 16)                            /**< DPLL Lock Failure Low Interrupt Flag */
#define _CMU_IF_DPLLLOCKFAILLOW_SHIFT                     16                                       /**< Shift value for CMU_DPLLLOCKFAILLOW */
#define _CMU_IF_DPLLLOCKFAILLOW_MASK                      0x10000UL                                /**< Bit mask for CMU_DPLLLOCKFAILLOW */
#define _CMU_IF_DPLLLOCKFAILLOW_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_DPLLLOCKFAILLOW_DEFAULT                    (_CMU_IF_DPLLLOCKFAILLOW_DEFAULT << 16)  /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_DPLLLOCKFAILHIGH                           (0x1UL << 17)                            /**< DPLL Lock Failure Low Interrupt Flag */
#define _CMU_IF_DPLLLOCKFAILHIGH_SHIFT                    17                                       /**< Shift value for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IF_DPLLLOCKFAILHIGH_MASK                     0x20000UL                                /**< Bit mask for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IF_DPLLLOCKFAILHIGH_DEFAULT                  0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_DPLLLOCKFAILHIGH_DEFAULT                   (_CMU_IF_DPLLLOCKFAILHIGH_DEFAULT << 17) /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFXOEDGE                                   (0x1UL << 27)                            /**< LFXO Clock Edge Detected Interrupt Flag */
#define _CMU_IF_LFXOEDGE_SHIFT                            27                                       /**< Shift value for CMU_LFXOEDGE */
#define _CMU_IF_LFXOEDGE_MASK                             0x8000000UL                              /**< Bit mask for CMU_LFXOEDGE */
#define _CMU_IF_LFXOEDGE_DEFAULT                          0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFXOEDGE_DEFAULT                           (_CMU_IF_LFXOEDGE_DEFAULT << 27)         /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCOEDGE                                  (0x1UL << 28)                            /**< LFRCO Clock Edge Detected Interrupt Flag */
#define _CMU_IF_LFRCOEDGE_SHIFT                           28                                       /**< Shift value for CMU_LFRCOEDGE */
#define _CMU_IF_LFRCOEDGE_MASK                            0x10000000UL                             /**< Bit mask for CMU_LFRCOEDGE */
#define _CMU_IF_LFRCOEDGE_DEFAULT                         0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCOEDGE_DEFAULT                          (_CMU_IF_LFRCOEDGE_DEFAULT << 28)        /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_ULFRCOEDGE                                 (0x1UL << 29)                            /**< ULFRCO Clock Edge Detected Interrupt Flag */
#define _CMU_IF_ULFRCOEDGE_SHIFT                          29                                       /**< Shift value for CMU_ULFRCOEDGE */
#define _CMU_IF_ULFRCOEDGE_MASK                           0x20000000UL                             /**< Bit mask for CMU_ULFRCOEDGE */
#define _CMU_IF_ULFRCOEDGE_DEFAULT                        0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_ULFRCOEDGE_DEFAULT                         (_CMU_IF_ULFRCOEDGE_DEFAULT << 29)       /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_CMUERR                                     (0x1UL << 31)                            /**< CMU Error Interrupt Flag */
#define _CMU_IF_CMUERR_SHIFT                              31                                       /**< Shift value for CMU_CMUERR */
#define _CMU_IF_CMUERR_MASK                               0x80000000UL                             /**< Bit mask for CMU_CMUERR */
#define _CMU_IF_CMUERR_DEFAULT                            0x00000000UL                             /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_CMUERR_DEFAULT                             (_CMU_IF_CMUERR_DEFAULT << 31)           /**< Shifted mode DEFAULT for CMU_IF */

/* Bit fields for CMU IFS */
#define _CMU_IFS_RESETVALUE                               0x00000000UL                              /**< Default value for CMU_IFS */
#define _CMU_IFS_MASK                                     0xB803FF7FUL                              /**< Mask for CMU_IFS */
#define CMU_IFS_HFRCORDY                                  (0x1UL << 0)                              /**< Set HFRCORDY Interrupt Flag */
#define _CMU_IFS_HFRCORDY_SHIFT                           0                                         /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFS_HFRCORDY_MASK                            0x1UL                                     /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IFS_HFRCORDY_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFRCORDY_DEFAULT                          (_CMU_IFS_HFRCORDY_DEFAULT << 0)          /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXORDY                                   (0x1UL << 1)                              /**< Set HFXORDY Interrupt Flag */
#define _CMU_IFS_HFXORDY_SHIFT                            1                                         /**< Shift value for CMU_HFXORDY */
#define _CMU_IFS_HFXORDY_MASK                             0x2UL                                     /**< Bit mask for CMU_HFXORDY */
#define _CMU_IFS_HFXORDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXORDY_DEFAULT                           (_CMU_IFS_HFXORDY_DEFAULT << 1)           /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCORDY                                  (0x1UL << 2)                              /**< Set LFRCORDY Interrupt Flag */
#define _CMU_IFS_LFRCORDY_SHIFT                           2                                         /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFS_LFRCORDY_MASK                            0x4UL                                     /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IFS_LFRCORDY_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCORDY_DEFAULT                          (_CMU_IFS_LFRCORDY_DEFAULT << 2)          /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXORDY                                   (0x1UL << 3)                              /**< Set LFXORDY Interrupt Flag */
#define _CMU_IFS_LFXORDY_SHIFT                            3                                         /**< Shift value for CMU_LFXORDY */
#define _CMU_IFS_LFXORDY_MASK                             0x8UL                                     /**< Bit mask for CMU_LFXORDY */
#define _CMU_IFS_LFXORDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXORDY_DEFAULT                           (_CMU_IFS_LFXORDY_DEFAULT << 3)           /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_AUXHFRCORDY                               (0x1UL << 4)                              /**< Set AUXHFRCORDY Interrupt Flag */
#define _CMU_IFS_AUXHFRCORDY_SHIFT                        4                                         /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFS_AUXHFRCORDY_MASK                         0x10UL                                    /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IFS_AUXHFRCORDY_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_AUXHFRCORDY_DEFAULT                       (_CMU_IFS_AUXHFRCORDY_DEFAULT << 4)       /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALRDY                                    (0x1UL << 5)                              /**< Set CALRDY Interrupt Flag */
#define _CMU_IFS_CALRDY_SHIFT                             5                                         /**< Shift value for CMU_CALRDY */
#define _CMU_IFS_CALRDY_MASK                              0x20UL                                    /**< Bit mask for CMU_CALRDY */
#define _CMU_IFS_CALRDY_DEFAULT                           0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALRDY_DEFAULT                            (_CMU_IFS_CALRDY_DEFAULT << 5)            /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALOF                                     (0x1UL << 6)                              /**< Set CALOF Interrupt Flag */
#define _CMU_IFS_CALOF_SHIFT                              6                                         /**< Shift value for CMU_CALOF */
#define _CMU_IFS_CALOF_MASK                               0x40UL                                    /**< Bit mask for CMU_CALOF */
#define _CMU_IFS_CALOF_DEFAULT                            0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALOF_DEFAULT                             (_CMU_IFS_CALOF_DEFAULT << 6)             /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXODISERR                                (0x1UL << 8)                              /**< Set HFXODISERR Interrupt Flag */
#define _CMU_IFS_HFXODISERR_SHIFT                         8                                         /**< Shift value for CMU_HFXODISERR */
#define _CMU_IFS_HFXODISERR_MASK                          0x100UL                                   /**< Bit mask for CMU_HFXODISERR */
#define _CMU_IFS_HFXODISERR_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXODISERR_DEFAULT                        (_CMU_IFS_HFXODISERR_DEFAULT << 8)        /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOAUTOSW                                (0x1UL << 9)                              /**< Set HFXOAUTOSW Interrupt Flag */
#define _CMU_IFS_HFXOAUTOSW_SHIFT                         9                                         /**< Shift value for CMU_HFXOAUTOSW */
#define _CMU_IFS_HFXOAUTOSW_MASK                          0x200UL                                   /**< Bit mask for CMU_HFXOAUTOSW */
#define _CMU_IFS_HFXOAUTOSW_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOAUTOSW_DEFAULT                        (_CMU_IFS_HFXOAUTOSW_DEFAULT << 9)        /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOPEAKDETERR                            (0x1UL << 10)                             /**< Set HFXOPEAKDETERR Interrupt Flag */
#define _CMU_IFS_HFXOPEAKDETERR_SHIFT                     10                                        /**< Shift value for CMU_HFXOPEAKDETERR */
#define _CMU_IFS_HFXOPEAKDETERR_MASK                      0x400UL                                   /**< Bit mask for CMU_HFXOPEAKDETERR */
#define _CMU_IFS_HFXOPEAKDETERR_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOPEAKDETERR_DEFAULT                    (_CMU_IFS_HFXOPEAKDETERR_DEFAULT << 10)   /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOPEAKDETRDY                            (0x1UL << 11)                             /**< Set HFXOPEAKDETRDY Interrupt Flag */
#define _CMU_IFS_HFXOPEAKDETRDY_SHIFT                     11                                        /**< Shift value for CMU_HFXOPEAKDETRDY */
#define _CMU_IFS_HFXOPEAKDETRDY_MASK                      0x800UL                                   /**< Bit mask for CMU_HFXOPEAKDETRDY */
#define _CMU_IFS_HFXOPEAKDETRDY_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOPEAKDETRDY_DEFAULT                    (_CMU_IFS_HFXOPEAKDETRDY_DEFAULT << 11)   /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOSHUNTOPTRDY                           (0x1UL << 12)                             /**< Set HFXOSHUNTOPTRDY Interrupt Flag */
#define _CMU_IFS_HFXOSHUNTOPTRDY_SHIFT                    12                                        /**< Shift value for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IFS_HFXOSHUNTOPTRDY_MASK                     0x1000UL                                  /**< Bit mask for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IFS_HFXOSHUNTOPTRDY_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXOSHUNTOPTRDY_DEFAULT                   (_CMU_IFS_HFXOSHUNTOPTRDY_DEFAULT << 12)  /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFRCODIS                                  (0x1UL << 13)                             /**< Set HFRCODIS Interrupt Flag */
#define _CMU_IFS_HFRCODIS_SHIFT                           13                                        /**< Shift value for CMU_HFRCODIS */
#define _CMU_IFS_HFRCODIS_MASK                            0x2000UL                                  /**< Bit mask for CMU_HFRCODIS */
#define _CMU_IFS_HFRCODIS_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFRCODIS_DEFAULT                          (_CMU_IFS_HFRCODIS_DEFAULT << 13)         /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFTIMEOUTERR                              (0x1UL << 14)                             /**< Set LFTIMEOUTERR Interrupt Flag */
#define _CMU_IFS_LFTIMEOUTERR_SHIFT                       14                                        /**< Shift value for CMU_LFTIMEOUTERR */
#define _CMU_IFS_LFTIMEOUTERR_MASK                        0x4000UL                                  /**< Bit mask for CMU_LFTIMEOUTERR */
#define _CMU_IFS_LFTIMEOUTERR_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFTIMEOUTERR_DEFAULT                      (_CMU_IFS_LFTIMEOUTERR_DEFAULT << 14)     /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_DPLLRDY                                   (0x1UL << 15)                             /**< Set DPLLRDY Interrupt Flag */
#define _CMU_IFS_DPLLRDY_SHIFT                            15                                        /**< Shift value for CMU_DPLLRDY */
#define _CMU_IFS_DPLLRDY_MASK                             0x8000UL                                  /**< Bit mask for CMU_DPLLRDY */
#define _CMU_IFS_DPLLRDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_DPLLRDY_DEFAULT                           (_CMU_IFS_DPLLRDY_DEFAULT << 15)          /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_DPLLLOCKFAILLOW                           (0x1UL << 16)                             /**< Set DPLLLOCKFAILLOW Interrupt Flag */
#define _CMU_IFS_DPLLLOCKFAILLOW_SHIFT                    16                                        /**< Shift value for CMU_DPLLLOCKFAILLOW */
#define _CMU_IFS_DPLLLOCKFAILLOW_MASK                     0x10000UL                                 /**< Bit mask for CMU_DPLLLOCKFAILLOW */
#define _CMU_IFS_DPLLLOCKFAILLOW_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_DPLLLOCKFAILLOW_DEFAULT                   (_CMU_IFS_DPLLLOCKFAILLOW_DEFAULT << 16)  /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_DPLLLOCKFAILHIGH                          (0x1UL << 17)                             /**< Set DPLLLOCKFAILHIGH Interrupt Flag */
#define _CMU_IFS_DPLLLOCKFAILHIGH_SHIFT                   17                                        /**< Shift value for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IFS_DPLLLOCKFAILHIGH_MASK                    0x20000UL                                 /**< Bit mask for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IFS_DPLLLOCKFAILHIGH_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_DPLLLOCKFAILHIGH_DEFAULT                  (_CMU_IFS_DPLLLOCKFAILHIGH_DEFAULT << 17) /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXOEDGE                                  (0x1UL << 27)                             /**< Set LFXOEDGE Interrupt Flag */
#define _CMU_IFS_LFXOEDGE_SHIFT                           27                                        /**< Shift value for CMU_LFXOEDGE */
#define _CMU_IFS_LFXOEDGE_MASK                            0x8000000UL                               /**< Bit mask for CMU_LFXOEDGE */
#define _CMU_IFS_LFXOEDGE_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXOEDGE_DEFAULT                          (_CMU_IFS_LFXOEDGE_DEFAULT << 27)         /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCOEDGE                                 (0x1UL << 28)                             /**< Set LFRCOEDGE Interrupt Flag */
#define _CMU_IFS_LFRCOEDGE_SHIFT                          28                                        /**< Shift value for CMU_LFRCOEDGE */
#define _CMU_IFS_LFRCOEDGE_MASK                           0x10000000UL                              /**< Bit mask for CMU_LFRCOEDGE */
#define _CMU_IFS_LFRCOEDGE_DEFAULT                        0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCOEDGE_DEFAULT                         (_CMU_IFS_LFRCOEDGE_DEFAULT << 28)        /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_ULFRCOEDGE                                (0x1UL << 29)                             /**< Set ULFRCOEDGE Interrupt Flag */
#define _CMU_IFS_ULFRCOEDGE_SHIFT                         29                                        /**< Shift value for CMU_ULFRCOEDGE */
#define _CMU_IFS_ULFRCOEDGE_MASK                          0x20000000UL                              /**< Bit mask for CMU_ULFRCOEDGE */
#define _CMU_IFS_ULFRCOEDGE_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_ULFRCOEDGE_DEFAULT                        (_CMU_IFS_ULFRCOEDGE_DEFAULT << 29)       /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_CMUERR                                    (0x1UL << 31)                             /**< Set CMUERR Interrupt Flag */
#define _CMU_IFS_CMUERR_SHIFT                             31                                        /**< Shift value for CMU_CMUERR */
#define _CMU_IFS_CMUERR_MASK                              0x80000000UL                              /**< Bit mask for CMU_CMUERR */
#define _CMU_IFS_CMUERR_DEFAULT                           0x00000000UL                              /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_CMUERR_DEFAULT                            (_CMU_IFS_CMUERR_DEFAULT << 31)           /**< Shifted mode DEFAULT for CMU_IFS */

/* Bit fields for CMU IFC */
#define _CMU_IFC_RESETVALUE                               0x00000000UL                              /**< Default value for CMU_IFC */
#define _CMU_IFC_MASK                                     0xB803FF7FUL                              /**< Mask for CMU_IFC */
#define CMU_IFC_HFRCORDY                                  (0x1UL << 0)                              /**< Clear HFRCORDY Interrupt Flag */
#define _CMU_IFC_HFRCORDY_SHIFT                           0                                         /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFC_HFRCORDY_MASK                            0x1UL                                     /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IFC_HFRCORDY_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFRCORDY_DEFAULT                          (_CMU_IFC_HFRCORDY_DEFAULT << 0)          /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXORDY                                   (0x1UL << 1)                              /**< Clear HFXORDY Interrupt Flag */
#define _CMU_IFC_HFXORDY_SHIFT                            1                                         /**< Shift value for CMU_HFXORDY */
#define _CMU_IFC_HFXORDY_MASK                             0x2UL                                     /**< Bit mask for CMU_HFXORDY */
#define _CMU_IFC_HFXORDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXORDY_DEFAULT                           (_CMU_IFC_HFXORDY_DEFAULT << 1)           /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCORDY                                  (0x1UL << 2)                              /**< Clear LFRCORDY Interrupt Flag */
#define _CMU_IFC_LFRCORDY_SHIFT                           2                                         /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFC_LFRCORDY_MASK                            0x4UL                                     /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IFC_LFRCORDY_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCORDY_DEFAULT                          (_CMU_IFC_LFRCORDY_DEFAULT << 2)          /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXORDY                                   (0x1UL << 3)                              /**< Clear LFXORDY Interrupt Flag */
#define _CMU_IFC_LFXORDY_SHIFT                            3                                         /**< Shift value for CMU_LFXORDY */
#define _CMU_IFC_LFXORDY_MASK                             0x8UL                                     /**< Bit mask for CMU_LFXORDY */
#define _CMU_IFC_LFXORDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXORDY_DEFAULT                           (_CMU_IFC_LFXORDY_DEFAULT << 3)           /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_AUXHFRCORDY                               (0x1UL << 4)                              /**< Clear AUXHFRCORDY Interrupt Flag */
#define _CMU_IFC_AUXHFRCORDY_SHIFT                        4                                         /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFC_AUXHFRCORDY_MASK                         0x10UL                                    /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IFC_AUXHFRCORDY_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_AUXHFRCORDY_DEFAULT                       (_CMU_IFC_AUXHFRCORDY_DEFAULT << 4)       /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALRDY                                    (0x1UL << 5)                              /**< Clear CALRDY Interrupt Flag */
#define _CMU_IFC_CALRDY_SHIFT                             5                                         /**< Shift value for CMU_CALRDY */
#define _CMU_IFC_CALRDY_MASK                              0x20UL                                    /**< Bit mask for CMU_CALRDY */
#define _CMU_IFC_CALRDY_DEFAULT                           0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALRDY_DEFAULT                            (_CMU_IFC_CALRDY_DEFAULT << 5)            /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALOF                                     (0x1UL << 6)                              /**< Clear CALOF Interrupt Flag */
#define _CMU_IFC_CALOF_SHIFT                              6                                         /**< Shift value for CMU_CALOF */
#define _CMU_IFC_CALOF_MASK                               0x40UL                                    /**< Bit mask for CMU_CALOF */
#define _CMU_IFC_CALOF_DEFAULT                            0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALOF_DEFAULT                             (_CMU_IFC_CALOF_DEFAULT << 6)             /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXODISERR                                (0x1UL << 8)                              /**< Clear HFXODISERR Interrupt Flag */
#define _CMU_IFC_HFXODISERR_SHIFT                         8                                         /**< Shift value for CMU_HFXODISERR */
#define _CMU_IFC_HFXODISERR_MASK                          0x100UL                                   /**< Bit mask for CMU_HFXODISERR */
#define _CMU_IFC_HFXODISERR_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXODISERR_DEFAULT                        (_CMU_IFC_HFXODISERR_DEFAULT << 8)        /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOAUTOSW                                (0x1UL << 9)                              /**< Clear HFXOAUTOSW Interrupt Flag */
#define _CMU_IFC_HFXOAUTOSW_SHIFT                         9                                         /**< Shift value for CMU_HFXOAUTOSW */
#define _CMU_IFC_HFXOAUTOSW_MASK                          0x200UL                                   /**< Bit mask for CMU_HFXOAUTOSW */
#define _CMU_IFC_HFXOAUTOSW_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOAUTOSW_DEFAULT                        (_CMU_IFC_HFXOAUTOSW_DEFAULT << 9)        /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOPEAKDETERR                            (0x1UL << 10)                             /**< Clear HFXOPEAKDETERR Interrupt Flag */
#define _CMU_IFC_HFXOPEAKDETERR_SHIFT                     10                                        /**< Shift value for CMU_HFXOPEAKDETERR */
#define _CMU_IFC_HFXOPEAKDETERR_MASK                      0x400UL                                   /**< Bit mask for CMU_HFXOPEAKDETERR */
#define _CMU_IFC_HFXOPEAKDETERR_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOPEAKDETERR_DEFAULT                    (_CMU_IFC_HFXOPEAKDETERR_DEFAULT << 10)   /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOPEAKDETRDY                            (0x1UL << 11)                             /**< Clear HFXOPEAKDETRDY Interrupt Flag */
#define _CMU_IFC_HFXOPEAKDETRDY_SHIFT                     11                                        /**< Shift value for CMU_HFXOPEAKDETRDY */
#define _CMU_IFC_HFXOPEAKDETRDY_MASK                      0x800UL                                   /**< Bit mask for CMU_HFXOPEAKDETRDY */
#define _CMU_IFC_HFXOPEAKDETRDY_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOPEAKDETRDY_DEFAULT                    (_CMU_IFC_HFXOPEAKDETRDY_DEFAULT << 11)   /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOSHUNTOPTRDY                           (0x1UL << 12)                             /**< Clear HFXOSHUNTOPTRDY Interrupt Flag */
#define _CMU_IFC_HFXOSHUNTOPTRDY_SHIFT                    12                                        /**< Shift value for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IFC_HFXOSHUNTOPTRDY_MASK                     0x1000UL                                  /**< Bit mask for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IFC_HFXOSHUNTOPTRDY_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXOSHUNTOPTRDY_DEFAULT                   (_CMU_IFC_HFXOSHUNTOPTRDY_DEFAULT << 12)  /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFRCODIS                                  (0x1UL << 13)                             /**< Clear HFRCODIS Interrupt Flag */
#define _CMU_IFC_HFRCODIS_SHIFT                           13                                        /**< Shift value for CMU_HFRCODIS */
#define _CMU_IFC_HFRCODIS_MASK                            0x2000UL                                  /**< Bit mask for CMU_HFRCODIS */
#define _CMU_IFC_HFRCODIS_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFRCODIS_DEFAULT                          (_CMU_IFC_HFRCODIS_DEFAULT << 13)         /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFTIMEOUTERR                              (0x1UL << 14)                             /**< Clear LFTIMEOUTERR Interrupt Flag */
#define _CMU_IFC_LFTIMEOUTERR_SHIFT                       14                                        /**< Shift value for CMU_LFTIMEOUTERR */
#define _CMU_IFC_LFTIMEOUTERR_MASK                        0x4000UL                                  /**< Bit mask for CMU_LFTIMEOUTERR */
#define _CMU_IFC_LFTIMEOUTERR_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFTIMEOUTERR_DEFAULT                      (_CMU_IFC_LFTIMEOUTERR_DEFAULT << 14)     /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_DPLLRDY                                   (0x1UL << 15)                             /**< Clear DPLLRDY Interrupt Flag */
#define _CMU_IFC_DPLLRDY_SHIFT                            15                                        /**< Shift value for CMU_DPLLRDY */
#define _CMU_IFC_DPLLRDY_MASK                             0x8000UL                                  /**< Bit mask for CMU_DPLLRDY */
#define _CMU_IFC_DPLLRDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_DPLLRDY_DEFAULT                           (_CMU_IFC_DPLLRDY_DEFAULT << 15)          /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_DPLLLOCKFAILLOW                           (0x1UL << 16)                             /**< Clear DPLLLOCKFAILLOW Interrupt Flag */
#define _CMU_IFC_DPLLLOCKFAILLOW_SHIFT                    16                                        /**< Shift value for CMU_DPLLLOCKFAILLOW */
#define _CMU_IFC_DPLLLOCKFAILLOW_MASK                     0x10000UL                                 /**< Bit mask for CMU_DPLLLOCKFAILLOW */
#define _CMU_IFC_DPLLLOCKFAILLOW_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_DPLLLOCKFAILLOW_DEFAULT                   (_CMU_IFC_DPLLLOCKFAILLOW_DEFAULT << 16)  /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_DPLLLOCKFAILHIGH                          (0x1UL << 17)                             /**< Clear DPLLLOCKFAILHIGH Interrupt Flag */
#define _CMU_IFC_DPLLLOCKFAILHIGH_SHIFT                   17                                        /**< Shift value for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IFC_DPLLLOCKFAILHIGH_MASK                    0x20000UL                                 /**< Bit mask for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IFC_DPLLLOCKFAILHIGH_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_DPLLLOCKFAILHIGH_DEFAULT                  (_CMU_IFC_DPLLLOCKFAILHIGH_DEFAULT << 17) /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXOEDGE                                  (0x1UL << 27)                             /**< Clear LFXOEDGE Interrupt Flag */
#define _CMU_IFC_LFXOEDGE_SHIFT                           27                                        /**< Shift value for CMU_LFXOEDGE */
#define _CMU_IFC_LFXOEDGE_MASK                            0x8000000UL                               /**< Bit mask for CMU_LFXOEDGE */
#define _CMU_IFC_LFXOEDGE_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXOEDGE_DEFAULT                          (_CMU_IFC_LFXOEDGE_DEFAULT << 27)         /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCOEDGE                                 (0x1UL << 28)                             /**< Clear LFRCOEDGE Interrupt Flag */
#define _CMU_IFC_LFRCOEDGE_SHIFT                          28                                        /**< Shift value for CMU_LFRCOEDGE */
#define _CMU_IFC_LFRCOEDGE_MASK                           0x10000000UL                              /**< Bit mask for CMU_LFRCOEDGE */
#define _CMU_IFC_LFRCOEDGE_DEFAULT                        0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCOEDGE_DEFAULT                         (_CMU_IFC_LFRCOEDGE_DEFAULT << 28)        /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_ULFRCOEDGE                                (0x1UL << 29)                             /**< Clear ULFRCOEDGE Interrupt Flag */
#define _CMU_IFC_ULFRCOEDGE_SHIFT                         29                                        /**< Shift value for CMU_ULFRCOEDGE */
#define _CMU_IFC_ULFRCOEDGE_MASK                          0x20000000UL                              /**< Bit mask for CMU_ULFRCOEDGE */
#define _CMU_IFC_ULFRCOEDGE_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_ULFRCOEDGE_DEFAULT                        (_CMU_IFC_ULFRCOEDGE_DEFAULT << 29)       /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_CMUERR                                    (0x1UL << 31)                             /**< Clear CMUERR Interrupt Flag */
#define _CMU_IFC_CMUERR_SHIFT                             31                                        /**< Shift value for CMU_CMUERR */
#define _CMU_IFC_CMUERR_MASK                              0x80000000UL                              /**< Bit mask for CMU_CMUERR */
#define _CMU_IFC_CMUERR_DEFAULT                           0x00000000UL                              /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_CMUERR_DEFAULT                            (_CMU_IFC_CMUERR_DEFAULT << 31)           /**< Shifted mode DEFAULT for CMU_IFC */

/* Bit fields for CMU IEN */
#define _CMU_IEN_RESETVALUE                               0x00000000UL                              /**< Default value for CMU_IEN */
#define _CMU_IEN_MASK                                     0xB803FF7FUL                              /**< Mask for CMU_IEN */
#define CMU_IEN_HFRCORDY                                  (0x1UL << 0)                              /**< HFRCORDY Interrupt Enable */
#define _CMU_IEN_HFRCORDY_SHIFT                           0                                         /**< Shift value for CMU_HFRCORDY */
#define _CMU_IEN_HFRCORDY_MASK                            0x1UL                                     /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IEN_HFRCORDY_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFRCORDY_DEFAULT                          (_CMU_IEN_HFRCORDY_DEFAULT << 0)          /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXORDY                                   (0x1UL << 1)                              /**< HFXORDY Interrupt Enable */
#define _CMU_IEN_HFXORDY_SHIFT                            1                                         /**< Shift value for CMU_HFXORDY */
#define _CMU_IEN_HFXORDY_MASK                             0x2UL                                     /**< Bit mask for CMU_HFXORDY */
#define _CMU_IEN_HFXORDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXORDY_DEFAULT                           (_CMU_IEN_HFXORDY_DEFAULT << 1)           /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCORDY                                  (0x1UL << 2)                              /**< LFRCORDY Interrupt Enable */
#define _CMU_IEN_LFRCORDY_SHIFT                           2                                         /**< Shift value for CMU_LFRCORDY */
#define _CMU_IEN_LFRCORDY_MASK                            0x4UL                                     /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IEN_LFRCORDY_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCORDY_DEFAULT                          (_CMU_IEN_LFRCORDY_DEFAULT << 2)          /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXORDY                                   (0x1UL << 3)                              /**< LFXORDY Interrupt Enable */
#define _CMU_IEN_LFXORDY_SHIFT                            3                                         /**< Shift value for CMU_LFXORDY */
#define _CMU_IEN_LFXORDY_MASK                             0x8UL                                     /**< Bit mask for CMU_LFXORDY */
#define _CMU_IEN_LFXORDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXORDY_DEFAULT                           (_CMU_IEN_LFXORDY_DEFAULT << 3)           /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_AUXHFRCORDY                               (0x1UL << 4)                              /**< AUXHFRCORDY Interrupt Enable */
#define _CMU_IEN_AUXHFRCORDY_SHIFT                        4                                         /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IEN_AUXHFRCORDY_MASK                         0x10UL                                    /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IEN_AUXHFRCORDY_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_AUXHFRCORDY_DEFAULT                       (_CMU_IEN_AUXHFRCORDY_DEFAULT << 4)       /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALRDY                                    (0x1UL << 5)                              /**< CALRDY Interrupt Enable */
#define _CMU_IEN_CALRDY_SHIFT                             5                                         /**< Shift value for CMU_CALRDY */
#define _CMU_IEN_CALRDY_MASK                              0x20UL                                    /**< Bit mask for CMU_CALRDY */
#define _CMU_IEN_CALRDY_DEFAULT                           0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALRDY_DEFAULT                            (_CMU_IEN_CALRDY_DEFAULT << 5)            /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALOF                                     (0x1UL << 6)                              /**< CALOF Interrupt Enable */
#define _CMU_IEN_CALOF_SHIFT                              6                                         /**< Shift value for CMU_CALOF */
#define _CMU_IEN_CALOF_MASK                               0x40UL                                    /**< Bit mask for CMU_CALOF */
#define _CMU_IEN_CALOF_DEFAULT                            0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALOF_DEFAULT                             (_CMU_IEN_CALOF_DEFAULT << 6)             /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXODISERR                                (0x1UL << 8)                              /**< HFXODISERR Interrupt Enable */
#define _CMU_IEN_HFXODISERR_SHIFT                         8                                         /**< Shift value for CMU_HFXODISERR */
#define _CMU_IEN_HFXODISERR_MASK                          0x100UL                                   /**< Bit mask for CMU_HFXODISERR */
#define _CMU_IEN_HFXODISERR_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXODISERR_DEFAULT                        (_CMU_IEN_HFXODISERR_DEFAULT << 8)        /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOAUTOSW                                (0x1UL << 9)                              /**< HFXOAUTOSW Interrupt Enable */
#define _CMU_IEN_HFXOAUTOSW_SHIFT                         9                                         /**< Shift value for CMU_HFXOAUTOSW */
#define _CMU_IEN_HFXOAUTOSW_MASK                          0x200UL                                   /**< Bit mask for CMU_HFXOAUTOSW */
#define _CMU_IEN_HFXOAUTOSW_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOAUTOSW_DEFAULT                        (_CMU_IEN_HFXOAUTOSW_DEFAULT << 9)        /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOPEAKDETERR                            (0x1UL << 10)                             /**< HFXOPEAKDETERR Interrupt Enable */
#define _CMU_IEN_HFXOPEAKDETERR_SHIFT                     10                                        /**< Shift value for CMU_HFXOPEAKDETERR */
#define _CMU_IEN_HFXOPEAKDETERR_MASK                      0x400UL                                   /**< Bit mask for CMU_HFXOPEAKDETERR */
#define _CMU_IEN_HFXOPEAKDETERR_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOPEAKDETERR_DEFAULT                    (_CMU_IEN_HFXOPEAKDETERR_DEFAULT << 10)   /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOPEAKDETRDY                            (0x1UL << 11)                             /**< HFXOPEAKDETRDY Interrupt Enable */
#define _CMU_IEN_HFXOPEAKDETRDY_SHIFT                     11                                        /**< Shift value for CMU_HFXOPEAKDETRDY */
#define _CMU_IEN_HFXOPEAKDETRDY_MASK                      0x800UL                                   /**< Bit mask for CMU_HFXOPEAKDETRDY */
#define _CMU_IEN_HFXOPEAKDETRDY_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOPEAKDETRDY_DEFAULT                    (_CMU_IEN_HFXOPEAKDETRDY_DEFAULT << 11)   /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOSHUNTOPTRDY                           (0x1UL << 12)                             /**< HFXOSHUNTOPTRDY Interrupt Enable */
#define _CMU_IEN_HFXOSHUNTOPTRDY_SHIFT                    12                                        /**< Shift value for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IEN_HFXOSHUNTOPTRDY_MASK                     0x1000UL                                  /**< Bit mask for CMU_HFXOSHUNTOPTRDY */
#define _CMU_IEN_HFXOSHUNTOPTRDY_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXOSHUNTOPTRDY_DEFAULT                   (_CMU_IEN_HFXOSHUNTOPTRDY_DEFAULT << 12)  /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFRCODIS                                  (0x1UL << 13)                             /**< HFRCODIS Interrupt Enable */
#define _CMU_IEN_HFRCODIS_SHIFT                           13                                        /**< Shift value for CMU_HFRCODIS */
#define _CMU_IEN_HFRCODIS_MASK                            0x2000UL                                  /**< Bit mask for CMU_HFRCODIS */
#define _CMU_IEN_HFRCODIS_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFRCODIS_DEFAULT                          (_CMU_IEN_HFRCODIS_DEFAULT << 13)         /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFTIMEOUTERR                              (0x1UL << 14)                             /**< LFTIMEOUTERR Interrupt Enable */
#define _CMU_IEN_LFTIMEOUTERR_SHIFT                       14                                        /**< Shift value for CMU_LFTIMEOUTERR */
#define _CMU_IEN_LFTIMEOUTERR_MASK                        0x4000UL                                  /**< Bit mask for CMU_LFTIMEOUTERR */
#define _CMU_IEN_LFTIMEOUTERR_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFTIMEOUTERR_DEFAULT                      (_CMU_IEN_LFTIMEOUTERR_DEFAULT << 14)     /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_DPLLRDY                                   (0x1UL << 15)                             /**< DPLLRDY Interrupt Enable */
#define _CMU_IEN_DPLLRDY_SHIFT                            15                                        /**< Shift value for CMU_DPLLRDY */
#define _CMU_IEN_DPLLRDY_MASK                             0x8000UL                                  /**< Bit mask for CMU_DPLLRDY */
#define _CMU_IEN_DPLLRDY_DEFAULT                          0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_DPLLRDY_DEFAULT                           (_CMU_IEN_DPLLRDY_DEFAULT << 15)          /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_DPLLLOCKFAILLOW                           (0x1UL << 16)                             /**< DPLLLOCKFAILLOW Interrupt Enable */
#define _CMU_IEN_DPLLLOCKFAILLOW_SHIFT                    16                                        /**< Shift value for CMU_DPLLLOCKFAILLOW */
#define _CMU_IEN_DPLLLOCKFAILLOW_MASK                     0x10000UL                                 /**< Bit mask for CMU_DPLLLOCKFAILLOW */
#define _CMU_IEN_DPLLLOCKFAILLOW_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_DPLLLOCKFAILLOW_DEFAULT                   (_CMU_IEN_DPLLLOCKFAILLOW_DEFAULT << 16)  /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_DPLLLOCKFAILHIGH                          (0x1UL << 17)                             /**< DPLLLOCKFAILHIGH Interrupt Enable */
#define _CMU_IEN_DPLLLOCKFAILHIGH_SHIFT                   17                                        /**< Shift value for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IEN_DPLLLOCKFAILHIGH_MASK                    0x20000UL                                 /**< Bit mask for CMU_DPLLLOCKFAILHIGH */
#define _CMU_IEN_DPLLLOCKFAILHIGH_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_DPLLLOCKFAILHIGH_DEFAULT                  (_CMU_IEN_DPLLLOCKFAILHIGH_DEFAULT << 17) /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXOEDGE                                  (0x1UL << 27)                             /**< LFXOEDGE Interrupt Enable */
#define _CMU_IEN_LFXOEDGE_SHIFT                           27                                        /**< Shift value for CMU_LFXOEDGE */
#define _CMU_IEN_LFXOEDGE_MASK                            0x8000000UL                               /**< Bit mask for CMU_LFXOEDGE */
#define _CMU_IEN_LFXOEDGE_DEFAULT                         0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXOEDGE_DEFAULT                          (_CMU_IEN_LFXOEDGE_DEFAULT << 27)         /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCOEDGE                                 (0x1UL << 28)                             /**< LFRCOEDGE Interrupt Enable */
#define _CMU_IEN_LFRCOEDGE_SHIFT                          28                                        /**< Shift value for CMU_LFRCOEDGE */
#define _CMU_IEN_LFRCOEDGE_MASK                           0x10000000UL                              /**< Bit mask for CMU_LFRCOEDGE */
#define _CMU_IEN_LFRCOEDGE_DEFAULT                        0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCOEDGE_DEFAULT                         (_CMU_IEN_LFRCOEDGE_DEFAULT << 28)        /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_ULFRCOEDGE                                (0x1UL << 29)                             /**< ULFRCOEDGE Interrupt Enable */
#define _CMU_IEN_ULFRCOEDGE_SHIFT                         29                                        /**< Shift value for CMU_ULFRCOEDGE */
#define _CMU_IEN_ULFRCOEDGE_MASK                          0x20000000UL                              /**< Bit mask for CMU_ULFRCOEDGE */
#define _CMU_IEN_ULFRCOEDGE_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_ULFRCOEDGE_DEFAULT                        (_CMU_IEN_ULFRCOEDGE_DEFAULT << 29)       /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_CMUERR                                    (0x1UL << 31)                             /**< CMUERR Interrupt Enable */
#define _CMU_IEN_CMUERR_SHIFT                             31                                        /**< Shift value for CMU_CMUERR */
#define _CMU_IEN_CMUERR_MASK                              0x80000000UL                              /**< Bit mask for CMU_CMUERR */
#define _CMU_IEN_CMUERR_DEFAULT                           0x00000000UL                              /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_CMUERR_DEFAULT                            (_CMU_IEN_CMUERR_DEFAULT << 31)           /**< Shifted mode DEFAULT for CMU_IEN */

/* Bit fields for CMU HFBUSCLKEN0 */
#define _CMU_HFBUSCLKEN0_RESETVALUE                       0x00000000UL                            /**< Default value for CMU_HFBUSCLKEN0 */
#define _CMU_HFBUSCLKEN0_MASK                             0x0000007FUL                            /**< Mask for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_CRYPTO0                           (0x1UL << 0)                            /**< Advanced Encryption Standard Accelerator 0 Clock Enable */
#define CMU_HFBUSCLKEN0_CRYPTO                            CMU_HFBUSCLKEN0_CRYPTO0                 /**< Alias for CRYPTO0 */
#define _CMU_HFBUSCLKEN0_CRYPTO0_SHIFT                    0                                       /**< Shift value for CMU_CRYPTO0 */
#define _CMU_HFBUSCLKEN0_CRYPTO0_MASK                     0x1UL                                   /**< Bit mask for CMU_CRYPTO0 */
#define _CMU_HFBUSCLKEN0_CRYPTO_SHIFT                     _CMU_HFBUSCLKEN0_CRYPTO0_SHIFT          /**< Alias for CMU_CRYPTO0 */
#define _CMU_HFBUSCLKEN0_CRYPTO_MASK                      _CMU_HFBUSCLKEN0_CRYPTO0_MASK           /**< Alias for CMU_CRYPTO0 */
#define _CMU_HFBUSCLKEN0_CRYPTO0_DEFAULT                  0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define _CMU_HFBUSCLKEN0_CRYPTO_DEFAULT                   _CMU_HFBUSCLKEN0_CRYPTO0_DEFAULT        /**< Alias for CRYPTO0 mode DEFAULT */
#define CMU_HFBUSCLKEN0_CRYPTO0_DEFAULT                   (_CMU_HFBUSCLKEN0_CRYPTO0_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */
#define  CMU_HFBUSCLKEN0_CRYPTO_DEFAULT                   CMU_HFBUSCLKEN0_CRYPTO0_DEFAULT         /**< Alias for CRYPTO0 mode DEFAULT*/
#define CMU_HFBUSCLKEN0_CRYPTO1                           (0x1UL << 1)                            /**< Advanced Encryption Standard Accelerator 1 Clock Enable */
#define _CMU_HFBUSCLKEN0_CRYPTO1_SHIFT                    1                                       /**< Shift value for CMU_CRYPTO1 */
#define _CMU_HFBUSCLKEN0_CRYPTO1_MASK                     0x2UL                                   /**< Bit mask for CMU_CRYPTO1 */
#define _CMU_HFBUSCLKEN0_CRYPTO1_DEFAULT                  0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_CRYPTO1_DEFAULT                   (_CMU_HFBUSCLKEN0_CRYPTO1_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_LE                                (0x1UL << 2)                            /**< Low Energy Peripheral Interface Clock Enable */
#define _CMU_HFBUSCLKEN0_LE_SHIFT                         2                                       /**< Shift value for CMU_LE */
#define _CMU_HFBUSCLKEN0_LE_MASK                          0x4UL                                   /**< Bit mask for CMU_LE */
#define _CMU_HFBUSCLKEN0_LE_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_LE_DEFAULT                        (_CMU_HFBUSCLKEN0_LE_DEFAULT << 2)      /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_GPIO                              (0x1UL << 3)                            /**< General purpose Input/Output Clock Enable */
#define _CMU_HFBUSCLKEN0_GPIO_SHIFT                       3                                       /**< Shift value for CMU_GPIO */
#define _CMU_HFBUSCLKEN0_GPIO_MASK                        0x8UL                                   /**< Bit mask for CMU_GPIO */
#define _CMU_HFBUSCLKEN0_GPIO_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_GPIO_DEFAULT                      (_CMU_HFBUSCLKEN0_GPIO_DEFAULT << 3)    /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_PRS                               (0x1UL << 4)                            /**< Peripheral Reflex System Clock Enable */
#define _CMU_HFBUSCLKEN0_PRS_SHIFT                        4                                       /**< Shift value for CMU_PRS */
#define _CMU_HFBUSCLKEN0_PRS_MASK                         0x10UL                                  /**< Bit mask for CMU_PRS */
#define _CMU_HFBUSCLKEN0_PRS_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_PRS_DEFAULT                       (_CMU_HFBUSCLKEN0_PRS_DEFAULT << 4)     /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_LDMA                              (0x1UL << 5)                            /**< Linked Direct Memory Access Controller Clock Enable */
#define _CMU_HFBUSCLKEN0_LDMA_SHIFT                       5                                       /**< Shift value for CMU_LDMA */
#define _CMU_HFBUSCLKEN0_LDMA_MASK                        0x20UL                                  /**< Bit mask for CMU_LDMA */
#define _CMU_HFBUSCLKEN0_LDMA_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_LDMA_DEFAULT                      (_CMU_HFBUSCLKEN0_LDMA_DEFAULT << 5)    /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_GPCRC                             (0x1UL << 6)                            /**< General Purpose CRC Clock Enable */
#define _CMU_HFBUSCLKEN0_GPCRC_SHIFT                      6                                       /**< Shift value for CMU_GPCRC */
#define _CMU_HFBUSCLKEN0_GPCRC_MASK                       0x40UL                                  /**< Bit mask for CMU_GPCRC */
#define _CMU_HFBUSCLKEN0_GPCRC_DEFAULT                    0x00000000UL                            /**< Mode DEFAULT for CMU_HFBUSCLKEN0 */
#define CMU_HFBUSCLKEN0_GPCRC_DEFAULT                     (_CMU_HFBUSCLKEN0_GPCRC_DEFAULT << 6)   /**< Shifted mode DEFAULT for CMU_HFBUSCLKEN0 */

/* Bit fields for CMU HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_RESETVALUE                       0x00000000UL                               /**< Default value for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_MASK                             0x00008FFFUL                               /**< Mask for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER0                            (0x1UL << 0)                               /**< Timer 0 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER0_SHIFT                     0                                          /**< Shift value for CMU_TIMER0 */
#define _CMU_HFPERCLKEN0_TIMER0_MASK                      0x1UL                                      /**< Bit mask for CMU_TIMER0 */
#define _CMU_HFPERCLKEN0_TIMER0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER0_DEFAULT                    (_CMU_HFPERCLKEN0_TIMER0_DEFAULT << 0)     /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER1                            (0x1UL << 1)                               /**< Timer 1 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER1_SHIFT                     1                                          /**< Shift value for CMU_TIMER1 */
#define _CMU_HFPERCLKEN0_TIMER1_MASK                      0x2UL                                      /**< Bit mask for CMU_TIMER1 */
#define _CMU_HFPERCLKEN0_TIMER1_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER1_DEFAULT                    (_CMU_HFPERCLKEN0_TIMER1_DEFAULT << 1)     /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_WTIMER0                           (0x1UL << 2)                               /**< Wide Timer 0 Clock Enable */
#define _CMU_HFPERCLKEN0_WTIMER0_SHIFT                    2                                          /**< Shift value for CMU_WTIMER0 */
#define _CMU_HFPERCLKEN0_WTIMER0_MASK                     0x4UL                                      /**< Bit mask for CMU_WTIMER0 */
#define _CMU_HFPERCLKEN0_WTIMER0_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_WTIMER0_DEFAULT                   (_CMU_HFPERCLKEN0_WTIMER0_DEFAULT << 2)    /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART0                            (0x1UL << 3)                               /**< Universal Synchronous/Asynchronous Receiver/Transmitter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_USART0_SHIFT                     3                                          /**< Shift value for CMU_USART0 */
#define _CMU_HFPERCLKEN0_USART0_MASK                      0x8UL                                      /**< Bit mask for CMU_USART0 */
#define _CMU_HFPERCLKEN0_USART0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART0_DEFAULT                    (_CMU_HFPERCLKEN0_USART0_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART1                            (0x1UL << 4)                               /**< Universal Synchronous/Asynchronous Receiver/Transmitter 1 Clock Enable */
#define _CMU_HFPERCLKEN0_USART1_SHIFT                     4                                          /**< Shift value for CMU_USART1 */
#define _CMU_HFPERCLKEN0_USART1_MASK                      0x10UL                                     /**< Bit mask for CMU_USART1 */
#define _CMU_HFPERCLKEN0_USART1_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART1_DEFAULT                    (_CMU_HFPERCLKEN0_USART1_DEFAULT << 4)     /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART2                            (0x1UL << 5)                               /**< Universal Synchronous/Asynchronous Receiver/Transmitter 2 Clock Enable */
#define _CMU_HFPERCLKEN0_USART2_SHIFT                     5                                          /**< Shift value for CMU_USART2 */
#define _CMU_HFPERCLKEN0_USART2_MASK                      0x20UL                                     /**< Bit mask for CMU_USART2 */
#define _CMU_HFPERCLKEN0_USART2_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART2_DEFAULT                    (_CMU_HFPERCLKEN0_USART2_DEFAULT << 5)     /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C0                              (0x1UL << 6)                               /**< I2C 0 Clock Enable */
#define _CMU_HFPERCLKEN0_I2C0_SHIFT                       6                                          /**< Shift value for CMU_I2C0 */
#define _CMU_HFPERCLKEN0_I2C0_MASK                        0x40UL                                     /**< Bit mask for CMU_I2C0 */
#define _CMU_HFPERCLKEN0_I2C0_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C0_DEFAULT                      (_CMU_HFPERCLKEN0_I2C0_DEFAULT << 6)       /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C1                              (0x1UL << 7)                               /**< I2C 1 Clock Enable */
#define _CMU_HFPERCLKEN0_I2C1_SHIFT                       7                                          /**< Shift value for CMU_I2C1 */
#define _CMU_HFPERCLKEN0_I2C1_MASK                        0x80UL                                     /**< Bit mask for CMU_I2C1 */
#define _CMU_HFPERCLKEN0_I2C1_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C1_DEFAULT                      (_CMU_HFPERCLKEN0_I2C1_DEFAULT << 7)       /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP0                             (0x1UL << 8)                               /**< Analog Comparator 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP0_SHIFT                      8                                          /**< Shift value for CMU_ACMP0 */
#define _CMU_HFPERCLKEN0_ACMP0_MASK                       0x100UL                                    /**< Bit mask for CMU_ACMP0 */
#define _CMU_HFPERCLKEN0_ACMP0_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP0_DEFAULT                     (_CMU_HFPERCLKEN0_ACMP0_DEFAULT << 8)      /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP1                             (0x1UL << 9)                               /**< Analog Comparator 1 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP1_SHIFT                      9                                          /**< Shift value for CMU_ACMP1 */
#define _CMU_HFPERCLKEN0_ACMP1_MASK                       0x200UL                                    /**< Bit mask for CMU_ACMP1 */
#define _CMU_HFPERCLKEN0_ACMP1_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP1_DEFAULT                     (_CMU_HFPERCLKEN0_ACMP1_DEFAULT << 9)      /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_CRYOTIMER                         (0x1UL << 10)                              /**< CryoTimer Clock Enable */
#define _CMU_HFPERCLKEN0_CRYOTIMER_SHIFT                  10                                         /**< Shift value for CMU_CRYOTIMER */
#define _CMU_HFPERCLKEN0_CRYOTIMER_MASK                   0x400UL                                    /**< Bit mask for CMU_CRYOTIMER */
#define _CMU_HFPERCLKEN0_CRYOTIMER_DEFAULT                0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_CRYOTIMER_DEFAULT                 (_CMU_HFPERCLKEN0_CRYOTIMER_DEFAULT << 10) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ADC0                              (0x1UL << 11)                              /**< Analog to Digital Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ADC0_SHIFT                       11                                         /**< Shift value for CMU_ADC0 */
#define _CMU_HFPERCLKEN0_ADC0_MASK                        0x800UL                                    /**< Bit mask for CMU_ADC0 */
#define _CMU_HFPERCLKEN0_ADC0_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ADC0_DEFAULT                      (_CMU_HFPERCLKEN0_ADC0_DEFAULT << 11)      /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TRNG0                             (0x1UL << 15)                              /**< True Random Number Generator 0 Clock Enable */
#define _CMU_HFPERCLKEN0_TRNG0_SHIFT                      15                                         /**< Shift value for CMU_TRNG0 */
#define _CMU_HFPERCLKEN0_TRNG0_MASK                       0x8000UL                                   /**< Bit mask for CMU_TRNG0 */
#define _CMU_HFPERCLKEN0_TRNG0_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TRNG0_DEFAULT                     (_CMU_HFPERCLKEN0_TRNG0_DEFAULT << 15)     /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */

/* Bit fields for CMU LFACLKEN0 */
#define _CMU_LFACLKEN0_RESETVALUE                         0x00000000UL                           /**< Default value for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_MASK                               0x00000003UL                           /**< Mask for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LETIMER0                            (0x1UL << 0)                           /**< Low Energy Timer 0 Clock Enable */
#define _CMU_LFACLKEN0_LETIMER0_SHIFT                     0                                      /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFACLKEN0_LETIMER0_MASK                      0x1UL                                  /**< Bit mask for CMU_LETIMER0 */
#define _CMU_LFACLKEN0_LETIMER0_DEFAULT                   0x00000000UL                           /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LETIMER0_DEFAULT                    (_CMU_LFACLKEN0_LETIMER0_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LESENSE                             (0x1UL << 1)                           /**< Low Energy Sensor Interface Clock Enable */
#define _CMU_LFACLKEN0_LESENSE_SHIFT                      1                                      /**< Shift value for CMU_LESENSE */
#define _CMU_LFACLKEN0_LESENSE_MASK                       0x2UL                                  /**< Bit mask for CMU_LESENSE */
#define _CMU_LFACLKEN0_LESENSE_DEFAULT                    0x00000000UL                           /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LESENSE_DEFAULT                     (_CMU_LFACLKEN0_LESENSE_DEFAULT << 1)  /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */

/* Bit fields for CMU LFBCLKEN0 */
#define _CMU_LFBCLKEN0_RESETVALUE                         0x00000000UL                          /**< Default value for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_MASK                               0x00000003UL                          /**< Mask for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_SYSTICK                             (0x1UL << 0)                          /**<  Clock Enable */
#define _CMU_LFBCLKEN0_SYSTICK_SHIFT                      0                                     /**< Shift value for CMU_SYSTICK */
#define _CMU_LFBCLKEN0_SYSTICK_MASK                       0x1UL                                 /**< Bit mask for CMU_SYSTICK */
#define _CMU_LFBCLKEN0_SYSTICK_DEFAULT                    0x00000000UL                          /**< Mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_SYSTICK_DEFAULT                     (_CMU_LFBCLKEN0_SYSTICK_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART0                             (0x1UL << 1)                          /**< Low Energy UART 0 Clock Enable */
#define _CMU_LFBCLKEN0_LEUART0_SHIFT                      1                                     /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBCLKEN0_LEUART0_MASK                       0x2UL                                 /**< Bit mask for CMU_LEUART0 */
#define _CMU_LFBCLKEN0_LEUART0_DEFAULT                    0x00000000UL                          /**< Mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART0_DEFAULT                     (_CMU_LFBCLKEN0_LEUART0_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */

/* Bit fields for CMU LFECLKEN0 */
#define _CMU_LFECLKEN0_RESETVALUE                         0x00000000UL                       /**< Default value for CMU_LFECLKEN0 */
#define _CMU_LFECLKEN0_MASK                               0x00000001UL                       /**< Mask for CMU_LFECLKEN0 */
#define CMU_LFECLKEN0_RTCC                                (0x1UL << 0)                       /**< Real-Time Counter and Calendar Clock Enable */
#define _CMU_LFECLKEN0_RTCC_SHIFT                         0                                  /**< Shift value for CMU_RTCC */
#define _CMU_LFECLKEN0_RTCC_MASK                          0x1UL                              /**< Bit mask for CMU_RTCC */
#define _CMU_LFECLKEN0_RTCC_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for CMU_LFECLKEN0 */
#define CMU_LFECLKEN0_RTCC_DEFAULT                        (_CMU_LFECLKEN0_RTCC_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_LFECLKEN0 */

/* Bit fields for CMU HFPRESC */
#define _CMU_HFPRESC_RESETVALUE                           0x00000000UL                              /**< Default value for CMU_HFPRESC */
#define _CMU_HFPRESC_MASK                                 0x01001F00UL                              /**< Mask for CMU_HFPRESC */
#define _CMU_HFPRESC_PRESC_SHIFT                          8                                         /**< Shift value for CMU_PRESC */
#define _CMU_HFPRESC_PRESC_MASK                           0x1F00UL                                  /**< Bit mask for CMU_PRESC */
#define _CMU_HFPRESC_PRESC_DEFAULT                        0x00000000UL                              /**< Mode DEFAULT for CMU_HFPRESC */
#define _CMU_HFPRESC_PRESC_NODIVISION                     0x00000000UL                              /**< Mode NODIVISION for CMU_HFPRESC */
#define CMU_HFPRESC_PRESC_DEFAULT                         (_CMU_HFPRESC_PRESC_DEFAULT << 8)         /**< Shifted mode DEFAULT for CMU_HFPRESC */
#define CMU_HFPRESC_PRESC_NODIVISION                      (_CMU_HFPRESC_PRESC_NODIVISION << 8)      /**< Shifted mode NODIVISION for CMU_HFPRESC */
#define _CMU_HFPRESC_HFCLKLEPRESC_SHIFT                   24                                        /**< Shift value for CMU_HFCLKLEPRESC */
#define _CMU_HFPRESC_HFCLKLEPRESC_MASK                    0x1000000UL                               /**< Bit mask for CMU_HFCLKLEPRESC */
#define _CMU_HFPRESC_HFCLKLEPRESC_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for CMU_HFPRESC */
#define _CMU_HFPRESC_HFCLKLEPRESC_DIV2                    0x00000000UL                              /**< Mode DIV2 for CMU_HFPRESC */
#define _CMU_HFPRESC_HFCLKLEPRESC_DIV4                    0x00000001UL                              /**< Mode DIV4 for CMU_HFPRESC */
#define CMU_HFPRESC_HFCLKLEPRESC_DEFAULT                  (_CMU_HFPRESC_HFCLKLEPRESC_DEFAULT << 24) /**< Shifted mode DEFAULT for CMU_HFPRESC */
#define CMU_HFPRESC_HFCLKLEPRESC_DIV2                     (_CMU_HFPRESC_HFCLKLEPRESC_DIV2 << 24)    /**< Shifted mode DIV2 for CMU_HFPRESC */
#define CMU_HFPRESC_HFCLKLEPRESC_DIV4                     (_CMU_HFPRESC_HFCLKLEPRESC_DIV4 << 24)    /**< Shifted mode DIV4 for CMU_HFPRESC */

/* Bit fields for CMU HFCOREPRESC */
#define _CMU_HFCOREPRESC_RESETVALUE                       0x00000000UL                             /**< Default value for CMU_HFCOREPRESC */
#define _CMU_HFCOREPRESC_MASK                             0x0001FF00UL                             /**< Mask for CMU_HFCOREPRESC */
#define _CMU_HFCOREPRESC_PRESC_SHIFT                      8                                        /**< Shift value for CMU_PRESC */
#define _CMU_HFCOREPRESC_PRESC_MASK                       0x1FF00UL                                /**< Bit mask for CMU_PRESC */
#define _CMU_HFCOREPRESC_PRESC_DEFAULT                    0x00000000UL                             /**< Mode DEFAULT for CMU_HFCOREPRESC */
#define _CMU_HFCOREPRESC_PRESC_NODIVISION                 0x00000000UL                             /**< Mode NODIVISION for CMU_HFCOREPRESC */
#define CMU_HFCOREPRESC_PRESC_DEFAULT                     (_CMU_HFCOREPRESC_PRESC_DEFAULT << 8)    /**< Shifted mode DEFAULT for CMU_HFCOREPRESC */
#define CMU_HFCOREPRESC_PRESC_NODIVISION                  (_CMU_HFCOREPRESC_PRESC_NODIVISION << 8) /**< Shifted mode NODIVISION for CMU_HFCOREPRESC */

/* Bit fields for CMU HFPERPRESC */
#define _CMU_HFPERPRESC_RESETVALUE                        0x00000000UL                            /**< Default value for CMU_HFPERPRESC */
#define _CMU_HFPERPRESC_MASK                              0x0001FF00UL                            /**< Mask for CMU_HFPERPRESC */
#define _CMU_HFPERPRESC_PRESC_SHIFT                       8                                       /**< Shift value for CMU_PRESC */
#define _CMU_HFPERPRESC_PRESC_MASK                        0x1FF00UL                               /**< Bit mask for CMU_PRESC */
#define _CMU_HFPERPRESC_PRESC_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for CMU_HFPERPRESC */
#define _CMU_HFPERPRESC_PRESC_NODIVISION                  0x00000000UL                            /**< Mode NODIVISION for CMU_HFPERPRESC */
#define CMU_HFPERPRESC_PRESC_DEFAULT                      (_CMU_HFPERPRESC_PRESC_DEFAULT << 8)    /**< Shifted mode DEFAULT for CMU_HFPERPRESC */
#define CMU_HFPERPRESC_PRESC_NODIVISION                   (_CMU_HFPERPRESC_PRESC_NODIVISION << 8) /**< Shifted mode NODIVISION for CMU_HFPERPRESC */

/* Bit fields for CMU HFEXPPRESC */
#define _CMU_HFEXPPRESC_RESETVALUE                        0x00000000UL                            /**< Default value for CMU_HFEXPPRESC */
#define _CMU_HFEXPPRESC_MASK                              0x00001F00UL                            /**< Mask for CMU_HFEXPPRESC */
#define _CMU_HFEXPPRESC_PRESC_SHIFT                       8                                       /**< Shift value for CMU_PRESC */
#define _CMU_HFEXPPRESC_PRESC_MASK                        0x1F00UL                                /**< Bit mask for CMU_PRESC */
#define _CMU_HFEXPPRESC_PRESC_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for CMU_HFEXPPRESC */
#define _CMU_HFEXPPRESC_PRESC_NODIVISION                  0x00000000UL                            /**< Mode NODIVISION for CMU_HFEXPPRESC */
#define CMU_HFEXPPRESC_PRESC_DEFAULT                      (_CMU_HFEXPPRESC_PRESC_DEFAULT << 8)    /**< Shifted mode DEFAULT for CMU_HFEXPPRESC */
#define CMU_HFEXPPRESC_PRESC_NODIVISION                   (_CMU_HFEXPPRESC_PRESC_NODIVISION << 8) /**< Shifted mode NODIVISION for CMU_HFEXPPRESC */

/* Bit fields for CMU LFAPRESC0 */
#define _CMU_LFAPRESC0_RESETVALUE                         0x00000000UL                            /**< Default value for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_MASK                               0x0000003FUL                            /**< Mask for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_SHIFT                     0                                       /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFAPRESC0_LETIMER0_MASK                      0xFUL                                   /**< Bit mask for CMU_LETIMER0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1                      0x00000000UL                            /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2                      0x00000001UL                            /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4                      0x00000002UL                            /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8                      0x00000003UL                            /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16                     0x00000004UL                            /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32                     0x00000005UL                            /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV64                     0x00000006UL                            /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV128                    0x00000007UL                            /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV256                    0x00000008UL                            /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV512                    0x00000009UL                            /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1024                   0x0000000AUL                            /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2048                   0x0000000BUL                            /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4096                   0x0000000CUL                            /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8192                   0x0000000DUL                            /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16384                  0x0000000EUL                            /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32768                  0x0000000FUL                            /**< Mode DIV32768 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1                       (_CMU_LFAPRESC0_LETIMER0_DIV1 << 0)     /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2                       (_CMU_LFAPRESC0_LETIMER0_DIV2 << 0)     /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4                       (_CMU_LFAPRESC0_LETIMER0_DIV4 << 0)     /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8                       (_CMU_LFAPRESC0_LETIMER0_DIV8 << 0)     /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16                      (_CMU_LFAPRESC0_LETIMER0_DIV16 << 0)    /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32                      (_CMU_LFAPRESC0_LETIMER0_DIV32 << 0)    /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV64                      (_CMU_LFAPRESC0_LETIMER0_DIV64 << 0)    /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV128                     (_CMU_LFAPRESC0_LETIMER0_DIV128 << 0)   /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV256                     (_CMU_LFAPRESC0_LETIMER0_DIV256 << 0)   /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV512                     (_CMU_LFAPRESC0_LETIMER0_DIV512 << 0)   /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1024                    (_CMU_LFAPRESC0_LETIMER0_DIV1024 << 0)  /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2048                    (_CMU_LFAPRESC0_LETIMER0_DIV2048 << 0)  /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4096                    (_CMU_LFAPRESC0_LETIMER0_DIV4096 << 0)  /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8192                    (_CMU_LFAPRESC0_LETIMER0_DIV8192 << 0)  /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16384                   (_CMU_LFAPRESC0_LETIMER0_DIV16384 << 0) /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32768                   (_CMU_LFAPRESC0_LETIMER0_DIV32768 << 0) /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LESENSE_SHIFT                      4                                       /**< Shift value for CMU_LESENSE */
#define _CMU_LFAPRESC0_LESENSE_MASK                       0x30UL                                  /**< Bit mask for CMU_LESENSE */
#define _CMU_LFAPRESC0_LESENSE_DIV1                       0x00000000UL                            /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LESENSE_DIV2                       0x00000001UL                            /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LESENSE_DIV4                       0x00000002UL                            /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LESENSE_DIV8                       0x00000003UL                            /**< Mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LESENSE_DIV1                        (_CMU_LFAPRESC0_LESENSE_DIV1 << 4)      /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LESENSE_DIV2                        (_CMU_LFAPRESC0_LESENSE_DIV2 << 4)      /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LESENSE_DIV4                        (_CMU_LFAPRESC0_LESENSE_DIV4 << 4)      /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LESENSE_DIV8                        (_CMU_LFAPRESC0_LESENSE_DIV8 << 4)      /**< Shifted mode DIV8 for CMU_LFAPRESC0 */

/* Bit fields for CMU LFBPRESC0 */
#define _CMU_LFBPRESC0_RESETVALUE                         0x00000000UL                       /**< Default value for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_MASK                               0x0000003FUL                       /**< Mask for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_SYSTICK_SHIFT                      0                                  /**< Shift value for CMU_SYSTICK */
#define _CMU_LFBPRESC0_SYSTICK_MASK                       0xFUL                              /**< Bit mask for CMU_SYSTICK */
#define _CMU_LFBPRESC0_SYSTICK_DIV1                       0x00000000UL                       /**< Mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_SYSTICK_DIV1                        (_CMU_LFBPRESC0_SYSTICK_DIV1 << 0) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_SHIFT                      4                                  /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBPRESC0_LEUART0_MASK                       0x30UL                             /**< Bit mask for CMU_LEUART0 */
#define _CMU_LFBPRESC0_LEUART0_DIV1                       0x00000000UL                       /**< Mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV2                       0x00000001UL                       /**< Mode DIV2 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV4                       0x00000002UL                       /**< Mode DIV4 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV8                       0x00000003UL                       /**< Mode DIV8 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV1                        (_CMU_LFBPRESC0_LEUART0_DIV1 << 4) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV2                        (_CMU_LFBPRESC0_LEUART0_DIV2 << 4) /**< Shifted mode DIV2 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV4                        (_CMU_LFBPRESC0_LEUART0_DIV4 << 4) /**< Shifted mode DIV4 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV8                        (_CMU_LFBPRESC0_LEUART0_DIV8 << 4) /**< Shifted mode DIV8 for CMU_LFBPRESC0 */

/* Bit fields for CMU LFEPRESC0 */
#define _CMU_LFEPRESC0_RESETVALUE                         0x00000000UL                    /**< Default value for CMU_LFEPRESC0 */
#define _CMU_LFEPRESC0_MASK                               0x00000003UL                    /**< Mask for CMU_LFEPRESC0 */
#define _CMU_LFEPRESC0_RTCC_SHIFT                         0                               /**< Shift value for CMU_RTCC */
#define _CMU_LFEPRESC0_RTCC_MASK                          0x3UL                           /**< Bit mask for CMU_RTCC */
#define _CMU_LFEPRESC0_RTCC_DIV1                          0x00000000UL                    /**< Mode DIV1 for CMU_LFEPRESC0 */
#define _CMU_LFEPRESC0_RTCC_DIV2                          0x00000001UL                    /**< Mode DIV2 for CMU_LFEPRESC0 */
#define _CMU_LFEPRESC0_RTCC_DIV4                          0x00000002UL                    /**< Mode DIV4 for CMU_LFEPRESC0 */
#define CMU_LFEPRESC0_RTCC_DIV1                           (_CMU_LFEPRESC0_RTCC_DIV1 << 0) /**< Shifted mode DIV1 for CMU_LFEPRESC0 */
#define CMU_LFEPRESC0_RTCC_DIV2                           (_CMU_LFEPRESC0_RTCC_DIV2 << 0) /**< Shifted mode DIV2 for CMU_LFEPRESC0 */
#define CMU_LFEPRESC0_RTCC_DIV4                           (_CMU_LFEPRESC0_RTCC_DIV4 << 0) /**< Shifted mode DIV4 for CMU_LFEPRESC0 */

/* Bit fields for CMU SYNCBUSY */
#define _CMU_SYNCBUSY_RESETVALUE                          0x00000000UL                               /**< Default value for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_MASK                                0x3F050055UL                               /**< Mask for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFACLKEN0                            (0x1UL << 0)                               /**< Low Frequency A Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFACLKEN0_SHIFT                     0                                          /**< Shift value for CMU_LFACLKEN0 */
#define _CMU_SYNCBUSY_LFACLKEN0_MASK                      0x1UL                                      /**< Bit mask for CMU_LFACLKEN0 */
#define _CMU_SYNCBUSY_LFACLKEN0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFACLKEN0_DEFAULT                    (_CMU_SYNCBUSY_LFACLKEN0_DEFAULT << 0)     /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFAPRESC0                            (0x1UL << 2)                               /**< Low Frequency A Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFAPRESC0_SHIFT                     2                                          /**< Shift value for CMU_LFAPRESC0 */
#define _CMU_SYNCBUSY_LFAPRESC0_MASK                      0x4UL                                      /**< Bit mask for CMU_LFAPRESC0 */
#define _CMU_SYNCBUSY_LFAPRESC0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFAPRESC0_DEFAULT                    (_CMU_SYNCBUSY_LFAPRESC0_DEFAULT << 2)     /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBCLKEN0                            (0x1UL << 4)                               /**< Low Frequency B Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFBCLKEN0_SHIFT                     4                                          /**< Shift value for CMU_LFBCLKEN0 */
#define _CMU_SYNCBUSY_LFBCLKEN0_MASK                      0x10UL                                     /**< Bit mask for CMU_LFBCLKEN0 */
#define _CMU_SYNCBUSY_LFBCLKEN0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBCLKEN0_DEFAULT                    (_CMU_SYNCBUSY_LFBCLKEN0_DEFAULT << 4)     /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBPRESC0                            (0x1UL << 6)                               /**< Low Frequency B Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFBPRESC0_SHIFT                     6                                          /**< Shift value for CMU_LFBPRESC0 */
#define _CMU_SYNCBUSY_LFBPRESC0_MASK                      0x40UL                                     /**< Bit mask for CMU_LFBPRESC0 */
#define _CMU_SYNCBUSY_LFBPRESC0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBPRESC0_DEFAULT                    (_CMU_SYNCBUSY_LFBPRESC0_DEFAULT << 6)     /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFECLKEN0                            (0x1UL << 16)                              /**< Low Frequency E Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFECLKEN0_SHIFT                     16                                         /**< Shift value for CMU_LFECLKEN0 */
#define _CMU_SYNCBUSY_LFECLKEN0_MASK                      0x10000UL                                  /**< Bit mask for CMU_LFECLKEN0 */
#define _CMU_SYNCBUSY_LFECLKEN0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFECLKEN0_DEFAULT                    (_CMU_SYNCBUSY_LFECLKEN0_DEFAULT << 16)    /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFEPRESC0                            (0x1UL << 18)                              /**< Low Frequency E Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFEPRESC0_SHIFT                     18                                         /**< Shift value for CMU_LFEPRESC0 */
#define _CMU_SYNCBUSY_LFEPRESC0_MASK                      0x40000UL                                  /**< Bit mask for CMU_LFEPRESC0 */
#define _CMU_SYNCBUSY_LFEPRESC0_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFEPRESC0_DEFAULT                    (_CMU_SYNCBUSY_LFEPRESC0_DEFAULT << 18)    /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_HFRCOBSY                             (0x1UL << 24)                              /**< HFRCO Busy */
#define _CMU_SYNCBUSY_HFRCOBSY_SHIFT                      24                                         /**< Shift value for CMU_HFRCOBSY */
#define _CMU_SYNCBUSY_HFRCOBSY_MASK                       0x1000000UL                                /**< Bit mask for CMU_HFRCOBSY */
#define _CMU_SYNCBUSY_HFRCOBSY_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_HFRCOBSY_DEFAULT                     (_CMU_SYNCBUSY_HFRCOBSY_DEFAULT << 24)     /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_AUXHFRCOBSY                          (0x1UL << 25)                              /**< AUXHFRCO Busy */
#define _CMU_SYNCBUSY_AUXHFRCOBSY_SHIFT                   25                                         /**< Shift value for CMU_AUXHFRCOBSY */
#define _CMU_SYNCBUSY_AUXHFRCOBSY_MASK                    0x2000000UL                                /**< Bit mask for CMU_AUXHFRCOBSY */
#define _CMU_SYNCBUSY_AUXHFRCOBSY_DEFAULT                 0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_AUXHFRCOBSY_DEFAULT                  (_CMU_SYNCBUSY_AUXHFRCOBSY_DEFAULT << 25)  /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFRCOBSY                             (0x1UL << 26)                              /**< LFRCO Busy */
#define _CMU_SYNCBUSY_LFRCOBSY_SHIFT                      26                                         /**< Shift value for CMU_LFRCOBSY */
#define _CMU_SYNCBUSY_LFRCOBSY_MASK                       0x4000000UL                                /**< Bit mask for CMU_LFRCOBSY */
#define _CMU_SYNCBUSY_LFRCOBSY_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFRCOBSY_DEFAULT                     (_CMU_SYNCBUSY_LFRCOBSY_DEFAULT << 26)     /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFRCOVREFBSY                         (0x1UL << 27)                              /**< LFRCO VREF Busy */
#define _CMU_SYNCBUSY_LFRCOVREFBSY_SHIFT                  27                                         /**< Shift value for CMU_LFRCOVREFBSY */
#define _CMU_SYNCBUSY_LFRCOVREFBSY_MASK                   0x8000000UL                                /**< Bit mask for CMU_LFRCOVREFBSY */
#define _CMU_SYNCBUSY_LFRCOVREFBSY_DEFAULT                0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFRCOVREFBSY_DEFAULT                 (_CMU_SYNCBUSY_LFRCOVREFBSY_DEFAULT << 27) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_HFXOBSY                              (0x1UL << 28)                              /**< HFXO Busy */
#define _CMU_SYNCBUSY_HFXOBSY_SHIFT                       28                                         /**< Shift value for CMU_HFXOBSY */
#define _CMU_SYNCBUSY_HFXOBSY_MASK                        0x10000000UL                               /**< Bit mask for CMU_HFXOBSY */
#define _CMU_SYNCBUSY_HFXOBSY_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_HFXOBSY_DEFAULT                      (_CMU_SYNCBUSY_HFXOBSY_DEFAULT << 28)      /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFXOBSY                              (0x1UL << 29)                              /**< LFXO Busy */
#define _CMU_SYNCBUSY_LFXOBSY_SHIFT                       29                                         /**< Shift value for CMU_LFXOBSY */
#define _CMU_SYNCBUSY_LFXOBSY_MASK                        0x20000000UL                               /**< Bit mask for CMU_LFXOBSY */
#define _CMU_SYNCBUSY_LFXOBSY_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFXOBSY_DEFAULT                      (_CMU_SYNCBUSY_LFXOBSY_DEFAULT << 29)      /**< Shifted mode DEFAULT for CMU_SYNCBUSY */

/* Bit fields for CMU FREEZE */
#define _CMU_FREEZE_RESETVALUE                            0x00000000UL                         /**< Default value for CMU_FREEZE */
#define _CMU_FREEZE_MASK                                  0x00000001UL                         /**< Mask for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE                              (0x1UL << 0)                         /**< Register Update Freeze */
#define _CMU_FREEZE_REGFREEZE_SHIFT                       0                                    /**< Shift value for CMU_REGFREEZE */
#define _CMU_FREEZE_REGFREEZE_MASK                        0x1UL                                /**< Bit mask for CMU_REGFREEZE */
#define _CMU_FREEZE_REGFREEZE_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_UPDATE                      0x00000000UL                         /**< Mode UPDATE for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_FREEZE                      0x00000001UL                         /**< Mode FREEZE for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_DEFAULT                      (_CMU_FREEZE_REGFREEZE_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_UPDATE                       (_CMU_FREEZE_REGFREEZE_UPDATE << 0)  /**< Shifted mode UPDATE for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_FREEZE                       (_CMU_FREEZE_REGFREEZE_FREEZE << 0)  /**< Shifted mode FREEZE for CMU_FREEZE */

/* Bit fields for CMU PCNTCTRL */
#define _CMU_PCNTCTRL_RESETVALUE                          0x00000000UL                             /**< Default value for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_MASK                                0x00000003UL                             /**< Mask for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKEN                           (0x1UL << 0)                             /**< PCNT0 Clock Enable */
#define _CMU_PCNTCTRL_PCNT0CLKEN_SHIFT                    0                                        /**< Shift value for CMU_PCNT0CLKEN */
#define _CMU_PCNTCTRL_PCNT0CLKEN_MASK                     0x1UL                                    /**< Bit mask for CMU_PCNT0CLKEN */
#define _CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT                  0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT                   (_CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL                          (0x1UL << 1)                             /**< PCNT0 Clock Select */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_SHIFT                   1                                        /**< Shift value for CMU_PCNT0CLKSEL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_MASK                    0x2UL                                    /**< Bit mask for CMU_PCNT0CLKSEL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK                  0x00000000UL                             /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0                 0x00000001UL                             /**< Mode PCNT0S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT                  (_CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK                   (_CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK << 1)  /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0                  (_CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0 << 1) /**< Shifted mode PCNT0S0 for CMU_PCNTCTRL */

/* Bit fields for CMU ADCCTRL */
#define _CMU_ADCCTRL_RESETVALUE                           0x00000000UL                            /**< Default value for CMU_ADCCTRL */
#define _CMU_ADCCTRL_MASK                                 0x00000130UL                            /**< Mask for CMU_ADCCTRL */
#define _CMU_ADCCTRL_ADC0CLKSEL_SHIFT                     4                                       /**< Shift value for CMU_ADC0CLKSEL */
#define _CMU_ADCCTRL_ADC0CLKSEL_MASK                      0x30UL                                  /**< Bit mask for CMU_ADC0CLKSEL */
#define _CMU_ADCCTRL_ADC0CLKSEL_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for CMU_ADCCTRL */
#define _CMU_ADCCTRL_ADC0CLKSEL_DISABLED                  0x00000000UL                            /**< Mode DISABLED for CMU_ADCCTRL */
#define _CMU_ADCCTRL_ADC0CLKSEL_AUXHFRCO                  0x00000001UL                            /**< Mode AUXHFRCO for CMU_ADCCTRL */
#define _CMU_ADCCTRL_ADC0CLKSEL_HFXO                      0x00000002UL                            /**< Mode HFXO for CMU_ADCCTRL */
#define _CMU_ADCCTRL_ADC0CLKSEL_HFSRCCLK                  0x00000003UL                            /**< Mode HFSRCCLK for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKSEL_DEFAULT                    (_CMU_ADCCTRL_ADC0CLKSEL_DEFAULT << 4)  /**< Shifted mode DEFAULT for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKSEL_DISABLED                   (_CMU_ADCCTRL_ADC0CLKSEL_DISABLED << 4) /**< Shifted mode DISABLED for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKSEL_AUXHFRCO                   (_CMU_ADCCTRL_ADC0CLKSEL_AUXHFRCO << 4) /**< Shifted mode AUXHFRCO for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKSEL_HFXO                       (_CMU_ADCCTRL_ADC0CLKSEL_HFXO << 4)     /**< Shifted mode HFXO for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKSEL_HFSRCCLK                   (_CMU_ADCCTRL_ADC0CLKSEL_HFSRCCLK << 4) /**< Shifted mode HFSRCCLK for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKINV                            (0x1UL << 8)                            /**< Invert clock selected by ADC0CLKSEL */
#define _CMU_ADCCTRL_ADC0CLKINV_SHIFT                     8                                       /**< Shift value for CMU_ADC0CLKINV */
#define _CMU_ADCCTRL_ADC0CLKINV_MASK                      0x100UL                                 /**< Bit mask for CMU_ADC0CLKINV */
#define _CMU_ADCCTRL_ADC0CLKINV_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for CMU_ADCCTRL */
#define CMU_ADCCTRL_ADC0CLKINV_DEFAULT                    (_CMU_ADCCTRL_ADC0CLKINV_DEFAULT << 8)  /**< Shifted mode DEFAULT for CMU_ADCCTRL */

/* Bit fields for CMU ROUTEPEN */
#define _CMU_ROUTEPEN_RESETVALUE                          0x00000000UL                            /**< Default value for CMU_ROUTEPEN */
#define _CMU_ROUTEPEN_MASK                                0x10000003UL                            /**< Mask for CMU_ROUTEPEN */
#define CMU_ROUTEPEN_CLKOUT0PEN                           (0x1UL << 0)                            /**< CLKOUT0 Pin Enable */
#define _CMU_ROUTEPEN_CLKOUT0PEN_SHIFT                    0                                       /**< Shift value for CMU_CLKOUT0PEN */
#define _CMU_ROUTEPEN_CLKOUT0PEN_MASK                     0x1UL                                   /**< Bit mask for CMU_CLKOUT0PEN */
#define _CMU_ROUTEPEN_CLKOUT0PEN_DEFAULT                  0x00000000UL                            /**< Mode DEFAULT for CMU_ROUTEPEN */
#define CMU_ROUTEPEN_CLKOUT0PEN_DEFAULT                   (_CMU_ROUTEPEN_CLKOUT0PEN_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_ROUTEPEN */
#define CMU_ROUTEPEN_CLKOUT1PEN                           (0x1UL << 1)                            /**< CLKOUT1 Pin Enable */
#define _CMU_ROUTEPEN_CLKOUT1PEN_SHIFT                    1                                       /**< Shift value for CMU_CLKOUT1PEN */
#define _CMU_ROUTEPEN_CLKOUT1PEN_MASK                     0x2UL                                   /**< Bit mask for CMU_CLKOUT1PEN */
#define _CMU_ROUTEPEN_CLKOUT1PEN_DEFAULT                  0x00000000UL                            /**< Mode DEFAULT for CMU_ROUTEPEN */
#define CMU_ROUTEPEN_CLKOUT1PEN_DEFAULT                   (_CMU_ROUTEPEN_CLKOUT1PEN_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_ROUTEPEN */
#define CMU_ROUTEPEN_CLKIN0PEN                            (0x1UL << 28)                           /**< CLKIN0 Pin Enable */
#define _CMU_ROUTEPEN_CLKIN0PEN_SHIFT                     28                                      /**< Shift value for CMU_CLKIN0PEN */
#define _CMU_ROUTEPEN_CLKIN0PEN_MASK                      0x10000000UL                            /**< Bit mask for CMU_CLKIN0PEN */
#define _CMU_ROUTEPEN_CLKIN0PEN_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for CMU_ROUTEPEN */
#define CMU_ROUTEPEN_CLKIN0PEN_DEFAULT                    (_CMU_ROUTEPEN_CLKIN0PEN_DEFAULT << 28) /**< Shifted mode DEFAULT for CMU_ROUTEPEN */

/* Bit fields for CMU ROUTELOC0 */
#define _CMU_ROUTELOC0_RESETVALUE                         0x00000000UL                             /**< Default value for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_MASK                               0x00000707UL                             /**< Mask for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_SHIFT                   0                                        /**< Shift value for CMU_CLKOUT0LOC */
#define _CMU_ROUTELOC0_CLKOUT0LOC_MASK                    0x7UL                                    /**< Bit mask for CMU_CLKOUT0LOC */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC0                    0x00000000UL                             /**< Mode LOC0 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC1                    0x00000001UL                             /**< Mode LOC1 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC2                    0x00000002UL                             /**< Mode LOC2 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC3                    0x00000003UL                             /**< Mode LOC3 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC4                    0x00000004UL                             /**< Mode LOC4 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC5                    0x00000005UL                             /**< Mode LOC5 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC6                    0x00000006UL                             /**< Mode LOC6 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT0LOC_LOC7                    0x00000007UL                             /**< Mode LOC7 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC0                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC0 << 0)    /**< Shifted mode LOC0 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_DEFAULT                  (_CMU_ROUTELOC0_CLKOUT0LOC_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC1                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC1 << 0)    /**< Shifted mode LOC1 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC2                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC2 << 0)    /**< Shifted mode LOC2 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC3                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC3 << 0)    /**< Shifted mode LOC3 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC4                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC4 << 0)    /**< Shifted mode LOC4 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC5                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC5 << 0)    /**< Shifted mode LOC5 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC6                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC6 << 0)    /**< Shifted mode LOC6 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT0LOC_LOC7                     (_CMU_ROUTELOC0_CLKOUT0LOC_LOC7 << 0)    /**< Shifted mode LOC7 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_SHIFT                   8                                        /**< Shift value for CMU_CLKOUT1LOC */
#define _CMU_ROUTELOC0_CLKOUT1LOC_MASK                    0x700UL                                  /**< Bit mask for CMU_CLKOUT1LOC */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC0                    0x00000000UL                             /**< Mode LOC0 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC1                    0x00000001UL                             /**< Mode LOC1 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC2                    0x00000002UL                             /**< Mode LOC2 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC3                    0x00000003UL                             /**< Mode LOC3 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC4                    0x00000004UL                             /**< Mode LOC4 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC5                    0x00000005UL                             /**< Mode LOC5 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC6                    0x00000006UL                             /**< Mode LOC6 for CMU_ROUTELOC0 */
#define _CMU_ROUTELOC0_CLKOUT1LOC_LOC7                    0x00000007UL                             /**< Mode LOC7 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC0                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC0 << 8)    /**< Shifted mode LOC0 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_DEFAULT                  (_CMU_ROUTELOC0_CLKOUT1LOC_DEFAULT << 8) /**< Shifted mode DEFAULT for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC1                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC1 << 8)    /**< Shifted mode LOC1 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC2                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC2 << 8)    /**< Shifted mode LOC2 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC3                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC3 << 8)    /**< Shifted mode LOC3 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC4                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC4 << 8)    /**< Shifted mode LOC4 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC5                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC5 << 8)    /**< Shifted mode LOC5 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC6                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC6 << 8)    /**< Shifted mode LOC6 for CMU_ROUTELOC0 */
#define CMU_ROUTELOC0_CLKOUT1LOC_LOC7                     (_CMU_ROUTELOC0_CLKOUT1LOC_LOC7 << 8)    /**< Shifted mode LOC7 for CMU_ROUTELOC0 */

/* Bit fields for CMU ROUTELOC1 */
#define _CMU_ROUTELOC1_RESETVALUE                         0x00000000UL                            /**< Default value for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_MASK                               0x00000007UL                            /**< Mask for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_CLKIN0LOC_SHIFT                    0                                       /**< Shift value for CMU_CLKIN0LOC */
#define _CMU_ROUTELOC1_CLKIN0LOC_MASK                     0x7UL                                   /**< Bit mask for CMU_CLKIN0LOC */
#define _CMU_ROUTELOC1_CLKIN0LOC_LOC0                     0x00000000UL                            /**< Mode LOC0 for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_CLKIN0LOC_DEFAULT                  0x00000000UL                            /**< Mode DEFAULT for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_CLKIN0LOC_LOC1                     0x00000001UL                            /**< Mode LOC1 for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_CLKIN0LOC_LOC2                     0x00000002UL                            /**< Mode LOC2 for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_CLKIN0LOC_LOC3                     0x00000003UL                            /**< Mode LOC3 for CMU_ROUTELOC1 */
#define _CMU_ROUTELOC1_CLKIN0LOC_LOC4                     0x00000004UL                            /**< Mode LOC4 for CMU_ROUTELOC1 */
#define CMU_ROUTELOC1_CLKIN0LOC_LOC0                      (_CMU_ROUTELOC1_CLKIN0LOC_LOC0 << 0)    /**< Shifted mode LOC0 for CMU_ROUTELOC1 */
#define CMU_ROUTELOC1_CLKIN0LOC_DEFAULT                   (_CMU_ROUTELOC1_CLKIN0LOC_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_ROUTELOC1 */
#define CMU_ROUTELOC1_CLKIN0LOC_LOC1                      (_CMU_ROUTELOC1_CLKIN0LOC_LOC1 << 0)    /**< Shifted mode LOC1 for CMU_ROUTELOC1 */
#define CMU_ROUTELOC1_CLKIN0LOC_LOC2                      (_CMU_ROUTELOC1_CLKIN0LOC_LOC2 << 0)    /**< Shifted mode LOC2 for CMU_ROUTELOC1 */
#define CMU_ROUTELOC1_CLKIN0LOC_LOC3                      (_CMU_ROUTELOC1_CLKIN0LOC_LOC3 << 0)    /**< Shifted mode LOC3 for CMU_ROUTELOC1 */
#define CMU_ROUTELOC1_CLKIN0LOC_LOC4                      (_CMU_ROUTELOC1_CLKIN0LOC_LOC4 << 0)    /**< Shifted mode LOC4 for CMU_ROUTELOC1 */

/* Bit fields for CMU LOCK */
#define _CMU_LOCK_RESETVALUE                              0x00000000UL                      /**< Default value for CMU_LOCK */
#define _CMU_LOCK_MASK                                    0x0000FFFFUL                      /**< Mask for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_SHIFT                           0                                 /**< Shift value for CMU_LOCKKEY */
#define _CMU_LOCK_LOCKKEY_MASK                            0xFFFFUL                          /**< Bit mask for CMU_LOCKKEY */
#define _CMU_LOCK_LOCKKEY_DEFAULT                         0x00000000UL                      /**< Mode DEFAULT for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCK                            0x00000000UL                      /**< Mode LOCK for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCKED                        0x00000000UL                      /**< Mode UNLOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCKED                          0x00000001UL                      /**< Mode LOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCK                          0x0000580EUL                      /**< Mode UNLOCK for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_DEFAULT                          (_CMU_LOCK_LOCKKEY_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCK                             (_CMU_LOCK_LOCKKEY_LOCK << 0)     /**< Shifted mode LOCK for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCKED                         (_CMU_LOCK_LOCKKEY_UNLOCKED << 0) /**< Shifted mode UNLOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCKED                           (_CMU_LOCK_LOCKKEY_LOCKED << 0)   /**< Shifted mode LOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCK                           (_CMU_LOCK_LOCKKEY_UNLOCK << 0)   /**< Shifted mode UNLOCK for CMU_LOCK */

/* Bit fields for CMU HFRCOSS */
#define _CMU_HFRCOSS_RESETVALUE                           0x00000000UL                      /**< Default value for CMU_HFRCOSS */
#define _CMU_HFRCOSS_MASK                                 0x00001F07UL                      /**< Mask for CMU_HFRCOSS */
#define _CMU_HFRCOSS_SSAMP_SHIFT                          0                                 /**< Shift value for CMU_SSAMP */
#define _CMU_HFRCOSS_SSAMP_MASK                           0x7UL                             /**< Bit mask for CMU_SSAMP */
#define _CMU_HFRCOSS_SSAMP_DEFAULT                        0x00000000UL                      /**< Mode DEFAULT for CMU_HFRCOSS */
#define CMU_HFRCOSS_SSAMP_DEFAULT                         (_CMU_HFRCOSS_SSAMP_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFRCOSS */
#define _CMU_HFRCOSS_SSINV_SHIFT                          8                                 /**< Shift value for CMU_SSINV */
#define _CMU_HFRCOSS_SSINV_MASK                           0x1F00UL                          /**< Bit mask for CMU_SSINV */
#define _CMU_HFRCOSS_SSINV_DEFAULT                        0x00000000UL                      /**< Mode DEFAULT for CMU_HFRCOSS */
#define CMU_HFRCOSS_SSINV_DEFAULT                         (_CMU_HFRCOSS_SSINV_DEFAULT << 8) /**< Shifted mode DEFAULT for CMU_HFRCOSS */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_CMU */

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_PRS
 * @{
 * @defgroup EFR32MG13P932F512IM48_PRS_BitFields  PRS Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for PRS SWPULSE */
#define _PRS_SWPULSE_RESETVALUE                    0x00000000UL                           /**< Default value for PRS_SWPULSE */
#define _PRS_SWPULSE_MASK                          0x00000FFFUL                           /**< Mask for PRS_SWPULSE */
#define PRS_SWPULSE_CH0PULSE                       (0x1UL << 0)                           /**< Channel 0 Pulse Generation */
#define _PRS_SWPULSE_CH0PULSE_SHIFT                0                                      /**< Shift value for PRS_CH0PULSE */
#define _PRS_SWPULSE_CH0PULSE_MASK                 0x1UL                                  /**< Bit mask for PRS_CH0PULSE */
#define _PRS_SWPULSE_CH0PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH0PULSE_DEFAULT               (_PRS_SWPULSE_CH0PULSE_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH1PULSE                       (0x1UL << 1)                           /**< Channel 1 Pulse Generation */
#define _PRS_SWPULSE_CH1PULSE_SHIFT                1                                      /**< Shift value for PRS_CH1PULSE */
#define _PRS_SWPULSE_CH1PULSE_MASK                 0x2UL                                  /**< Bit mask for PRS_CH1PULSE */
#define _PRS_SWPULSE_CH1PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH1PULSE_DEFAULT               (_PRS_SWPULSE_CH1PULSE_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH2PULSE                       (0x1UL << 2)                           /**< Channel 2 Pulse Generation */
#define _PRS_SWPULSE_CH2PULSE_SHIFT                2                                      /**< Shift value for PRS_CH2PULSE */
#define _PRS_SWPULSE_CH2PULSE_MASK                 0x4UL                                  /**< Bit mask for PRS_CH2PULSE */
#define _PRS_SWPULSE_CH2PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH2PULSE_DEFAULT               (_PRS_SWPULSE_CH2PULSE_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH3PULSE                       (0x1UL << 3)                           /**< Channel 3 Pulse Generation */
#define _PRS_SWPULSE_CH3PULSE_SHIFT                3                                      /**< Shift value for PRS_CH3PULSE */
#define _PRS_SWPULSE_CH3PULSE_MASK                 0x8UL                                  /**< Bit mask for PRS_CH3PULSE */
#define _PRS_SWPULSE_CH3PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH3PULSE_DEFAULT               (_PRS_SWPULSE_CH3PULSE_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH4PULSE                       (0x1UL << 4)                           /**< Channel 4 Pulse Generation */
#define _PRS_SWPULSE_CH4PULSE_SHIFT                4                                      /**< Shift value for PRS_CH4PULSE */
#define _PRS_SWPULSE_CH4PULSE_MASK                 0x10UL                                 /**< Bit mask for PRS_CH4PULSE */
#define _PRS_SWPULSE_CH4PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH4PULSE_DEFAULT               (_PRS_SWPULSE_CH4PULSE_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH5PULSE                       (0x1UL << 5)                           /**< Channel 5 Pulse Generation */
#define _PRS_SWPULSE_CH5PULSE_SHIFT                5                                      /**< Shift value for PRS_CH5PULSE */
#define _PRS_SWPULSE_CH5PULSE_MASK                 0x20UL                                 /**< Bit mask for PRS_CH5PULSE */
#define _PRS_SWPULSE_CH5PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH5PULSE_DEFAULT               (_PRS_SWPULSE_CH5PULSE_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH6PULSE                       (0x1UL << 6)                           /**< Channel 6 Pulse Generation */
#define _PRS_SWPULSE_CH6PULSE_SHIFT                6                                      /**< Shift value for PRS_CH6PULSE */
#define _PRS_SWPULSE_CH6PULSE_MASK                 0x40UL                                 /**< Bit mask for PRS_CH6PULSE */
#define _PRS_SWPULSE_CH6PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH6PULSE_DEFAULT               (_PRS_SWPULSE_CH6PULSE_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH7PULSE                       (0x1UL << 7)                           /**< Channel 7 Pulse Generation */
#define _PRS_SWPULSE_CH7PULSE_SHIFT                7                                      /**< Shift value for PRS_CH7PULSE */
#define _PRS_SWPULSE_CH7PULSE_MASK                 0x80UL                                 /**< Bit mask for PRS_CH7PULSE */
#define _PRS_SWPULSE_CH7PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH7PULSE_DEFAULT               (_PRS_SWPULSE_CH7PULSE_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH8PULSE                       (0x1UL << 8)                           /**< Channel 8 Pulse Generation */
#define _PRS_SWPULSE_CH8PULSE_SHIFT                8                                      /**< Shift value for PRS_CH8PULSE */
#define _PRS_SWPULSE_CH8PULSE_MASK                 0x100UL                                /**< Bit mask for PRS_CH8PULSE */
#define _PRS_SWPULSE_CH8PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH8PULSE_DEFAULT               (_PRS_SWPULSE_CH8PULSE_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH9PULSE                       (0x1UL << 9)                           /**< Channel 9 Pulse Generation */
#define _PRS_SWPULSE_CH9PULSE_SHIFT                9                                      /**< Shift value for PRS_CH9PULSE */
#define _PRS_SWPULSE_CH9PULSE_MASK                 0x200UL                                /**< Bit mask for PRS_CH9PULSE */
#define _PRS_SWPULSE_CH9PULSE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH9PULSE_DEFAULT               (_PRS_SWPULSE_CH9PULSE_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH10PULSE                      (0x1UL << 10)                          /**< Channel 10 Pulse Generation */
#define _PRS_SWPULSE_CH10PULSE_SHIFT               10                                     /**< Shift value for PRS_CH10PULSE */
#define _PRS_SWPULSE_CH10PULSE_MASK                0x400UL                                /**< Bit mask for PRS_CH10PULSE */
#define _PRS_SWPULSE_CH10PULSE_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH10PULSE_DEFAULT              (_PRS_SWPULSE_CH10PULSE_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH11PULSE                      (0x1UL << 11)                          /**< Channel 11 Pulse Generation */
#define _PRS_SWPULSE_CH11PULSE_SHIFT               11                                     /**< Shift value for PRS_CH11PULSE */
#define _PRS_SWPULSE_CH11PULSE_MASK                0x800UL                                /**< Bit mask for PRS_CH11PULSE */
#define _PRS_SWPULSE_CH11PULSE_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH11PULSE_DEFAULT              (_PRS_SWPULSE_CH11PULSE_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_SWPULSE */

/* Bit fields for PRS SWLEVEL */
#define _PRS_SWLEVEL_RESETVALUE                    0x00000000UL                           /**< Default value for PRS_SWLEVEL */
#define _PRS_SWLEVEL_MASK                          0x00000FFFUL                           /**< Mask for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH0LEVEL                       (0x1UL << 0)                           /**< Channel 0 Software Level */
#define _PRS_SWLEVEL_CH0LEVEL_SHIFT                0                                      /**< Shift value for PRS_CH0LEVEL */
#define _PRS_SWLEVEL_CH0LEVEL_MASK                 0x1UL                                  /**< Bit mask for PRS_CH0LEVEL */
#define _PRS_SWLEVEL_CH0LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH0LEVEL_DEFAULT               (_PRS_SWLEVEL_CH0LEVEL_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH1LEVEL                       (0x1UL << 1)                           /**< Channel 1 Software Level */
#define _PRS_SWLEVEL_CH1LEVEL_SHIFT                1                                      /**< Shift value for PRS_CH1LEVEL */
#define _PRS_SWLEVEL_CH1LEVEL_MASK                 0x2UL                                  /**< Bit mask for PRS_CH1LEVEL */
#define _PRS_SWLEVEL_CH1LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH1LEVEL_DEFAULT               (_PRS_SWLEVEL_CH1LEVEL_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH2LEVEL                       (0x1UL << 2)                           /**< Channel 2 Software Level */
#define _PRS_SWLEVEL_CH2LEVEL_SHIFT                2                                      /**< Shift value for PRS_CH2LEVEL */
#define _PRS_SWLEVEL_CH2LEVEL_MASK                 0x4UL                                  /**< Bit mask for PRS_CH2LEVEL */
#define _PRS_SWLEVEL_CH2LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH2LEVEL_DEFAULT               (_PRS_SWLEVEL_CH2LEVEL_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH3LEVEL                       (0x1UL << 3)                           /**< Channel 3 Software Level */
#define _PRS_SWLEVEL_CH3LEVEL_SHIFT                3                                      /**< Shift value for PRS_CH3LEVEL */
#define _PRS_SWLEVEL_CH3LEVEL_MASK                 0x8UL                                  /**< Bit mask for PRS_CH3LEVEL */
#define _PRS_SWLEVEL_CH3LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH3LEVEL_DEFAULT               (_PRS_SWLEVEL_CH3LEVEL_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH4LEVEL                       (0x1UL << 4)                           /**< Channel 4 Software Level */
#define _PRS_SWLEVEL_CH4LEVEL_SHIFT                4                                      /**< Shift value for PRS_CH4LEVEL */
#define _PRS_SWLEVEL_CH4LEVEL_MASK                 0x10UL                                 /**< Bit mask for PRS_CH4LEVEL */
#define _PRS_SWLEVEL_CH4LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH4LEVEL_DEFAULT               (_PRS_SWLEVEL_CH4LEVEL_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH5LEVEL                       (0x1UL << 5)                           /**< Channel 5 Software Level */
#define _PRS_SWLEVEL_CH5LEVEL_SHIFT                5                                      /**< Shift value for PRS_CH5LEVEL */
#define _PRS_SWLEVEL_CH5LEVEL_MASK                 0x20UL                                 /**< Bit mask for PRS_CH5LEVEL */
#define _PRS_SWLEVEL_CH5LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH5LEVEL_DEFAULT               (_PRS_SWLEVEL_CH5LEVEL_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH6LEVEL                       (0x1UL << 6)                           /**< Channel 6 Software Level */
#define _PRS_SWLEVEL_CH6LEVEL_SHIFT                6                                      /**< Shift value for PRS_CH6LEVEL */
#define _PRS_SWLEVEL_CH6LEVEL_MASK                 0x40UL                                 /**< Bit mask for PRS_CH6LEVEL */
#define _PRS_SWLEVEL_CH6LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH6LEVEL_DEFAULT               (_PRS_SWLEVEL_CH6LEVEL_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH7LEVEL                       (0x1UL << 7)                           /**< Channel 7 Software Level */
#define _PRS_SWLEVEL_CH7LEVEL_SHIFT                7                                      /**< Shift value for PRS_CH7LEVEL */
#define _PRS_SWLEVEL_CH7LEVEL_MASK                 0x80UL                                 /**< Bit mask for PRS_CH7LEVEL */
#define _PRS_SWLEVEL_CH7LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH7LEVEL_DEFAULT               (_PRS_SWLEVEL_CH7LEVEL_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH8LEVEL                       (0x1UL << 8)                           /**< Channel 8 Software Level */
#define _PRS_SWLEVEL_CH8LEVEL_SHIFT                8                                      /**< Shift value for PRS_CH8LEVEL */
#define _PRS_SWLEVEL_CH8LEVEL_MASK                 0x100UL                                /**< Bit mask for PRS_CH8LEVEL */
#define _PRS_SWLEVEL_CH8LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH8LEVEL_DEFAULT               (_PRS_SWLEVEL_CH8LEVEL_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH9LEVEL                       (0x1UL << 9)                           /**< Channel 9 Software Level */
#define _PRS_SWLEVEL_CH9LEVEL_SHIFT                9                                      /**< Shift value for PRS_CH9LEVEL */
#define _PRS_SWLEVEL_CH9LEVEL_MASK                 0x200UL                                /**< Bit mask for PRS_CH9LEVEL */
#define _PRS_SWLEVEL_CH9LEVEL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH9LEVEL_DEFAULT               (_PRS_SWLEVEL_CH9LEVEL_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH10LEVEL                      (0x1UL << 10)                          /**< Channel 10 Software Level */
#define _PRS_SWLEVEL_CH10LEVEL_SHIFT               10                                     /**< Shift value for PRS_CH10LEVEL */
#define _PRS_SWLEVEL_CH10LEVEL_MASK                0x400UL                                /**< Bit mask for PRS_CH10LEVEL */
#define _PRS_SWLEVEL_CH10LEVEL_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH10LEVEL_DEFAULT              (_PRS_SWLEVEL_CH10LEVEL_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH11LEVEL                      (0x1UL << 11)                          /**< Channel 11 Software Level */
#define _PRS_SWLEVEL_CH11LEVEL_SHIFT               11                                     /**< Shift value for PRS_CH11LEVEL */
#define _PRS_SWLEVEL_CH11LEVEL_MASK                0x800UL                                /**< Bit mask for PRS_CH11LEVEL */
#define _PRS_SWLEVEL_CH11LEVEL_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH11LEVEL_DEFAULT              (_PRS_SWLEVEL_CH11LEVEL_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_SWLEVEL */

/* Bit fields for PRS ROUTEPEN */
#define _PRS_ROUTEPEN_RESETVALUE                   0x00000000UL                          /**< Default value for PRS_ROUTEPEN */
#define _PRS_ROUTEPEN_MASK                         0x00000FFFUL                          /**< Mask for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH0PEN                        (0x1UL << 0)                          /**< CH0 Pin Enable */
#define _PRS_ROUTEPEN_CH0PEN_SHIFT                 0                                     /**< Shift value for PRS_CH0PEN */
#define _PRS_ROUTEPEN_CH0PEN_MASK                  0x1UL                                 /**< Bit mask for PRS_CH0PEN */
#define _PRS_ROUTEPEN_CH0PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH0PEN_DEFAULT                (_PRS_ROUTEPEN_CH0PEN_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH1PEN                        (0x1UL << 1)                          /**< CH1 Pin Enable */
#define _PRS_ROUTEPEN_CH1PEN_SHIFT                 1                                     /**< Shift value for PRS_CH1PEN */
#define _PRS_ROUTEPEN_CH1PEN_MASK                  0x2UL                                 /**< Bit mask for PRS_CH1PEN */
#define _PRS_ROUTEPEN_CH1PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH1PEN_DEFAULT                (_PRS_ROUTEPEN_CH1PEN_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH2PEN                        (0x1UL << 2)                          /**< CH2 Pin Enable */
#define _PRS_ROUTEPEN_CH2PEN_SHIFT                 2                                     /**< Shift value for PRS_CH2PEN */
#define _PRS_ROUTEPEN_CH2PEN_MASK                  0x4UL                                 /**< Bit mask for PRS_CH2PEN */
#define _PRS_ROUTEPEN_CH2PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH2PEN_DEFAULT                (_PRS_ROUTEPEN_CH2PEN_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH3PEN                        (0x1UL << 3)                          /**< CH3 Pin Enable */
#define _PRS_ROUTEPEN_CH3PEN_SHIFT                 3                                     /**< Shift value for PRS_CH3PEN */
#define _PRS_ROUTEPEN_CH3PEN_MASK                  0x8UL                                 /**< Bit mask for PRS_CH3PEN */
#define _PRS_ROUTEPEN_CH3PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH3PEN_DEFAULT                (_PRS_ROUTEPEN_CH3PEN_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH4PEN                        (0x1UL << 4)                          /**< CH4 Pin Enable */
#define _PRS_ROUTEPEN_CH4PEN_SHIFT                 4                                     /**< Shift value for PRS_CH4PEN */
#define _PRS_ROUTEPEN_CH4PEN_MASK                  0x10UL                                /**< Bit mask for PRS_CH4PEN */
#define _PRS_ROUTEPEN_CH4PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH4PEN_DEFAULT                (_PRS_ROUTEPEN_CH4PEN_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH5PEN                        (0x1UL << 5)                          /**< CH5 Pin Enable */
#define _PRS_ROUTEPEN_CH5PEN_SHIFT                 5                                     /**< Shift value for PRS_CH5PEN */
#define _PRS_ROUTEPEN_CH5PEN_MASK                  0x20UL                                /**< Bit mask for PRS_CH5PEN */
#define _PRS_ROUTEPEN_CH5PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH5PEN_DEFAULT                (_PRS_ROUTEPEN_CH5PEN_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH6PEN                        (0x1UL << 6)                          /**< CH6 Pin Enable */
#define _PRS_ROUTEPEN_CH6PEN_SHIFT                 6                                     /**< Shift value for PRS_CH6PEN */
#define _PRS_ROUTEPEN_CH6PEN_MASK                  0x40UL                                /**< Bit mask for PRS_CH6PEN */
#define _PRS_ROUTEPEN_CH6PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH6PEN_DEFAULT                (_PRS_ROUTEPEN_CH6PEN_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH7PEN                        (0x1UL << 7)                          /**< CH7 Pin Enable */
#define _PRS_ROUTEPEN_CH7PEN_SHIFT                 7                                     /**< Shift value for PRS_CH7PEN */
#define _PRS_ROUTEPEN_CH7PEN_MASK                  0x80UL                                /**< Bit mask for PRS_CH7PEN */
#define _PRS_ROUTEPEN_CH7PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH7PEN_DEFAULT                (_PRS_ROUTEPEN_CH7PEN_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH8PEN                        (0x1UL << 8)                          /**< CH8 Pin Enable */
#define _PRS_ROUTEPEN_CH8PEN_SHIFT                 8                                     /**< Shift value for PRS_CH8PEN */
#define _PRS_ROUTEPEN_CH8PEN_MASK                  0x100UL                               /**< Bit mask for PRS_CH8PEN */
#define _PRS_ROUTEPEN_CH8PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH8PEN_DEFAULT                (_PRS_ROUTEPEN_CH8PEN_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH9PEN                        (0x1UL << 9)                          /**< CH9 Pin Enable */
#define _PRS_ROUTEPEN_CH9PEN_SHIFT                 9                                     /**< Shift value for PRS_CH9PEN */
#define _PRS_ROUTEPEN_CH9PEN_MASK                  0x200UL                               /**< Bit mask for PRS_CH9PEN */
#define _PRS_ROUTEPEN_CH9PEN_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH9PEN_DEFAULT                (_PRS_ROUTEPEN_CH9PEN_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH10PEN                       (0x1UL << 10)                         /**< CH10 Pin Enable */
#define _PRS_ROUTEPEN_CH10PEN_SHIFT                10                                    /**< Shift value for PRS_CH10PEN */
#define _PRS_ROUTEPEN_CH10PEN_MASK                 0x400UL                               /**< Bit mask for PRS_CH10PEN */
#define _PRS_ROUTEPEN_CH10PEN_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH10PEN_DEFAULT               (_PRS_ROUTEPEN_CH10PEN_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH11PEN                       (0x1UL << 11)                         /**< CH11 Pin Enable */
#define _PRS_ROUTEPEN_CH11PEN_SHIFT                11                                    /**< Shift value for PRS_CH11PEN */
#define _PRS_ROUTEPEN_CH11PEN_MASK                 0x800UL                               /**< Bit mask for PRS_CH11PEN */
#define _PRS_ROUTEPEN_CH11PEN_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTEPEN */
#define PRS_ROUTEPEN_CH11PEN_DEFAULT               (_PRS_ROUTEPEN_CH11PEN_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_ROUTEPEN */

/* Bit fields for PRS ROUTELOC0 */
#define _PRS_ROUTELOC0_RESETVALUE                  0x00000000UL                          /**< Default value for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_MASK                        0x0F07070FUL                          /**< Mask for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_SHIFT                0                                     /**< Shift value for PRS_CH0LOC */
#define _PRS_ROUTELOC0_CH0LOC_MASK                 0xFUL                                 /**< Bit mask for PRS_CH0LOC */
#define _PRS_ROUTELOC0_CH0LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC7                 0x00000007UL                          /**< Mode LOC7 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC8                 0x00000008UL                          /**< Mode LOC8 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC9                 0x00000009UL                          /**< Mode LOC9 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC10                0x0000000AUL                          /**< Mode LOC10 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC11                0x0000000BUL                          /**< Mode LOC11 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC12                0x0000000CUL                          /**< Mode LOC12 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH0LOC_LOC13                0x0000000DUL                          /**< Mode LOC13 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC0                  (_PRS_ROUTELOC0_CH0LOC_LOC0 << 0)     /**< Shifted mode LOC0 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_DEFAULT               (_PRS_ROUTELOC0_CH0LOC_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC1                  (_PRS_ROUTELOC0_CH0LOC_LOC1 << 0)     /**< Shifted mode LOC1 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC2                  (_PRS_ROUTELOC0_CH0LOC_LOC2 << 0)     /**< Shifted mode LOC2 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC3                  (_PRS_ROUTELOC0_CH0LOC_LOC3 << 0)     /**< Shifted mode LOC3 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC4                  (_PRS_ROUTELOC0_CH0LOC_LOC4 << 0)     /**< Shifted mode LOC4 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC5                  (_PRS_ROUTELOC0_CH0LOC_LOC5 << 0)     /**< Shifted mode LOC5 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC6                  (_PRS_ROUTELOC0_CH0LOC_LOC6 << 0)     /**< Shifted mode LOC6 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC7                  (_PRS_ROUTELOC0_CH0LOC_LOC7 << 0)     /**< Shifted mode LOC7 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC8                  (_PRS_ROUTELOC0_CH0LOC_LOC8 << 0)     /**< Shifted mode LOC8 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC9                  (_PRS_ROUTELOC0_CH0LOC_LOC9 << 0)     /**< Shifted mode LOC9 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC10                 (_PRS_ROUTELOC0_CH0LOC_LOC10 << 0)    /**< Shifted mode LOC10 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC11                 (_PRS_ROUTELOC0_CH0LOC_LOC11 << 0)    /**< Shifted mode LOC11 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC12                 (_PRS_ROUTELOC0_CH0LOC_LOC12 << 0)    /**< Shifted mode LOC12 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH0LOC_LOC13                 (_PRS_ROUTELOC0_CH0LOC_LOC13 << 0)    /**< Shifted mode LOC13 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_SHIFT                8                                     /**< Shift value for PRS_CH1LOC */
#define _PRS_ROUTELOC0_CH1LOC_MASK                 0x700UL                               /**< Bit mask for PRS_CH1LOC */
#define _PRS_ROUTELOC0_CH1LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH1LOC_LOC7                 0x00000007UL                          /**< Mode LOC7 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC0                  (_PRS_ROUTELOC0_CH1LOC_LOC0 << 8)     /**< Shifted mode LOC0 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_DEFAULT               (_PRS_ROUTELOC0_CH1LOC_DEFAULT << 8)  /**< Shifted mode DEFAULT for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC1                  (_PRS_ROUTELOC0_CH1LOC_LOC1 << 8)     /**< Shifted mode LOC1 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC2                  (_PRS_ROUTELOC0_CH1LOC_LOC2 << 8)     /**< Shifted mode LOC2 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC3                  (_PRS_ROUTELOC0_CH1LOC_LOC3 << 8)     /**< Shifted mode LOC3 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC4                  (_PRS_ROUTELOC0_CH1LOC_LOC4 << 8)     /**< Shifted mode LOC4 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC5                  (_PRS_ROUTELOC0_CH1LOC_LOC5 << 8)     /**< Shifted mode LOC5 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC6                  (_PRS_ROUTELOC0_CH1LOC_LOC6 << 8)     /**< Shifted mode LOC6 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH1LOC_LOC7                  (_PRS_ROUTELOC0_CH1LOC_LOC7 << 8)     /**< Shifted mode LOC7 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_SHIFT                16                                    /**< Shift value for PRS_CH2LOC */
#define _PRS_ROUTELOC0_CH2LOC_MASK                 0x70000UL                             /**< Bit mask for PRS_CH2LOC */
#define _PRS_ROUTELOC0_CH2LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH2LOC_LOC7                 0x00000007UL                          /**< Mode LOC7 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC0                  (_PRS_ROUTELOC0_CH2LOC_LOC0 << 16)    /**< Shifted mode LOC0 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_DEFAULT               (_PRS_ROUTELOC0_CH2LOC_DEFAULT << 16) /**< Shifted mode DEFAULT for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC1                  (_PRS_ROUTELOC0_CH2LOC_LOC1 << 16)    /**< Shifted mode LOC1 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC2                  (_PRS_ROUTELOC0_CH2LOC_LOC2 << 16)    /**< Shifted mode LOC2 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC3                  (_PRS_ROUTELOC0_CH2LOC_LOC3 << 16)    /**< Shifted mode LOC3 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC4                  (_PRS_ROUTELOC0_CH2LOC_LOC4 << 16)    /**< Shifted mode LOC4 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC5                  (_PRS_ROUTELOC0_CH2LOC_LOC5 << 16)    /**< Shifted mode LOC5 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC6                  (_PRS_ROUTELOC0_CH2LOC_LOC6 << 16)    /**< Shifted mode LOC6 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH2LOC_LOC7                  (_PRS_ROUTELOC0_CH2LOC_LOC7 << 16)    /**< Shifted mode LOC7 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_SHIFT                24                                    /**< Shift value for PRS_CH3LOC */
#define _PRS_ROUTELOC0_CH3LOC_MASK                 0xF000000UL                           /**< Bit mask for PRS_CH3LOC */
#define _PRS_ROUTELOC0_CH3LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC7                 0x00000007UL                          /**< Mode LOC7 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC8                 0x00000008UL                          /**< Mode LOC8 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC9                 0x00000009UL                          /**< Mode LOC9 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC10                0x0000000AUL                          /**< Mode LOC10 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC11                0x0000000BUL                          /**< Mode LOC11 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC12                0x0000000CUL                          /**< Mode LOC12 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC13                0x0000000DUL                          /**< Mode LOC13 for PRS_ROUTELOC0 */
#define _PRS_ROUTELOC0_CH3LOC_LOC14                0x0000000EUL                          /**< Mode LOC14 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC0                  (_PRS_ROUTELOC0_CH3LOC_LOC0 << 24)    /**< Shifted mode LOC0 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_DEFAULT               (_PRS_ROUTELOC0_CH3LOC_DEFAULT << 24) /**< Shifted mode DEFAULT for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC1                  (_PRS_ROUTELOC0_CH3LOC_LOC1 << 24)    /**< Shifted mode LOC1 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC2                  (_PRS_ROUTELOC0_CH3LOC_LOC2 << 24)    /**< Shifted mode LOC2 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC3                  (_PRS_ROUTELOC0_CH3LOC_LOC3 << 24)    /**< Shifted mode LOC3 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC4                  (_PRS_ROUTELOC0_CH3LOC_LOC4 << 24)    /**< Shifted mode LOC4 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC5                  (_PRS_ROUTELOC0_CH3LOC_LOC5 << 24)    /**< Shifted mode LOC5 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC6                  (_PRS_ROUTELOC0_CH3LOC_LOC6 << 24)    /**< Shifted mode LOC6 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC7                  (_PRS_ROUTELOC0_CH3LOC_LOC7 << 24)    /**< Shifted mode LOC7 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC8                  (_PRS_ROUTELOC0_CH3LOC_LOC8 << 24)    /**< Shifted mode LOC8 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC9                  (_PRS_ROUTELOC0_CH3LOC_LOC9 << 24)    /**< Shifted mode LOC9 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC10                 (_PRS_ROUTELOC0_CH3LOC_LOC10 << 24)   /**< Shifted mode LOC10 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC11                 (_PRS_ROUTELOC0_CH3LOC_LOC11 << 24)   /**< Shifted mode LOC11 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC12                 (_PRS_ROUTELOC0_CH3LOC_LOC12 << 24)   /**< Shifted mode LOC12 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC13                 (_PRS_ROUTELOC0_CH3LOC_LOC13 << 24)   /**< Shifted mode LOC13 for PRS_ROUTELOC0 */
#define PRS_ROUTELOC0_CH3LOC_LOC14                 (_PRS_ROUTELOC0_CH3LOC_LOC14 << 24)   /**< Shifted mode LOC14 for PRS_ROUTELOC0 */

/* Bit fields for PRS ROUTELOC1 */
#define _PRS_ROUTELOC1_RESETVALUE                  0x00000000UL                          /**< Default value for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_MASK                        0x0F1F0707UL                          /**< Mask for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_SHIFT                0                                     /**< Shift value for PRS_CH4LOC */
#define _PRS_ROUTELOC1_CH4LOC_MASK                 0x7UL                                 /**< Bit mask for PRS_CH4LOC */
#define _PRS_ROUTELOC1_CH4LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH4LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC0                  (_PRS_ROUTELOC1_CH4LOC_LOC0 << 0)     /**< Shifted mode LOC0 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_DEFAULT               (_PRS_ROUTELOC1_CH4LOC_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC1                  (_PRS_ROUTELOC1_CH4LOC_LOC1 << 0)     /**< Shifted mode LOC1 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC2                  (_PRS_ROUTELOC1_CH4LOC_LOC2 << 0)     /**< Shifted mode LOC2 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC3                  (_PRS_ROUTELOC1_CH4LOC_LOC3 << 0)     /**< Shifted mode LOC3 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC4                  (_PRS_ROUTELOC1_CH4LOC_LOC4 << 0)     /**< Shifted mode LOC4 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC5                  (_PRS_ROUTELOC1_CH4LOC_LOC5 << 0)     /**< Shifted mode LOC5 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH4LOC_LOC6                  (_PRS_ROUTELOC1_CH4LOC_LOC6 << 0)     /**< Shifted mode LOC6 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_SHIFT                8                                     /**< Shift value for PRS_CH5LOC */
#define _PRS_ROUTELOC1_CH5LOC_MASK                 0x700UL                               /**< Bit mask for PRS_CH5LOC */
#define _PRS_ROUTELOC1_CH5LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH5LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC0                  (_PRS_ROUTELOC1_CH5LOC_LOC0 << 8)     /**< Shifted mode LOC0 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_DEFAULT               (_PRS_ROUTELOC1_CH5LOC_DEFAULT << 8)  /**< Shifted mode DEFAULT for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC1                  (_PRS_ROUTELOC1_CH5LOC_LOC1 << 8)     /**< Shifted mode LOC1 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC2                  (_PRS_ROUTELOC1_CH5LOC_LOC2 << 8)     /**< Shifted mode LOC2 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC3                  (_PRS_ROUTELOC1_CH5LOC_LOC3 << 8)     /**< Shifted mode LOC3 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC4                  (_PRS_ROUTELOC1_CH5LOC_LOC4 << 8)     /**< Shifted mode LOC4 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC5                  (_PRS_ROUTELOC1_CH5LOC_LOC5 << 8)     /**< Shifted mode LOC5 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH5LOC_LOC6                  (_PRS_ROUTELOC1_CH5LOC_LOC6 << 8)     /**< Shifted mode LOC6 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_SHIFT                16                                    /**< Shift value for PRS_CH6LOC */
#define _PRS_ROUTELOC1_CH6LOC_MASK                 0x1F0000UL                            /**< Bit mask for PRS_CH6LOC */
#define _PRS_ROUTELOC1_CH6LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC7                 0x00000007UL                          /**< Mode LOC7 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC8                 0x00000008UL                          /**< Mode LOC8 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC9                 0x00000009UL                          /**< Mode LOC9 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC10                0x0000000AUL                          /**< Mode LOC10 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC11                0x0000000BUL                          /**< Mode LOC11 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC12                0x0000000CUL                          /**< Mode LOC12 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC13                0x0000000DUL                          /**< Mode LOC13 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC14                0x0000000EUL                          /**< Mode LOC14 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC15                0x0000000FUL                          /**< Mode LOC15 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC16                0x00000010UL                          /**< Mode LOC16 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH6LOC_LOC17                0x00000011UL                          /**< Mode LOC17 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC0                  (_PRS_ROUTELOC1_CH6LOC_LOC0 << 16)    /**< Shifted mode LOC0 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_DEFAULT               (_PRS_ROUTELOC1_CH6LOC_DEFAULT << 16) /**< Shifted mode DEFAULT for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC1                  (_PRS_ROUTELOC1_CH6LOC_LOC1 << 16)    /**< Shifted mode LOC1 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC2                  (_PRS_ROUTELOC1_CH6LOC_LOC2 << 16)    /**< Shifted mode LOC2 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC3                  (_PRS_ROUTELOC1_CH6LOC_LOC3 << 16)    /**< Shifted mode LOC3 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC4                  (_PRS_ROUTELOC1_CH6LOC_LOC4 << 16)    /**< Shifted mode LOC4 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC5                  (_PRS_ROUTELOC1_CH6LOC_LOC5 << 16)    /**< Shifted mode LOC5 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC6                  (_PRS_ROUTELOC1_CH6LOC_LOC6 << 16)    /**< Shifted mode LOC6 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC7                  (_PRS_ROUTELOC1_CH6LOC_LOC7 << 16)    /**< Shifted mode LOC7 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC8                  (_PRS_ROUTELOC1_CH6LOC_LOC8 << 16)    /**< Shifted mode LOC8 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC9                  (_PRS_ROUTELOC1_CH6LOC_LOC9 << 16)    /**< Shifted mode LOC9 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC10                 (_PRS_ROUTELOC1_CH6LOC_LOC10 << 16)   /**< Shifted mode LOC10 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC11                 (_PRS_ROUTELOC1_CH6LOC_LOC11 << 16)   /**< Shifted mode LOC11 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC12                 (_PRS_ROUTELOC1_CH6LOC_LOC12 << 16)   /**< Shifted mode LOC12 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC13                 (_PRS_ROUTELOC1_CH6LOC_LOC13 << 16)   /**< Shifted mode LOC13 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC14                 (_PRS_ROUTELOC1_CH6LOC_LOC14 << 16)   /**< Shifted mode LOC14 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC15                 (_PRS_ROUTELOC1_CH6LOC_LOC15 << 16)   /**< Shifted mode LOC15 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC16                 (_PRS_ROUTELOC1_CH6LOC_LOC16 << 16)   /**< Shifted mode LOC16 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH6LOC_LOC17                 (_PRS_ROUTELOC1_CH6LOC_LOC17 << 16)   /**< Shifted mode LOC17 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_SHIFT                24                                    /**< Shift value for PRS_CH7LOC */
#define _PRS_ROUTELOC1_CH7LOC_MASK                 0xF000000UL                           /**< Bit mask for PRS_CH7LOC */
#define _PRS_ROUTELOC1_CH7LOC_LOC0                 0x00000000UL                          /**< Mode LOC0 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC1                 0x00000001UL                          /**< Mode LOC1 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC2                 0x00000002UL                          /**< Mode LOC2 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC3                 0x00000003UL                          /**< Mode LOC3 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC4                 0x00000004UL                          /**< Mode LOC4 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC5                 0x00000005UL                          /**< Mode LOC5 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC6                 0x00000006UL                          /**< Mode LOC6 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC7                 0x00000007UL                          /**< Mode LOC7 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC8                 0x00000008UL                          /**< Mode LOC8 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC9                 0x00000009UL                          /**< Mode LOC9 for PRS_ROUTELOC1 */
#define _PRS_ROUTELOC1_CH7LOC_LOC10                0x0000000AUL                          /**< Mode LOC10 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC0                  (_PRS_ROUTELOC1_CH7LOC_LOC0 << 24)    /**< Shifted mode LOC0 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_DEFAULT               (_PRS_ROUTELOC1_CH7LOC_DEFAULT << 24) /**< Shifted mode DEFAULT for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC1                  (_PRS_ROUTELOC1_CH7LOC_LOC1 << 24)    /**< Shifted mode LOC1 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC2                  (_PRS_ROUTELOC1_CH7LOC_LOC2 << 24)    /**< Shifted mode LOC2 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC3                  (_PRS_ROUTELOC1_CH7LOC_LOC3 << 24)    /**< Shifted mode LOC3 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC4                  (_PRS_ROUTELOC1_CH7LOC_LOC4 << 24)    /**< Shifted mode LOC4 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC5                  (_PRS_ROUTELOC1_CH7LOC_LOC5 << 24)    /**< Shifted mode LOC5 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC6                  (_PRS_ROUTELOC1_CH7LOC_LOC6 << 24)    /**< Shifted mode LOC6 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC7                  (_PRS_ROUTELOC1_CH7LOC_LOC7 << 24)    /**< Shifted mode LOC7 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC8                  (_PRS_ROUTELOC1_CH7LOC_LOC8 << 24)    /**< Shifted mode LOC8 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC9                  (_PRS_ROUTELOC1_CH7LOC_LOC9 << 24)    /**< Shifted mode LOC9 for PRS_ROUTELOC1 */
#define PRS_ROUTELOC1_CH7LOC_LOC10                 (_PRS_ROUTELOC1_CH7LOC_LOC10 << 24)   /**< Shifted mode LOC10 for PRS_ROUTELOC1 */

/* Bit fields for PRS ROUTELOC2 */
#define _PRS_ROUTELOC2_RESETVALUE                  0x00000000UL                           /**< Default value for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_MASK                        0x07071F0FUL                           /**< Mask for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_SHIFT                0                                      /**< Shift value for PRS_CH8LOC */
#define _PRS_ROUTELOC2_CH8LOC_MASK                 0xFUL                                  /**< Bit mask for PRS_CH8LOC */
#define _PRS_ROUTELOC2_CH8LOC_LOC0                 0x00000000UL                           /**< Mode LOC0 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC1                 0x00000001UL                           /**< Mode LOC1 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC2                 0x00000002UL                           /**< Mode LOC2 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC3                 0x00000003UL                           /**< Mode LOC3 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC4                 0x00000004UL                           /**< Mode LOC4 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC5                 0x00000005UL                           /**< Mode LOC5 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC6                 0x00000006UL                           /**< Mode LOC6 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC7                 0x00000007UL                           /**< Mode LOC7 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC8                 0x00000008UL                           /**< Mode LOC8 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC9                 0x00000009UL                           /**< Mode LOC9 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH8LOC_LOC10                0x0000000AUL                           /**< Mode LOC10 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC0                  (_PRS_ROUTELOC2_CH8LOC_LOC0 << 0)      /**< Shifted mode LOC0 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_DEFAULT               (_PRS_ROUTELOC2_CH8LOC_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC1                  (_PRS_ROUTELOC2_CH8LOC_LOC1 << 0)      /**< Shifted mode LOC1 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC2                  (_PRS_ROUTELOC2_CH8LOC_LOC2 << 0)      /**< Shifted mode LOC2 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC3                  (_PRS_ROUTELOC2_CH8LOC_LOC3 << 0)      /**< Shifted mode LOC3 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC4                  (_PRS_ROUTELOC2_CH8LOC_LOC4 << 0)      /**< Shifted mode LOC4 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC5                  (_PRS_ROUTELOC2_CH8LOC_LOC5 << 0)      /**< Shifted mode LOC5 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC6                  (_PRS_ROUTELOC2_CH8LOC_LOC6 << 0)      /**< Shifted mode LOC6 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC7                  (_PRS_ROUTELOC2_CH8LOC_LOC7 << 0)      /**< Shifted mode LOC7 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC8                  (_PRS_ROUTELOC2_CH8LOC_LOC8 << 0)      /**< Shifted mode LOC8 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC9                  (_PRS_ROUTELOC2_CH8LOC_LOC9 << 0)      /**< Shifted mode LOC9 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH8LOC_LOC10                 (_PRS_ROUTELOC2_CH8LOC_LOC10 << 0)     /**< Shifted mode LOC10 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_SHIFT                8                                      /**< Shift value for PRS_CH9LOC */
#define _PRS_ROUTELOC2_CH9LOC_MASK                 0x1F00UL                               /**< Bit mask for PRS_CH9LOC */
#define _PRS_ROUTELOC2_CH9LOC_LOC0                 0x00000000UL                           /**< Mode LOC0 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC1                 0x00000001UL                           /**< Mode LOC1 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC2                 0x00000002UL                           /**< Mode LOC2 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC3                 0x00000003UL                           /**< Mode LOC3 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC4                 0x00000004UL                           /**< Mode LOC4 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC5                 0x00000005UL                           /**< Mode LOC5 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC6                 0x00000006UL                           /**< Mode LOC6 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC7                 0x00000007UL                           /**< Mode LOC7 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC8                 0x00000008UL                           /**< Mode LOC8 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC9                 0x00000009UL                           /**< Mode LOC9 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC10                0x0000000AUL                           /**< Mode LOC10 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC11                0x0000000BUL                           /**< Mode LOC11 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC12                0x0000000CUL                           /**< Mode LOC12 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC13                0x0000000DUL                           /**< Mode LOC13 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC14                0x0000000EUL                           /**< Mode LOC14 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC15                0x0000000FUL                           /**< Mode LOC15 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH9LOC_LOC16                0x00000010UL                           /**< Mode LOC16 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC0                  (_PRS_ROUTELOC2_CH9LOC_LOC0 << 8)      /**< Shifted mode LOC0 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_DEFAULT               (_PRS_ROUTELOC2_CH9LOC_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC1                  (_PRS_ROUTELOC2_CH9LOC_LOC1 << 8)      /**< Shifted mode LOC1 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC2                  (_PRS_ROUTELOC2_CH9LOC_LOC2 << 8)      /**< Shifted mode LOC2 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC3                  (_PRS_ROUTELOC2_CH9LOC_LOC3 << 8)      /**< Shifted mode LOC3 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC4                  (_PRS_ROUTELOC2_CH9LOC_LOC4 << 8)      /**< Shifted mode LOC4 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC5                  (_PRS_ROUTELOC2_CH9LOC_LOC5 << 8)      /**< Shifted mode LOC5 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC6                  (_PRS_ROUTELOC2_CH9LOC_LOC6 << 8)      /**< Shifted mode LOC6 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC7                  (_PRS_ROUTELOC2_CH9LOC_LOC7 << 8)      /**< Shifted mode LOC7 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC8                  (_PRS_ROUTELOC2_CH9LOC_LOC8 << 8)      /**< Shifted mode LOC8 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC9                  (_PRS_ROUTELOC2_CH9LOC_LOC9 << 8)      /**< Shifted mode LOC9 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC10                 (_PRS_ROUTELOC2_CH9LOC_LOC10 << 8)     /**< Shifted mode LOC10 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC11                 (_PRS_ROUTELOC2_CH9LOC_LOC11 << 8)     /**< Shifted mode LOC11 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC12                 (_PRS_ROUTELOC2_CH9LOC_LOC12 << 8)     /**< Shifted mode LOC12 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC13                 (_PRS_ROUTELOC2_CH9LOC_LOC13 << 8)     /**< Shifted mode LOC13 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC14                 (_PRS_ROUTELOC2_CH9LOC_LOC14 << 8)     /**< Shifted mode LOC14 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC15                 (_PRS_ROUTELOC2_CH9LOC_LOC15 << 8)     /**< Shifted mode LOC15 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH9LOC_LOC16                 (_PRS_ROUTELOC2_CH9LOC_LOC16 << 8)     /**< Shifted mode LOC16 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_SHIFT               16                                     /**< Shift value for PRS_CH10LOC */
#define _PRS_ROUTELOC2_CH10LOC_MASK                0x70000UL                              /**< Bit mask for PRS_CH10LOC */
#define _PRS_ROUTELOC2_CH10LOC_LOC0                0x00000000UL                           /**< Mode LOC0 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_LOC1                0x00000001UL                           /**< Mode LOC1 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_LOC2                0x00000002UL                           /**< Mode LOC2 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_LOC3                0x00000003UL                           /**< Mode LOC3 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_LOC4                0x00000004UL                           /**< Mode LOC4 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH10LOC_LOC5                0x00000005UL                           /**< Mode LOC5 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_LOC0                 (_PRS_ROUTELOC2_CH10LOC_LOC0 << 16)    /**< Shifted mode LOC0 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_DEFAULT              (_PRS_ROUTELOC2_CH10LOC_DEFAULT << 16) /**< Shifted mode DEFAULT for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_LOC1                 (_PRS_ROUTELOC2_CH10LOC_LOC1 << 16)    /**< Shifted mode LOC1 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_LOC2                 (_PRS_ROUTELOC2_CH10LOC_LOC2 << 16)    /**< Shifted mode LOC2 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_LOC3                 (_PRS_ROUTELOC2_CH10LOC_LOC3 << 16)    /**< Shifted mode LOC3 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_LOC4                 (_PRS_ROUTELOC2_CH10LOC_LOC4 << 16)    /**< Shifted mode LOC4 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH10LOC_LOC5                 (_PRS_ROUTELOC2_CH10LOC_LOC5 << 16)    /**< Shifted mode LOC5 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_SHIFT               24                                     /**< Shift value for PRS_CH11LOC */
#define _PRS_ROUTELOC2_CH11LOC_MASK                0x7000000UL                            /**< Bit mask for PRS_CH11LOC */
#define _PRS_ROUTELOC2_CH11LOC_LOC0                0x00000000UL                           /**< Mode LOC0 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_LOC1                0x00000001UL                           /**< Mode LOC1 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_LOC2                0x00000002UL                           /**< Mode LOC2 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_LOC3                0x00000003UL                           /**< Mode LOC3 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_LOC4                0x00000004UL                           /**< Mode LOC4 for PRS_ROUTELOC2 */
#define _PRS_ROUTELOC2_CH11LOC_LOC5                0x00000005UL                           /**< Mode LOC5 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_LOC0                 (_PRS_ROUTELOC2_CH11LOC_LOC0 << 24)    /**< Shifted mode LOC0 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_DEFAULT              (_PRS_ROUTELOC2_CH11LOC_DEFAULT << 24) /**< Shifted mode DEFAULT for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_LOC1                 (_PRS_ROUTELOC2_CH11LOC_LOC1 << 24)    /**< Shifted mode LOC1 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_LOC2                 (_PRS_ROUTELOC2_CH11LOC_LOC2 << 24)    /**< Shifted mode LOC2 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_LOC3                 (_PRS_ROUTELOC2_CH11LOC_LOC3 << 24)    /**< Shifted mode LOC3 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_LOC4                 (_PRS_ROUTELOC2_CH11LOC_LOC4 << 24)    /**< Shifted mode LOC4 for PRS_ROUTELOC2 */
#define PRS_ROUTELOC2_CH11LOC_LOC5                 (_PRS_ROUTELOC2_CH11LOC_LOC5 << 24)    /**< Shifted mode LOC5 for PRS_ROUTELOC2 */

/* Bit fields for PRS CTRL */
#define _PRS_CTRL_RESETVALUE                       0x00000000UL                         /**< Default value for PRS_CTRL */
#define _PRS_CTRL_MASK                             0x0000001FUL                         /**< Mask for PRS_CTRL */
#define PRS_CTRL_SEVONPRS                          (0x1UL << 0)                         /**< Set Event on PRS */
#define _PRS_CTRL_SEVONPRS_SHIFT                   0                                    /**< Shift value for PRS_SEVONPRS */
#define _PRS_CTRL_SEVONPRS_MASK                    0x1UL                                /**< Bit mask for PRS_SEVONPRS */
#define _PRS_CTRL_SEVONPRS_DEFAULT                 0x00000000UL                         /**< Mode DEFAULT for PRS_CTRL */
#define PRS_CTRL_SEVONPRS_DEFAULT                  (_PRS_CTRL_SEVONPRS_DEFAULT << 0)    /**< Shifted mode DEFAULT for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_SHIFT                1                                    /**< Shift value for PRS_SEVONPRSSEL */
#define _PRS_CTRL_SEVONPRSSEL_MASK                 0x1EUL                               /**< Bit mask for PRS_SEVONPRSSEL */
#define _PRS_CTRL_SEVONPRSSEL_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH0               0x00000000UL                         /**< Mode PRSCH0 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH1               0x00000001UL                         /**< Mode PRSCH1 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH2               0x00000002UL                         /**< Mode PRSCH2 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH3               0x00000003UL                         /**< Mode PRSCH3 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH4               0x00000004UL                         /**< Mode PRSCH4 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH5               0x00000005UL                         /**< Mode PRSCH5 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH6               0x00000006UL                         /**< Mode PRSCH6 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH7               0x00000007UL                         /**< Mode PRSCH7 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH8               0x00000008UL                         /**< Mode PRSCH8 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH9               0x00000009UL                         /**< Mode PRSCH9 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH10              0x0000000AUL                         /**< Mode PRSCH10 for PRS_CTRL */
#define _PRS_CTRL_SEVONPRSSEL_PRSCH11              0x0000000BUL                         /**< Mode PRSCH11 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_DEFAULT               (_PRS_CTRL_SEVONPRSSEL_DEFAULT << 1) /**< Shifted mode DEFAULT for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH0                (_PRS_CTRL_SEVONPRSSEL_PRSCH0 << 1)  /**< Shifted mode PRSCH0 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH1                (_PRS_CTRL_SEVONPRSSEL_PRSCH1 << 1)  /**< Shifted mode PRSCH1 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH2                (_PRS_CTRL_SEVONPRSSEL_PRSCH2 << 1)  /**< Shifted mode PRSCH2 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH3                (_PRS_CTRL_SEVONPRSSEL_PRSCH3 << 1)  /**< Shifted mode PRSCH3 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH4                (_PRS_CTRL_SEVONPRSSEL_PRSCH4 << 1)  /**< Shifted mode PRSCH4 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH5                (_PRS_CTRL_SEVONPRSSEL_PRSCH5 << 1)  /**< Shifted mode PRSCH5 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH6                (_PRS_CTRL_SEVONPRSSEL_PRSCH6 << 1)  /**< Shifted mode PRSCH6 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH7                (_PRS_CTRL_SEVONPRSSEL_PRSCH7 << 1)  /**< Shifted mode PRSCH7 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH8                (_PRS_CTRL_SEVONPRSSEL_PRSCH8 << 1)  /**< Shifted mode PRSCH8 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH9                (_PRS_CTRL_SEVONPRSSEL_PRSCH9 << 1)  /**< Shifted mode PRSCH9 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH10               (_PRS_CTRL_SEVONPRSSEL_PRSCH10 << 1) /**< Shifted mode PRSCH10 for PRS_CTRL */
#define PRS_CTRL_SEVONPRSSEL_PRSCH11               (_PRS_CTRL_SEVONPRSSEL_PRSCH11 << 1) /**< Shifted mode PRSCH11 for PRS_CTRL */

/* Bit fields for PRS DMAREQ0 */
#define _PRS_DMAREQ0_RESETVALUE                    0x00000000UL                       /**< Default value for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_MASK                          0x000003C0UL                       /**< Mask for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_SHIFT                  6                                  /**< Shift value for PRS_PRSSEL */
#define _PRS_DMAREQ0_PRSSEL_MASK                   0x3C0UL                            /**< Bit mask for PRS_PRSSEL */
#define _PRS_DMAREQ0_PRSSEL_DEFAULT                0x00000000UL                       /**< Mode DEFAULT for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH0                 0x00000000UL                       /**< Mode PRSCH0 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH1                 0x00000001UL                       /**< Mode PRSCH1 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH2                 0x00000002UL                       /**< Mode PRSCH2 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH3                 0x00000003UL                       /**< Mode PRSCH3 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH4                 0x00000004UL                       /**< Mode PRSCH4 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH5                 0x00000005UL                       /**< Mode PRSCH5 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH6                 0x00000006UL                       /**< Mode PRSCH6 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH7                 0x00000007UL                       /**< Mode PRSCH7 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH8                 0x00000008UL                       /**< Mode PRSCH8 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH9                 0x00000009UL                       /**< Mode PRSCH9 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH10                0x0000000AUL                       /**< Mode PRSCH10 for PRS_DMAREQ0 */
#define _PRS_DMAREQ0_PRSSEL_PRSCH11                0x0000000BUL                       /**< Mode PRSCH11 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_DEFAULT                 (_PRS_DMAREQ0_PRSSEL_DEFAULT << 6) /**< Shifted mode DEFAULT for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH0                  (_PRS_DMAREQ0_PRSSEL_PRSCH0 << 6)  /**< Shifted mode PRSCH0 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH1                  (_PRS_DMAREQ0_PRSSEL_PRSCH1 << 6)  /**< Shifted mode PRSCH1 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH2                  (_PRS_DMAREQ0_PRSSEL_PRSCH2 << 6)  /**< Shifted mode PRSCH2 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH3                  (_PRS_DMAREQ0_PRSSEL_PRSCH3 << 6)  /**< Shifted mode PRSCH3 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH4                  (_PRS_DMAREQ0_PRSSEL_PRSCH4 << 6)  /**< Shifted mode PRSCH4 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH5                  (_PRS_DMAREQ0_PRSSEL_PRSCH5 << 6)  /**< Shifted mode PRSCH5 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH6                  (_PRS_DMAREQ0_PRSSEL_PRSCH6 << 6)  /**< Shifted mode PRSCH6 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH7                  (_PRS_DMAREQ0_PRSSEL_PRSCH7 << 6)  /**< Shifted mode PRSCH7 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH8                  (_PRS_DMAREQ0_PRSSEL_PRSCH8 << 6)  /**< Shifted mode PRSCH8 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH9                  (_PRS_DMAREQ0_PRSSEL_PRSCH9 << 6)  /**< Shifted mode PRSCH9 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH10                 (_PRS_DMAREQ0_PRSSEL_PRSCH10 << 6) /**< Shifted mode PRSCH10 for PRS_DMAREQ0 */
#define PRS_DMAREQ0_PRSSEL_PRSCH11                 (_PRS_DMAREQ0_PRSSEL_PRSCH11 << 6) /**< Shifted mode PRSCH11 for PRS_DMAREQ0 */

/* Bit fields for PRS DMAREQ1 */
#define _PRS_DMAREQ1_RESETVALUE                    0x00000000UL                       /**< Default value for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_MASK                          0x000003C0UL                       /**< Mask for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_SHIFT                  6                                  /**< Shift value for PRS_PRSSEL */
#define _PRS_DMAREQ1_PRSSEL_MASK                   0x3C0UL                            /**< Bit mask for PRS_PRSSEL */
#define _PRS_DMAREQ1_PRSSEL_DEFAULT                0x00000000UL                       /**< Mode DEFAULT for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH0                 0x00000000UL                       /**< Mode PRSCH0 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH1                 0x00000001UL                       /**< Mode PRSCH1 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH2                 0x00000002UL                       /**< Mode PRSCH2 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH3                 0x00000003UL                       /**< Mode PRSCH3 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH4                 0x00000004UL                       /**< Mode PRSCH4 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH5                 0x00000005UL                       /**< Mode PRSCH5 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH6                 0x00000006UL                       /**< Mode PRSCH6 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH7                 0x00000007UL                       /**< Mode PRSCH7 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH8                 0x00000008UL                       /**< Mode PRSCH8 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH9                 0x00000009UL                       /**< Mode PRSCH9 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH10                0x0000000AUL                       /**< Mode PRSCH10 for PRS_DMAREQ1 */
#define _PRS_DMAREQ1_PRSSEL_PRSCH11                0x0000000BUL                       /**< Mode PRSCH11 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_DEFAULT                 (_PRS_DMAREQ1_PRSSEL_DEFAULT << 6) /**< Shifted mode DEFAULT for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH0                  (_PRS_DMAREQ1_PRSSEL_PRSCH0 << 6)  /**< Shifted mode PRSCH0 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH1                  (_PRS_DMAREQ1_PRSSEL_PRSCH1 << 6)  /**< Shifted mode PRSCH1 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH2                  (_PRS_DMAREQ1_PRSSEL_PRSCH2 << 6)  /**< Shifted mode PRSCH2 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH3                  (_PRS_DMAREQ1_PRSSEL_PRSCH3 << 6)  /**< Shifted mode PRSCH3 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH4                  (_PRS_DMAREQ1_PRSSEL_PRSCH4 << 6)  /**< Shifted mode PRSCH4 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH5                  (_PRS_DMAREQ1_PRSSEL_PRSCH5 << 6)  /**< Shifted mode PRSCH5 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH6                  (_PRS_DMAREQ1_PRSSEL_PRSCH6 << 6)  /**< Shifted mode PRSCH6 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH7                  (_PRS_DMAREQ1_PRSSEL_PRSCH7 << 6)  /**< Shifted mode PRSCH7 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH8                  (_PRS_DMAREQ1_PRSSEL_PRSCH8 << 6)  /**< Shifted mode PRSCH8 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH9                  (_PRS_DMAREQ1_PRSSEL_PRSCH9 << 6)  /**< Shifted mode PRSCH9 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH10                 (_PRS_DMAREQ1_PRSSEL_PRSCH10 << 6) /**< Shifted mode PRSCH10 for PRS_DMAREQ1 */
#define PRS_DMAREQ1_PRSSEL_PRSCH11                 (_PRS_DMAREQ1_PRSSEL_PRSCH11 << 6) /**< Shifted mode PRSCH11 for PRS_DMAREQ1 */

/* Bit fields for PRS PEEK */
#define _PRS_PEEK_RESETVALUE                       0x00000000UL                      /**< Default value for PRS_PEEK */
#define _PRS_PEEK_MASK                             0x00000FFFUL                      /**< Mask for PRS_PEEK */
#define PRS_PEEK_CH0VAL                            (0x1UL << 0)                      /**< Channel 0 Current Value */
#define _PRS_PEEK_CH0VAL_SHIFT                     0                                 /**< Shift value for PRS_CH0VAL */
#define _PRS_PEEK_CH0VAL_MASK                      0x1UL                             /**< Bit mask for PRS_CH0VAL */
#define _PRS_PEEK_CH0VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH0VAL_DEFAULT                    (_PRS_PEEK_CH0VAL_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH1VAL                            (0x1UL << 1)                      /**< Channel 1 Current Value */
#define _PRS_PEEK_CH1VAL_SHIFT                     1                                 /**< Shift value for PRS_CH1VAL */
#define _PRS_PEEK_CH1VAL_MASK                      0x2UL                             /**< Bit mask for PRS_CH1VAL */
#define _PRS_PEEK_CH1VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH1VAL_DEFAULT                    (_PRS_PEEK_CH1VAL_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH2VAL                            (0x1UL << 2)                      /**< Channel 2 Current Value */
#define _PRS_PEEK_CH2VAL_SHIFT                     2                                 /**< Shift value for PRS_CH2VAL */
#define _PRS_PEEK_CH2VAL_MASK                      0x4UL                             /**< Bit mask for PRS_CH2VAL */
#define _PRS_PEEK_CH2VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH2VAL_DEFAULT                    (_PRS_PEEK_CH2VAL_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH3VAL                            (0x1UL << 3)                      /**< Channel 3 Current Value */
#define _PRS_PEEK_CH3VAL_SHIFT                     3                                 /**< Shift value for PRS_CH3VAL */
#define _PRS_PEEK_CH3VAL_MASK                      0x8UL                             /**< Bit mask for PRS_CH3VAL */
#define _PRS_PEEK_CH3VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH3VAL_DEFAULT                    (_PRS_PEEK_CH3VAL_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH4VAL                            (0x1UL << 4)                      /**< Channel 4 Current Value */
#define _PRS_PEEK_CH4VAL_SHIFT                     4                                 /**< Shift value for PRS_CH4VAL */
#define _PRS_PEEK_CH4VAL_MASK                      0x10UL                            /**< Bit mask for PRS_CH4VAL */
#define _PRS_PEEK_CH4VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH4VAL_DEFAULT                    (_PRS_PEEK_CH4VAL_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH5VAL                            (0x1UL << 5)                      /**< Channel 5 Current Value */
#define _PRS_PEEK_CH5VAL_SHIFT                     5                                 /**< Shift value for PRS_CH5VAL */
#define _PRS_PEEK_CH5VAL_MASK                      0x20UL                            /**< Bit mask for PRS_CH5VAL */
#define _PRS_PEEK_CH5VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH5VAL_DEFAULT                    (_PRS_PEEK_CH5VAL_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH6VAL                            (0x1UL << 6)                      /**< Channel 6 Current Value */
#define _PRS_PEEK_CH6VAL_SHIFT                     6                                 /**< Shift value for PRS_CH6VAL */
#define _PRS_PEEK_CH6VAL_MASK                      0x40UL                            /**< Bit mask for PRS_CH6VAL */
#define _PRS_PEEK_CH6VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH6VAL_DEFAULT                    (_PRS_PEEK_CH6VAL_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH7VAL                            (0x1UL << 7)                      /**< Channel 7 Current Value */
#define _PRS_PEEK_CH7VAL_SHIFT                     7                                 /**< Shift value for PRS_CH7VAL */
#define _PRS_PEEK_CH7VAL_MASK                      0x80UL                            /**< Bit mask for PRS_CH7VAL */
#define _PRS_PEEK_CH7VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH7VAL_DEFAULT                    (_PRS_PEEK_CH7VAL_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH8VAL                            (0x1UL << 8)                      /**< Channel 8 Current Value */
#define _PRS_PEEK_CH8VAL_SHIFT                     8                                 /**< Shift value for PRS_CH8VAL */
#define _PRS_PEEK_CH8VAL_MASK                      0x100UL                           /**< Bit mask for PRS_CH8VAL */
#define _PRS_PEEK_CH8VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH8VAL_DEFAULT                    (_PRS_PEEK_CH8VAL_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH9VAL                            (0x1UL << 9)                      /**< Channel 9 Current Value */
#define _PRS_PEEK_CH9VAL_SHIFT                     9                                 /**< Shift value for PRS_CH9VAL */
#define _PRS_PEEK_CH9VAL_MASK                      0x200UL                           /**< Bit mask for PRS_CH9VAL */
#define _PRS_PEEK_CH9VAL_DEFAULT                   0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH9VAL_DEFAULT                    (_PRS_PEEK_CH9VAL_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH10VAL                           (0x1UL << 10)                     /**< Channel 10 Current Value */
#define _PRS_PEEK_CH10VAL_SHIFT                    10                                /**< Shift value for PRS_CH10VAL */
#define _PRS_PEEK_CH10VAL_MASK                     0x400UL                           /**< Bit mask for PRS_CH10VAL */
#define _PRS_PEEK_CH10VAL_DEFAULT                  0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH10VAL_DEFAULT                   (_PRS_PEEK_CH10VAL_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH11VAL                           (0x1UL << 11)                     /**< Channel 11 Current Value */
#define _PRS_PEEK_CH11VAL_SHIFT                    11                                /**< Shift value for PRS_CH11VAL */
#define _PRS_PEEK_CH11VAL_MASK                     0x800UL                           /**< Bit mask for PRS_CH11VAL */
#define _PRS_PEEK_CH11VAL_DEFAULT                  0x00000000UL                      /**< Mode DEFAULT for PRS_PEEK */
#define PRS_PEEK_CH11VAL_DEFAULT                   (_PRS_PEEK_CH11VAL_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_PEEK */

/* Bit fields for PRS CH_CTRL */
#define _PRS_CH_CTRL_RESETVALUE                    0x00000000UL                                   /**< Default value for PRS_CH_CTRL */
#define _PRS_CH_CTRL_MASK                          0x5E307F07UL                                   /**< Mask for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_SHIFT                  0                                              /**< Shift value for PRS_SIGSEL */
#define _PRS_CH_CTRL_SIGSEL_MASK                   0x7UL                                          /**< Bit mask for PRS_SIGSEL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH0                 0x00000000UL                                   /**< Mode PRSCH0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH8                 0x00000000UL                                   /**< Mode PRSCH8 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ACMP0OUT               0x00000000UL                                   /**< Mode ACMP0OUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ACMP1OUT               0x00000000UL                                   /**< Mode ACMP1OUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ADC0SINGLE             0x00000000UL                                   /**< Mode ADC0SINGLE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES0        0x00000000UL                                   /**< Mode LESENSESCANRES0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES8        0x00000000UL                                   /**< Mode LESENSESCANRES8 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSEDEC0            0x00000000UL                                   /**< Mode LESENSEDEC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSEMEASACT         0x00000000UL                                   /**< Mode LESENSEMEASACT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN0               0x00000000UL                                   /**< Mode GPIOPIN0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN8               0x00000000UL                                   /**< Mode GPIOPIN8 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LETIMER0CH0            0x00000000UL                                   /**< Mode LETIMER0CH0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PCNT0TCC               0x00000000UL                                   /**< Mode PCNT0TCC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_CMUCLKOUT0             0x00000000UL                                   /**< Mode CMUCLKOUT0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_CRYOTIMERPERIOD        0x00000000UL                                   /**< Mode CRYOTIMERPERIOD for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0IRTX             0x00000000UL                                   /**< Mode USART0IRTX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2IRTX             0x00000000UL                                   /**< Mode USART2IRTX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0UF               0x00000000UL                                   /**< Mode TIMER0UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1UF               0x00000000UL                                   /**< Mode TIMER1UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_WTIMER0UF              0x00000000UL                                   /**< Mode WTIMER0UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_CM4TXEV                0x00000000UL                                   /**< Mode CM4TXEV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH1                 0x00000001UL                                   /**< Mode PRSCH1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH9                 0x00000001UL                                   /**< Mode PRSCH9 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ADC0SCAN               0x00000001UL                                   /**< Mode ADC0SCAN for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES1        0x00000001UL                                   /**< Mode LESENSESCANRES1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES9        0x00000001UL                                   /**< Mode LESENSESCANRES9 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSEDEC1            0x00000001UL                                   /**< Mode LESENSEDEC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCCCV0               0x00000001UL                                   /**< Mode RTCCCCV0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN1               0x00000001UL                                   /**< Mode GPIOPIN1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN9               0x00000001UL                                   /**< Mode GPIOPIN9 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LETIMER0CH1            0x00000001UL                                   /**< Mode LETIMER0CH1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PCNT0UFOF              0x00000001UL                                   /**< Mode PCNT0UFOF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_CMUCLKOUT1             0x00000001UL                                   /**< Mode CMUCLKOUT1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0TXC              0x00000001UL                                   /**< Mode USART0TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1TXC              0x00000001UL                                   /**< Mode USART1TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2TXC              0x00000001UL                                   /**< Mode USART2TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0OF               0x00000001UL                                   /**< Mode TIMER0OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1OF               0x00000001UL                                   /**< Mode TIMER1OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_WTIMER0OF              0x00000001UL                                   /**< Mode WTIMER0OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_CM4ICACHEPCHITSOF      0x00000001UL                                   /**< Mode CM4ICACHEPCHITSOF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH2                 0x00000002UL                                   /**< Mode PRSCH2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH10                0x00000002UL                                   /**< Mode PRSCH10 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES2        0x00000002UL                                   /**< Mode LESENSESCANRES2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES10       0x00000002UL                                   /**< Mode LESENSESCANRES10 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSEDEC2            0x00000002UL                                   /**< Mode LESENSEDEC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCCCV1               0x00000002UL                                   /**< Mode RTCCCCV1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN2               0x00000002UL                                   /**< Mode GPIOPIN2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN10              0x00000002UL                                   /**< Mode GPIOPIN10 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PCNT0DIR               0x00000002UL                                   /**< Mode PCNT0DIR for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0RXDATAV          0x00000002UL                                   /**< Mode USART0RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1RXDATAV          0x00000002UL                                   /**< Mode USART1RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2RXDATAV          0x00000002UL                                   /**< Mode USART2RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC0              0x00000002UL                                   /**< Mode TIMER0CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC0              0x00000002UL                                   /**< Mode TIMER1CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_WTIMER0CC0             0x00000002UL                                   /**< Mode WTIMER0CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_CM4ICACHEPCMISSESOF    0x00000002UL                                   /**< Mode CM4ICACHEPCMISSESOF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH3                 0x00000003UL                                   /**< Mode PRSCH3 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH11                0x00000003UL                                   /**< Mode PRSCH11 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES3        0x00000003UL                                   /**< Mode LESENSESCANRES3 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES11       0x00000003UL                                   /**< Mode LESENSESCANRES11 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSEDECCMP          0x00000003UL                                   /**< Mode LESENSEDECCMP for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCCCV2               0x00000003UL                                   /**< Mode RTCCCCV2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN3               0x00000003UL                                   /**< Mode GPIOPIN3 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN11              0x00000003UL                                   /**< Mode GPIOPIN11 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0RTS              0x00000003UL                                   /**< Mode USART0RTS for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1RTS              0x00000003UL                                   /**< Mode USART1RTS for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2RTS              0x00000003UL                                   /**< Mode USART2RTS for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC1              0x00000003UL                                   /**< Mode TIMER0CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC1              0x00000003UL                                   /**< Mode TIMER1CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_WTIMER0CC1             0x00000003UL                                   /**< Mode WTIMER0CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH4                 0x00000004UL                                   /**< Mode PRSCH4 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES4        0x00000004UL                                   /**< Mode LESENSESCANRES4 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES12       0x00000004UL                                   /**< Mode LESENSESCANRES12 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN4               0x00000004UL                                   /**< Mode GPIOPIN4 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN12              0x00000004UL                                   /**< Mode GPIOPIN12 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC2              0x00000004UL                                   /**< Mode TIMER0CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC2              0x00000004UL                                   /**< Mode TIMER1CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_WTIMER0CC2             0x00000004UL                                   /**< Mode WTIMER0CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH5                 0x00000005UL                                   /**< Mode PRSCH5 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES5        0x00000005UL                                   /**< Mode LESENSESCANRES5 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES13       0x00000005UL                                   /**< Mode LESENSESCANRES13 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN5               0x00000005UL                                   /**< Mode GPIOPIN5 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN13              0x00000005UL                                   /**< Mode GPIOPIN13 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0TX               0x00000005UL                                   /**< Mode USART0TX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1TX               0x00000005UL                                   /**< Mode USART1TX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2TX               0x00000005UL                                   /**< Mode USART2TX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC3              0x00000005UL                                   /**< Mode TIMER1CC3 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH6                 0x00000006UL                                   /**< Mode PRSCH6 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES6        0x00000006UL                                   /**< Mode LESENSESCANRES6 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES14       0x00000006UL                                   /**< Mode LESENSESCANRES14 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN6               0x00000006UL                                   /**< Mode GPIOPIN6 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN14              0x00000006UL                                   /**< Mode GPIOPIN14 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0CS               0x00000006UL                                   /**< Mode USART0CS for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1CS               0x00000006UL                                   /**< Mode USART1CS for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2CS               0x00000006UL                                   /**< Mode USART2CS for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_PRSCH7                 0x00000007UL                                   /**< Mode PRSCH7 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES7        0x00000007UL                                   /**< Mode LESENSESCANRES7 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_LESENSESCANRES15       0x00000007UL                                   /**< Mode LESENSESCANRES15 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN7               0x00000007UL                                   /**< Mode GPIOPIN7 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN15              0x00000007UL                                   /**< Mode GPIOPIN15 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH0                  (_PRS_CH_CTRL_SIGSEL_PRSCH0 << 0)              /**< Shifted mode PRSCH0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH8                  (_PRS_CH_CTRL_SIGSEL_PRSCH8 << 0)              /**< Shifted mode PRSCH8 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ACMP0OUT                (_PRS_CH_CTRL_SIGSEL_ACMP0OUT << 0)            /**< Shifted mode ACMP0OUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ACMP1OUT                (_PRS_CH_CTRL_SIGSEL_ACMP1OUT << 0)            /**< Shifted mode ACMP1OUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ADC0SINGLE              (_PRS_CH_CTRL_SIGSEL_ADC0SINGLE << 0)          /**< Shifted mode ADC0SINGLE for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES0         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES0 << 0)     /**< Shifted mode LESENSESCANRES0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES8         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES8 << 0)     /**< Shifted mode LESENSESCANRES8 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSEDEC0             (_PRS_CH_CTRL_SIGSEL_LESENSEDEC0 << 0)         /**< Shifted mode LESENSEDEC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSEMEASACT          (_PRS_CH_CTRL_SIGSEL_LESENSEMEASACT << 0)      /**< Shifted mode LESENSEMEASACT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN0                (_PRS_CH_CTRL_SIGSEL_GPIOPIN0 << 0)            /**< Shifted mode GPIOPIN0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN8                (_PRS_CH_CTRL_SIGSEL_GPIOPIN8 << 0)            /**< Shifted mode GPIOPIN8 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LETIMER0CH0             (_PRS_CH_CTRL_SIGSEL_LETIMER0CH0 << 0)         /**< Shifted mode LETIMER0CH0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PCNT0TCC                (_PRS_CH_CTRL_SIGSEL_PCNT0TCC << 0)            /**< Shifted mode PCNT0TCC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_CMUCLKOUT0              (_PRS_CH_CTRL_SIGSEL_CMUCLKOUT0 << 0)          /**< Shifted mode CMUCLKOUT0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_CRYOTIMERPERIOD         (_PRS_CH_CTRL_SIGSEL_CRYOTIMERPERIOD << 0)     /**< Shifted mode CRYOTIMERPERIOD for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0IRTX              (_PRS_CH_CTRL_SIGSEL_USART0IRTX << 0)          /**< Shifted mode USART0IRTX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2IRTX              (_PRS_CH_CTRL_SIGSEL_USART2IRTX << 0)          /**< Shifted mode USART2IRTX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0UF                (_PRS_CH_CTRL_SIGSEL_TIMER0UF << 0)            /**< Shifted mode TIMER0UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1UF                (_PRS_CH_CTRL_SIGSEL_TIMER1UF << 0)            /**< Shifted mode TIMER1UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_WTIMER0UF               (_PRS_CH_CTRL_SIGSEL_WTIMER0UF << 0)           /**< Shifted mode WTIMER0UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_CM4TXEV                 (_PRS_CH_CTRL_SIGSEL_CM4TXEV << 0)             /**< Shifted mode CM4TXEV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH1                  (_PRS_CH_CTRL_SIGSEL_PRSCH1 << 0)              /**< Shifted mode PRSCH1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH9                  (_PRS_CH_CTRL_SIGSEL_PRSCH9 << 0)              /**< Shifted mode PRSCH9 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ADC0SCAN                (_PRS_CH_CTRL_SIGSEL_ADC0SCAN << 0)            /**< Shifted mode ADC0SCAN for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES1         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES1 << 0)     /**< Shifted mode LESENSESCANRES1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES9         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES9 << 0)     /**< Shifted mode LESENSESCANRES9 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSEDEC1             (_PRS_CH_CTRL_SIGSEL_LESENSEDEC1 << 0)         /**< Shifted mode LESENSEDEC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCCCV0                (_PRS_CH_CTRL_SIGSEL_RTCCCCV0 << 0)            /**< Shifted mode RTCCCCV0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN1                (_PRS_CH_CTRL_SIGSEL_GPIOPIN1 << 0)            /**< Shifted mode GPIOPIN1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN9                (_PRS_CH_CTRL_SIGSEL_GPIOPIN9 << 0)            /**< Shifted mode GPIOPIN9 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LETIMER0CH1             (_PRS_CH_CTRL_SIGSEL_LETIMER0CH1 << 0)         /**< Shifted mode LETIMER0CH1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PCNT0UFOF               (_PRS_CH_CTRL_SIGSEL_PCNT0UFOF << 0)           /**< Shifted mode PCNT0UFOF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_CMUCLKOUT1              (_PRS_CH_CTRL_SIGSEL_CMUCLKOUT1 << 0)          /**< Shifted mode CMUCLKOUT1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0TXC               (_PRS_CH_CTRL_SIGSEL_USART0TXC << 0)           /**< Shifted mode USART0TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1TXC               (_PRS_CH_CTRL_SIGSEL_USART1TXC << 0)           /**< Shifted mode USART1TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2TXC               (_PRS_CH_CTRL_SIGSEL_USART2TXC << 0)           /**< Shifted mode USART2TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0OF                (_PRS_CH_CTRL_SIGSEL_TIMER0OF << 0)            /**< Shifted mode TIMER0OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1OF                (_PRS_CH_CTRL_SIGSEL_TIMER1OF << 0)            /**< Shifted mode TIMER1OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_WTIMER0OF               (_PRS_CH_CTRL_SIGSEL_WTIMER0OF << 0)           /**< Shifted mode WTIMER0OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_CM4ICACHEPCHITSOF       (_PRS_CH_CTRL_SIGSEL_CM4ICACHEPCHITSOF << 0)   /**< Shifted mode CM4ICACHEPCHITSOF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH2                  (_PRS_CH_CTRL_SIGSEL_PRSCH2 << 0)              /**< Shifted mode PRSCH2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH10                 (_PRS_CH_CTRL_SIGSEL_PRSCH10 << 0)             /**< Shifted mode PRSCH10 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES2         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES2 << 0)     /**< Shifted mode LESENSESCANRES2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES10        (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES10 << 0)    /**< Shifted mode LESENSESCANRES10 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSEDEC2             (_PRS_CH_CTRL_SIGSEL_LESENSEDEC2 << 0)         /**< Shifted mode LESENSEDEC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCCCV1                (_PRS_CH_CTRL_SIGSEL_RTCCCCV1 << 0)            /**< Shifted mode RTCCCCV1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN2                (_PRS_CH_CTRL_SIGSEL_GPIOPIN2 << 0)            /**< Shifted mode GPIOPIN2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN10               (_PRS_CH_CTRL_SIGSEL_GPIOPIN10 << 0)           /**< Shifted mode GPIOPIN10 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PCNT0DIR                (_PRS_CH_CTRL_SIGSEL_PCNT0DIR << 0)            /**< Shifted mode PCNT0DIR for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0RXDATAV           (_PRS_CH_CTRL_SIGSEL_USART0RXDATAV << 0)       /**< Shifted mode USART0RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1RXDATAV           (_PRS_CH_CTRL_SIGSEL_USART1RXDATAV << 0)       /**< Shifted mode USART1RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2RXDATAV           (_PRS_CH_CTRL_SIGSEL_USART2RXDATAV << 0)       /**< Shifted mode USART2RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC0               (_PRS_CH_CTRL_SIGSEL_TIMER0CC0 << 0)           /**< Shifted mode TIMER0CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC0               (_PRS_CH_CTRL_SIGSEL_TIMER1CC0 << 0)           /**< Shifted mode TIMER1CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_WTIMER0CC0              (_PRS_CH_CTRL_SIGSEL_WTIMER0CC0 << 0)          /**< Shifted mode WTIMER0CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_CM4ICACHEPCMISSESOF     (_PRS_CH_CTRL_SIGSEL_CM4ICACHEPCMISSESOF << 0) /**< Shifted mode CM4ICACHEPCMISSESOF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH3                  (_PRS_CH_CTRL_SIGSEL_PRSCH3 << 0)              /**< Shifted mode PRSCH3 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH11                 (_PRS_CH_CTRL_SIGSEL_PRSCH11 << 0)             /**< Shifted mode PRSCH11 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES3         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES3 << 0)     /**< Shifted mode LESENSESCANRES3 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES11        (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES11 << 0)    /**< Shifted mode LESENSESCANRES11 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSEDECCMP           (_PRS_CH_CTRL_SIGSEL_LESENSEDECCMP << 0)       /**< Shifted mode LESENSEDECCMP for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCCCV2                (_PRS_CH_CTRL_SIGSEL_RTCCCCV2 << 0)            /**< Shifted mode RTCCCCV2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN3                (_PRS_CH_CTRL_SIGSEL_GPIOPIN3 << 0)            /**< Shifted mode GPIOPIN3 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN11               (_PRS_CH_CTRL_SIGSEL_GPIOPIN11 << 0)           /**< Shifted mode GPIOPIN11 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0RTS               (_PRS_CH_CTRL_SIGSEL_USART0RTS << 0)           /**< Shifted mode USART0RTS for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1RTS               (_PRS_CH_CTRL_SIGSEL_USART1RTS << 0)           /**< Shifted mode USART1RTS for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2RTS               (_PRS_CH_CTRL_SIGSEL_USART2RTS << 0)           /**< Shifted mode USART2RTS for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC1               (_PRS_CH_CTRL_SIGSEL_TIMER0CC1 << 0)           /**< Shifted mode TIMER0CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC1               (_PRS_CH_CTRL_SIGSEL_TIMER1CC1 << 0)           /**< Shifted mode TIMER1CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_WTIMER0CC1              (_PRS_CH_CTRL_SIGSEL_WTIMER0CC1 << 0)          /**< Shifted mode WTIMER0CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH4                  (_PRS_CH_CTRL_SIGSEL_PRSCH4 << 0)              /**< Shifted mode PRSCH4 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES4         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES4 << 0)     /**< Shifted mode LESENSESCANRES4 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES12        (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES12 << 0)    /**< Shifted mode LESENSESCANRES12 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN4                (_PRS_CH_CTRL_SIGSEL_GPIOPIN4 << 0)            /**< Shifted mode GPIOPIN4 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN12               (_PRS_CH_CTRL_SIGSEL_GPIOPIN12 << 0)           /**< Shifted mode GPIOPIN12 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC2               (_PRS_CH_CTRL_SIGSEL_TIMER0CC2 << 0)           /**< Shifted mode TIMER0CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC2               (_PRS_CH_CTRL_SIGSEL_TIMER1CC2 << 0)           /**< Shifted mode TIMER1CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_WTIMER0CC2              (_PRS_CH_CTRL_SIGSEL_WTIMER0CC2 << 0)          /**< Shifted mode WTIMER0CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH5                  (_PRS_CH_CTRL_SIGSEL_PRSCH5 << 0)              /**< Shifted mode PRSCH5 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES5         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES5 << 0)     /**< Shifted mode LESENSESCANRES5 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES13        (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES13 << 0)    /**< Shifted mode LESENSESCANRES13 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN5                (_PRS_CH_CTRL_SIGSEL_GPIOPIN5 << 0)            /**< Shifted mode GPIOPIN5 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN13               (_PRS_CH_CTRL_SIGSEL_GPIOPIN13 << 0)           /**< Shifted mode GPIOPIN13 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0TX                (_PRS_CH_CTRL_SIGSEL_USART0TX << 0)            /**< Shifted mode USART0TX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1TX                (_PRS_CH_CTRL_SIGSEL_USART1TX << 0)            /**< Shifted mode USART1TX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2TX                (_PRS_CH_CTRL_SIGSEL_USART2TX << 0)            /**< Shifted mode USART2TX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC3               (_PRS_CH_CTRL_SIGSEL_TIMER1CC3 << 0)           /**< Shifted mode TIMER1CC3 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH6                  (_PRS_CH_CTRL_SIGSEL_PRSCH6 << 0)              /**< Shifted mode PRSCH6 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES6         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES6 << 0)     /**< Shifted mode LESENSESCANRES6 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES14        (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES14 << 0)    /**< Shifted mode LESENSESCANRES14 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN6                (_PRS_CH_CTRL_SIGSEL_GPIOPIN6 << 0)            /**< Shifted mode GPIOPIN6 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN14               (_PRS_CH_CTRL_SIGSEL_GPIOPIN14 << 0)           /**< Shifted mode GPIOPIN14 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0CS                (_PRS_CH_CTRL_SIGSEL_USART0CS << 0)            /**< Shifted mode USART0CS for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1CS                (_PRS_CH_CTRL_SIGSEL_USART1CS << 0)            /**< Shifted mode USART1CS for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2CS                (_PRS_CH_CTRL_SIGSEL_USART2CS << 0)            /**< Shifted mode USART2CS for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_PRSCH7                  (_PRS_CH_CTRL_SIGSEL_PRSCH7 << 0)              /**< Shifted mode PRSCH7 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES7         (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES7 << 0)     /**< Shifted mode LESENSESCANRES7 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES15        (_PRS_CH_CTRL_SIGSEL_LESENSESCANRES15 << 0)    /**< Shifted mode LESENSESCANRES15 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN7                (_PRS_CH_CTRL_SIGSEL_GPIOPIN7 << 0)            /**< Shifted mode GPIOPIN7 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN15               (_PRS_CH_CTRL_SIGSEL_GPIOPIN15 << 0)           /**< Shifted mode GPIOPIN15 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_SHIFT               8                                              /**< Shift value for PRS_SOURCESEL */
#define _PRS_CH_CTRL_SOURCESEL_MASK                0x7F00UL                                       /**< Bit mask for PRS_SOURCESEL */
#define _PRS_CH_CTRL_SOURCESEL_NONE                0x00000000UL                                   /**< Mode NONE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_PRSL                0x00000001UL                                   /**< Mode PRSL for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_PRSH                0x00000002UL                                   /**< Mode PRSH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ACMP0               0x00000003UL                                   /**< Mode ACMP0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ACMP1               0x00000004UL                                   /**< Mode ACMP1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ADC0                0x00000005UL                                   /**< Mode ADC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_LESENSEL            0x00000007UL                                   /**< Mode LESENSEL for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_LESENSEH            0x00000008UL                                   /**< Mode LESENSEH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_LESENSED            0x00000009UL                                   /**< Mode LESENSED for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_LESENSE             0x0000000AUL                                   /**< Mode LESENSE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_RTCC                0x0000000BUL                                   /**< Mode RTCC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_GPIOL               0x0000000CUL                                   /**< Mode GPIOL for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_GPIOH               0x0000000DUL                                   /**< Mode GPIOH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_LETIMER0            0x0000000EUL                                   /**< Mode LETIMER0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_PCNT0               0x0000000FUL                                   /**< Mode PCNT0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_CMU                 0x00000012UL                                   /**< Mode CMU for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_CRYOTIMER           0x0000001AUL                                   /**< Mode CRYOTIMER for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART0              0x00000030UL                                   /**< Mode USART0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART1              0x00000031UL                                   /**< Mode USART1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART2              0x00000032UL                                   /**< Mode USART2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER0              0x0000003CUL                                   /**< Mode TIMER0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER1              0x0000003DUL                                   /**< Mode TIMER1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_WTIMER0             0x0000003EUL                                   /**< Mode WTIMER0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_CM4                 0x00000043UL                                   /**< Mode CM4 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_NONE                 (_PRS_CH_CTRL_SOURCESEL_NONE << 8)             /**< Shifted mode NONE for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_PRSL                 (_PRS_CH_CTRL_SOURCESEL_PRSL << 8)             /**< Shifted mode PRSL for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_PRSH                 (_PRS_CH_CTRL_SOURCESEL_PRSH << 8)             /**< Shifted mode PRSH for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ACMP0                (_PRS_CH_CTRL_SOURCESEL_ACMP0 << 8)            /**< Shifted mode ACMP0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ACMP1                (_PRS_CH_CTRL_SOURCESEL_ACMP1 << 8)            /**< Shifted mode ACMP1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ADC0                 (_PRS_CH_CTRL_SOURCESEL_ADC0 << 8)             /**< Shifted mode ADC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_LESENSEL             (_PRS_CH_CTRL_SOURCESEL_LESENSEL << 8)         /**< Shifted mode LESENSEL for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_LESENSEH             (_PRS_CH_CTRL_SOURCESEL_LESENSEH << 8)         /**< Shifted mode LESENSEH for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_LESENSED             (_PRS_CH_CTRL_SOURCESEL_LESENSED << 8)         /**< Shifted mode LESENSED for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_LESENSE              (_PRS_CH_CTRL_SOURCESEL_LESENSE << 8)          /**< Shifted mode LESENSE for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_RTCC                 (_PRS_CH_CTRL_SOURCESEL_RTCC << 8)             /**< Shifted mode RTCC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_GPIOL                (_PRS_CH_CTRL_SOURCESEL_GPIOL << 8)            /**< Shifted mode GPIOL for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_GPIOH                (_PRS_CH_CTRL_SOURCESEL_GPIOH << 8)            /**< Shifted mode GPIOH for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_LETIMER0             (_PRS_CH_CTRL_SOURCESEL_LETIMER0 << 8)         /**< Shifted mode LETIMER0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_PCNT0                (_PRS_CH_CTRL_SOURCESEL_PCNT0 << 8)            /**< Shifted mode PCNT0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_CMU                  (_PRS_CH_CTRL_SOURCESEL_CMU << 8)              /**< Shifted mode CMU for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_CRYOTIMER            (_PRS_CH_CTRL_SOURCESEL_CRYOTIMER << 8)        /**< Shifted mode CRYOTIMER for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART0               (_PRS_CH_CTRL_SOURCESEL_USART0 << 8)           /**< Shifted mode USART0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART1               (_PRS_CH_CTRL_SOURCESEL_USART1 << 8)           /**< Shifted mode USART1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART2               (_PRS_CH_CTRL_SOURCESEL_USART2 << 8)           /**< Shifted mode USART2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER0               (_PRS_CH_CTRL_SOURCESEL_TIMER0 << 8)           /**< Shifted mode TIMER0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER1               (_PRS_CH_CTRL_SOURCESEL_TIMER1 << 8)           /**< Shifted mode TIMER1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_WTIMER0              (_PRS_CH_CTRL_SOURCESEL_WTIMER0 << 8)          /**< Shifted mode WTIMER0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_CM4                  (_PRS_CH_CTRL_SOURCESEL_CM4 << 8)              /**< Shifted mode CM4 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_SHIFT                   20                                             /**< Shift value for PRS_EDSEL */
#define _PRS_CH_CTRL_EDSEL_MASK                    0x300000UL                                     /**< Bit mask for PRS_EDSEL */
#define _PRS_CH_CTRL_EDSEL_DEFAULT                 0x00000000UL                                   /**< Mode DEFAULT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_OFF                     0x00000000UL                                   /**< Mode OFF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_POSEDGE                 0x00000001UL                                   /**< Mode POSEDGE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_NEGEDGE                 0x00000002UL                                   /**< Mode NEGEDGE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_BOTHEDGES               0x00000003UL                                   /**< Mode BOTHEDGES for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_DEFAULT                  (_PRS_CH_CTRL_EDSEL_DEFAULT << 20)             /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_OFF                      (_PRS_CH_CTRL_EDSEL_OFF << 20)                 /**< Shifted mode OFF for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_POSEDGE                  (_PRS_CH_CTRL_EDSEL_POSEDGE << 20)             /**< Shifted mode POSEDGE for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_NEGEDGE                  (_PRS_CH_CTRL_EDSEL_NEGEDGE << 20)             /**< Shifted mode NEGEDGE for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_BOTHEDGES                (_PRS_CH_CTRL_EDSEL_BOTHEDGES << 20)           /**< Shifted mode BOTHEDGES for PRS_CH_CTRL */
#define PRS_CH_CTRL_STRETCH                        (0x1UL << 25)                                  /**< Stretch Channel Output */
#define _PRS_CH_CTRL_STRETCH_SHIFT                 25                                             /**< Shift value for PRS_STRETCH */
#define _PRS_CH_CTRL_STRETCH_MASK                  0x2000000UL                                    /**< Bit mask for PRS_STRETCH */
#define _PRS_CH_CTRL_STRETCH_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_STRETCH_DEFAULT                (_PRS_CH_CTRL_STRETCH_DEFAULT << 25)           /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_INV                            (0x1UL << 26)                                  /**< Invert Channel */
#define _PRS_CH_CTRL_INV_SHIFT                     26                                             /**< Shift value for PRS_INV */
#define _PRS_CH_CTRL_INV_MASK                      0x4000000UL                                    /**< Bit mask for PRS_INV */
#define _PRS_CH_CTRL_INV_DEFAULT                   0x00000000UL                                   /**< Mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_INV_DEFAULT                    (_PRS_CH_CTRL_INV_DEFAULT << 26)               /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_ORPREV                         (0x1UL << 27)                                  /**< Or Previous */
#define _PRS_CH_CTRL_ORPREV_SHIFT                  27                                             /**< Shift value for PRS_ORPREV */
#define _PRS_CH_CTRL_ORPREV_MASK                   0x8000000UL                                    /**< Bit mask for PRS_ORPREV */
#define _PRS_CH_CTRL_ORPREV_DEFAULT                0x00000000UL                                   /**< Mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_ORPREV_DEFAULT                 (_PRS_CH_CTRL_ORPREV_DEFAULT << 27)            /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_ANDNEXT                        (0x1UL << 28)                                  /**< And Next */
#define _PRS_CH_CTRL_ANDNEXT_SHIFT                 28                                             /**< Shift value for PRS_ANDNEXT */
#define _PRS_CH_CTRL_ANDNEXT_MASK                  0x10000000UL                                   /**< Bit mask for PRS_ANDNEXT */
#define _PRS_CH_CTRL_ANDNEXT_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_ANDNEXT_DEFAULT                (_PRS_CH_CTRL_ANDNEXT_DEFAULT << 28)           /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_ASYNC                          (0x1UL << 30)                                  /**< Asynchronous reflex */
#define _PRS_CH_CTRL_ASYNC_SHIFT                   30                                             /**< Shift value for PRS_ASYNC */
#define _PRS_CH_CTRL_ASYNC_MASK                    0x40000000UL                                   /**< Bit mask for PRS_ASYNC */
#define _PRS_CH_CTRL_ASYNC_DEFAULT                 0x00000000UL                                   /**< Mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_ASYNC_DEFAULT                  (_PRS_CH_CTRL_ASYNC_DEFAULT << 30)             /**< Shifted mode DEFAULT for PRS_CH_CTRL */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_PRS */

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_LDMA
 * @{
 * @defgroup EFR32MG13P932F512IM48_LDMA_BitFields  LDMA Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for LDMA CTRL */
#define _LDMA_CTRL_RESETVALUE                        0x07000000UL                           /**< Default value for LDMA_CTRL */
#define _LDMA_CTRL_MASK                              0x0700FFFFUL                           /**< Mask for LDMA_CTRL */
#define _LDMA_CTRL_SYNCPRSSETEN_SHIFT                0                                      /**< Shift value for LDMA_SYNCPRSSETEN */
#define _LDMA_CTRL_SYNCPRSSETEN_MASK                 0xFFUL                                 /**< Bit mask for LDMA_SYNCPRSSETEN */
#define _LDMA_CTRL_SYNCPRSSETEN_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for LDMA_CTRL */
#define LDMA_CTRL_SYNCPRSSETEN_DEFAULT               (_LDMA_CTRL_SYNCPRSSETEN_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CTRL */
#define _LDMA_CTRL_SYNCPRSCLREN_SHIFT                8                                      /**< Shift value for LDMA_SYNCPRSCLREN */
#define _LDMA_CTRL_SYNCPRSCLREN_MASK                 0xFF00UL                               /**< Bit mask for LDMA_SYNCPRSCLREN */
#define _LDMA_CTRL_SYNCPRSCLREN_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for LDMA_CTRL */
#define LDMA_CTRL_SYNCPRSCLREN_DEFAULT               (_LDMA_CTRL_SYNCPRSCLREN_DEFAULT << 8) /**< Shifted mode DEFAULT for LDMA_CTRL */
#define _LDMA_CTRL_NUMFIXED_SHIFT                    24                                     /**< Shift value for LDMA_NUMFIXED */
#define _LDMA_CTRL_NUMFIXED_MASK                     0x7000000UL                            /**< Bit mask for LDMA_NUMFIXED */
#define _LDMA_CTRL_NUMFIXED_DEFAULT                  0x00000007UL                           /**< Mode DEFAULT for LDMA_CTRL */
#define LDMA_CTRL_NUMFIXED_DEFAULT                   (_LDMA_CTRL_NUMFIXED_DEFAULT << 24)    /**< Shifted mode DEFAULT for LDMA_CTRL */

/* Bit fields for LDMA STATUS */
#define _LDMA_STATUS_RESETVALUE                      0x08100000UL                           /**< Default value for LDMA_STATUS */
#define _LDMA_STATUS_MASK                            0x1F1F073BUL                           /**< Mask for LDMA_STATUS */
#define LDMA_STATUS_ANYBUSY                          (0x1UL << 0)                           /**< Any DMA Channel Busy */
#define _LDMA_STATUS_ANYBUSY_SHIFT                   0                                      /**< Shift value for LDMA_ANYBUSY */
#define _LDMA_STATUS_ANYBUSY_MASK                    0x1UL                                  /**< Bit mask for LDMA_ANYBUSY */
#define _LDMA_STATUS_ANYBUSY_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_ANYBUSY_DEFAULT                  (_LDMA_STATUS_ANYBUSY_DEFAULT << 0)    /**< Shifted mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_ANYREQ                           (0x1UL << 1)                           /**< Any DMA Channel Request Pending */
#define _LDMA_STATUS_ANYREQ_SHIFT                    1                                      /**< Shift value for LDMA_ANYREQ */
#define _LDMA_STATUS_ANYREQ_MASK                     0x2UL                                  /**< Bit mask for LDMA_ANYREQ */
#define _LDMA_STATUS_ANYREQ_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_ANYREQ_DEFAULT                   (_LDMA_STATUS_ANYREQ_DEFAULT << 1)     /**< Shifted mode DEFAULT for LDMA_STATUS */
#define _LDMA_STATUS_CHGRANT_SHIFT                   3                                      /**< Shift value for LDMA_CHGRANT */
#define _LDMA_STATUS_CHGRANT_MASK                    0x38UL                                 /**< Bit mask for LDMA_CHGRANT */
#define _LDMA_STATUS_CHGRANT_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_CHGRANT_DEFAULT                  (_LDMA_STATUS_CHGRANT_DEFAULT << 3)    /**< Shifted mode DEFAULT for LDMA_STATUS */
#define _LDMA_STATUS_CHERROR_SHIFT                   8                                      /**< Shift value for LDMA_CHERROR */
#define _LDMA_STATUS_CHERROR_MASK                    0x700UL                                /**< Bit mask for LDMA_CHERROR */
#define _LDMA_STATUS_CHERROR_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_CHERROR_DEFAULT                  (_LDMA_STATUS_CHERROR_DEFAULT << 8)    /**< Shifted mode DEFAULT for LDMA_STATUS */
#define _LDMA_STATUS_FIFOLEVEL_SHIFT                 16                                     /**< Shift value for LDMA_FIFOLEVEL */
#define _LDMA_STATUS_FIFOLEVEL_MASK                  0x1F0000UL                             /**< Bit mask for LDMA_FIFOLEVEL */
#define _LDMA_STATUS_FIFOLEVEL_DEFAULT               0x00000010UL                           /**< Mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_FIFOLEVEL_DEFAULT                (_LDMA_STATUS_FIFOLEVEL_DEFAULT << 16) /**< Shifted mode DEFAULT for LDMA_STATUS */
#define _LDMA_STATUS_CHNUM_SHIFT                     24                                     /**< Shift value for LDMA_CHNUM */
#define _LDMA_STATUS_CHNUM_MASK                      0x1F000000UL                           /**< Bit mask for LDMA_CHNUM */
#define _LDMA_STATUS_CHNUM_DEFAULT                   0x00000008UL                           /**< Mode DEFAULT for LDMA_STATUS */
#define LDMA_STATUS_CHNUM_DEFAULT                    (_LDMA_STATUS_CHNUM_DEFAULT << 24)     /**< Shifted mode DEFAULT for LDMA_STATUS */

/* Bit fields for LDMA SYNC */
#define _LDMA_SYNC_RESETVALUE                        0x00000000UL                       /**< Default value for LDMA_SYNC */
#define _LDMA_SYNC_MASK                              0x000000FFUL                       /**< Mask for LDMA_SYNC */
#define _LDMA_SYNC_SYNCTRIG_SHIFT                    0                                  /**< Shift value for LDMA_SYNCTRIG */
#define _LDMA_SYNC_SYNCTRIG_MASK                     0xFFUL                             /**< Bit mask for LDMA_SYNCTRIG */
#define _LDMA_SYNC_SYNCTRIG_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for LDMA_SYNC */
#define LDMA_SYNC_SYNCTRIG_DEFAULT                   (_LDMA_SYNC_SYNCTRIG_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_SYNC */

/* Bit fields for LDMA CHEN */
#define _LDMA_CHEN_RESETVALUE                        0x00000000UL                   /**< Default value for LDMA_CHEN */
#define _LDMA_CHEN_MASK                              0x000000FFUL                   /**< Mask for LDMA_CHEN */
#define _LDMA_CHEN_CHEN_SHIFT                        0                              /**< Shift value for LDMA_CHEN */
#define _LDMA_CHEN_CHEN_MASK                         0xFFUL                         /**< Bit mask for LDMA_CHEN */
#define _LDMA_CHEN_CHEN_DEFAULT                      0x00000000UL                   /**< Mode DEFAULT for LDMA_CHEN */
#define LDMA_CHEN_CHEN_DEFAULT                       (_LDMA_CHEN_CHEN_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CHEN */

/* Bit fields for LDMA CHBUSY */
#define _LDMA_CHBUSY_RESETVALUE                      0x00000000UL                     /**< Default value for LDMA_CHBUSY */
#define _LDMA_CHBUSY_MASK                            0x000000FFUL                     /**< Mask for LDMA_CHBUSY */
#define _LDMA_CHBUSY_BUSY_SHIFT                      0                                /**< Shift value for LDMA_BUSY */
#define _LDMA_CHBUSY_BUSY_MASK                       0xFFUL                           /**< Bit mask for LDMA_BUSY */
#define _LDMA_CHBUSY_BUSY_DEFAULT                    0x00000000UL                     /**< Mode DEFAULT for LDMA_CHBUSY */
#define LDMA_CHBUSY_BUSY_DEFAULT                     (_LDMA_CHBUSY_BUSY_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CHBUSY */

/* Bit fields for LDMA CHDONE */
#define _LDMA_CHDONE_RESETVALUE                      0x00000000UL                       /**< Default value for LDMA_CHDONE */
#define _LDMA_CHDONE_MASK                            0x000000FFUL                       /**< Mask for LDMA_CHDONE */
#define _LDMA_CHDONE_CHDONE_SHIFT                    0                                  /**< Shift value for LDMA_CHDONE */
#define _LDMA_CHDONE_CHDONE_MASK                     0xFFUL                             /**< Bit mask for LDMA_CHDONE */
#define _LDMA_CHDONE_CHDONE_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for LDMA_CHDONE */
#define LDMA_CHDONE_CHDONE_DEFAULT                   (_LDMA_CHDONE_CHDONE_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CHDONE */

/* Bit fields for LDMA DBGHALT */
#define _LDMA_DBGHALT_RESETVALUE                     0x00000000UL                         /**< Default value for LDMA_DBGHALT */
#define _LDMA_DBGHALT_MASK                           0x000000FFUL                         /**< Mask for LDMA_DBGHALT */
#define _LDMA_DBGHALT_DBGHALT_SHIFT                  0                                    /**< Shift value for LDMA_DBGHALT */
#define _LDMA_DBGHALT_DBGHALT_MASK                   0xFFUL                               /**< Bit mask for LDMA_DBGHALT */
#define _LDMA_DBGHALT_DBGHALT_DEFAULT                0x00000000UL                         /**< Mode DEFAULT for LDMA_DBGHALT */
#define LDMA_DBGHALT_DBGHALT_DEFAULT                 (_LDMA_DBGHALT_DBGHALT_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_DBGHALT */

/* Bit fields for LDMA SWREQ */
#define _LDMA_SWREQ_RESETVALUE                       0x00000000UL                     /**< Default value for LDMA_SWREQ */
#define _LDMA_SWREQ_MASK                             0x000000FFUL                     /**< Mask for LDMA_SWREQ */
#define _LDMA_SWREQ_SWREQ_SHIFT                      0                                /**< Shift value for LDMA_SWREQ */
#define _LDMA_SWREQ_SWREQ_MASK                       0xFFUL                           /**< Bit mask for LDMA_SWREQ */
#define _LDMA_SWREQ_SWREQ_DEFAULT                    0x00000000UL                     /**< Mode DEFAULT for LDMA_SWREQ */
#define LDMA_SWREQ_SWREQ_DEFAULT                     (_LDMA_SWREQ_SWREQ_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_SWREQ */

/* Bit fields for LDMA REQDIS */
#define _LDMA_REQDIS_RESETVALUE                      0x00000000UL                       /**< Default value for LDMA_REQDIS */
#define _LDMA_REQDIS_MASK                            0x000000FFUL                       /**< Mask for LDMA_REQDIS */
#define _LDMA_REQDIS_REQDIS_SHIFT                    0                                  /**< Shift value for LDMA_REQDIS */
#define _LDMA_REQDIS_REQDIS_MASK                     0xFFUL                             /**< Bit mask for LDMA_REQDIS */
#define _LDMA_REQDIS_REQDIS_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for LDMA_REQDIS */
#define LDMA_REQDIS_REQDIS_DEFAULT                   (_LDMA_REQDIS_REQDIS_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_REQDIS */

/* Bit fields for LDMA REQPEND */
#define _LDMA_REQPEND_RESETVALUE                     0x00000000UL                         /**< Default value for LDMA_REQPEND */
#define _LDMA_REQPEND_MASK                           0x000000FFUL                         /**< Mask for LDMA_REQPEND */
#define _LDMA_REQPEND_REQPEND_SHIFT                  0                                    /**< Shift value for LDMA_REQPEND */
#define _LDMA_REQPEND_REQPEND_MASK                   0xFFUL                               /**< Bit mask for LDMA_REQPEND */
#define _LDMA_REQPEND_REQPEND_DEFAULT                0x00000000UL                         /**< Mode DEFAULT for LDMA_REQPEND */
#define LDMA_REQPEND_REQPEND_DEFAULT                 (_LDMA_REQPEND_REQPEND_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_REQPEND */

/* Bit fields for LDMA LINKLOAD */
#define _LDMA_LINKLOAD_RESETVALUE                    0x00000000UL                           /**< Default value for LDMA_LINKLOAD */
#define _LDMA_LINKLOAD_MASK                          0x000000FFUL                           /**< Mask for LDMA_LINKLOAD */
#define _LDMA_LINKLOAD_LINKLOAD_SHIFT                0                                      /**< Shift value for LDMA_LINKLOAD */
#define _LDMA_LINKLOAD_LINKLOAD_MASK                 0xFFUL                                 /**< Bit mask for LDMA_LINKLOAD */
#define _LDMA_LINKLOAD_LINKLOAD_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for LDMA_LINKLOAD */
#define LDMA_LINKLOAD_LINKLOAD_DEFAULT               (_LDMA_LINKLOAD_LINKLOAD_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_LINKLOAD */

/* Bit fields for LDMA REQCLEAR */
#define _LDMA_REQCLEAR_RESETVALUE                    0x00000000UL                           /**< Default value for LDMA_REQCLEAR */
#define _LDMA_REQCLEAR_MASK                          0x000000FFUL                           /**< Mask for LDMA_REQCLEAR */
#define _LDMA_REQCLEAR_REQCLEAR_SHIFT                0                                      /**< Shift value for LDMA_REQCLEAR */
#define _LDMA_REQCLEAR_REQCLEAR_MASK                 0xFFUL                                 /**< Bit mask for LDMA_REQCLEAR */
#define _LDMA_REQCLEAR_REQCLEAR_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for LDMA_REQCLEAR */
#define LDMA_REQCLEAR_REQCLEAR_DEFAULT               (_LDMA_REQCLEAR_REQCLEAR_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_REQCLEAR */

/* Bit fields for LDMA IF */
#define _LDMA_IF_RESETVALUE                          0x00000000UL                   /**< Default value for LDMA_IF */
#define _LDMA_IF_MASK                                0x800000FFUL                   /**< Mask for LDMA_IF */
#define _LDMA_IF_DONE_SHIFT                          0                              /**< Shift value for LDMA_DONE */
#define _LDMA_IF_DONE_MASK                           0xFFUL                         /**< Bit mask for LDMA_DONE */
#define _LDMA_IF_DONE_DEFAULT                        0x00000000UL                   /**< Mode DEFAULT for LDMA_IF */
#define LDMA_IF_DONE_DEFAULT                         (_LDMA_IF_DONE_DEFAULT << 0)   /**< Shifted mode DEFAULT for LDMA_IF */
#define LDMA_IF_ERROR                                (0x1UL << 31)                  /**< Transfer Error Interrupt Flag */
#define _LDMA_IF_ERROR_SHIFT                         31                             /**< Shift value for LDMA_ERROR */
#define _LDMA_IF_ERROR_MASK                          0x80000000UL                   /**< Bit mask for LDMA_ERROR */
#define _LDMA_IF_ERROR_DEFAULT                       0x00000000UL                   /**< Mode DEFAULT for LDMA_IF */
#define LDMA_IF_ERROR_DEFAULT                        (_LDMA_IF_ERROR_DEFAULT << 31) /**< Shifted mode DEFAULT for LDMA_IF */

/* Bit fields for LDMA IFS */
#define _LDMA_IFS_RESETVALUE                         0x00000000UL                    /**< Default value for LDMA_IFS */
#define _LDMA_IFS_MASK                               0x800000FFUL                    /**< Mask for LDMA_IFS */
#define _LDMA_IFS_DONE_SHIFT                         0                               /**< Shift value for LDMA_DONE */
#define _LDMA_IFS_DONE_MASK                          0xFFUL                          /**< Bit mask for LDMA_DONE */
#define _LDMA_IFS_DONE_DEFAULT                       0x00000000UL                    /**< Mode DEFAULT for LDMA_IFS */
#define LDMA_IFS_DONE_DEFAULT                        (_LDMA_IFS_DONE_DEFAULT << 0)   /**< Shifted mode DEFAULT for LDMA_IFS */
#define LDMA_IFS_ERROR                               (0x1UL << 31)                   /**< Set ERROR Interrupt Flag */
#define _LDMA_IFS_ERROR_SHIFT                        31                              /**< Shift value for LDMA_ERROR */
#define _LDMA_IFS_ERROR_MASK                         0x80000000UL                    /**< Bit mask for LDMA_ERROR */
#define _LDMA_IFS_ERROR_DEFAULT                      0x00000000UL                    /**< Mode DEFAULT for LDMA_IFS */
#define LDMA_IFS_ERROR_DEFAULT                       (_LDMA_IFS_ERROR_DEFAULT << 31) /**< Shifted mode DEFAULT for LDMA_IFS */

/* Bit fields for LDMA IFC */
#define _LDMA_IFC_RESETVALUE                         0x00000000UL                    /**< Default value for LDMA_IFC */
#define _LDMA_IFC_MASK                               0x800000FFUL                    /**< Mask for LDMA_IFC */
#define _LDMA_IFC_DONE_SHIFT                         0                               /**< Shift value for LDMA_DONE */
#define _LDMA_IFC_DONE_MASK                          0xFFUL                          /**< Bit mask for LDMA_DONE */
#define _LDMA_IFC_DONE_DEFAULT                       0x00000000UL                    /**< Mode DEFAULT for LDMA_IFC */
#define LDMA_IFC_DONE_DEFAULT                        (_LDMA_IFC_DONE_DEFAULT << 0)   /**< Shifted mode DEFAULT for LDMA_IFC */
#define LDMA_IFC_ERROR                               (0x1UL << 31)                   /**< Clear ERROR Interrupt Flag */
#define _LDMA_IFC_ERROR_SHIFT                        31                              /**< Shift value for LDMA_ERROR */
#define _LDMA_IFC_ERROR_MASK                         0x80000000UL                    /**< Bit mask for LDMA_ERROR */
#define _LDMA_IFC_ERROR_DEFAULT                      0x00000000UL                    /**< Mode DEFAULT for LDMA_IFC */
#define LDMA_IFC_ERROR_DEFAULT                       (_LDMA_IFC_ERROR_DEFAULT << 31) /**< Shifted mode DEFAULT for LDMA_IFC */

/* Bit fields for LDMA IEN */
#define _LDMA_IEN_RESETVALUE                         0x00000000UL                    /**< Default value for LDMA_IEN */
#define _LDMA_IEN_MASK                               0x800000FFUL                    /**< Mask for LDMA_IEN */
#define _LDMA_IEN_DONE_SHIFT                         0                               /**< Shift value for LDMA_DONE */
#define _LDMA_IEN_DONE_MASK                          0xFFUL                          /**< Bit mask for LDMA_DONE */
#define _LDMA_IEN_DONE_DEFAULT                       0x00000000UL                    /**< Mode DEFAULT for LDMA_IEN */
#define LDMA_IEN_DONE_DEFAULT                        (_LDMA_IEN_DONE_DEFAULT << 0)   /**< Shifted mode DEFAULT for LDMA_IEN */
#define LDMA_IEN_ERROR                               (0x1UL << 31)                   /**< ERROR Interrupt Enable */
#define _LDMA_IEN_ERROR_SHIFT                        31                              /**< Shift value for LDMA_ERROR */
#define _LDMA_IEN_ERROR_MASK                         0x80000000UL                    /**< Bit mask for LDMA_ERROR */
#define _LDMA_IEN_ERROR_DEFAULT                      0x00000000UL                    /**< Mode DEFAULT for LDMA_IEN */
#define LDMA_IEN_ERROR_DEFAULT                       (_LDMA_IEN_ERROR_DEFAULT << 31) /**< Shifted mode DEFAULT for LDMA_IEN */

/* Bit fields for LDMA CH_REQSEL */
#define _LDMA_CH_REQSEL_RESETVALUE                   0x00000000UL                                     /**< Default value for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_MASK                         0x003F000FUL                                     /**< Mask for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_SHIFT                 0                                                /**< Shift value for LDMA_SIGSEL */
#define _LDMA_CH_REQSEL_SIGSEL_MASK                  0xFUL                                            /**< Bit mask for LDMA_SIGSEL */
#define _LDMA_CH_REQSEL_SIGSEL_PRSREQ0               0x00000000UL                                     /**< Mode PRSREQ0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE            0x00000000UL                                     /**< Mode ADC0SINGLE for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV         0x00000000UL                                     /**< Mode USART0RXDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV         0x00000000UL                                     /**< Mode USART1RXDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART2RXDATAV         0x00000000UL                                     /**< Mode USART2RXDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV        0x00000000UL                                     /**< Mode LEUART0RXDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV           0x00000000UL                                     /**< Mode I2C0RXDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_I2C1RXDATAV           0x00000000UL                                     /**< Mode I2C1RXDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF            0x00000000UL                                     /**< Mode TIMER0UFOF for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF            0x00000000UL                                     /**< Mode TIMER1UFOF for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_WTIMER0UFOF           0x00000000UL                                     /**< Mode WTIMER0UFOF for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_MSCWDATA              0x00000000UL                                     /**< Mode MSCWDATA for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0WR        0x00000000UL                                     /**< Mode CRYPTO0DATA0WR for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0WR         _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0WR            /**< Alias for mode CRYPTO0DATA0WR */
#define _LDMA_CH_REQSEL_SIGSEL_LESENSEBUFDATAV       0x00000000UL                                     /**< Mode LESENSEBUFDATAV for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0WR        0x00000000UL                                     /**< Mode CRYPTO1DATA0WR for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_PRSREQ1               0x00000001UL                                     /**< Mode PRSREQ1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_ADC0SCAN              0x00000001UL                                     /**< Mode ADC0SCAN for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART0TXBL            0x00000001UL                                     /**< Mode USART0TXBL for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART1TXBL            0x00000001UL                                     /**< Mode USART1TXBL for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART2TXBL            0x00000001UL                                     /**< Mode USART2TXBL for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL           0x00000001UL                                     /**< Mode LEUART0TXBL for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_I2C0TXBL              0x00000001UL                                     /**< Mode I2C0TXBL for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_I2C1TXBL              0x00000001UL                                     /**< Mode I2C1TXBL for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER0CC0             0x00000001UL                                     /**< Mode TIMER0CC0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER1CC0             0x00000001UL                                     /**< Mode TIMER1CC0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_WTIMER0CC0            0x00000001UL                                     /**< Mode WTIMER0CC0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0XWR       0x00000001UL                                     /**< Mode CRYPTO0DATA0XWR for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0XWR        _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0XWR           /**< Alias for mode CRYPTO0DATA0XWR */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0XWR       0x00000001UL                                     /**< Mode CRYPTO1DATA0XWR for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY         0x00000002UL                                     /**< Mode USART0TXEMPTY for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY         0x00000002UL                                     /**< Mode USART1TXEMPTY for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART2TXEMPTY         0x00000002UL                                     /**< Mode USART2TXEMPTY for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY        0x00000002UL                                     /**< Mode LEUART0TXEMPTY for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER0CC1             0x00000002UL                                     /**< Mode TIMER0CC1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER1CC1             0x00000002UL                                     /**< Mode TIMER1CC1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_WTIMER0CC1            0x00000002UL                                     /**< Mode WTIMER0CC1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0RD        0x00000002UL                                     /**< Mode CRYPTO0DATA0RD for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTODATA0RD         _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0RD            /**< Alias for mode CRYPTO0DATA0RD */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0RD        0x00000002UL                                     /**< Mode CRYPTO1DATA0RD for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT    0x00000003UL                                     /**< Mode USART1RXDATAVRIGHT for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER0CC2             0x00000003UL                                     /**< Mode TIMER0CC2 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER1CC2             0x00000003UL                                     /**< Mode TIMER1CC2 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_WTIMER0CC2            0x00000003UL                                     /**< Mode WTIMER0CC2 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1WR        0x00000003UL                                     /**< Mode CRYPTO0DATA1WR for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1WR         _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1WR            /**< Alias for mode CRYPTO0DATA1WR */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1WR        0x00000003UL                                     /**< Mode CRYPTO1DATA1WR for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT       0x00000004UL                                     /**< Mode USART1TXBLRIGHT for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_TIMER1CC3             0x00000004UL                                     /**< Mode TIMER1CC3 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1RD        0x00000004UL                                     /**< Mode CRYPTO0DATA1RD for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTODATA1RD         _LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1RD            /**< Alias for mode CRYPTO0DATA1RD */
#define _LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1RD        0x00000004UL                                     /**< Mode CRYPTO1DATA1RD for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_PRSREQ0                (_LDMA_CH_REQSEL_SIGSEL_PRSREQ0 << 0)            /**< Shifted mode PRSREQ0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE             (_LDMA_CH_REQSEL_SIGSEL_ADC0SINGLE << 0)         /**< Shifted mode ADC0SINGLE for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV          (_LDMA_CH_REQSEL_SIGSEL_USART0RXDATAV << 0)      /**< Shifted mode USART0RXDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV          (_LDMA_CH_REQSEL_SIGSEL_USART1RXDATAV << 0)      /**< Shifted mode USART1RXDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART2RXDATAV          (_LDMA_CH_REQSEL_SIGSEL_USART2RXDATAV << 0)      /**< Shifted mode USART2RXDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV         (_LDMA_CH_REQSEL_SIGSEL_LEUART0RXDATAV << 0)     /**< Shifted mode LEUART0RXDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV            (_LDMA_CH_REQSEL_SIGSEL_I2C0RXDATAV << 0)        /**< Shifted mode I2C0RXDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_I2C1RXDATAV            (_LDMA_CH_REQSEL_SIGSEL_I2C1RXDATAV << 0)        /**< Shifted mode I2C1RXDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF             (_LDMA_CH_REQSEL_SIGSEL_TIMER0UFOF << 0)         /**< Shifted mode TIMER0UFOF for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF             (_LDMA_CH_REQSEL_SIGSEL_TIMER1UFOF << 0)         /**< Shifted mode TIMER1UFOF for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_WTIMER0UFOF            (_LDMA_CH_REQSEL_SIGSEL_WTIMER0UFOF << 0)        /**< Shifted mode WTIMER0UFOF for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_MSCWDATA               (_LDMA_CH_REQSEL_SIGSEL_MSCWDATA << 0)           /**< Shifted mode MSCWDATA for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0WR         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0WR << 0)     /**< Shifted mode CRYPTO0DATA0WR for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_LESENSEBUFDATAV        (_LDMA_CH_REQSEL_SIGSEL_LESENSEBUFDATAV << 0)    /**< Shifted mode LESENSEBUFDATAV for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0WR         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0WR << 0)     /**< Shifted mode CRYPTO1DATA0WR for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_PRSREQ1                (_LDMA_CH_REQSEL_SIGSEL_PRSREQ1 << 0)            /**< Shifted mode PRSREQ1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_ADC0SCAN               (_LDMA_CH_REQSEL_SIGSEL_ADC0SCAN << 0)           /**< Shifted mode ADC0SCAN for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART0TXBL             (_LDMA_CH_REQSEL_SIGSEL_USART0TXBL << 0)         /**< Shifted mode USART0TXBL for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART1TXBL             (_LDMA_CH_REQSEL_SIGSEL_USART1TXBL << 0)         /**< Shifted mode USART1TXBL for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART2TXBL             (_LDMA_CH_REQSEL_SIGSEL_USART2TXBL << 0)         /**< Shifted mode USART2TXBL for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL            (_LDMA_CH_REQSEL_SIGSEL_LEUART0TXBL << 0)        /**< Shifted mode LEUART0TXBL for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_I2C0TXBL               (_LDMA_CH_REQSEL_SIGSEL_I2C0TXBL << 0)           /**< Shifted mode I2C0TXBL for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_I2C1TXBL               (_LDMA_CH_REQSEL_SIGSEL_I2C1TXBL << 0)           /**< Shifted mode I2C1TXBL for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER0CC0              (_LDMA_CH_REQSEL_SIGSEL_TIMER0CC0 << 0)          /**< Shifted mode TIMER0CC0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER1CC0              (_LDMA_CH_REQSEL_SIGSEL_TIMER1CC0 << 0)          /**< Shifted mode TIMER1CC0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_WTIMER0CC0             (_LDMA_CH_REQSEL_SIGSEL_WTIMER0CC0 << 0)         /**< Shifted mode WTIMER0CC0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0XWR        (_LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0XWR << 0)    /**< Shifted mode CRYPTO0DATA0XWR for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0XWR        (_LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0XWR << 0)    /**< Shifted mode CRYPTO1DATA0XWR for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY          (_LDMA_CH_REQSEL_SIGSEL_USART0TXEMPTY << 0)      /**< Shifted mode USART0TXEMPTY for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY          (_LDMA_CH_REQSEL_SIGSEL_USART1TXEMPTY << 0)      /**< Shifted mode USART1TXEMPTY for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART2TXEMPTY          (_LDMA_CH_REQSEL_SIGSEL_USART2TXEMPTY << 0)      /**< Shifted mode USART2TXEMPTY for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY         (_LDMA_CH_REQSEL_SIGSEL_LEUART0TXEMPTY << 0)     /**< Shifted mode LEUART0TXEMPTY for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER0CC1              (_LDMA_CH_REQSEL_SIGSEL_TIMER0CC1 << 0)          /**< Shifted mode TIMER0CC1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER1CC1              (_LDMA_CH_REQSEL_SIGSEL_TIMER1CC1 << 0)          /**< Shifted mode TIMER1CC1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_WTIMER0CC1             (_LDMA_CH_REQSEL_SIGSEL_WTIMER0CC1 << 0)         /**< Shifted mode WTIMER0CC1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0RD         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA0RD << 0)     /**< Shifted mode CRYPTO0DATA0RD for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0RD         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA0RD << 0)     /**< Shifted mode CRYPTO1DATA0RD for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT     (_LDMA_CH_REQSEL_SIGSEL_USART1RXDATAVRIGHT << 0) /**< Shifted mode USART1RXDATAVRIGHT for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER0CC2              (_LDMA_CH_REQSEL_SIGSEL_TIMER0CC2 << 0)          /**< Shifted mode TIMER0CC2 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER1CC2              (_LDMA_CH_REQSEL_SIGSEL_TIMER1CC2 << 0)          /**< Shifted mode TIMER1CC2 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_WTIMER0CC2             (_LDMA_CH_REQSEL_SIGSEL_WTIMER0CC2 << 0)         /**< Shifted mode WTIMER0CC2 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1WR         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1WR << 0)     /**< Shifted mode CRYPTO0DATA1WR for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1WR         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1WR << 0)     /**< Shifted mode CRYPTO1DATA1WR for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT        (_LDMA_CH_REQSEL_SIGSEL_USART1TXBLRIGHT << 0)    /**< Shifted mode USART1TXBLRIGHT for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_TIMER1CC3              (_LDMA_CH_REQSEL_SIGSEL_TIMER1CC3 << 0)          /**< Shifted mode TIMER1CC3 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1RD         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO0DATA1RD << 0)     /**< Shifted mode CRYPTO0DATA1RD for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1RD         (_LDMA_CH_REQSEL_SIGSEL_CRYPTO1DATA1RD << 0)     /**< Shifted mode CRYPTO1DATA1RD for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_SHIFT              16                                               /**< Shift value for LDMA_SOURCESEL */
#define _LDMA_CH_REQSEL_SOURCESEL_MASK               0x3F0000UL                                       /**< Bit mask for LDMA_SOURCESEL */
#define _LDMA_CH_REQSEL_SOURCESEL_NONE               0x00000000UL                                     /**< Mode NONE for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_PRS                0x00000001UL                                     /**< Mode PRS for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_ADC0               0x00000008UL                                     /**< Mode ADC0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_USART0             0x0000000CUL                                     /**< Mode USART0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_USART1             0x0000000DUL                                     /**< Mode USART1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_USART2             0x0000000EUL                                     /**< Mode USART2 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_LEUART0            0x00000010UL                                     /**< Mode LEUART0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_I2C0               0x00000014UL                                     /**< Mode I2C0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_I2C1               0x00000015UL                                     /**< Mode I2C1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_TIMER0             0x00000018UL                                     /**< Mode TIMER0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_TIMER1             0x00000019UL                                     /**< Mode TIMER1 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_WTIMER0            0x0000001AUL                                     /**< Mode WTIMER0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_MSC                0x00000030UL                                     /**< Mode MSC for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_CRYPTO0            0x00000031UL                                     /**< Mode CRYPTO0 for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_CRYPTO             _LDMA_CH_REQSEL_SOURCESEL_CRYPTO0                /**< Alias for mode CRYPTO0 */
#define _LDMA_CH_REQSEL_SOURCESEL_LESENSE            0x00000033UL                                     /**< Mode LESENSE for LDMA_CH_REQSEL */
#define _LDMA_CH_REQSEL_SOURCESEL_CRYPTO1            0x00000034UL                                     /**< Mode CRYPTO1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_NONE                (_LDMA_CH_REQSEL_SOURCESEL_NONE << 16)           /**< Shifted mode NONE for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_PRS                 (_LDMA_CH_REQSEL_SOURCESEL_PRS << 16)            /**< Shifted mode PRS for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_ADC0                (_LDMA_CH_REQSEL_SOURCESEL_ADC0 << 16)           /**< Shifted mode ADC0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_USART0              (_LDMA_CH_REQSEL_SOURCESEL_USART0 << 16)         /**< Shifted mode USART0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_USART1              (_LDMA_CH_REQSEL_SOURCESEL_USART1 << 16)         /**< Shifted mode USART1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_USART2              (_LDMA_CH_REQSEL_SOURCESEL_USART2 << 16)         /**< Shifted mode USART2 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_LEUART0             (_LDMA_CH_REQSEL_SOURCESEL_LEUART0 << 16)        /**< Shifted mode LEUART0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_I2C0                (_LDMA_CH_REQSEL_SOURCESEL_I2C0 << 16)           /**< Shifted mode I2C0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_I2C1                (_LDMA_CH_REQSEL_SOURCESEL_I2C1 << 16)           /**< Shifted mode I2C1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_TIMER0              (_LDMA_CH_REQSEL_SOURCESEL_TIMER0 << 16)         /**< Shifted mode TIMER0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_TIMER1              (_LDMA_CH_REQSEL_SOURCESEL_TIMER1 << 16)         /**< Shifted mode TIMER1 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_WTIMER0             (_LDMA_CH_REQSEL_SOURCESEL_WTIMER0 << 16)        /**< Shifted mode WTIMER0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_MSC                 (_LDMA_CH_REQSEL_SOURCESEL_MSC << 16)            /**< Shifted mode MSC for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_CRYPTO0             (_LDMA_CH_REQSEL_SOURCESEL_CRYPTO0 << 16)        /**< Shifted mode CRYPTO0 for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_LESENSE             (_LDMA_CH_REQSEL_SOURCESEL_LESENSE << 16)        /**< Shifted mode LESENSE for LDMA_CH_REQSEL */
#define LDMA_CH_REQSEL_SOURCESEL_CRYPTO1             (_LDMA_CH_REQSEL_SOURCESEL_CRYPTO1 << 16)        /**< Shifted mode CRYPTO1 for LDMA_CH_REQSEL */

/* Bit fields for LDMA CH_CFG */
#define _LDMA_CH_CFG_RESETVALUE                      0x00000000UL                             /**< Default value for LDMA_CH_CFG */
#define _LDMA_CH_CFG_MASK                            0x00330000UL                             /**< Mask for LDMA_CH_CFG */
#define _LDMA_CH_CFG_ARBSLOTS_SHIFT                  16                                       /**< Shift value for LDMA_ARBSLOTS */
#define _LDMA_CH_CFG_ARBSLOTS_MASK                   0x30000UL                                /**< Bit mask for LDMA_ARBSLOTS */
#define _LDMA_CH_CFG_ARBSLOTS_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for LDMA_CH_CFG */
#define _LDMA_CH_CFG_ARBSLOTS_ONE                    0x00000000UL                             /**< Mode ONE for LDMA_CH_CFG */
#define _LDMA_CH_CFG_ARBSLOTS_TWO                    0x00000001UL                             /**< Mode TWO for LDMA_CH_CFG */
#define _LDMA_CH_CFG_ARBSLOTS_FOUR                   0x00000002UL                             /**< Mode FOUR for LDMA_CH_CFG */
#define _LDMA_CH_CFG_ARBSLOTS_EIGHT                  0x00000003UL                             /**< Mode EIGHT for LDMA_CH_CFG */
#define LDMA_CH_CFG_ARBSLOTS_DEFAULT                 (_LDMA_CH_CFG_ARBSLOTS_DEFAULT << 16)    /**< Shifted mode DEFAULT for LDMA_CH_CFG */
#define LDMA_CH_CFG_ARBSLOTS_ONE                     (_LDMA_CH_CFG_ARBSLOTS_ONE << 16)        /**< Shifted mode ONE for LDMA_CH_CFG */
#define LDMA_CH_CFG_ARBSLOTS_TWO                     (_LDMA_CH_CFG_ARBSLOTS_TWO << 16)        /**< Shifted mode TWO for LDMA_CH_CFG */
#define LDMA_CH_CFG_ARBSLOTS_FOUR                    (_LDMA_CH_CFG_ARBSLOTS_FOUR << 16)       /**< Shifted mode FOUR for LDMA_CH_CFG */
#define LDMA_CH_CFG_ARBSLOTS_EIGHT                   (_LDMA_CH_CFG_ARBSLOTS_EIGHT << 16)      /**< Shifted mode EIGHT for LDMA_CH_CFG */
#define LDMA_CH_CFG_SRCINCSIGN                       (0x1UL << 20)                            /**< Source Address Increment Sign */
#define _LDMA_CH_CFG_SRCINCSIGN_SHIFT                20                                       /**< Shift value for LDMA_SRCINCSIGN */
#define _LDMA_CH_CFG_SRCINCSIGN_MASK                 0x100000UL                               /**< Bit mask for LDMA_SRCINCSIGN */
#define _LDMA_CH_CFG_SRCINCSIGN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for LDMA_CH_CFG */
#define _LDMA_CH_CFG_SRCINCSIGN_POSITIVE             0x00000000UL                             /**< Mode POSITIVE for LDMA_CH_CFG */
#define _LDMA_CH_CFG_SRCINCSIGN_NEGATIVE             0x00000001UL                             /**< Mode NEGATIVE for LDMA_CH_CFG */
#define LDMA_CH_CFG_SRCINCSIGN_DEFAULT               (_LDMA_CH_CFG_SRCINCSIGN_DEFAULT << 20)  /**< Shifted mode DEFAULT for LDMA_CH_CFG */
#define LDMA_CH_CFG_SRCINCSIGN_POSITIVE              (_LDMA_CH_CFG_SRCINCSIGN_POSITIVE << 20) /**< Shifted mode POSITIVE for LDMA_CH_CFG */
#define LDMA_CH_CFG_SRCINCSIGN_NEGATIVE              (_LDMA_CH_CFG_SRCINCSIGN_NEGATIVE << 20) /**< Shifted mode NEGATIVE for LDMA_CH_CFG */
#define LDMA_CH_CFG_DSTINCSIGN                       (0x1UL << 21)                            /**< Destination Address Increment Sign */
#define _LDMA_CH_CFG_DSTINCSIGN_SHIFT                21                                       /**< Shift value for LDMA_DSTINCSIGN */
#define _LDMA_CH_CFG_DSTINCSIGN_MASK                 0x200000UL                               /**< Bit mask for LDMA_DSTINCSIGN */
#define _LDMA_CH_CFG_DSTINCSIGN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for LDMA_CH_CFG */
#define _LDMA_CH_CFG_DSTINCSIGN_POSITIVE             0x00000000UL                             /**< Mode POSITIVE for LDMA_CH_CFG */
#define _LDMA_CH_CFG_DSTINCSIGN_NEGATIVE             0x00000001UL                             /**< Mode NEGATIVE for LDMA_CH_CFG */
#define LDMA_CH_CFG_DSTINCSIGN_DEFAULT               (_LDMA_CH_CFG_DSTINCSIGN_DEFAULT << 21)  /**< Shifted mode DEFAULT for LDMA_CH_CFG */
#define LDMA_CH_CFG_DSTINCSIGN_POSITIVE              (_LDMA_CH_CFG_DSTINCSIGN_POSITIVE << 21) /**< Shifted mode POSITIVE for LDMA_CH_CFG */
#define LDMA_CH_CFG_DSTINCSIGN_NEGATIVE              (_LDMA_CH_CFG_DSTINCSIGN_NEGATIVE << 21) /**< Shifted mode NEGATIVE for LDMA_CH_CFG */

/* Bit fields for LDMA CH_LOOP */
#define _LDMA_CH_LOOP_RESETVALUE                     0x00000000UL                         /**< Default value for LDMA_CH_LOOP */
#define _LDMA_CH_LOOP_MASK                           0x000000FFUL                         /**< Mask for LDMA_CH_LOOP */
#define _LDMA_CH_LOOP_LOOPCNT_SHIFT                  0                                    /**< Shift value for LDMA_LOOPCNT */
#define _LDMA_CH_LOOP_LOOPCNT_MASK                   0xFFUL                               /**< Bit mask for LDMA_LOOPCNT */
#define _LDMA_CH_LOOP_LOOPCNT_DEFAULT                0x00000000UL                         /**< Mode DEFAULT for LDMA_CH_LOOP */
#define LDMA_CH_LOOP_LOOPCNT_DEFAULT                 (_LDMA_CH_LOOP_LOOPCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CH_LOOP */

/* Bit fields for LDMA CH_CTRL */
#define _LDMA_CH_CTRL_RESETVALUE                     0x00000000UL                                /**< Default value for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_MASK                           0xFFFFFFFBUL                                /**< Mask for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_STRUCTTYPE_SHIFT               0                                           /**< Shift value for LDMA_STRUCTTYPE */
#define _LDMA_CH_CTRL_STRUCTTYPE_MASK                0x3UL                                       /**< Bit mask for LDMA_STRUCTTYPE */
#define _LDMA_CH_CTRL_STRUCTTYPE_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_STRUCTTYPE_TRANSFER            0x00000000UL                                /**< Mode TRANSFER for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE         0x00000001UL                                /**< Mode SYNCHRONIZE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_STRUCTTYPE_WRITE               0x00000002UL                                /**< Mode WRITE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_STRUCTTYPE_DEFAULT              (_LDMA_CH_CTRL_STRUCTTYPE_DEFAULT << 0)     /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_STRUCTTYPE_TRANSFER             (_LDMA_CH_CTRL_STRUCTTYPE_TRANSFER << 0)    /**< Shifted mode TRANSFER for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE          (_LDMA_CH_CTRL_STRUCTTYPE_SYNCHRONIZE << 0) /**< Shifted mode SYNCHRONIZE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_STRUCTTYPE_WRITE                (_LDMA_CH_CTRL_STRUCTTYPE_WRITE << 0)       /**< Shifted mode WRITE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_STRUCTREQ                       (0x1UL << 3)                                /**< Structure DMA Transfer Request */
#define _LDMA_CH_CTRL_STRUCTREQ_SHIFT                3                                           /**< Shift value for LDMA_STRUCTREQ */
#define _LDMA_CH_CTRL_STRUCTREQ_MASK                 0x8UL                                       /**< Bit mask for LDMA_STRUCTREQ */
#define _LDMA_CH_CTRL_STRUCTREQ_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_STRUCTREQ_DEFAULT               (_LDMA_CH_CTRL_STRUCTREQ_DEFAULT << 3)      /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_XFERCNT_SHIFT                  4                                           /**< Shift value for LDMA_XFERCNT */
#define _LDMA_CH_CTRL_XFERCNT_MASK                   0x7FF0UL                                    /**< Bit mask for LDMA_XFERCNT */
#define _LDMA_CH_CTRL_XFERCNT_DEFAULT                0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_XFERCNT_DEFAULT                 (_LDMA_CH_CTRL_XFERCNT_DEFAULT << 4)        /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BYTESWAP                        (0x1UL << 15)                               /**< Endian Byte Swap */
#define _LDMA_CH_CTRL_BYTESWAP_SHIFT                 15                                          /**< Shift value for LDMA_BYTESWAP */
#define _LDMA_CH_CTRL_BYTESWAP_MASK                  0x8000UL                                    /**< Bit mask for LDMA_BYTESWAP */
#define _LDMA_CH_CTRL_BYTESWAP_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BYTESWAP_DEFAULT                (_LDMA_CH_CTRL_BYTESWAP_DEFAULT << 15)      /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_SHIFT                16                                          /**< Shift value for LDMA_BLOCKSIZE */
#define _LDMA_CH_CTRL_BLOCKSIZE_MASK                 0xF0000UL                                   /**< Bit mask for LDMA_BLOCKSIZE */
#define _LDMA_CH_CTRL_BLOCKSIZE_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT1                0x00000000UL                                /**< Mode UNIT1 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT2                0x00000001UL                                /**< Mode UNIT2 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT3                0x00000002UL                                /**< Mode UNIT3 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT4                0x00000003UL                                /**< Mode UNIT4 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT6                0x00000004UL                                /**< Mode UNIT6 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT8                0x00000005UL                                /**< Mode UNIT8 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT16               0x00000007UL                                /**< Mode UNIT16 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT32               0x00000009UL                                /**< Mode UNIT32 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT64               0x0000000AUL                                /**< Mode UNIT64 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT128              0x0000000BUL                                /**< Mode UNIT128 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT256              0x0000000CUL                                /**< Mode UNIT256 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT512              0x0000000DUL                                /**< Mode UNIT512 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_UNIT1024             0x0000000EUL                                /**< Mode UNIT1024 for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_BLOCKSIZE_ALL                  0x0000000FUL                                /**< Mode ALL for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_DEFAULT               (_LDMA_CH_CTRL_BLOCKSIZE_DEFAULT << 16)     /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT1                 (_LDMA_CH_CTRL_BLOCKSIZE_UNIT1 << 16)       /**< Shifted mode UNIT1 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT2                 (_LDMA_CH_CTRL_BLOCKSIZE_UNIT2 << 16)       /**< Shifted mode UNIT2 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT3                 (_LDMA_CH_CTRL_BLOCKSIZE_UNIT3 << 16)       /**< Shifted mode UNIT3 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT4                 (_LDMA_CH_CTRL_BLOCKSIZE_UNIT4 << 16)       /**< Shifted mode UNIT4 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT6                 (_LDMA_CH_CTRL_BLOCKSIZE_UNIT6 << 16)       /**< Shifted mode UNIT6 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT8                 (_LDMA_CH_CTRL_BLOCKSIZE_UNIT8 << 16)       /**< Shifted mode UNIT8 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT16                (_LDMA_CH_CTRL_BLOCKSIZE_UNIT16 << 16)      /**< Shifted mode UNIT16 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT32                (_LDMA_CH_CTRL_BLOCKSIZE_UNIT32 << 16)      /**< Shifted mode UNIT32 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT64                (_LDMA_CH_CTRL_BLOCKSIZE_UNIT64 << 16)      /**< Shifted mode UNIT64 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT128               (_LDMA_CH_CTRL_BLOCKSIZE_UNIT128 << 16)     /**< Shifted mode UNIT128 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT256               (_LDMA_CH_CTRL_BLOCKSIZE_UNIT256 << 16)     /**< Shifted mode UNIT256 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT512               (_LDMA_CH_CTRL_BLOCKSIZE_UNIT512 << 16)     /**< Shifted mode UNIT512 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_UNIT1024              (_LDMA_CH_CTRL_BLOCKSIZE_UNIT1024 << 16)    /**< Shifted mode UNIT1024 for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_BLOCKSIZE_ALL                   (_LDMA_CH_CTRL_BLOCKSIZE_ALL << 16)         /**< Shifted mode ALL for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DONEIFSEN                       (0x1UL << 20)                               /**< DMA Operation Done Interrupt Flag Set Enable */
#define _LDMA_CH_CTRL_DONEIFSEN_SHIFT                20                                          /**< Shift value for LDMA_DONEIFSEN */
#define _LDMA_CH_CTRL_DONEIFSEN_MASK                 0x100000UL                                  /**< Bit mask for LDMA_DONEIFSEN */
#define _LDMA_CH_CTRL_DONEIFSEN_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DONEIFSEN_DEFAULT               (_LDMA_CH_CTRL_DONEIFSEN_DEFAULT << 20)     /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_REQMODE                         (0x1UL << 21)                               /**< DMA Request Transfer Mode Select */
#define _LDMA_CH_CTRL_REQMODE_SHIFT                  21                                          /**< Shift value for LDMA_REQMODE */
#define _LDMA_CH_CTRL_REQMODE_MASK                   0x200000UL                                  /**< Bit mask for LDMA_REQMODE */
#define _LDMA_CH_CTRL_REQMODE_DEFAULT                0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_REQMODE_BLOCK                  0x00000000UL                                /**< Mode BLOCK for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_REQMODE_ALL                    0x00000001UL                                /**< Mode ALL for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_REQMODE_DEFAULT                 (_LDMA_CH_CTRL_REQMODE_DEFAULT << 21)       /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_REQMODE_BLOCK                   (_LDMA_CH_CTRL_REQMODE_BLOCK << 21)         /**< Shifted mode BLOCK for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_REQMODE_ALL                     (_LDMA_CH_CTRL_REQMODE_ALL << 21)           /**< Shifted mode ALL for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DECLOOPCNT                      (0x1UL << 22)                               /**< Decrement Loop Count */
#define _LDMA_CH_CTRL_DECLOOPCNT_SHIFT               22                                          /**< Shift value for LDMA_DECLOOPCNT */
#define _LDMA_CH_CTRL_DECLOOPCNT_MASK                0x400000UL                                  /**< Bit mask for LDMA_DECLOOPCNT */
#define _LDMA_CH_CTRL_DECLOOPCNT_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DECLOOPCNT_DEFAULT              (_LDMA_CH_CTRL_DECLOOPCNT_DEFAULT << 22)    /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_IGNORESREQ                      (0x1UL << 23)                               /**< Ignore Sreq */
#define _LDMA_CH_CTRL_IGNORESREQ_SHIFT               23                                          /**< Shift value for LDMA_IGNORESREQ */
#define _LDMA_CH_CTRL_IGNORESREQ_MASK                0x800000UL                                  /**< Bit mask for LDMA_IGNORESREQ */
#define _LDMA_CH_CTRL_IGNORESREQ_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_IGNORESREQ_DEFAULT              (_LDMA_CH_CTRL_IGNORESREQ_DEFAULT << 23)    /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCINC_SHIFT                   24                                          /**< Shift value for LDMA_SRCINC */
#define _LDMA_CH_CTRL_SRCINC_MASK                    0x3000000UL                                 /**< Bit mask for LDMA_SRCINC */
#define _LDMA_CH_CTRL_SRCINC_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCINC_ONE                     0x00000000UL                                /**< Mode ONE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCINC_TWO                     0x00000001UL                                /**< Mode TWO for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCINC_FOUR                    0x00000002UL                                /**< Mode FOUR for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCINC_NONE                    0x00000003UL                                /**< Mode NONE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCINC_DEFAULT                  (_LDMA_CH_CTRL_SRCINC_DEFAULT << 24)        /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCINC_ONE                      (_LDMA_CH_CTRL_SRCINC_ONE << 24)            /**< Shifted mode ONE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCINC_TWO                      (_LDMA_CH_CTRL_SRCINC_TWO << 24)            /**< Shifted mode TWO for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCINC_FOUR                     (_LDMA_CH_CTRL_SRCINC_FOUR << 24)           /**< Shifted mode FOUR for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCINC_NONE                     (_LDMA_CH_CTRL_SRCINC_NONE << 24)           /**< Shifted mode NONE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SIZE_SHIFT                     26                                          /**< Shift value for LDMA_SIZE */
#define _LDMA_CH_CTRL_SIZE_MASK                      0xC000000UL                                 /**< Bit mask for LDMA_SIZE */
#define _LDMA_CH_CTRL_SIZE_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SIZE_BYTE                      0x00000000UL                                /**< Mode BYTE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SIZE_HALFWORD                  0x00000001UL                                /**< Mode HALFWORD for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SIZE_WORD                      0x00000002UL                                /**< Mode WORD for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SIZE_DEFAULT                    (_LDMA_CH_CTRL_SIZE_DEFAULT << 26)          /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SIZE_BYTE                       (_LDMA_CH_CTRL_SIZE_BYTE << 26)             /**< Shifted mode BYTE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SIZE_HALFWORD                   (_LDMA_CH_CTRL_SIZE_HALFWORD << 26)         /**< Shifted mode HALFWORD for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SIZE_WORD                       (_LDMA_CH_CTRL_SIZE_WORD << 26)             /**< Shifted mode WORD for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTINC_SHIFT                   28                                          /**< Shift value for LDMA_DSTINC */
#define _LDMA_CH_CTRL_DSTINC_MASK                    0x30000000UL                                /**< Bit mask for LDMA_DSTINC */
#define _LDMA_CH_CTRL_DSTINC_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTINC_ONE                     0x00000000UL                                /**< Mode ONE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTINC_TWO                     0x00000001UL                                /**< Mode TWO for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTINC_FOUR                    0x00000002UL                                /**< Mode FOUR for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTINC_NONE                    0x00000003UL                                /**< Mode NONE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTINC_DEFAULT                  (_LDMA_CH_CTRL_DSTINC_DEFAULT << 28)        /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTINC_ONE                      (_LDMA_CH_CTRL_DSTINC_ONE << 28)            /**< Shifted mode ONE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTINC_TWO                      (_LDMA_CH_CTRL_DSTINC_TWO << 28)            /**< Shifted mode TWO for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTINC_FOUR                     (_LDMA_CH_CTRL_DSTINC_FOUR << 28)           /**< Shifted mode FOUR for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTINC_NONE                     (_LDMA_CH_CTRL_DSTINC_NONE << 28)           /**< Shifted mode NONE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCMODE                         (0x1UL << 30)                               /**< Source Addressing Mode */
#define _LDMA_CH_CTRL_SRCMODE_SHIFT                  30                                          /**< Shift value for LDMA_SRCMODE */
#define _LDMA_CH_CTRL_SRCMODE_MASK                   0x40000000UL                                /**< Bit mask for LDMA_SRCMODE */
#define _LDMA_CH_CTRL_SRCMODE_DEFAULT                0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCMODE_ABSOLUTE               0x00000000UL                                /**< Mode ABSOLUTE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_SRCMODE_RELATIVE               0x00000001UL                                /**< Mode RELATIVE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCMODE_DEFAULT                 (_LDMA_CH_CTRL_SRCMODE_DEFAULT << 30)       /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCMODE_ABSOLUTE                (_LDMA_CH_CTRL_SRCMODE_ABSOLUTE << 30)      /**< Shifted mode ABSOLUTE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_SRCMODE_RELATIVE                (_LDMA_CH_CTRL_SRCMODE_RELATIVE << 30)      /**< Shifted mode RELATIVE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTMODE                         (0x1UL << 31)                               /**< Destination Addressing Mode */
#define _LDMA_CH_CTRL_DSTMODE_SHIFT                  31                                          /**< Shift value for LDMA_DSTMODE */
#define _LDMA_CH_CTRL_DSTMODE_MASK                   0x80000000UL                                /**< Bit mask for LDMA_DSTMODE */
#define _LDMA_CH_CTRL_DSTMODE_DEFAULT                0x00000000UL                                /**< Mode DEFAULT for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTMODE_ABSOLUTE               0x00000000UL                                /**< Mode ABSOLUTE for LDMA_CH_CTRL */
#define _LDMA_CH_CTRL_DSTMODE_RELATIVE               0x00000001UL                                /**< Mode RELATIVE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTMODE_DEFAULT                 (_LDMA_CH_CTRL_DSTMODE_DEFAULT << 31)       /**< Shifted mode DEFAULT for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTMODE_ABSOLUTE                (_LDMA_CH_CTRL_DSTMODE_ABSOLUTE << 31)      /**< Shifted mode ABSOLUTE for LDMA_CH_CTRL */
#define LDMA_CH_CTRL_DSTMODE_RELATIVE                (_LDMA_CH_CTRL_DSTMODE_RELATIVE << 31)      /**< Shifted mode RELATIVE for LDMA_CH_CTRL */

/* Bit fields for LDMA CH_SRC */
#define _LDMA_CH_SRC_RESETVALUE                      0x00000000UL                        /**< Default value for LDMA_CH_SRC */
#define _LDMA_CH_SRC_MASK                            0xFFFFFFFFUL                        /**< Mask for LDMA_CH_SRC */
#define _LDMA_CH_SRC_SRCADDR_SHIFT                   0                                   /**< Shift value for LDMA_SRCADDR */
#define _LDMA_CH_SRC_SRCADDR_MASK                    0xFFFFFFFFUL                        /**< Bit mask for LDMA_SRCADDR */
#define _LDMA_CH_SRC_SRCADDR_DEFAULT                 0x00000000UL                        /**< Mode DEFAULT for LDMA_CH_SRC */
#define LDMA_CH_SRC_SRCADDR_DEFAULT                  (_LDMA_CH_SRC_SRCADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CH_SRC */

/* Bit fields for LDMA CH_DST */
#define _LDMA_CH_DST_RESETVALUE                      0x00000000UL                        /**< Default value for LDMA_CH_DST */
#define _LDMA_CH_DST_MASK                            0xFFFFFFFFUL                        /**< Mask for LDMA_CH_DST */
#define _LDMA_CH_DST_DSTADDR_SHIFT                   0                                   /**< Shift value for LDMA_DSTADDR */
#define _LDMA_CH_DST_DSTADDR_MASK                    0xFFFFFFFFUL                        /**< Bit mask for LDMA_DSTADDR */
#define _LDMA_CH_DST_DSTADDR_DEFAULT                 0x00000000UL                        /**< Mode DEFAULT for LDMA_CH_DST */
#define LDMA_CH_DST_DSTADDR_DEFAULT                  (_LDMA_CH_DST_DSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for LDMA_CH_DST */

/* Bit fields for LDMA CH_LINK */
#define _LDMA_CH_LINK_RESETVALUE                     0x00000000UL                           /**< Default value for LDMA_CH_LINK */
#define _LDMA_CH_LINK_MASK                           0xFFFFFFFFUL                           /**< Mask for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINKMODE                        (0x1UL << 0)                           /**< Link Structure Addressing Mode */
#define _LDMA_CH_LINK_LINKMODE_SHIFT                 0                                      /**< Shift value for LDMA_LINKMODE */
#define _LDMA_CH_LINK_LINKMODE_MASK                  0x1UL                                  /**< Bit mask for LDMA_LINKMODE */
#define _LDMA_CH_LINK_LINKMODE_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for LDMA_CH_LINK */
#define _LDMA_CH_LINK_LINKMODE_ABSOLUTE              0x00000000UL                           /**< Mode ABSOLUTE for LDMA_CH_LINK */
#define _LDMA_CH_LINK_LINKMODE_RELATIVE              0x00000001UL                           /**< Mode RELATIVE for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINKMODE_DEFAULT                (_LDMA_CH_LINK_LINKMODE_DEFAULT << 0)  /**< Shifted mode DEFAULT for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINKMODE_ABSOLUTE               (_LDMA_CH_LINK_LINKMODE_ABSOLUTE << 0) /**< Shifted mode ABSOLUTE for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINKMODE_RELATIVE               (_LDMA_CH_LINK_LINKMODE_RELATIVE << 0) /**< Shifted mode RELATIVE for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINK                            (0x1UL << 1)                           /**< Link Next Structure */
#define _LDMA_CH_LINK_LINK_SHIFT                     1                                      /**< Shift value for LDMA_LINK */
#define _LDMA_CH_LINK_LINK_MASK                      0x2UL                                  /**< Bit mask for LDMA_LINK */
#define _LDMA_CH_LINK_LINK_DEFAULT                   0x00000000UL                           /**< Mode DEFAULT for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINK_DEFAULT                    (_LDMA_CH_LINK_LINK_DEFAULT << 1)      /**< Shifted mode DEFAULT for LDMA_CH_LINK */
#define _LDMA_CH_LINK_LINKADDR_SHIFT                 2                                      /**< Shift value for LDMA_LINKADDR */
#define _LDMA_CH_LINK_LINKADDR_MASK                  0xFFFFFFFCUL                           /**< Bit mask for LDMA_LINKADDR */
#define _LDMA_CH_LINK_LINKADDR_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for LDMA_CH_LINK */
#define LDMA_CH_LINK_LINKADDR_DEFAULT                (_LDMA_CH_LINK_LINKADDR_DEFAULT << 2)  /**< Shifted mode DEFAULT for LDMA_CH_LINK */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_LDMA */

/**************************************************************************//**
 * @addtogroup EFR32MG13P932F512IM48_SMU
 * @{
 * @defgroup EFR32MG13P932F512IM48_SMU_BitFields  SMU Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for SMU IF */
#define _SMU_IF_RESETVALUE                 0x00000000UL                   /**< Default value for SMU_IF */
#define _SMU_IF_MASK                       0x00000001UL                   /**< Mask for SMU_IF */
#define SMU_IF_PPUPRIV                     (0x1UL << 0)                   /**< PPU Privilege Interrupt Flag */
#define _SMU_IF_PPUPRIV_SHIFT              0                              /**< Shift value for SMU_PPUPRIV */
#define _SMU_IF_PPUPRIV_MASK               0x1UL                          /**< Bit mask for SMU_PPUPRIV */
#define _SMU_IF_PPUPRIV_DEFAULT            0x00000000UL                   /**< Mode DEFAULT for SMU_IF */
#define SMU_IF_PPUPRIV_DEFAULT             (_SMU_IF_PPUPRIV_DEFAULT << 0) /**< Shifted mode DEFAULT for SMU_IF */

/* Bit fields for SMU IFS */
#define _SMU_IFS_RESETVALUE                0x00000000UL                    /**< Default value for SMU_IFS */
#define _SMU_IFS_MASK                      0x00000001UL                    /**< Mask for SMU_IFS */
#define SMU_IFS_PPUPRIV                    (0x1UL << 0)                    /**< Set PPUPRIV Interrupt Flag */
#define _SMU_IFS_PPUPRIV_SHIFT             0                               /**< Shift value for SMU_PPUPRIV */
#define _SMU_IFS_PPUPRIV_MASK              0x1UL                           /**< Bit mask for SMU_PPUPRIV */
#define _SMU_IFS_PPUPRIV_DEFAULT           0x00000000UL                    /**< Mode DEFAULT for SMU_IFS */
#define SMU_IFS_PPUPRIV_DEFAULT            (_SMU_IFS_PPUPRIV_DEFAULT << 0) /**< Shifted mode DEFAULT for SMU_IFS */

/* Bit fields for SMU IFC */
#define _SMU_IFC_RESETVALUE                0x00000000UL                    /**< Default value for SMU_IFC */
#define _SMU_IFC_MASK                      0x00000001UL                    /**< Mask for SMU_IFC */
#define SMU_IFC_PPUPRIV                    (0x1UL << 0)                    /**< Clear PPUPRIV Interrupt Flag */
#define _SMU_IFC_PPUPRIV_SHIFT             0                               /**< Shift value for SMU_PPUPRIV */
#define _SMU_IFC_PPUPRIV_MASK              0x1UL                           /**< Bit mask for SMU_PPUPRIV */
#define _SMU_IFC_PPUPRIV_DEFAULT           0x00000000UL                    /**< Mode DEFAULT for SMU_IFC */
#define SMU_IFC_PPUPRIV_DEFAULT            (_SMU_IFC_PPUPRIV_DEFAULT << 0) /**< Shifted mode DEFAULT for SMU_IFC */

/* Bit fields for SMU IEN */
#define _SMU_IEN_RESETVALUE                0x00000000UL                    /**< Default value for SMU_IEN */
#define _SMU_IEN_MASK                      0x00000001UL                    /**< Mask for SMU_IEN */
#define SMU_IEN_PPUPRIV                    (0x1UL << 0)                    /**< PPUPRIV Interrupt Enable */
#define _SMU_IEN_PPUPRIV_SHIFT             0                               /**< Shift value for SMU_PPUPRIV */
#define _SMU_IEN_PPUPRIV_MASK              0x1UL                           /**< Bit mask for SMU_PPUPRIV */
#define _SMU_IEN_PPUPRIV_DEFAULT           0x00000000UL                    /**< Mode DEFAULT for SMU_IEN */
#define SMU_IEN_PPUPRIV_DEFAULT            (_SMU_IEN_PPUPRIV_DEFAULT << 0) /**< Shifted mode DEFAULT for SMU_IEN */

/* Bit fields for SMU PPUCTRL */
#define _SMU_PPUCTRL_RESETVALUE            0x00000000UL                       /**< Default value for SMU_PPUCTRL */
#define _SMU_PPUCTRL_MASK                  0x00000001UL                       /**< Mask for SMU_PPUCTRL */
#define SMU_PPUCTRL_ENABLE                 (0x1UL << 0)                       /**<  */
#define _SMU_PPUCTRL_ENABLE_SHIFT          0                                  /**< Shift value for SMU_ENABLE */
#define _SMU_PPUCTRL_ENABLE_MASK           0x1UL                              /**< Bit mask for SMU_ENABLE */
#define _SMU_PPUCTRL_ENABLE_DEFAULT        0x00000000UL                       /**< Mode DEFAULT for SMU_PPUCTRL */
#define SMU_PPUCTRL_ENABLE_DEFAULT         (_SMU_PPUCTRL_ENABLE_DEFAULT << 0) /**< Shifted mode DEFAULT for SMU_PPUCTRL */

/* Bit fields for SMU PPUPATD0 */
#define _SMU_PPUPATD0_RESETVALUE           0x00000000UL                           /**< Default value for SMU_PPUPATD0 */
#define _SMU_PPUPATD0_MASK                 0x0BEF73A7UL                           /**< Mask for SMU_PPUPATD0 */
#define SMU_PPUPATD0_ACMP0                 (0x1UL << 0)                           /**< Analog Comparator 0 access control bit */
#define _SMU_PPUPATD0_ACMP0_SHIFT          0                                      /**< Shift value for SMU_ACMP0 */
#define _SMU_PPUPATD0_ACMP0_MASK           0x1UL                                  /**< Bit mask for SMU_ACMP0 */
#define _SMU_PPUPATD0_ACMP0_DEFAULT        0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_ACMP0_DEFAULT         (_SMU_PPUPATD0_ACMP0_DEFAULT << 0)     /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_ACMP1                 (0x1UL << 1)                           /**< Analog Comparator 1 access control bit */
#define _SMU_PPUPATD0_ACMP1_SHIFT          1                                      /**< Shift value for SMU_ACMP1 */
#define _SMU_PPUPATD0_ACMP1_MASK           0x2UL                                  /**< Bit mask for SMU_ACMP1 */
#define _SMU_PPUPATD0_ACMP1_DEFAULT        0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_ACMP1_DEFAULT         (_SMU_PPUPATD0_ACMP1_DEFAULT << 1)     /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_ADC0                  (0x1UL << 2)                           /**< Analog to Digital Converter 0 access control bit */
#define _SMU_PPUPATD0_ADC0_SHIFT           2                                      /**< Shift value for SMU_ADC0 */
#define _SMU_PPUPATD0_ADC0_MASK            0x4UL                                  /**< Bit mask for SMU_ADC0 */
#define _SMU_PPUPATD0_ADC0_DEFAULT         0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_ADC0_DEFAULT          (_SMU_PPUPATD0_ADC0_DEFAULT << 2)      /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CMU                   (0x1UL << 5)                           /**< Clock Management Unit access control bit */
#define _SMU_PPUPATD0_CMU_SHIFT            5                                      /**< Shift value for SMU_CMU */
#define _SMU_PPUPATD0_CMU_MASK             0x20UL                                 /**< Bit mask for SMU_CMU */
#define _SMU_PPUPATD0_CMU_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CMU_DEFAULT           (_SMU_PPUPATD0_CMU_DEFAULT << 5)       /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CRYOTIMER             (0x1UL << 7)                           /**< CryoTimer access control bit */
#define _SMU_PPUPATD0_CRYOTIMER_SHIFT      7                                      /**< Shift value for SMU_CRYOTIMER */
#define _SMU_PPUPATD0_CRYOTIMER_MASK       0x80UL                                 /**< Bit mask for SMU_CRYOTIMER */
#define _SMU_PPUPATD0_CRYOTIMER_DEFAULT    0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CRYOTIMER_DEFAULT     (_SMU_PPUPATD0_CRYOTIMER_DEFAULT << 7) /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CRYPTO0               (0x1UL << 8)                           /**< Advanced Encryption Standard Accelerator 0 access control bit */
#define _SMU_PPUPATD0_CRYPTO0_SHIFT        8                                      /**< Shift value for SMU_CRYPTO0 */
#define _SMU_PPUPATD0_CRYPTO0_MASK         0x100UL                                /**< Bit mask for SMU_CRYPTO0 */
#define _SMU_PPUPATD0_CRYPTO0_DEFAULT      0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CRYPTO0_DEFAULT       (_SMU_PPUPATD0_CRYPTO0_DEFAULT << 8)   /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CRYPTO1               (0x1UL << 9)                           /**< Advanced Encryption Standard Accelerator 1 access control bit */
#define _SMU_PPUPATD0_CRYPTO1_SHIFT        9                                      /**< Shift value for SMU_CRYPTO1 */
#define _SMU_PPUPATD0_CRYPTO1_MASK         0x200UL                                /**< Bit mask for SMU_CRYPTO1 */
#define _SMU_PPUPATD0_CRYPTO1_DEFAULT      0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_CRYPTO1_DEFAULT       (_SMU_PPUPATD0_CRYPTO1_DEFAULT << 9)   /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_PRS                   (0x1UL << 12)                          /**< Peripheral Reflex System access control bit */
#define _SMU_PPUPATD0_PRS_SHIFT            12                                     /**< Shift value for SMU_PRS */
#define _SMU_PPUPATD0_PRS_MASK             0x1000UL                               /**< Bit mask for SMU_PRS */
#define _SMU_PPUPATD0_PRS_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_PRS_DEFAULT           (_SMU_PPUPATD0_PRS_DEFAULT << 12)      /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_EMU                   (0x1UL << 13)                          /**< Energy Management Unit access control bit */
#define _SMU_PPUPATD0_EMU_SHIFT            13                                     /**< Shift value for SMU_EMU */
#define _SMU_PPUPATD0_EMU_MASK             0x2000UL                               /**< Bit mask for SMU_EMU */
#define _SMU_PPUPATD0_EMU_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_EMU_DEFAULT           (_SMU_PPUPATD0_EMU_DEFAULT << 13)      /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_FPUEH                 (0x1UL << 14)                          /**< FPU Exception Handler access control bit */
#define _SMU_PPUPATD0_FPUEH_SHIFT          14                                     /**< Shift value for SMU_FPUEH */
#define _SMU_PPUPATD0_FPUEH_MASK           0x4000UL                               /**< Bit mask for SMU_FPUEH */
#define _SMU_PPUPATD0_FPUEH_DEFAULT        0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_FPUEH_DEFAULT         (_SMU_PPUPATD0_FPUEH_DEFAULT << 14)    /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_GPCRC                 (0x1UL << 16)                          /**< General Purpose CRC access control bit */
#define _SMU_PPUPATD0_GPCRC_SHIFT          16                                     /**< Shift value for SMU_GPCRC */
#define _SMU_PPUPATD0_GPCRC_MASK           0x10000UL                              /**< Bit mask for SMU_GPCRC */
#define _SMU_PPUPATD0_GPCRC_DEFAULT        0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_GPCRC_DEFAULT         (_SMU_PPUPATD0_GPCRC_DEFAULT << 16)    /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_GPIO                  (0x1UL << 17)                          /**< General purpose Input/Output access control bit */
#define _SMU_PPUPATD0_GPIO_SHIFT           17                                     /**< Shift value for SMU_GPIO */
#define _SMU_PPUPATD0_GPIO_MASK            0x20000UL                              /**< Bit mask for SMU_GPIO */
#define _SMU_PPUPATD0_GPIO_DEFAULT         0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_GPIO_DEFAULT          (_SMU_PPUPATD0_GPIO_DEFAULT << 17)     /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_I2C0                  (0x1UL << 18)                          /**< I2C 0 access control bit */
#define _SMU_PPUPATD0_I2C0_SHIFT           18                                     /**< Shift value for SMU_I2C0 */
#define _SMU_PPUPATD0_I2C0_MASK            0x40000UL                              /**< Bit mask for SMU_I2C0 */
#define _SMU_PPUPATD0_I2C0_DEFAULT         0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_I2C0_DEFAULT          (_SMU_PPUPATD0_I2C0_DEFAULT << 18)     /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_I2C1                  (0x1UL << 19)                          /**< I2C 1 access control bit */
#define _SMU_PPUPATD0_I2C1_SHIFT           19                                     /**< Shift value for SMU_I2C1 */
#define _SMU_PPUPATD0_I2C1_MASK            0x80000UL                              /**< Bit mask for SMU_I2C1 */
#define _SMU_PPUPATD0_I2C1_DEFAULT         0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_I2C1_DEFAULT          (_SMU_PPUPATD0_I2C1_DEFAULT << 19)     /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_MSC                   (0x1UL << 21)                          /**< Memory System Controller access control bit */
#define _SMU_PPUPATD0_MSC_SHIFT            21                                     /**< Shift value for SMU_MSC */
#define _SMU_PPUPATD0_MSC_MASK             0x200000UL                             /**< Bit mask for SMU_MSC */
#define _SMU_PPUPATD0_MSC_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_MSC_DEFAULT           (_SMU_PPUPATD0_MSC_DEFAULT << 21)      /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LDMA                  (0x1UL << 22)                          /**< Linked Direct Memory Access Controller access control bit */
#define _SMU_PPUPATD0_LDMA_SHIFT           22                                     /**< Shift value for SMU_LDMA */
#define _SMU_PPUPATD0_LDMA_MASK            0x400000UL                             /**< Bit mask for SMU_LDMA */
#define _SMU_PPUPATD0_LDMA_DEFAULT         0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LDMA_DEFAULT          (_SMU_PPUPATD0_LDMA_DEFAULT << 22)     /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LESENSE               (0x1UL << 23)                          /**< Low Energy Sensor Interface access control bit */
#define _SMU_PPUPATD0_LESENSE_SHIFT        23                                     /**< Shift value for SMU_LESENSE */
#define _SMU_PPUPATD0_LESENSE_MASK         0x800000UL                             /**< Bit mask for SMU_LESENSE */
#define _SMU_PPUPATD0_LESENSE_DEFAULT      0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LESENSE_DEFAULT       (_SMU_PPUPATD0_LESENSE_DEFAULT << 23)  /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LETIMER0              (0x1UL << 24)                          /**< Low Energy Timer 0 access control bit */
#define _SMU_PPUPATD0_LETIMER0_SHIFT       24                                     /**< Shift value for SMU_LETIMER0 */
#define _SMU_PPUPATD0_LETIMER0_MASK        0x1000000UL                            /**< Bit mask for SMU_LETIMER0 */
#define _SMU_PPUPATD0_LETIMER0_DEFAULT     0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LETIMER0_DEFAULT      (_SMU_PPUPATD0_LETIMER0_DEFAULT << 24) /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LEUART0               (0x1UL << 25)                          /**< Low Energy UART 0 access control bit */
#define _SMU_PPUPATD0_LEUART0_SHIFT        25                                     /**< Shift value for SMU_LEUART0 */
#define _SMU_PPUPATD0_LEUART0_MASK         0x2000000UL                            /**< Bit mask for SMU_LEUART0 */
#define _SMU_PPUPATD0_LEUART0_DEFAULT      0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_LEUART0_DEFAULT       (_SMU_PPUPATD0_LEUART0_DEFAULT << 25)  /**< Shifted mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_PCNT0                 (0x1UL << 27)                          /**< Pulse Counter 0 access control bit */
#define _SMU_PPUPATD0_PCNT0_SHIFT          27                                     /**< Shift value for SMU_PCNT0 */
#define _SMU_PPUPATD0_PCNT0_MASK           0x8000000UL                            /**< Bit mask for SMU_PCNT0 */
#define _SMU_PPUPATD0_PCNT0_DEFAULT        0x00000000UL                           /**< Mode DEFAULT for SMU_PPUPATD0 */
#define SMU_PPUPATD0_PCNT0_DEFAULT         (_SMU_PPUPATD0_PCNT0_DEFAULT << 27)    /**< Shifted mode DEFAULT for SMU_PPUPATD0 */

/* Bit fields for SMU PPUPATD1 */
#define _SMU_PPUPATD1_RESETVALUE           0x00000000UL                          /**< Default value for SMU_PPUPATD1 */
#define _SMU_PPUPATD1_MASK                 0x00001FF7UL                          /**< Mask for SMU_PPUPATD1 */
#define SMU_PPUPATD1_RMU                   (0x1UL << 0)                          /**< Reset Management Unit access control bit */
#define _SMU_PPUPATD1_RMU_SHIFT            0                                     /**< Shift value for SMU_RMU */
#define _SMU_PPUPATD1_RMU_MASK             0x1UL                                 /**< Bit mask for SMU_RMU */
#define _SMU_PPUPATD1_RMU_DEFAULT          0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_RMU_DEFAULT           (_SMU_PPUPATD1_RMU_DEFAULT << 0)      /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_RTCC                  (0x1UL << 1)                          /**< Real-Time Counter and Calendar access control bit */
#define _SMU_PPUPATD1_RTCC_SHIFT           1                                     /**< Shift value for SMU_RTCC */
#define _SMU_PPUPATD1_RTCC_MASK            0x2UL                                 /**< Bit mask for SMU_RTCC */
#define _SMU_PPUPATD1_RTCC_DEFAULT         0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_RTCC_DEFAULT          (_SMU_PPUPATD1_RTCC_DEFAULT << 1)     /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_SMU                   (0x1UL << 2)                          /**< Security Management Unit access control bit */
#define _SMU_PPUPATD1_SMU_SHIFT            2                                     /**< Shift value for SMU_SMU */
#define _SMU_PPUPATD1_SMU_MASK             0x4UL                                 /**< Bit mask for SMU_SMU */
#define _SMU_PPUPATD1_SMU_DEFAULT          0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_SMU_DEFAULT           (_SMU_PPUPATD1_SMU_DEFAULT << 2)      /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_TIMER0                (0x1UL << 4)                          /**< Timer 0 access control bit */
#define _SMU_PPUPATD1_TIMER0_SHIFT         4                                     /**< Shift value for SMU_TIMER0 */
#define _SMU_PPUPATD1_TIMER0_MASK          0x10UL                                /**< Bit mask for SMU_TIMER0 */
#define _SMU_PPUPATD1_TIMER0_DEFAULT       0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_TIMER0_DEFAULT        (_SMU_PPUPATD1_TIMER0_DEFAULT << 4)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_TIMER1                (0x1UL << 5)                          /**< Timer 1 access control bit */
#define _SMU_PPUPATD1_TIMER1_SHIFT         5                                     /**< Shift value for SMU_TIMER1 */
#define _SMU_PPUPATD1_TIMER1_MASK          0x20UL                                /**< Bit mask for SMU_TIMER1 */
#define _SMU_PPUPATD1_TIMER1_DEFAULT       0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_TIMER1_DEFAULT        (_SMU_PPUPATD1_TIMER1_DEFAULT << 5)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_TRNG0                 (0x1UL << 6)                          /**< True Random Number Generator 0 access control bit */
#define _SMU_PPUPATD1_TRNG0_SHIFT          6                                     /**< Shift value for SMU_TRNG0 */
#define _SMU_PPUPATD1_TRNG0_MASK           0x40UL                                /**< Bit mask for SMU_TRNG0 */
#define _SMU_PPUPATD1_TRNG0_DEFAULT        0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_TRNG0_DEFAULT         (_SMU_PPUPATD1_TRNG0_DEFAULT << 6)    /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_USART0                (0x1UL << 7)                          /**< Universal Synchronous/Asynchronous Receiver/Transmitter 0 access control bit */
#define _SMU_PPUPATD1_USART0_SHIFT         7                                     /**< Shift value for SMU_USART0 */
#define _SMU_PPUPATD1_USART0_MASK          0x80UL                                /**< Bit mask for SMU_USART0 */
#define _SMU_PPUPATD1_USART0_DEFAULT       0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_USART0_DEFAULT        (_SMU_PPUPATD1_USART0_DEFAULT << 7)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_USART1                (0x1UL << 8)                          /**< Universal Synchronous/Asynchronous Receiver/Transmitter 1 access control bit */
#define _SMU_PPUPATD1_USART1_SHIFT         8                                     /**< Shift value for SMU_USART1 */
#define _SMU_PPUPATD1_USART1_MASK          0x100UL                               /**< Bit mask for SMU_USART1 */
#define _SMU_PPUPATD1_USART1_DEFAULT       0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_USART1_DEFAULT        (_SMU_PPUPATD1_USART1_DEFAULT << 8)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_USART2                (0x1UL << 9)                          /**< Universal Synchronous/Asynchronous Receiver/Transmitter 2 access control bit */
#define _SMU_PPUPATD1_USART2_SHIFT         9                                     /**< Shift value for SMU_USART2 */
#define _SMU_PPUPATD1_USART2_MASK          0x200UL                               /**< Bit mask for SMU_USART2 */
#define _SMU_PPUPATD1_USART2_DEFAULT       0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_USART2_DEFAULT        (_SMU_PPUPATD1_USART2_DEFAULT << 9)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_WDOG0                 (0x1UL << 10)                         /**< Watchdog 0 access control bit */
#define _SMU_PPUPATD1_WDOG0_SHIFT          10                                    /**< Shift value for SMU_WDOG0 */
#define _SMU_PPUPATD1_WDOG0_MASK           0x400UL                               /**< Bit mask for SMU_WDOG0 */
#define _SMU_PPUPATD1_WDOG0_DEFAULT        0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_WDOG0_DEFAULT         (_SMU_PPUPATD1_WDOG0_DEFAULT << 10)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_WDOG1                 (0x1UL << 11)                         /**< Watchdog 1 access control bit */
#define _SMU_PPUPATD1_WDOG1_SHIFT          11                                    /**< Shift value for SMU_WDOG1 */
#define _SMU_PPUPATD1_WDOG1_MASK           0x800UL                               /**< Bit mask for SMU_WDOG1 */
#define _SMU_PPUPATD1_WDOG1_DEFAULT        0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_WDOG1_DEFAULT         (_SMU_PPUPATD1_WDOG1_DEFAULT << 11)   /**< Shifted mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_WTIMER0               (0x1UL << 12)                         /**< Wide Timer 0 access control bit */
#define _SMU_PPUPATD1_WTIMER0_SHIFT        12                                    /**< Shift value for SMU_WTIMER0 */
#define _SMU_PPUPATD1_WTIMER0_MASK         0x1000UL                              /**< Bit mask for SMU_WTIMER0 */
#define _SMU_PPUPATD1_WTIMER0_DEFAULT      0x00000000UL                          /**< Mode DEFAULT for SMU_PPUPATD1 */
#define SMU_PPUPATD1_WTIMER0_DEFAULT       (_SMU_PPUPATD1_WTIMER0_DEFAULT << 12) /**< Shifted mode DEFAULT for SMU_PPUPATD1 */

/* Bit fields for SMU PPUFS */
#define _SMU_PPUFS_RESETVALUE              0x00000000UL                         /**< Default value for SMU_PPUFS */
#define _SMU_PPUFS_MASK                    0x0000007FUL                         /**< Mask for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_SHIFT          0                                    /**< Shift value for SMU_PERIPHID */
#define _SMU_PPUFS_PERIPHID_MASK           0x7FUL                               /**< Bit mask for SMU_PERIPHID */
#define _SMU_PPUFS_PERIPHID_DEFAULT        0x00000000UL                         /**< Mode DEFAULT for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_ACMP0          0x00000000UL                         /**< Mode ACMP0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_ACMP1          0x00000001UL                         /**< Mode ACMP1 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_ADC0           0x00000002UL                         /**< Mode ADC0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_CMU            0x00000005UL                         /**< Mode CMU for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_CRYOTIMER      0x00000007UL                         /**< Mode CRYOTIMER for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_CRYPTO0        0x00000008UL                         /**< Mode CRYPTO0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_CRYPTO1        0x00000009UL                         /**< Mode CRYPTO1 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_PRS            0x0000000CUL                         /**< Mode PRS for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_EMU            0x0000000DUL                         /**< Mode EMU for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_FPUEH          0x0000000EUL                         /**< Mode FPUEH for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_GPCRC          0x00000010UL                         /**< Mode GPCRC for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_GPIO           0x00000011UL                         /**< Mode GPIO for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_I2C0           0x00000012UL                         /**< Mode I2C0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_I2C1           0x00000013UL                         /**< Mode I2C1 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_MSC            0x00000015UL                         /**< Mode MSC for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_LDMA           0x00000016UL                         /**< Mode LDMA for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_LESENSE        0x00000017UL                         /**< Mode LESENSE for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_LETIMER0       0x00000018UL                         /**< Mode LETIMER0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_LEUART0        0x00000019UL                         /**< Mode LEUART0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_PCNT0          0x0000001BUL                         /**< Mode PCNT0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_RMU            0x00000020UL                         /**< Mode RMU for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_RTCC           0x00000021UL                         /**< Mode RTCC for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_SMU            0x00000022UL                         /**< Mode SMU for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_TIMER0         0x00000024UL                         /**< Mode TIMER0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_TIMER1         0x00000025UL                         /**< Mode TIMER1 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_TRNG0          0x00000026UL                         /**< Mode TRNG0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_USART0         0x00000027UL                         /**< Mode USART0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_USART1         0x00000028UL                         /**< Mode USART1 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_USART2         0x00000029UL                         /**< Mode USART2 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_WDOG0          0x0000002AUL                         /**< Mode WDOG0 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_WDOG1          0x0000002BUL                         /**< Mode WDOG1 for SMU_PPUFS */
#define _SMU_PPUFS_PERIPHID_WTIMER0        0x0000002CUL                         /**< Mode WTIMER0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_DEFAULT         (_SMU_PPUFS_PERIPHID_DEFAULT << 0)   /**< Shifted mode DEFAULT for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_ACMP0           (_SMU_PPUFS_PERIPHID_ACMP0 << 0)     /**< Shifted mode ACMP0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_ACMP1           (_SMU_PPUFS_PERIPHID_ACMP1 << 0)     /**< Shifted mode ACMP1 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_ADC0            (_SMU_PPUFS_PERIPHID_ADC0 << 0)      /**< Shifted mode ADC0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_CMU             (_SMU_PPUFS_PERIPHID_CMU << 0)       /**< Shifted mode CMU for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_CRYOTIMER       (_SMU_PPUFS_PERIPHID_CRYOTIMER << 0) /**< Shifted mode CRYOTIMER for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_CRYPTO0         (_SMU_PPUFS_PERIPHID_CRYPTO0 << 0)   /**< Shifted mode CRYPTO0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_CRYPTO1         (_SMU_PPUFS_PERIPHID_CRYPTO1 << 0)   /**< Shifted mode CRYPTO1 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_PRS             (_SMU_PPUFS_PERIPHID_PRS << 0)       /**< Shifted mode PRS for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_EMU             (_SMU_PPUFS_PERIPHID_EMU << 0)       /**< Shifted mode EMU for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_FPUEH           (_SMU_PPUFS_PERIPHID_FPUEH << 0)     /**< Shifted mode FPUEH for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_GPCRC           (_SMU_PPUFS_PERIPHID_GPCRC << 0)     /**< Shifted mode GPCRC for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_GPIO            (_SMU_PPUFS_PERIPHID_GPIO << 0)      /**< Shifted mode GPIO for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_I2C0            (_SMU_PPUFS_PERIPHID_I2C0 << 0)      /**< Shifted mode I2C0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_I2C1            (_SMU_PPUFS_PERIPHID_I2C1 << 0)      /**< Shifted mode I2C1 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_MSC             (_SMU_PPUFS_PERIPHID_MSC << 0)       /**< Shifted mode MSC for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_LDMA            (_SMU_PPUFS_PERIPHID_LDMA << 0)      /**< Shifted mode LDMA for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_LESENSE         (_SMU_PPUFS_PERIPHID_LESENSE << 0)   /**< Shifted mode LESENSE for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_LETIMER0        (_SMU_PPUFS_PERIPHID_LETIMER0 << 0)  /**< Shifted mode LETIMER0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_LEUART0         (_SMU_PPUFS_PERIPHID_LEUART0 << 0)   /**< Shifted mode LEUART0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_PCNT0           (_SMU_PPUFS_PERIPHID_PCNT0 << 0)     /**< Shifted mode PCNT0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_RMU             (_SMU_PPUFS_PERIPHID_RMU << 0)       /**< Shifted mode RMU for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_RTCC            (_SMU_PPUFS_PERIPHID_RTCC << 0)      /**< Shifted mode RTCC for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_SMU             (_SMU_PPUFS_PERIPHID_SMU << 0)       /**< Shifted mode SMU for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_TIMER0          (_SMU_PPUFS_PERIPHID_TIMER0 << 0)    /**< Shifted mode TIMER0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_TIMER1          (_SMU_PPUFS_PERIPHID_TIMER1 << 0)    /**< Shifted mode TIMER1 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_TRNG0           (_SMU_PPUFS_PERIPHID_TRNG0 << 0)     /**< Shifted mode TRNG0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_USART0          (_SMU_PPUFS_PERIPHID_USART0 << 0)    /**< Shifted mode USART0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_USART1          (_SMU_PPUFS_PERIPHID_USART1 << 0)    /**< Shifted mode USART1 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_USART2          (_SMU_PPUFS_PERIPHID_USART2 << 0)    /**< Shifted mode USART2 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_WDOG0           (_SMU_PPUFS_PERIPHID_WDOG0 << 0)     /**< Shifted mode WDOG0 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_WDOG1           (_SMU_PPUFS_PERIPHID_WDOG1 << 0)     /**< Shifted mode WDOG1 for SMU_PPUFS */
#define SMU_PPUFS_PERIPHID_WTIMER0         (_SMU_PPUFS_PERIPHID_WTIMER0 << 0)   /**< Shifted mode WTIMER0 for SMU_PPUFS */

/** @} */
/** @} End of group EFR32MG13P932F512IM48_SMU */

/**************************************************************************//**
 * @defgroup EFR32MG13P932F512IM48_UNLOCK Unlock Codes
 * @{
 *****************************************************************************/
#define MSC_UNLOCK_CODE      0x1B71 /**< MSC unlock code */
#define EMU_UNLOCK_CODE      0xADE8 /**< EMU unlock code */
#define RMU_UNLOCK_CODE      0xE084 /**< RMU unlock code */
#define CMU_UNLOCK_CODE      0x580E /**< CMU unlock code */
#define GPIO_UNLOCK_CODE     0xA534 /**< GPIO unlock code */
#define TIMER_UNLOCK_CODE    0xCE80 /**< TIMER unlock code */
#define RTCC_UNLOCK_CODE     0xAEE8 /**< RTCC unlock code */

/** @} End of group EFR32MG13P932F512IM48_UNLOCK */

/** @} End of group EFR32MG13P932F512IM48_BitFields */

#include "efr32mg13p_af_ports.h"
#include "efr32mg13p_af_pins.h"

/** @} End of group EFR32MG13P932F512IM48 */

/** @} End of group Parts */

#ifdef __cplusplus
}
#endif
#endif /* EFR32MG13P932F512IM48_H */
