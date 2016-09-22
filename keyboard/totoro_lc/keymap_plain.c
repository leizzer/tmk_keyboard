#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qerty */
    KEYMAP(GRV,  1,    2,    3,   4,   5,         6,   7,   8,   9,   0,    DEL, \
           ESC,  Q,    W,    E,   R,   T,         Y,   U,   I,   O,   P,    BSPC, \
           TAB,  A,    S,    D,   F,   G,         H,   J,   K,   L,   SCLN, QUOT, \
           LSFT, Z,    X,    C,   V,   B,         N,   M,   COMM,DOT, SLSH, FN20, \
           LCTL, LGUI, LALT, NO,  NO, SPC,       SPC,  NO,  RALT,APP, NO,   RCTL),
};

const uint16_t PROGMEM fn_actions[] = {
};
