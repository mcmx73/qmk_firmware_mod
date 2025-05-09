// Copyright 2024 Wind (@yelishang)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef WIRELESS_ENABLE
#    define LPWR_TIMEOUT RGB_MATRIX_TIMEOUT
#    define WLS_KEYBOARD_REPORT_KEYS 5

#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define USB_POWER_EN_PIN A14
#define LED_POWER_EN_PIN B7

#  define BT_CABLE_PIN B8 // High when connected to charging
#  define BT_CHARGE_PIN B9 // Low when charging, high when fully charged

/* UART */
#define UART_TX_PIN A9
#define UART_RX_PIN A10

/* SPI Config for spi flash*/
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4
#define SPI_MOSI_PAL_MODE 5

#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12
#define WEAR_LEVELING_LOGICAL_SIZE (WEAR_LEVELING_BACKING_SIZE / 2)

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define WS2812_TIMING 1250  // Total bit length (TH+TL) nanoseconds
#define WS2812_T1H 900       // "1" High phase length of bit nanoseconds
#define WS2812_T0H 350       // "0" High phase length of bit nanoseconds
#define WS2812_TRST_US 280   // Length of reset phase in microseconds
