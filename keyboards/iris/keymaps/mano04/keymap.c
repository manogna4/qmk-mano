#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _ASER 0
#define _NAV 1
#define _NUM 2
#define _FUNC 3
#define _SYM 4
#define _STR 5
#define _LNUM 6
#define _LASE 7
#define _QWER 8
#define _EXT 9


enum custom_keycodes {
  KC_N000 = SAFE_RANGE,
  KC_SML0,
  KC_SML1,
  KC_LOL,
  KC_SAD,
  KC_KISS,
  KC_LOVE,
  KC_TNGE,
  KC_THUP,
  KC_THDN,
  KC_RUP,
  KC_PND,
  KC_SHRG,
  KC_OSCL,
  KC_AESV,
  KC_WMOV,
  KC_WSIZ,
  KC_COLS,
  KC_SNND,



};


// Tap Dance Declarations
enum {
    TD_1 = 0,
    TD_2,
    TD_3,
};


#define KC_ KC_TRNS
#define KC_____ KC_TRNS


#define KC_RSET RESET

#define KC_XXXX KC_NO

//one shot mods
#define KC_OLSF OSM(MOD_LSFT)
#define KC_ORSF OSM(MOD_RSFT)
#define KC_OLCT OSM(MOD_LCTL)
#define KC_ORCT OSM(MOD_RCTL)
#define KC_OLAL OSM(MOD_LALT)
#define KC_ORAL OSM(MOD_RALT)
#define KC_OLGU OSM(MOD_LGUI)
#define KC_ORGU OSM(MOD_RGUI)

// modified mods
#define KC_OLCS OSM(MOD_LCTL|MOD_LSFT)
#define KC_OLAS OSM(MOD_LALT|MOD_LSFT)
#define KC_OLCA OSM(MOD_LCTL|MOD_LALT)
#define KC_OLME OSM(MOD_LCTL|MOD_LALT|MOD_LSFT)

// mod combos
#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)
#define KC_CTLA LCTL(KC_A)
#define KC_CTLO LCTL(KC_O)

#define KC_SECO LCTL(KC_SPC)
#define KC_SERO LSFT(KC_SPC)

#define KC_GUPU LGUI(KC_PGUP)
#define KC_GUPD LGUI(KC_PGDN)

#define KC_STAB LSFT(KC_TAB)


// layer codes
#define KC_ASER TO(_ASER)

#define KC_QWER TO(_QWER)

#define KC_NAVT TO(_NAV)
#define KC_NAVO OSL(_NAV)

#define KC_NUMT TO(_NUM)
#define KC_NUMO OSL(_NUM)

#define KC_FNCO OSL(_FUNC)

#define KC_SYMO OSL(_SYM)

#define KC_OEXT OSL(_EXT)

#define KC_LASO OSL(_LASE)
#define KC_LMCA LM(_LASE, KC_LCTL)

#define KC_LNUT TO(_LNUM)
#define KC_LNUO OSL(_LNUM)

#define KC_STRO OSL(_STR)


// for specific keys
#define KC_RTHB MT(MOD_RCTL,KC_F13)

#define KC_SSS1 TD(TD_1)
#define KC_SSS2 TD(TD_2)
#define KC_SSS3 TD(TD_3)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_ASER] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ASER,OSCL, C  , D  , F  , K  ,               V  , H  , T  , L  ,OSCL,ASER,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  COMM, A  , S  , E  , R  , Y  ,              BSPC, N  , I  , O  , ENT, DOT,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   6  , Q  , W  , G  , B  , J  ,               X  , M  , U  , P  , Z  , ESC,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  XXXX,XXXX,XXXX,LASO,NUMO,NAVO,FNCO,    OLCT, SPC,SYMO,LASO,XXXX,XXXX,QWER,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      LNUT, TAB,XXXX,    XXXX, TAB,NUMT
//                   |----+----+----|   |----+----+----|
),


[_NAV] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,STAB, ESC, TAB, DEL,              STAB,PGUP, UP ,PGDN,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   ENT,OLGU,OLCT,OLSF,OLAL,BSPC,              BSPC,LEFT,DOWN,RGHT, ENT, APP,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,CTLZ,CTLX,CTLC,CTLV,ASER,               TAB,HOME, DEL, END, INS,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    RTHB, SPC,SYMO,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


[_NUM] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,LPRN,N000,RPRN,CIRC,              MINS, 7  , 8  , 9  ,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  PERC,OLGU,OLCT,OLSF,OLAL, SPC,              BSPC, 4  , 5  , 6  , ENT,ASTR,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,LEFT,DOWN, UP ,RGHT, GRV,              PLUS, 1  , 2  , 3  ,SLSH,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,LNUO,NAVO,SYMO,     EQL, 0  , DOT,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_FUNC] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,GUPU,CAPS,GUPD,SECO,              WH_U, F7 , F8 , F9 ,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  OSCL,OLGU,OLCT,OLSF,OLAL,SERO,              MS_L, F4 , F5 , F6 , F10, F11,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,OLME,CTLO,WMOV,WSIZ, F13,              WH_D, F1 , F2 , F3 , F12,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,OEXT,NAVO,CAPS,    OLME,OLCS,OLCA,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_SYM] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,MINS,DQUO,PLUS,SCLN,              SNND,RBRC,RPRN,RCBR,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   GT , LT ,UNDS,QUOT, EQL,COLN,              BSPC,LBRC,LPRN,LCBR,AMPR,PIPE,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,EXLM,QUES, AT ,SLSH,BSLS,              TILD,ASTR,HASH, DLR,PERC,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    NAVT,STRO,NAVO,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


[_STR] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,XXXX,XXXX,XXXX,XXXX,              LOVE,THUP,THDN,TNGE,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  XXXX,XXXX,XXXX,XXXX,XXXX,XXXX,               SAD,SML0,SML1, LOL,XXXX,XXXX,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,XXXX,XXXX,XXXX,XXXX,XXXX,              KISS, PND, RUP,SHRG,XXXX,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    ASER,LASO, ESC,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_EXT] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,SLCK,VOLU,NLCK,WAKE,              XXXX,XXXX,XXXX,XXXX,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  RSET,WFAV,MPRV,VOLD,MNXT,PSCR,              XXXX,XXXX,XXXX,XXXX,XXXX,XXXX,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,PAUS,MSTP,MUTE,MPLY,SLEP,              XXXX,XXXX,XXXX,XXXX,XXXX,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    XXXX,XXXX,XXXX,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


[_LNUM] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,  7 ,  8 ,  9 ,UNDS,              XXXX, P7 , P8 , P9 ,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   DOT,  0 ,  4 ,  5 ,  6 , AT ,              NLCK, P4 , P5 , P6 , P0 ,XXXX,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
      ,N000,  1 ,  2 ,  3 ,PERC,              XXXX, P1 , P2 , P3 ,XXXX,    ,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    RALT,____,____,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


[_LASE] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,  L ,  T ,  H ,  V ,                K ,  F ,  D ,  C ,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   DOT, SPC,  O ,  I ,  N ,BSPC,                Y ,  R ,  E ,  S ,  A ,COMM,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,  Q ,  P ,  U ,  M ,  Z ,                J ,  B ,  G ,  W ,  X ,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    XXXX,XXXX,XXXX,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_QWER] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, Q  , W  , E  , R  , T  ,               Y  , U  , I  , O  , P  ,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  OSCL, A  , S  , D  , F  , G  ,               H  , J  , K  , L  , ENT, ESC,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, Z  , X  , C  , V  , B  ,               N  , M  ,COMM, DOT,SLSH,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    OLCT, SPC,SYMO,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


};

#ifdef AUDIO_ENABLE
    float tone_qwerty[][2] = SONG(QWERTY_SOUND);
#endif

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_1] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_B),
    [TD_2] = ACTION_TAP_DANCE_DOUBLE(OSM(MOD_LCTL), OSM(MOD_LCTL|MOD_LSFT)),
    [TD_3] = ACTION_TAP_DANCE_DOUBLE(KC_OLCT, KC_OLCT),
};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        case KC_NAVO:
            if (record->event.pressed) {
                return true;//these actions are defined elsewhere
            } else {
                clear_mods();return true;break;
            }
        case KC_OSCL:
            if (record->event.pressed) {
                clear_mods();
                clear_weak_mods();
                clear_oneshot_mods();
                clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                return true;
            }
        case KC_N000:
            if (record->event.pressed) {
                //this is done because using a shifted key code immedeately before SEND_STRING("000");
                //preserves the shift and produces ')))' instead of '000'
                clear_weak_mods();
                SEND_STRING("000");
                return true;
            }
        case KC_COLS:
        // chained one shot left shift
           if (record->event.pressed) {
               if (get_oneshot_mods()) {
                   static uint8_t vmods2 = 0;
                   vmods2 = (get_oneshot_mods() | MOD_LSFT);
                   clear_oneshot_mods();
                   set_oneshot_mods(vmods2);
               }
           else {
               set_oneshot_mods(MOD_LSFT);
               }
           return true;
           }
        case KC_SML0:
            if (record->event.pressed) {SEND_STRING(":-)"); return true;}
        case KC_SML1:
            if (record->event.pressed) {SEND_STRING(":-D"); return true;}
        case KC_LOL:
            if (record->event.pressed) {SEND_STRING(">_<"); return true;}
        case KC_SAD:
            if (record->event.pressed) {SEND_STRING(":-("); return true;}
        case KC_LOVE:
            if (record->event.pressed) {SEND_STRING(":-*"); return true;}
        case KC_KISS:
            if (record->event.pressed) {SEND_STRING(":-*"); return true;}
        case KC_TNGE:
            if (record->event.pressed) {SEND_STRING(":-P"); return true;}
        case KC_THUP:
            if (record->event.pressed) {SEND_STRING("(y)"); return true;}
        case KC_THDN:
            if (record->event.pressed) {SEND_STRING("(n)"); return true;}
        case KC_SHRG:
            if (record->event.pressed) {SEND_STRING("¯\\_(ツ)_/¯"); return true;}
        case KC_PND://THE POUND SYMBOL
            if (record->event.pressed) {
                register_code(KC_RALT);
                register_code(KC_P0);unregister_code(KC_P0);
                register_code(KC_P1);unregister_code(KC_P1);
                register_code(KC_P6);unregister_code(KC_P6);
                register_code(KC_P3);unregister_code(KC_P3);
                unregister_code(KC_RALT);
                return true;}
        case KC_RUP://THE INDIAN RUPEE SYMBOL TO-DO
            if (record->event.pressed) {
                register_code(KC_RALT);
                register_code(KC_P8);unregister_code(KC_P8);
                register_code(KC_P3);unregister_code(KC_P3);
                register_code(KC_P7);unregister_code(KC_P7);
                register_code(KC_P7);unregister_code(KC_P7);
                unregister_code(KC_RALT);
                return true;
            }
        case KC_AESV://PASTE VALUES IN EXCEL
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_E);unregister_code(KC_E);
                unregister_code(KC_LALT);
                register_code(KC_S);unregister_code(KC_S);
                register_code(KC_V);unregister_code(KC_V);
                register_code(KC_ENT);unregister_code(KC_ENT);

                return true;
            }
        case KC_WMOV://MOVE WINDOWS
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_SPC);unregister_code(KC_SPC);
                unregister_code(KC_LALT);
                register_code(KC_M);unregister_code(KC_M);
                return true;
            }
        case KC_WSIZ://RESIZE WINDOWS
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_SPC);unregister_code(KC_SPC);
                unregister_code(KC_LALT);
                register_code(KC_S);unregister_code(KC_S);
                return true;
            }
        case KC_SNND://END SENTENCE AND BEGIN NEW
            if (record->event.pressed) {
                SEND_STRING(". ");
                //ACTION_MODS_ONESHOT(KC_LSFT);
                return true;
            }
        default:
            return true;
    }

};
