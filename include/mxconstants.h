/**
  ******************************************************************************
  * File Name          : mxconstants.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MXCONSTANT_H
#define __MXCONSTANT_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define LED3_Pin GPIO_PIN_13
#define LED3_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_0
#define LED2_GPIO_Port GPIOF
#define LED1_Pin GPIO_PIN_1
#define LED1_GPIO_Port GPIOF
#define BTN1_Pin GPIO_PIN_0
#define BTN1_GPIO_Port GPIOC
#define BTN2_Pin GPIO_PIN_1
#define BTN2_GPIO_Port GPIOC
#define BTN3_Pin GPIO_PIN_2
#define BTN3_GPIO_Port GPIOC
#define BTN4_Pin GPIO_PIN_3
#define BTN4_GPIO_Port GPIOC
#define BTN5_Pin GPIO_PIN_0
#define BTN5_GPIO_Port GPIOA
#define U2Tx_MOD_Pin GPIO_PIN_2
#define U2Tx_MOD_GPIO_Port GPIOA
#define U2Rx_MOD_Pin GPIO_PIN_3
#define U2Rx_MOD_GPIO_Port GPIOA
#define SCK2_WIFI_Pin GPIO_PIN_13
#define SCK2_WIFI_GPIO_Port GPIOB
#define SDI2_WIFI_Pin GPIO_PIN_14
#define SDI2_WIFI_GPIO_Port GPIOB
#define SDO2_WIFI_Pin GPIO_PIN_15
#define SDO2_WIFI_GPIO_Port GPIOB
#define U1Tx_BLE_ETH_Pin GPIO_PIN_9
#define U1Tx_BLE_ETH_GPIO_Port GPIOA
#define U1Rx_BLE_ETH_Pin GPIO_PIN_10
#define U1Rx_BLE_ETH_GPIO_Port GPIOA
#define Wifi_En_Pin GPIO_PIN_11
#define Wifi_En_GPIO_Port GPIOA
#define Wifi_SPI_CFG_Pin GPIO_PIN_12
#define Wifi_SPI_CFG_GPIO_Port GPIOA
#define NSS1_LCD_Pin GPIO_PIN_15
#define NSS1_LCD_GPIO_Port GPIOA
#define BLE_AUX_Pin GPIO_PIN_10
#define BLE_AUX_GPIO_Port GPIOC
#define BLE_CMD_Pin GPIO_PIN_11
#define BLE_CMD_GPIO_Port GPIOC
#define BTN7_Pin GPIO_PIN_12
#define BTN7_GPIO_Port GPIOC
#define BTN6_Pin GPIO_PIN_2
#define BTN6_GPIO_Port GPIOD
#define SCK1_LCD_Pin GPIO_PIN_3
#define SCK1_LCD_GPIO_Port GPIOB
#define SDO1_LCD_Pin GPIO_PIN_5
#define SDO1_LCD_GPIO_Port GPIOB

#define DEV_LED_GPIO_Port GPIOC
#define DEV_LED3_Pin GPIO_PIN_9
#define DEV_LED4_Pin GPIO_PIN_8

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MXCONSTANT_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
