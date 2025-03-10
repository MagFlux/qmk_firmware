#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_65_ansi(
    KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_DEL,
    KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS , KC_HOME,
    MO(1)   , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,           KC_ENT  , KC_END,
    KC_LSFT ,           KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , KC_UP   , KC_INS,
    KC_LCTL , KC_LGUI , KC_LALT ,                     KC_SPC  ,                               KC_RALT , KC_RGUI , KC_RCTL , KC_LEFT , KC_DOWN , KC_RGHT
  ),

  [1] = LAYOUT_65_ansi(
    KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , _______ , _______,
    _______ , RGB_MOD , RGB_HUI , RGB_SAI , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______,
    _______ , RGB_RMOD, RGB_HUD , RGB_SAD , _______ , _______ , _______ , _______ , _______ , RGB_TOG , _______ , _______ ,           _______ , _______,
    KC_CAPS ,           KC_SLEP , _______ , _______ , _______ , _______ , NK_TOGG , KC_MSTP , KC_MPRV , KC_MNXT , KC_MPLY , _______ , RGB_VAI , KC_PSCR,
    _______ , _______ , _______ ,                     _______,                                KC_MUTE , KC_VOLD , KC_VOLU , RGB_SPD , RGB_VAD , RGB_SPI
  ),
};
