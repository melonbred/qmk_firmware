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

// Tap Dance Declarations
enum {
    TD_M_D = 0,
    TD_P_M
};

// Tap Dance Definition
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for minus, tap twice for divide
  [TD_M_D] = ACTION_TAP_DANCE_DOUBLE(KC_PMNS, KC_PSLS),
  //Tap once for plus, tap twice for multiply
  [TD_P_M] = ACTION_TAP_DANCE_DOUBLE(KC_PPLS, KC_PAST)
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_625U_SPACE(
        KC_ESC,        KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y,          KC_U, KC_I,    KC_O,    KC_P,    KC_BSPC,
        CTL_T(KC_TAB), KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H,          KC_J, KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT,       KC_Z,    KC_X,    KC_C, KC_V, KC_B, KC_N,          KC_M, KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_UP),
        MO(_LAYER2),   KC_LGUI, KC_LALT,             LT(_LAYER1, KC_SPC),                KC_LEFT, KC_RGHT, KC_DOWN
    ),

    [_LAYER1] = LAYOUT_625U_SPACE(
        KC_GRV,  KC_QUOT, _______, KC_UP,   _______, _______, _______, _______,    KC_7, KC_8, KC_9,    KC_DEL,
        KC_CAPS, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, TD(TD_M_D), KC_4, KC_5, KC_6,    KC_ENT,
        KC_LSFT, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, _______, TD(TD_P_M), KC_1, KC_2, KC_3,    KC_RSFT,
        _______, KC_LGUI, KC_LALT,                   _______,                            KC_0, KC_PDOT, XXXXXXX
    ),

    [_LAYER2] = LAYOUT_625U_SPACE(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD,
        _______, XXXXXXX, XXXXXXX,                   XXXXXXX,                            KC_DEL,  KC_RALT, KC_RCTL
    ),
};


// Rotary Encoder Functions
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
}
