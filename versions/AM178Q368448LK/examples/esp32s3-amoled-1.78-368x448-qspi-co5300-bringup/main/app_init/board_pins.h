#pragma once

/*
 * 板型切换说明：
 * 1) 修改 BOARD_VARIANT 的值
 * 2) 或者在编译参数中传入 -DBOARD_VARIANT=BOARD_VARIANT_xxx
 */
#define BOARD_VARIANT_BLACK 1
#define BOARD_VARIANT_GREEN 2

#ifndef BOARD_VARIANT
#define BOARD_VARIANT BOARD_VARIANT_GREEN
#endif

#if BOARD_VARIANT == BOARD_VARIANT_BLACK
/* black: 原来的板子引脚 */
#define PIN_LCD_CS_NUM          (GPIO_NUM_14)
#define PIN_LCD_PCLK_NUM        (GPIO_NUM_9)
#define PIN_LCD_DATA0_NUM       (GPIO_NUM_10)
#define PIN_LCD_DATA1_NUM       (GPIO_NUM_11)
#define PIN_LCD_DATA2_NUM       (GPIO_NUM_12)
#define PIN_LCD_DATA3_NUM       (GPIO_NUM_13)
#define PIN_LCD_RST_NUM         (GPIO_NUM_15)

#define PIN_TP_SCL_NUM          (GPIO_NUM_42)
#define PIN_TP_SDA_NUM          (GPIO_NUM_41)
#define PIN_TP_RST_NUM          (GPIO_NUM_40)
#define PIN_TP_INT_NUM          (GPIO_NUM_39)

#elif BOARD_VARIANT == BOARD_VARIANT_GREEN
/* green: 新版板子的引脚 */
#define PIN_LCD_CS_NUM          (GPIO_NUM_40)
#define PIN_LCD_PCLK_NUM        (GPIO_NUM_21)
#define PIN_LCD_DATA0_NUM       (GPIO_NUM_47)
#define PIN_LCD_DATA1_NUM       (GPIO_NUM_45)
#define PIN_LCD_DATA2_NUM       (GPIO_NUM_38)
#define PIN_LCD_DATA3_NUM       (GPIO_NUM_39)
#define PIN_LCD_RST_NUM         (GPIO_NUM_41)
#define PIN_LCD_TE_NUM          (GPIO_NUM_42)

#define PIN_TP_SCL_NUM          (GPIO_NUM_2)
#define PIN_TP_SDA_NUM          (GPIO_NUM_1)
#define PIN_TP_RST_NUM          (GPIO_NUM_13)
#define PIN_TP_INT_NUM          (GPIO_NUM_14)

#else
#error "Unsupported BOARD_VARIANT"
#endif
