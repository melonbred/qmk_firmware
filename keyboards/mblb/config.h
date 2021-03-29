/*
Copyright 2020 melonbred

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x6D62 //"MB"
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER melonbred
#define PRODUCT MBLB
#define DESCRIPTION WKL 40% with macro column and light bar

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { A13, B15, B14, B9 }
#define MATRIX_COL_PINS { B11, B1, B0, A7, A6, A5, A4, A3, A2, A1, A0, A8, B12 }
//#define UNUSED_PINS { B5, B7, B8, B9, C13, C15 }


/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


/* Rotary Encoder Definitions */
#define ENCODERS_PAD_A { A9, B2, F0, C14 }
#define ENCODERS_PAD_B { A10, B10, C15, C13 }


/*RGB*/
#define RGB_DI_PIN B3
 #ifdef RGB_DI_PIN
   #define RGBLED_NUM 8
   #define RGBLIGHT_HUE_STEP 8
   #define RGBLIGHT_SAT_STEP 8
   #define RGBLIGHT_VAL_STEP 8
   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
 /*== all animations enable ==*/
   //#define RGBLIGHT_ANIMATIONS
 /*== or choose animations ==*/
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   //#define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
   //#define RGBLIGHT_EFFECT_CHRISTMAS
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   //#define RGBLIGHT_EFFECT_RGB_TEST
   //#define RGBLIGHT_EFFECT_ALTERNATING
 /*== customize breathing effect ==*/
   /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
   //#define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
   /*==== use exp() and sin() ====*/
   //#define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
   //#define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
 #endif

#define TAP_CODE_DELAY 10

/* WS2812 PWM Driver*/
#define WS2812_PWM_DRIVER PWMD2  // default: PWMD2
#define WS2812_PWM_CHANNEL 2  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 2  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.


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

/* disable these deprecated features by default */
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION


