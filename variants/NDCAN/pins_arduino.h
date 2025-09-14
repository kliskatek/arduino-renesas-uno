#pragma once

#define PIN(X,Y) (X * 16 + Y)

// Pin count
// ----
#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
#endif
#define PINS_COUNT           (PINCOUNT_fn())


#define digitalPinHasPWM(p) (IS_PIN_PWM(getPinCfgs(p, PIN_CFG_REQ_PWM)[0]))
// JUMPERS
// ----
#define PIN_JP_LOG  	(0u)
#define PIN_JP_READ     (1u)
#define PIN_JP_WRITE	(2u)
#define PIN_JP_MODE1    (3u)
#define PIN_JP_MODE2    (4u)
#define PIN_JP_MODE3    (5u)
#define PIN_JP_MODE4    (6u)
static const uint8_t JP_LOG = PIN_JP_LOG;
static const uint8_t JP_READ = PIN_JP_READ;
static const uint8_t JP_WRITE = PIN_JP_WRITE;
static const uint8_t JP_MODE1 = PIN_JP_MODE1;
static const uint8_t JP_MODE2 = PIN_JP_MODE2;
static const uint8_t JP_MODE3 = PIN_JP_MODE3;
static const uint8_t JP_MODE4 = PIN_JP_MODE4;

// BUTTONS
// ----
#define PIN_BUTTON1  	(7u)
static const uint8_t BUTTON1 = PIN_BUTTON1;

// LEDs
// ----
#define PIN_LED1     (8u)
#define PIN_LED2     (9u)
#define PIN_LED3     (10u)
#define PIN_LED4     (11u)
#define LED_BUILTIN LED1
static const uint8_t LED1 = PIN_LED1;
static const uint8_t LED2 = PIN_LED2;
static const uint8_t LED3 = PIN_LED3;
static const uint8_t LED4 = PIN_LED4;

// RTC BATTERY MONITOR
// ----
#define PIN_BAT_LOW_N  	(12u)
static const uint8_t BAT_LOW_N = PIN_BAT_LOW_N;


/****** RTC CORE DEFINES *******/
#define RTC_HOWMANY     1


/****** UART CORE DEFINES ******/

#define SERIAL_HOWMANY		1
#define UART1_TX_PIN        2
#define UART1_RX_PIN        1

/****** SPI CORE DEFINES ******/

#define SPI_HOWMANY       1

#define PIN_SPI_MOSI  (17)
#define PIN_SPI_MISO  (18)
#define PIN_SPI_SCK   (19)
#define PIN_SPI_CS    (16)
#define FORCE_SPI_MODE  (MODE_SPI)

static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
static const uint8_t CS  =  PIN_SPI_CS;
static const uint8_t SS  =  PIN_SPI_CS;

/****** GTP CORE DEFINES *******/

#define GTP32_HOWMANY     2
#define GTP16_HOWMANY     6
#define GPT_HOWMANY       8

/****** AGT CORE DEFINES *******/
#define AGT_HOWMANY       2


/****** CAN CORE DEFINES ******/

#define CAN_HOWMANY       1

#define PIN_CAN0_TX       (14)
#define PIN_CAN0_RX       (15)
#define PIN_CAN0_STBY    (-1)


#define EXT_INTERRUPTS_HOWMANY 2

#define AVCC_MEASURE_PIN        20
#define AVCC_MULTIPLY_FACTOR    8.33

#define AR_INTERNAL_VOLTAGE     1.43f

#define USB_VID           (0x2341)
#define USB_PID           (0x0069)
#define USB_NAME          "UNO R4 Minima"

#define VUSB_LDO_ENABLE     1

/* EEPROM DEFINES */

#define ARDUINO_FLASH_TYPE  LP_FLASH
#define FLASH_BASE_ADDRESS  0x40100000
#define FLASH_TOTAL_SIZE    0x2000
#define FLASH_BLOCK_SIZE    0x400

// TODO: removeme
#ifdef __cplusplus
extern "C" {
#endif
void iic_slave_tei_isr(void);
void iic_slave_eri_isr(void);
#ifdef __cplusplus
}
#endif
