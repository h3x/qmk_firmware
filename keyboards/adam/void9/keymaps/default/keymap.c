#include QMK_KEYBOARD_H

enum macros {
    NOTEPAD = SAFE_RANGE,
    OBSIDIAN,
    OUTLOOK,
    CHROME,
    MAC1,
    MAC2,
    MAC3
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case NOTEPAD:
            if(record->event.pressed) {
               SEND_STRING(SS_LGUI() SS_DELAY(200) "notepad" SS_DELAY(200) SS_TAP(X_ENTER));
            }
            return false;
        case CHROME:
            if(record->event.pressed) {
               SEND_STRING(SS_LGUI() SS_DELAY(200) "chrome" SS_DELAY(200) SS_TAP(X_ENTER));
            }
            return false;
        case OBSIDIAN:
            if(record->event.pressed) {
               SEND_STRING(SS_LGUI() SS_DELAY(200) "obsidian" SS_DELAY(200) SS_TAP(X_ENTER));
            }
            return false;
        case OUTLOOK:
            if(record->event.pressed) {
               SEND_STRING(SS_LGUI() SS_DELAY(200) "outlook" SS_DELAY(200) SS_TAP(X_ENTER));
            }
            return false;
        case MAC1:
            if(record->event.pressed) {
                SEND_STRING(SS_LCTL("n"));
            }
            return false;
        case MAC2:
            if(record->event.pressed) {
               SEND_STRING("Meeting Date:\n\n\n\nMeeting With:\n\n\n\nMeeting About:\n\n\n\nNotes:\n\n\n\nActions:\n\n\n\n");
            }
            return false;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        RCS(KC_1)    , RCS(KC_2)      , RCS(KC_3)   ,
	    RCS(KC_4)    , RCS(KC_5)      , RCS(KC_6)   ,
	    MO(1)        , RCS(KC_7)      , MO(2)
    ),

    [1] = LAYOUT(
        MAC1         , MAC2           ,   KC_NO     ,
        NOTEPAD      , CHROME         ,   OBSIDIAN  ,
        KC_NO        , OUTLOOK        ,   KC_NO         
    ),

    [2] = LAYOUT(
        KC_F13       , KC_F14        , KC_F15       ,
        KC_F16       , KC_F17        , KC_F18       ,
        KC_NO        , KC_F19        , KC_NO            
    )
};
