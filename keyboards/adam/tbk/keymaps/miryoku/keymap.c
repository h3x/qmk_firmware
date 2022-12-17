#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_TAB, KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,            KC_Y,KC_U,        KC_I,        KC_O,        KC_P,           KC_DEL, 
        KC_ESC, LGUI_T(KC_A),LALT_T(KC_S),LCTL_T(KC_D),RSFT_T(KC_F),KC_G,            KC_H,RSFT_T(KC_J),RCTL_T(KC_K),RALT_T(KC_L),LGUI_T(KC_SCLN),KC_QUOT, 
        KC_LCTL,KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,            KC_N,KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,        KC_RSFT, 
                                           KC_LSFT,LT(2,KC_BSPC),LT(1,KC_LALT),  LT(4,KC_ENT),LT(3,KC_SPC),LT(5,KC_RALT)
        ),
	
    [1] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_PSTE,KC_COPY,KC_CUT, KC_UNDO,KC_NO, 
        KC_CAPS,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,KC_NO,          KC_BTN4,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_BTN5, 
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_WH_U,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,KC_WH_D, 
                                    KC_NO,KC_LGUI,KC_NO,    KC_BTN1,KC_BTN2,KC_BTN3
        ),
	
    [2] = LAYOUT(
        KC_NO,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,           KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_SLEP,
        KC_NO,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,KC_NO,           KC_MPLY,KC_MPRV,KC_VOLD,KC_VOLU,KC_MNXT,KC_NO, 
        KC_NO,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,           KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_PWR, 
                                    KC_NO, KC_NO, KC_NO,    KC_MSTP, KC_MPLY, KC_MUTE
        ),
	
    [3] = LAYOUT(
        KC_NO,KC_LBRC,KC_1,KC_2,KC_3,KC_RBRC,          KC_NO,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,KC_SCLN,KC_4,KC_5,KC_6,KC_EQL,           KC_NO,KC_RSFT,KC_LCTL,KC_LALT,KC_LGUI,KC_NO,
        KC_NO,KC_GRV, KC_7,KC_8,KC_9,KC_BSLS,          KC_NO,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, 
                          KC_DOT, KC_0, KC_MINS,     KC_NO KC_NO,KC_NO
        ),
	
    [4] = LAYOUT(
        KC_LCBR,KC_EXLM,KC_AT,  KC_HASH,KC_RPRN,KC_RCBR,           KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, 
        KC_COLN,KC_DLR, KC_PERC,KC_CIRC,KC_PLUS,KC_NO,             KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, 
        KC_TILD,KC_AMPR,KC_ASTR,KC_LPRN,KC_PIPE,KC_NO,             KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, 
                                   KC_LPRN,KC_RPRN,KC_UNDS,   KC_NO,KC_NO,KC_NO
        ),
	
    [5] = LAYOUT(
        KC_NO,  KC_F1,KC_F2, KC_F3, KC_F4, KC_PSCR,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_HOME,KC_F5,KC_F6, KC_F7, KC_F8, KC_PGUP,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_END, KC_F9,KC_F10,KC_F11,KC_F12,KC_PGDN,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                   KC_NO,  KC_NO,KC_NO, KC_NO, KC_NO, KC_NO
    )
};