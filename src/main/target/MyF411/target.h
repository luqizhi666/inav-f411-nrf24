/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "MyF41"

#define USBD_PRODUCT_STRING  "MyF411"

#define LED0                    PC13
//#define LED1                    PC14

#define BEEPER                  PC14
#define BEEPER_INVERTED

// *************** SPI1 Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PB4
#define SPI1_MOSI_PIN           PB5

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW180_DEG
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW180_DEG
#define MPU6500_CS_PIN          PA4
#define MPU6500_SPI_BUS         BUS_SPI1

// *************** SPI2 nrf24遥控 *****************************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_RX_SPI              // 启用 SPI 接收机支持
#define USE_RX_INAV             // 使用 INAV 协议（或 USE_RX_BAYANG）
#define USE_RX_NRF24

#define RX_SPI_INSTANCE			SPI2

#define RX_IRQ_PIN				PB0

#define RX_CE_PIN				PB1

#define RX_NSS_PIN				PB12



// #define USE_MAX7456
// #define MAX7456_SPI_BUS         BUS_SPI2
// #define MAX7456_CS_PIN          PB12

// *************** UART *****************************
#define USE_VCP
//#define VBUS_SENSING_PIN        PA9
//#define VBUS_SENSING_ENABLED
//可选

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10


#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

// #define USE_UART3               // 蓝牙/数传（备用）
// #define UART3_TX_PIN            PB10
// #define UART3_RX_PIN            PB11

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PB3 // ST1 pad
#define SOFTSERIAL_1_RX_PIN     PB3
// #define USE_SOFTSERIAL2
// #define SOFTSERIAL_2_TX_PIN     PA8 // LED pad
// #define SOFTSERIAL_2_RX_PIN     PA8


#define SERIAL_PORT_COUNT       4


// #define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
// #define SERIALRX_PROVIDER       SERIALRX_SBUS
// #define SERIALRX_UART           SERIAL_PORT_USART1

// *************** I2C /Baro/Mag/Pitot ********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define TEMPERATURE_I2C_BUS     BUS_I2C1

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_ALL

#define PITOT_I2C_BUS           BUS_I2C1

// *************** ADC *****************************
 #define USE_ADC
 #define ADC_INSTANCE                ADC1
 #define ADC1_DMA_STREAM             DMA2_Stream0
 #define ADC_CHANNEL_1_PIN           PB2
// #define ADC_CHANNEL_2_PIN           PB1
 #define VBAT_ADC_CHANNEL            ADC_CHN_1
// #define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

// #if defined(MATEKF411_RSSI)
// #define ADC_CHANNEL_3_PIN           PA0
// #define RSSI_ADC_CHANNEL            ADC_CHN_3
// #endif
//TMD adc太烦了
// *************** LED2812 ************************
// #if !defined(MATEKF411_SFTSRL2) && !defined(MATEKF411_RSSI) && !defined(MATEKF411_FD_SFTSRL)
// #define USE_LED_STRIP
// #define WS2811_PIN                      PA8
// #endif
// ***************  OTHERS *************************
//#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_SOFTSERIAL )

// #define USE_SPEKTRUM_BIND
// #define BIND_PIN                PA10 //  RX1

// #define USE_DSHOT
// #define USE_ESC_SENSOR
//电调，空心杯不需要

// #define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS       7
