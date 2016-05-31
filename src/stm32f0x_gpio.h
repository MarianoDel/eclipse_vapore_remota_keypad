/**
  ******************************************************************************
  * @file    Template_2/main.h
  * @author  Nahuel
  * @version V1.0
  * @date    22-August-2014
  * @brief   Header for gpio module
  ******************************************************************************
  * @attention
  *
  *
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F0X_GPIO_H
#define __STM32F0X_GPIO_H

//#include "stm32f0xx.h"

//--- Exported types ---//
//--- Exported constants ---//
//--- Exported macro ---//
#define GPIOA_ENABLE
#define GPIOB_ENABLE
//#define GPIOF_ENABLE

#define GPIOA_CLK (RCC->AHBENR & 0x00020000)
#define GPIOA_CLK_ON RCC->AHBENR |= 0x00020000
#define GPIOA_CLK_OFF RCC->AHBENR &= ~0x00020000

#define GPIOB_CLK (RCC->AHBENR & 0x00040000)
#define GPIOB_CLK_ON RCC->AHBENR |= 0x00040000
#define GPIOB_CLK_OFF RCC->AHBENR &= ~0x00040000

#define GPIOC_CLK (RCC->AHBENR & 0x00080000)
#define GPIOC_CLK_ON RCC->AHBENR |= 0x00080000
#define GPIOC_CLK_OFF RCC->AHBENR &= ~0x00080000

#define GPIOD_CLK (RCC->AHBENR & 0x00100000)
#define GPIOD_CLK_ON RCC->AHBENR |= 0x00100000
#define GPIOD_CLK_OFF RCC->AHBENR &= ~0x00100000

#define GPIOF_CLK (RCC->AHBENR & 0x00400000)
#define GPIOF_CLK_ON RCC->AHBENR |= 0x00400000
#define GPIOF_CLK_OFF RCC->AHBENR &= ~0x00400000


#define GPIOA_PIN0_IN 	GPIOA->IDR & 0x00000001
#define GPIOA_PIN0_OUT 	GPIOA->ODR & 0x00000001
#define GPIOA_PIN0_ON	GPIOA->BSRR |= 0x00000001
#define GPIOA_PIN0_OFF  GPIOA->BSRR |= 0x00010000

#define GPIOA_PIN1_IN 	GPIOA->IDR & 0x00000002
#define GPIOA_PIN1_OUT 	GPIOA->ODR & 0x00000002
#define GPIOA_PIN1_ON	GPIOA->BSRR |= 0x00000002
#define GPIOA_PIN1_OFF  GPIOA->BSRR |= 0x00020000

#define GPIOA_PIN2_IN 	GPIOA->IDR & 0x00000004
#define GPIOA_PIN2_OUT 	GPIOA->ODR & 0x00000004
#define GPIOA_PIN2_ON	GPIOA->BSRR |= 0x00000004
#define GPIOA_PIN2_OFF  GPIOA->BSRR |= 0x00040000

#define GPIOA_PIN3_IN 	GPIOA->IDR & 0x00000008
#define GPIOA_PIN3_OUT 	GPIOA->ODR & 0x00000008
#define GPIOA_PIN3_ON	GPIOA->BSRR |= 0x00000008
#define GPIOA_PIN3_OFF  GPIOA->BSRR |= 0x00080000

#define GPIOA_PIN4_IN 	GPIOA->IDR & 0x00000010
#define GPIOA_PIN4_OUT 	GPIOA->ODR & 0x00000010
#define GPIOA_PIN4_ON	GPIOA->BSRR |= 0x00000010
#define GPIOA_PIN4_OFF  GPIOA->BSRR |= 0x00100000

#define GPIOA_PIN5_IN 	GPIOA->IDR & 0x00000020
#define GPIOA_PIN5_OUT 	GPIOA->ODR & 0x00000020
#define GPIOA_PIN5_ON	GPIOA->BSRR |= 0x00000020
#define GPIOA_PIN5_OFF  GPIOA->BSRR |= 0x00200000

#define GPIOA_PIN6_IN 	GPIOA->IDR & 0x00000040
#define GPIOA_PIN6_OUT 	GPIOA->ODR & 0x00000040
#define GPIOA_PIN6_ON	GPIOA->BSRR |= 0x00000040
#define GPIOA_PIN6_OFF  GPIOA->BSRR |= 0x00400000

#define GPIOA_PIN7_IN 	GPIOA->IDR & 0x00000080
#define GPIOA_PIN7_OUT 	GPIOA->ODR & 0x00000080
#define GPIOA_PIN7_ON	GPIOA->BSRR |= 0x00000080
#define GPIOA_PIN7_OFF  GPIOA->BSRR |= 0x00800000

#define GPIOA_PIN8_IN 	GPIOA->IDR & 0x00000100
#define GPIOA_PIN8_OUT 	GPIOA->ODR & 0x00000100
#define GPIOA_PIN8_ON	GPIOA->BSRR |= 0x00000100
#define GPIOA_PIN8_OFF  GPIOA->BSRR |= 0x01000000

#define GPIOA_PIN9_IN 	GPIOA->IDR & 0x00000200
#define GPIOA_PIN9_OUT 	GPIOA->ODR & 0x00000200
#define GPIOA_PIN9_ON	GPIOA->BSRR |= 0x00000200
#define GPIOA_PIN9_OFF  GPIOA->BSRR |= 0x02000000

#define GPIOA_PIN10_IN 		GPIOA->IDR & 0x00000400
#define GPIOA_PIN10_OUT 	GPIOA->ODR & 0x00000400
#define GPIOA_PIN10_ON		GPIOA->BSRR |= 0x00000400
#define GPIOA_PIN10_OFF  	GPIOA->BSRR |= 0x04000000

#define GPIOA_PIN11_IN 		GPIOA->IDR & 0x00000800
#define GPIOA_PIN11_OUT 	GPIOA->ODR & 0x00000800
#define GPIOA_PIN11_ON		GPIOA->BSRR |= 0x00000800
#define GPIOA_PIN11_OFF  	GPIOA->BSRR |= 0x08000000

#define GPIOA_PIN12_IN 		GPIOA->IDR & 0x00001000
#define GPIOA_PIN12_OUT 	GPIOA->ODR & 0x00001000
#define GPIOA_PIN12_ON		GPIOA->BSRR |= 0x00001000
#define GPIOA_PIN12_OFF  	GPIOA->BSRR |= 0x10000000

#define GPIOA_PIN13_IN 		GPIOA->IDR & 0x00002000
#define GPIOA_PIN13_OUT 	GPIOA->ODR & 0x00002000
#define GPIOA_PIN13_ON		GPIOA->BSRR |= 0x00002000
#define GPIOA_PIN13_OFF  	GPIOA->BSRR |= 0x20000000

#define GPIOA_PIN14_IN 		GPIOA->IDR & 0x00004000
#define GPIOA_PIN14_OUT 	GPIOA->ODR & 0x00004000
#define GPIOA_PIN14_ON		GPIOA->BSRR |= 0x00004000
#define GPIOA_PIN14_OFF  	GPIOA->BSRR |= 0x40000000

#define GPIOA_PIN15_IN 		GPIOA->IDR & 0x00008000
#define GPIOA_PIN15_OUT 	GPIOA->ODR & 0x00008000
#define GPIOA_PIN15_ON		GPIOA->BSRR |= 0x00008000
#define GPIOA_PIN15_OFF  	GPIOA->BSRR |= 0x80000000

#define GPIOF_PIN0_IN 		GPIOA->IDR & 0x00000001
#define GPIOF_PIN0_OUT 		GPIOA->ODR & 0x00000001
#define GPIOF_PIN0_ON		GPIOA->BSRR |= 0x00000001
#define GPIOF_PIN0_OFF  	GPIOA->BSRR |= 0x00010000

#define GPIOF_PIN1_IN 		GPIOA->IDR & 0x00000002
#define GPIOF_PIN1_OUT 		GPIOA->ODR & 0x00000002
#define GPIOF_PIN1_ON		GPIOA->BSRR |= 0x00000002
#define GPIOF_PIN1_OFF  	GPIOA->BSRR |= 0x00020000

//--- Exported functions ---//
void GPIO_Config(void);

#endif //--- End ---//


//--- END OF FILE ---//
