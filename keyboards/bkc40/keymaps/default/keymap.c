/* Copyright 2020 melonbred
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _LAYER1,
    _LAYER2

};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_DEFAULT(
        KC_ESC,        KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y,          KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_BSPC,
        CTL_T(KC_TAB), KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H,          KC_J, KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_QUOT,       KC_Z,    KC_X,    KC_C, KC_V, KC_B, KC_N,          KC_M, KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_UP),
        MO(_LAYER2),   KC_LGUI, KC_LALT, KC_LCTL,       LT(_LAYER1, KC_SPC), KC_DEL,     KC_RCTL,           KC_LEFT, KC_RGHT, KC_DOWN
    ),


};


// Rotary Encoder Functions
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return true;
}
