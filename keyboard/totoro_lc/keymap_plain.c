#include "keymap_common.h"
#include "backlight.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = KEYMAP(ESC, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, BSPC, \
TAB, Q, W, E, R, T, Y, U, I, O, P, ENT, \
CAPS, A, S, D, F, G, H, J, K, L, SCLN, QUOT, \
LSFT, Z, X, C, V, B, N, M, COMM, DOT, SLSH, RSFT, \
LCTL, LGUI, LALT, NO, FN0, SPC, SPC, FN1, NO, RALT, BSPC, RCTL),

[1] = KEYMAP(NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, \
GRV, NO, NO, NO, NO, NO, NO, NO, NO, FN2, FN3, FN4, \
NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, \
LSFT, NO, FN12, FN11, FN10, NO, NO, NO, NO, NO, FN6, RSFT, \
LCTL, NO, NO, NO, FN0, SPC, SPC, FN1, NO, NO, NO, RCTL),

[2] = KEYMAP(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, \
FN5, NO, UP, NO, NO, NO, NO, NO, NO, LBRC, RBRC, BSLS, \
NO, LEFT, DOWN, RIGHT, NO, NO, NO, NO, NO, NO, MINS, EQL, \
LSFT, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, RSFT, \
LCTL, NO, NO, NO, FN0, SPC, SPC, FN1, NO, NO, NO, RCTL),

};

const action_t fn_actions[] PROGMEM = {
  [0] = ACTION_LAYER_MOMENTARY(1), // FN0 changes to layer 1
  [1] = ACTION_LAYER_MOMENTARY(2), // FN1 changes to layer 2
  // MOD keys
  [2] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
  [3] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
  [4] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
  [5] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
  [6] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
  // Backlight
  [10] = ACTION_BACKLIGHT_TOGGLE(), // turn backlight on/off
  [11] = ACTION_BACKLIGHT_DECREASE(), //decrease backlight
  [12] = ACTION_BACKLIGHT_INCREASE(), // increase backlight
};
