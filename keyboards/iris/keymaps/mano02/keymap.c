#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _QWER 0
#define _OTER 1
#define _NUM 2
#define _SYM 3
#define _NAV 4
#define _LNAV 5
#define _EMOJ 6
#define _FNC 7

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
  KC_PND


};

#define KC_ KC_TRNS
#define _______ KC_TRNS


#define KC_OLSF OSM(MOD_LSFT)
#define KC_ORSF OSM(MOD_RSFT)
#define KC_OLCT OSM(MOD_LCTL)
#define KC_ORCT OSM(MOD_RCTL)
#define KC_OLAL OSM(MOD_LALT)
#define KC_ORAL OSM(MOD_RALT)
#define KC_OLGU OSM(MOD_LGUI)
#define KC_ORGU OSM(MOD_RGUI)


#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)
#define KC_CTLA LCTL(KC_A)

#define KC_STAB LSFT(KC_TAB)
#define KC_SWC LALT(KC_DEL)

#define KC_QWER TO(_QWER)
#define KC_OTER TO(_OTER)


#define KC_NAV MO(_NAV)
#define KC_NAVG TG(_NAV)
#define KC_NAVT TT(_NAV)

#define KC_LNAV MO(_LNAV)
#define KC_LNVG TG(_LNAV)
#define KC_LNVT TT(_LNAV)

#define KC_NUM MO(_NUM)
#define KC_NUMG TG(_NUM)
#define KC_NUMT TT(_NUM)
#define KC_NUMO OSL(_NUM)

#define KC_SYM MO(_SYM)
#define KC_SYMX TG(_SYM)
#define KC_SYMO OSL(_SYM)


#define KC_FNC MO(_FNC)
#define KC_FNCX TG(_FNC)
#define KC_FNCO OSL(_FNC)

#define KC_EMO OSL(_EMOJ)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWER] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     QWER,RALT,OLCT,OLSF,OLAL,FNCO,               NUMG,ORAL,ORSF,ORCT, TAB,OTER,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     OLGU, Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  , EMO,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      SWC, A  , S  , D  , F  , G  ,                H  , J  , K  , L  , ENT,ORSF,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
      ESC, Z  , X  , C  , V  , B  ,LNVT,     NAVT, N  , M  ,COMM, DOT,SLSH, ESC,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                        NUMO, NAV ,OLAL,       ORCT, SPC,SYMO
  //                  `----+----+----'        `----+----+----'
  ),

  [_NAV] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , ENT,STAB, ESC, TAB, DEL,                APP,PGUP, UP ,PGDN,STAB,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,LGUI,LCTL,LSFT,LALT,BSPC,               BSPC,LEFT,DOWN,RGHT,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,CTLZ,CTLX,CTLC,CTLV,CTLA,    ,         , TAB,HOME, DEL, END,CAPS,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_OTER] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , P  , C  , L  , D  , DOT,                K  , M  , H  , U  , ENT,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , O  , T  , E  , R  ,COMM,               BSPC, N  , A  , I  , S  ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , Z  , Y  , F  , G  , X  ,    ,         , J  , V  , W  , B  , Q  ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,            ,     ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_NUM] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , GT ,MINS,RPRN,PLUS,CIRC,               MINS, 7  , 8  , 9  ,ASTR,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , LT ,PERC,LPRN, EQL, DEL,               BSPC, 4  , 5  , 6  ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , GRV,SLSH,N000,ASTR, AT,    ,          ,PLUS, 1  , 2  , 3  ,SLSH,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,            , 0  , DOT
  //                  `----+----+----'        `----+----+----'
),

  [_SYM] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , GT ,MINS,DQUO,PLUS,PIPE,               RCBR,RBRC,RPRN,SCLN,PERC,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , LT ,UNDS,QUOT,EQL ,AMPR,               BSPC,LBRC,LPRN,COLN,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,EXLM,HASH, AT ,ASTR,DLR ,    ,         ,LCBR,SLSH,QUES,BSLS,TILD,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),



  [_LNAV] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,STAB,PGUP, UP ,PGDN, APP,               WAKE, INS,VOLU,PSCR, NO ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , ENT,LEFT,DOWN,RGHT,BSPC,                NO ,MPRV,VOLD,MNXT,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , NO ,HOME, DEL, END, TAB,    ,         ,SLEP,MSTP,MUTE,MPLY, NO ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_EMOJ] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,LOVE,KISS,TNGE,THUP,THDN,                NO , P7 , P8 , P9 , NO ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , SAD,SML0,SML1, LOL, NO ,               NLCK, P4 , P5 , P6 ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , NO , NO , PND, RUP, NO ,    ,         , P0 , P1 , P2 , P3 , NO ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
 ),

 [_FNC] = KC_KEYMAP(
 //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
        ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
 //|----+----+----+----+----+----|              |----+----+----+----+----+----|
        ,LGUI,LCTL,LSFT,LALT, NO ,                F12, F7 , F8 , F9 ,F10 ,    ,
 //|----+----+----+----+----+----|              |----+----+----+----+----+----|
        , NO , NO , NO , NO , NO ,               WH_U, F4 , F5 , F6 ,    ,    ,
 //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
        ,LGUI,LCTL,LSFT,LALT, NO ,    ,         ,WH_D, F1 , F2 , F3 ,F11 ,    ,
 //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                          ,    ,    ,             ,    ,
 //                  `----+----+----'        `----+----+----'
),


};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_N000:
                SEND_STRING("000"); return true; break;
            case KC_SML0:
                SEND_STRING(":-)"); return true; break;
            case KC_SML1:
                SEND_STRING(":-D"); return true; break;
            case KC_LOL:
                SEND_STRING(">_<"); return true; break;
            case KC_SAD:
                SEND_STRING(":-("); return true; break;
            case KC_LOVE:
                SEND_STRING(":-*"); return true; break;
            case KC_KISS:
                SEND_STRING(":-*"); return true; break;
            case KC_TNGE:
                SEND_STRING(":-P"); return true; break;
            case KC_THUP:
                SEND_STRING("(y)"); return true; break;
            case KC_THDN:
                SEND_STRING("(n)"); return true; break;
            case KC_PND:
                register_code(KC_RALT);
                register_code(KC_P0);unregister_code(KC_P0);
                register_code(KC_P1);unregister_code(KC_P1);
                register_code(KC_P6);unregister_code(KC_P6);
                register_code(KC_P3);unregister_code(KC_P3);
                unregister_code(KC_RALT);
                return true;
                break;
            case KC_RUP:
                register_code(KC_RALT);
                register_code(KC_P8);unregister_code(KC_P8);
                register_code(KC_P3);unregister_code(KC_P3);
                register_code(KC_P7);unregister_code(KC_P7);
                register_code(KC_P7);unregister_code(KC_P7);
                unregister_code(KC_RALT);
                return true;
                break;

        }
        return true;
    }
    else {
        switch(keycode) {
            case KC_NAV:
                clear_mods(); return true; break;
        }
        return true;
    }
};
