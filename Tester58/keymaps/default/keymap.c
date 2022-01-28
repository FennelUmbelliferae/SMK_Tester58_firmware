/*
Copyright 2021 Salicylic_Acid

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,--------------------------------------------------------------------------------------------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_P7,   KC_P8,   KC_P9,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_P4,   KC_P5,   KC_P6,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_P1,   KC_P2,   KC_P3,    KC_N,    KC_M, KC_COMM,  KC_DOT,KC_SLASH, KC_INT1,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
          KC_LCTL, KC_LGUI, KC_LALT,   MO(2),   TG(2),       KC_SPC, KC_BSPC,  KC_ENT,       TG(1),  MO(1), KC_LNG5,TO(0,1), KC_RCTL
  //|--------------------------------------------------------------------------------------------------------------------------------------'
  )
  [1] = LAYOUT(
  //,--------------------------------------------------------------------------------------------------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_P7,   KC_P8,   KC_P9,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_P4,   KC_P5,   KC_P6,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,   KC_P1,   KC_P2,   KC_P3,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
          KC_LCTL, KC_LGUI, KC_LALT,   MO(2),   TG(2),       KC_SPC, KC_BSPC,  KC_ENT,       TG(1),  MO(1), KC_LNG5,TO(0,1), KC_RCTL
  //|--------------------------------------------------------------------------------------------------------------------------------------'
  )
  [2] = LAYOUT(
  //,--------------------------------------------------------------------------------------------------------------------------------------.
       KC_ESC,    KC_Q,   KC_UP,    KC_E,    KC_R,    KC_T,   KC_P7,   KC_P8,   KC_P9,    KC_Y,    KC_U, KC_MINS,  KC_EQL, KC_INT3, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB, KC_LEFT, KC_DOWN,KC_RIGHT,    KC_F,    KC_G,   KC_P4,   KC_P5,   KC_P6,    KC_H, KC_LBRC, KC_RBRC, KC_BSLS, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_P1,   KC_P2,   KC_P3,    KC_N,    KC_M, KC_COMM,  KC_DOT,KC_SLASH, KC_INT1,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
          KC_LCTL, KC_LGUI, KC_LALT,   MO(2),   TG(2),       KC_SPC, KC_BSPC,  KC_ENT,       TG(1),  MO(1), KC_LNG5,TO(0,1), KC_RCTL
  //|--------------------------------------------------------------------------------------------------------------------------------------'
  )
};