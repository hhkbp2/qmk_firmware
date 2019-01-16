/**
 * config.h
 *
 */

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0xFEED
#define DEVICE_VER      0x0002
#define MANUFACTURER    astro
#define PRODUCT         e6rgb
#define DESCRIPTION     60% rgb keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14
/* key matrix pins */
#define MATRIX_ROW_PINS { F1, F4, F5, F6, D6 }
#define MATRIX_COL_PINS { D7, B4, B5, B6, C6, C7, F7, F0, B0, B1, D2, D3, B3, B2 }
//#define UNUSED_PINS
//#define DIODE_DIRECTION ROW2COL
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* key combination for magic key command */
#define IS_COMMAND() ( \
	keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

//rgb light setting
#define RGBLED_NUM      6
#define RGB_DI_PIN      B7
#define RGBLIGHT_ANIMATIONS

#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010000 // this is here for compliancy reasons.

#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 63
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL

// tapping setting
#define TAPPING_TERM    200
#define RETRO_TAPPING
#define PERMISSIVE_HOLD

#endif
