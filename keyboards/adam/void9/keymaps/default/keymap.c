#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LCTL(KC_1)    , LCTL(KC_2)      , LCTL(KC_3)   ,
	    LCTL(KC_4)    , LCTL(KC_5)      , LCTL(KC_6)   ,
	    MO(1)         , LCTL(KC_7)      , MO(2)
    ),

    [1] = LAYOUT(
        KC_A          , KC_B          , KC_C            ,
        KC_D          , KC_E          , KC_F            ,
        KC_G          , KC_H          , KC_I            
    ),

    [2] = LAYOUT(
        KC_1          , KC_2          , KC_3            ,
        KC_4          , KC_5          , KC_6            ,
        KC_7          , KC_8          , KC_9            
    )
};
