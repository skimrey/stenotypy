/* Copyright 2020 Solomon Kimrey
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
// #include "g/keymap_combo.h"
// Defines names for use in layer keycodes and the keymap

// Defines the keycodes used by our macros in process_record_user

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT( \
    KC_MINS, KC_EQUAL, KC_0, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_MINS, KC_EQUAL, KC_BSPACE, \
    KC__VOLUP, KC_SLASH, KC_RBRACKET, KC_TAB, KC_TAB, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_SLASH, KC__VOLUP, \
    KC__VOLUP, KC_ENTER, KC_QUOTE, KC_SCOLON, KC_Q, KC_S, KC_D, KC_F, KC_G, KC_H,KC_G, KC_H, KC_J, KC_K, KC_L, KC_P, KC_QUOTE, KC_ENTER, KC_QUOTE, KC__VOLUP, \
     KC_RSHIFT, KC_SLASH, KC_UP, KC_LSHIFT, KC_A, KC_X, KC_C, KC_V, KC_B, KC_N, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_RSHIFT, KC_SLASH, KC_UP, KC_UP, \
    KC_LEFT, KC_DOWN, KC_RIGHT, KC_LCTRL, KC_Z, KC_LALT, KC_SPACE, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_M, KC_RGUI, KC_F1, KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT 
    ),

};


/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
