#pragma once

#ifndef CMSIS_ENHANCEMENT_H_
#define CMSIS_ENHANCEMENT_H_

/**************************************************************************************************/
/*                                                                                                */
/*                                  GPIO enhancement definitions                                  */
/*                                                                                                */
/**************************************************************************************************/

/*! Proper definitions of GPIO CRL input configuration option */
#define GPIO_CRx_CNF_In_Analog                  (0b00)
#define GPIO_CRx_CNF_In_Floating                (0b01)
#define GPIO_CRx_CNF_In_PullUpDown              (0b10)

/*! Proper definitions of GPIO CRL output configuration option */
#define GPIO_CRx_CNF_Out_Digital_PP             (0b00)
#define GPIO_CRx_CNF_Out_Digital_OD             (0b01)
#define GPIO_CRx_CNF_Out_Alternate_PP           (0b10)
#define GPIO_CRx_CNF_Out_Alternate_OD           (0b11)

/*! Proper definitions of GPIO CRL mode option */
#define GPIO_CRx_MODE_In                        (0b00)
#define GPIO_CRx_MODE_Out_10MHz                 (0b01)
#define GPIO_CRx_MODE_Out_2MHz                  (0b10)
#define GPIO_CRx_MODE_Out_50MHz                 (0b11)


/**************************************************************************************************/
/*                                                                                                */
/*                                  ADC enhancement definitions                                   */
/*                                                                                                */
/**************************************************************************************************/

/*! Proper definitions of ADC CR1 dual mode selection */
#define ADC_CR1_DUALMOD_Independent                 (0b0000)
#define ADC_CR1_DUALMOD_Reg_Simul_Inj_Simul         (0b0001)
#define ADC_CR1_DUALMOD_Reg_Simul_Alt_Trigger       (0b0010)
#define ADC_CR1_DUALMOD_Inj_Simul_Fast_Interleaved  (0b0011)
#define ADC_CR1_DUALMOD_Inj_Simul_Slow_Interleaved  (0b0100)
#define ADC_CR1_DUALMOD_Inj_Simul_Only              (0b0101)
#define ADC_CR1_DUALMOD_Reg_Simul_Only              (0b0110)
#define ADC_CR1_DUALMOD_Fast_Interleaved_Only       (0b0111)
#define ADC_CR1_DUALMOD_Slow_Interleaved_Only       (0b1000)
#define ADC_CR1_DUALMOD_Alt_Trigger_Only            (0b1001)


/*! Proper definitions of ADC SMPR sampling time selection options. CC = clock cycles */
#define ADC_SMPR_SMP_2p5_CC                         (0b000U)
#define ADC_SMPR_SMP_6p5_CC                         (0b001U)
#define ADC_SMPR_SMP_12p5_CC                        (0b010U)
#define ADC_SMPR_SMP_24p5_CC                        (0b011U)
#define ADC_SMPR_SMP_47p5_CC                        (0b100U)
#define ADC_SMPR_SMP_92p5_CC                        (0b101U)
#define ADC_SMPR_SMP_247p5_CC                       (0b110U)
#define ADC_SMPR_SMP_640p5_CC                       (0b111U)


/*! Proper definitions of ADC CR2 external event trigger for regular channels options */
#define ADC_CR2_EXTSEL_ADC12_TIM1_CC1               (0b000)
#define ADC_CR2_EXTSEL_ADC12_TIM1_CC2               (0b001)
#define ADC_CR2_EXTSEL_ADC12_TIM1_CC3               (0b010)
#define ADC_CR2_EXTSEL_ADC12_TIM2_CC2               (0b011)
#define ADC_CR2_EXTSEL_ADC12_TIM3_TRGO              (0b100)
#define ADC_CR2_EXTSEL_ADC12_TIM4_CC4               (0b101)
#define ADC_CR2_EXTSEL_ADC12_EXTI11_TIM8_TRGO       (0b110)
#define ADC_CR2_EXTSEL_ADC12_SWSTART                (0b111)

#define ADC_CR2_EXTSEL_ADC3_TIM3_CC1                (0b000)
#define ADC_CR2_EXTSEL_ADC3_TIM2_CC3                (0b001)
#define ADC_CR2_EXTSEL_ADC3_TIM1_CC3                (0b010)
#define ADC_CR2_EXTSEL_ADC3_TIM8_CC1                (0b011)
#define ADC_CR2_EXTSEL_ADC3_TIM8_TRGO               (0b100)
#define ADC_CR2_EXTSEL_ADC3_TIM5_CC1                (0b101)
#define ADC_CR2_EXTSEL_ADC3_TIM5_CC3                (0b110)
#define ADC_CR2_EXTSEL_ADC3_SWSTART                 (0b111)

/*! Proper definitions of ADC CR2 external event trigger for injected channels options */
#define ADC_CR2_JEXTSEL_ADC12_TIM1_TRGO             (0b000)
#define ADC_CR2_JEXTSEL_ADC12_TIM1_CC4              (0b001)
#define ADC_CR2_JEXTSEL_ADC12_TIM2_TRGO             (0b010)
#define ADC_CR2_JEXTSEL_ADC12_TIM2_CC1              (0b011)
#define ADC_CR2_JEXTSEL_ADC12_TIM3_CC4              (0b100)
#define ADC_CR2_JEXTSEL_ADC12_TIM4_TRGO             (0b101)
#define ADC_CR2_JEXTSEL_ADC12_EXTI15_TIM8_CC4       (0b110)
#define ADC_CR2_JEXTSEL_ADC12_JSWSTART              (0b111)

#define ADC_CR2_JEXTSEL_ADC3_TIM1_TRGO             (0b000)
#define ADC_CR2_JEXTSEL_ADC3_TIM1_CC4              (0b001)
#define ADC_CR2_JEXTSEL_ADC3_TIM4_CC3              (0b010)
#define ADC_CR2_JEXTSEL_ADC3_TIM8_CC2              (0b011)
#define ADC_CR2_JEXTSEL_ADC3_TIM8_CC4              (0b100)
#define ADC_CR2_JEXTSEL_ADC3_TIM5_TRGO             (0b101)
#define ADC_CR2_JEXTSEL_ADC3_TIM5_CC4              (0b110)
#define ADC_CR2_JEXTSEL_ADC3_JSWSTART              (0b111)

/*! Proper definitions of ADC SQR L number of conversions selection options */
#define ADC_SQR_L_1_CONVERSION          (0b0000)
#define ADC_SQR_L_2_CONVERSIONS         (0b0001)
#define ADC_SQR_L_3_CONVERSIONS         (0b0010)
#define ADC_SQR_L_4_CONVERSIONS         (0b0011)
#define ADC_SQR_L_5_CONVERSIONS         (0b0100)
#define ADC_SQR_L_6_CONVERSIONS         (0b0101)
#define ADC_SQR_L_7_CONVERSIONS         (0b0110)
#define ADC_SQR_L_8_CONVERSIONS         (0b0111)
#define ADC_SQR_L_9_CONVERSIONS         (0b1000)
#define ADC_SQR_L_10_CONVERSIONS        (0b1001)
#define ADC_SQR_L_11_CONVERSIONS        (0b1010)
#define ADC_SQR_L_12_CONVERSIONS        (0b1011)
#define ADC_SQR_L_13_CONVERSIONS        (0b1100)
#define ADC_SQR_L_14_CONVERSIONS        (0b1101)
#define ADC_SQR_L_15_CONVERSIONS        (0b1110)
#define ADC_SQR_L_16_CONVERSIONS        (0b1111)

/*! Proper definitions of ADC SQR JL number of conversions selection options */
#define ADC_JSQR_JL_1_CONVERSION        (0b00U)
#define ADC_JSQR_JL_2_CONVERSIONS       (0b01U)
#define ADC_JSQR_JL_3_CONVERSIONS       (0b10U)
#define ADC_JSQR_JL_4_CONVERSIONS       (0b11U)

/**************************************************************************************************/
/*                                                                                                */
/*                                  DMA enhancement definitions                                   */
/*                                                                                                */
/**************************************************************************************************/
/*! Proper definitions of DMA CCR memory size option */
#define DMA_CCR_MSIZE_8_BITS                       (0b00U)
#define DMA_CCR_MSIZE_16_BITS                      (0b01U)
#define DMA_CCR_MSIZE_32_BITS                      (0b10U)

/*! Proper definitions of DMA CCR peripheral size option */
#define DMA_CCR_PSIZE_8_BITS                       (0b00U)
#define DMA_CCR_PSIZE_16_BITS                      (0b01U)
#define DMA_CCR_PSIZE_32_BITS                      (0b10U)

/*! Proper definitions of DMA CCR channel priority level option */
#define DMA_CCR_PL_Low                              (0b00U)
#define DMA_CCR_PL_Medium                           (0b00U)
#define DMA_CCR_PL_High                             (0b00U)
#define DMA_CCR_PL_Very_High                        (0b00U)

/**************************************************************************************************/
/*                                                                                                */
/*                                  SPI enhancement definitions                                   */
/*                                                                                                */
/**************************************************************************************************/

/*! Proper definitions of SPI CS2 data size options */
#define SPI_CS2_DS_4_BITS               (0b0011U)
#define SPI_CS2_DS_5_BITS               (0b0100U)
#define SPI_CS2_DS_6_BITS               (0b0101U)
#define SPI_CS2_DS_7_BITS               (0b0110U)
#define SPI_CS2_DS_8_BITS               (0b0111U)
#define SPI_CS2_DS_9_BITS               (0b1000U)
#define SPI_CS2_DS_10_BITS              (0b1001U)
#define SPI_CS2_DS_11_BITS              (0b1010U)
#define SPI_CS2_DS_12_BITS              (0b1011U)
#define SPI_CS2_DS_13_BITS              (0b1100U)
#define SPI_CS2_DS_14_BITS              (0b1101U)
#define SPI_CS2_DS_15_BITS              (0b1110U)
#define SPI_CS2_DS_16_BITS              (0b1111U)


#endif /* CMSIS_ENHANCEMENT_H_ */