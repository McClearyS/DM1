#include QMK_KEYBOARD_H

#include "features/autocorrection.h"

#include "features/achordion.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_autocorrection(keycode, record)) { return false; }
  // Your macros...

  return true;
}


#define _LAYER0 0
#define _LAYER1 1

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, RGUI(KC_L), KC_SPC, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_CAPS, KC_TAB, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), KC_T, KC_G, KC_M, KC_N, RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_QUOT, KC_PSCR, KC_X, KC_C, KC_D, KC_V, KC_Z, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, LT(1,KC_DEL), SC_SENT, KC_SPC, KC_BSPC, LCTL(KC_V), LCTL(KC_C), KC_UP, KC_DOWN, LCTL(KC_Z), LCTL(KC_Y), KC_LEFT, KC_RGHT),

[_LAYER1] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_HOME, KC_FIND, KC_INS, KC_MSTP, KC_MPLY, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, QK_BOOT, KC_NO, KC_PGDN, KC_END, KC_NO, KC_MINS, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, DT_PRINT, KC_NO, KC_NO, DT_DOWN, DT_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) 

};
