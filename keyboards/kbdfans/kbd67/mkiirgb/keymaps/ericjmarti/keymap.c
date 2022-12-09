#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,       KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,       KC_MINS, KC_EQL,     KC_BSPC,   KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,       KC_LBRC, KC_RBRC,    KC_BSLS,   KC_PGUP,
        MO(2),   KC_A,    KC_S,    KC_D,    KC_F,       KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,             KC_ENT,    KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,             KC_UP,     KC_END,
        KC_LCTL, KC_LOPT, KC_LCMD,                      KC_SPC,                             KC_RCMD, MO(1),               KC_LEFT,    KC_DOWN,   KC_RGHT),

    [1] = LAYOUT_65_ansi_blocker(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,     KC_F11,  KC_F12,     KC_DEL,    KC_INS,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD,    RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR,    KC_SCRL, KC_PAUS,    QK_BOOT,   _______,
        KC_CAPS, RGB_SPI, RGB_SPD, _______, _______,    _______, _______, _______, _______, _______, _______,    _______,             EE_CLR,    _______,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,    _______,             KC_VOLU,   KC_MUTE,
        _______, _______, _______,                      KC_MPLY,                            _______, _______,             KC_MPRV,    KC_VOLD,   KC_MNXT),

    [2] = LAYOUT_65_ansi_blocker(
        _______, _______, _______, _______, G(KC_RGHT), _______, _______, _______, _______, _______, G(KC_LEFT), _______, _______,    KC_DEL,    _______,
        _______, _______, _______, _______, RSG(KC_Z),  G(KC_T), G(KC_C), G(KC_Z), _______, _______, G(KC_V),    _______, _______,    _______,   _______,
        _______, G(KC_A), G(KC_S), _______, KC_PGDN,    _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,    _______,             _______,   _______,
        _______, _______, G(KC_X), _______, _______,    KC_PGUP, G(KC_G), _______, _______, _______, G(KC_F),    _______,             C(KC_UP),  _______,
        _______, _______, _______,                      KC_ESC,                             _______, _______,             C(KC_LEFT), _______,   C(KC_RGHT)),

};
// clang-format on
