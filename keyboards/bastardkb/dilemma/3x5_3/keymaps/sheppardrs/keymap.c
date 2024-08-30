/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_NAV,
    LAYER_SYM,
    LAYER_NUM,
};

#define NAV QK_TRI_LAYER_LOWER
#define SYM QK_TRI_LAYER_UPPER

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_split_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_QUOT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
          NAV,   LALT_T(KC_SPC), LCTL_T(KC_BSPC),         RSFT_T(KC_ENT),  LGUI_T(KC_TAB),   SYM
  //    ╰──────────────────────────────────────────╯ ╰───────────────────────────────────────────╯
  ),

  //outlook foldering shortcuts + number pad layer
  [LAYER_NAV] = LAYOUT_split_3x5_3(
  // ╭────────────────────────────────────────────────────╮   ╭────────────────────────────────────────────────────╮
        KC_ESC, C_S_T(7), C_S_T(8), C_S_T(9), KC_HOME,           KC_EQL,     KC_7,   KC_8,  KC_9,   KC_BACKSLASH,
  // ├────────────────────────────────────────────────────┤   ├────────────────────────────────────────────────────┤
       KC_LSFT, C_S_T(4), C_S_T(5), C_S_T(6), KC_END,            KC_MINS,    KC_4,   KC_5,  KC_6,   KC_SCLN,
  // ├────────────────────────────────────────────────────┤   ├────────────────────────────────────────────────────┤
       _______, C_S_T(1), C_S_T(2), C_S_T(3), KC_MPLY,           KC_0,       KC_1,   KC_2,  KC_3,   KC_DOT,
  // ╰────────────────────────────────────────────────────┤   ├────────────────────────────────────────────────────╯
                         _______, _______, _______,              _______, _______, _______
  //                   ╰──────────────────────────────────╯   ╰──────────────────────────╯
  ),

/* // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
        KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU,    KC_HOME, KC_HOME,   KC_UP,  KC_END,  KC_DEL,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_VOLD,    KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       QK_BOOT, EE_CLR, KC_MPRV, KC_MNXT, KC_MPLY,    XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX,  KC_ENT,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         _______, _______, KC_LSFT,     KC_SPC, _______, KC_ESC
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),
  */

  [LAYER_SYM] = LAYOUT_split_3x5_3(
  // ╭─────────────────────────────────────────────────────────────╮   ╭────────────────────────────────────────────────────╮
        KC_ESC, LCTL(KC_F7), LCTL(KC_F8), LCTL(KC_F9), LCTL(KC_F10),           XXXXXXX,    XXXXXXX,  KC_F5,    KC_F6,    XXXXXXX,
  // ├─────────────────────────────────────────────────────────────┤   ├────────────────────────────────────────────────────┤
       KC_LSFT, LCTL(KC_F4), LCTL(KC_F5), LCTL(KC_F6), LCTL(KC_F10),            XXXXXXX,   KC_LEFT,  KC_UP,    KC_RIGHT, XXXXXXX,
  // ├─────────────────────────────────────────────────────────────┤   ├────────────────────────────────────────────────────┤
       _______, LCTL(KC_F1), LCTL(KC_F2), LCTL(KC_F3), LCTL(KC_F12),           XXXXXXX,   XXXXXXX,  KC_DOWN,  XXXXXXX,  XXXXXXX,
  // ╰─────────────────────────────────────────────────────────────┤   ├────────────────────────────────────────────────────╯
                         _______, _______, _______,                         _______, _______, _______
  //                   ╰───────────────────────────────────────────╯   ╰───────────────────────────────────────────╯
  ),
  /*
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
        KC_ESC, KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD,    KC_CIRC, KC_RPRN, KC_RCBR, KC_RBRC,  KC_GRV,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_MINS, KC_ASTR,  KC_EQL, KC_UNDS,  KC_DLR,    KC_HASH, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_PLUS, KC_PIPE,   KC_AT, KC_SLSH, KC_PERC,    KC_SCLN, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                          KC_ESC, _______, KC_LSFT,     KC_SPC, _______, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_NUM] = LAYOUT_split_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,   KC_0,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,  KC_F11,     KC_F12, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, _______, KC_LSFT,     KC_SPC, _______, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),
  */
};
// clang-format on


/* 

Put on main keyboard:
//Tab
//Apostrophe '

first layer: 
//outlook foldering
//numbers
add: 
//decimal place 
//colon (remove colon from main?)

Arrow keys

make this a layer - or right side of either of the outlook shortcut layers 
//add SSMS shortcuts? F5 and F6 added
//Alt shift arrow keys -> have to press alt and shift
//Ctrl shift arrow keys -> have to press ctrl and shift
//Windows shift arrow keys -> somewhat possible -> have to press shift and windows with the same thumb

Right hand thumb bar isnt used much outside of layer button
*/