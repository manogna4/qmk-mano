#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _ASER 0
#define _QWER 1
#define _NAV 2
#define _NUM 3
#define _SYM 4
#define _FUNC 5
#define _RNAV 6
#define _LNAV 7
#define _LNUM 8
#define _LASR 9
#define _LQWE 10
#define _EXT1 11
#define _MANO 12
#define _LMAN 13

#define KC_RUPE  X(0x20B9)

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

};

#define KC_ KC_TRNS
#define _______ KC_TRNS
#define KC_RSET RESET



// modified mods

#define KC_OLSF OSM(MOD_LSFT)
#define KC_ORSF OSM(MOD_RSFT)
#define KC_OLCT OSM(MOD_LCTL)
#define KC_ORCT OSM(MOD_RCTL)
#define KC_OLAL OSM(MOD_LALT)
#define KC_ORAL OSM(MOD_RALT)
#define KC_OLGU OSM(MOD_LGUI)
#define KC_ORGU OSM(MOD_RGUI)

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

#define KC_STAB LSFT(KC_TAB)
#define KC_ATAB LALT(KC_TAB)


// layer codes

#define KC_QWER TO(_QWER)
#define KC_LQWE TO(_LQWE)
#define KC_LQWO OSL(_LQWE)

#define KC_MANO TO(_MANO)
#define KC_LMAN TO(_LMAN)
#define KC_LMNO OSL(_LMAN)

#define KC_ASER TO(_ASER)
#define KC_LASR TO(_LASR)
#define KC_LARO OSL(_LASR)


#define KC_NAV MO(_NAV)
#define KC_NAVG TG(_NAV)
#define KC_NAVT TT(_NAV)
#define KC_NAVO OSL(_NAV)

#define KC_LNAV MO(_LNAV)
#define KC_LNVG TG(_LNAV)
#define KC_LNVT TT(_LNAV)

#define KC_RNAV MO(_RNAV)
#define KC_RNVG TG(_RNAV)
#define KC_RNVT TT(_RNAV)

#define KC_NUM MO(_NUM)
#define KC_NUMG TG(_NUM)
#define KC_NUMT TT(_NUM)
#define KC_NUMO OSL(_NUM)

#define KC_LNUG TG(_LNUM)
#define KC_LNUO OSL(_LNUM)

#define KC_SYM MO(_SYM)
#define KC_SYMX TG(_SYM)
#define KC_SYMO OSL(_SYM)

#define KC_FNCO OSL(_FUNC)

#define KC_OEXT OSL(_EXT1)

// for specific keys

#define KC_LTHB LT(_FUNC,KC_F13)//not used since lthb has FNCO
#define KC_RTHB MT(MOD_RCTL,KC_F13)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ASER] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
   ASER,OLGU,OLCT,OLSF,OLAL,LNVG,               NUMG,ORAL,ORSF,ORCT, TAB,QWER,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
   OSCL, NO , C  , D  , F  , Y  ,                V  , H  , T  , L  , NO ,OEXT,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
   COMM, A  , S  , E  , R  , K  ,               BSPC, N  , I  , O  , ENT, DOT,
//|----+----,----+----+----+----+----.    ,----|----+----+----+----+----+----|
   LNUG, X  , W  , G  , B  , J  ,LARO,     RNVT, Z  , M  , U  , P  , Q  ,MANO,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                      NUMO,NAVO,FNCO,       RTHB, SPC,SYMO
//                  `----+----+----'        `----+----+----'
),

[_QWER] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
    Q  , A  , S  , D  , F  , G  ,                H  , J  , K  , L  , ENT, P  ,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       , Z  , X  , C  , V  , B  ,LQWO,     RNVT, N  , M  ,COMM, DOT,SLSH,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                          ,    ,    ,           ,    ,
//                  `----+----+----'        `----+----+----'
),



[_NAV] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , ENT,STAB, ESC, TAB, DEL,               STAB,PGUP, UP ,PGDN, APP,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
    ENT,OLGU,OLCT,OLSF,OLAL,BSPC,               BSPC,LEFT,DOWN,RGHT, ENT, APP,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       ,CTLZ,CTLX,CTLC,CTLV,CAPS,    ,         , TAB,HOME, DEL, END, INS,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                          ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),


[_NUM] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       ,PERC,LPRN,N000,LPRN,CIRC,               MINS, 7  , 8  , 9  ,ASTR,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
   PERC,OLGU,OLCT,OLSF,OLAL, EQL,               BSPC, 4  , 5  , 6  , ENT,ASTR,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       ,LEFT,DOWN, UP ,RGHT, GRV,    ,         ,PLUS, 1  , 2  , 3  ,SLSH,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         ,    ,    ,        N000, 0  , DOT
//                  `----+----+----'        `----+----+----'
),

[_FUNC] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       ,OLME,OLCS,OLCA,OLAS,SECO,               WH_U, F7 , F8 , F9 , F10,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
   OLME,OLGU,OLCT,OLSF,OLAL,SERO,               MS_L, F4 , F5 , F6 , F11, F10,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       ,CTLO,WMOV,WSIZ, F2 , F13,    ,         ,WH_D, F1 , F2 , F3 , F12,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         ,    ,    ,         OEXT,    ,
//                  `----+----+----'        `----+----+----'
),

[_SYM] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , GT ,MINS,DQUO,PLUS,SCLN,               TILD,RBRC,RPRN,RCBR,PIPE,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
    GT , LT ,UNDS,QUOT, EQL,COLN,                GRV,LBRC,LPRN,LCBR,AMPR,PIPE,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       ,EXLM,HASH, AT ,ASTR, DLR,    ,         ,CIRC,SLSH,QUES,BSLS,PERC,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),


[_EXT1] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       ,CALC,SLCK,VOLU,NLCK,WAKE,               LOVE,THUP,THDN,TNGE, NO ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , NO ,MPRV,VOLD,MNXT,PSCR,                SAD,SML0,SML1, LOL, ENT, NO ,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       ,MSTP,MSTP,MUTE,MPLY,SLEP,    ,         ,KISS, PND,RUP ,SHRG, NO ,  ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),


[_LASR] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
     ,COMM, L  , T  , H  , V  ,                NO , NO , NO , NO , NO ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
  DOT, SPC, O  , I  , N  ,BSPC,                NO , NO , NO , NO , NO ,    ,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     , Z  , P  , U  , M  , Q  ,    ,         , NO , NO , NO , NO , NO ,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),


[_MANO] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , NO , L  , T  , H  , V  ,                K  , U  , L  , G  ,COMM,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
   COMM, A  , S  , E  , R  , K  ,               BSPC, N  , I  , O  , ENT,COMM,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       , NO , O  , I  , N  , NO , NO ,     RNVT, J  , M  , P  , Y  , Z  ,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                      BSPC, SPC,LMNO,        NO , NO , NO
//                  `----+----+----'        `----+----+----'
),


[_LMAN] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , NO , C  , D  , F  , Y  ,                NO , NO , NO , NO , NO ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
    DOT, Z  , P  , U  , M  , Q  ,                NO , NO , NO , NO , NO ,    ,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       , X  , W  , G  , B  , J  ,    ,         , NO , NO , NO , NO , NO ,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                          ,    ,    ,            ,     ,
//                  `----+----+----'        `----+----+----'
),




[_LQWE] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
     ,  P ,  O ,  I ,  U ,  Y ,                NO , NO , NO , NO , NO ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
     , SPC,  L ,  K ,  J ,  H ,                NO , NO , NO , NO , NO ,    ,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     ,SLSH, DOT,COMM,  M ,  N ,    ,         , NO , NO , NO , NO , NO ,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),



[_LNAV] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , APP,PGUP, UP ,PGDN,STAB,                NO , P7 , P8 , P9 , NO ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       , ENT,LEFT,DOWN,RGHT,BSPC,                P0 , P4 , P5 , P6 , ENT,    ,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       , INS,HOME, DEL, END, TAB,    ,         , NO , P1 , P2 , P3 , NO ,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),



[_RNAV] = KC_KEYMAP(
//,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       ,RSET,SLCK,VOLU,NLCK,WAKE,               STAB,PGUP, UP ,PGDN, APP,    ,
//|----+----+----+----+----+----|              |----+----+----+----+----+----|
       ,CALC,MPRV,VOLD,MNXT,PSCR,               BSPC,LEFT,DOWN,RGHT, ENT, APP,
//|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
       ,MSTP,MSTP,MUTE,MPLY,SLEP,    ,         , TAB,HOME, DEL, END, INS,    ,
//`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         ,    ,    ,             ,    ,
//                  `----+----+----'        `----+----+----'
),




  [_LNUM] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , DOT,  7 ,  8 ,  9 ,UNDS,                NO , NO , NO , NO , NO ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      DOT,  0 ,  4 ,  5 ,  6 , AT ,                NO , NO , NO , NO , NO ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,N000,  1 ,  2 ,  3 ,PERC,    ,         , NO , NO , NO , NO , NO ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),







};

#ifdef AUDIO_ENABLE
    float tone_qwerty[][2] = SONG(QWERTY_SOUND);
#endif

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
            if (record->event.pressed) {clear_mods(); clear_oneshot_mods(); clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED); return true;}
        case KC_N000:
            if (record->event.pressed) {SEND_STRING("000"); return true;}
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
        default:
            return true;
    }

};
