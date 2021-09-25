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
#define VENDOR_ID 0x6d62
#define PRODUCT_ID 0x6d62
#define DEVICE_VER 0x0001
#define MANUFACTURER melonbred
#define PRODUCT bkc40
#define VIAL_KEYBOARD_UID {0x3E, 0x1D, 0x08, 0x5F, 0xCC, 0x02, 0xB6, 0x53}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }


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
#define MATRIX_ROW_PINS { F0, E6, F7, F1 }
#define MATRIX_COL_PINS { F6, D2, D1, D0, D3, D4, D6, D7, B4, B5, B6, C6, C7 }
#define UNUSED_PINS { B0, B1, B2, B3, D5 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/*Encoder Definition*/
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

