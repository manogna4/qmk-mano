#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _ASER 0
#define _NUM 1
#define _SYM 2
#define _FUNC 3
#define _MOUS 4
#define _LNUM 5
#define _EXT 6
#define _NAV 7
//there is no way to get to these layers in the map below
//it is just left here so that no errors come up
#define _STR 10
#define _LASE 11
#define _GHEA 12
#define _QWER 13


enum custom_keycodes {
  KC_N000 = SAFE_RANGE,
  KC_OSCL,
  KC_AESV,
  KC_COLS,
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
#define KC_OLHY OSM(MOD_LCTL|MOD_LALT|MOD_LGUI|MOD_LSFT)

// mod combos
#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)
#define KC_CTLA LCTL(KC_A)
#define KC_CTLO LCTL(KC_O)

#define KC_SECO LCTL(KC_SPC)
#define KC_SERO LSFT(KC_SPC)

#define KC_ALF4 LALT(KC_F4)

#define KC_GUPU LGUI(KC_PGUP)
#define KC_GUPD LGUI(KC_PGDN)
#define KC_GUHO LGUI(KC_HOME)
#define KC_GUEN LGUI(KC_END)

#define KC_STAB LSFT(KC_TAB)

#define KC_LCAD LCA(KC_DEL)


// layer codes
#define KC_ASER TO(_ASER)

#define KC_QWER TO(_QWER)

#define KC_GHEA TO(_GHEA)

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
#define KC_MOUO OSL(_MOUS)


// for specific keys
#define KC_RTHB MT(MOD_RCTL,KC_F13)

#define KC_SSS1 TD(TD_1)
#define KC_SSS2 TD(TD_2)
#define KC_SSS3 TD(TD_3)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_ASER] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   DOT,COMM, C  , D  , F  , K  ,               V  , H  , T  , L  , DOT, DOT,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   DOT, A  , S  , E  , R  , Y  ,              BSPC, N  , I  , O  , ENT, DOT,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  LNUT, Q  , W  , G  , B  , J  ,               X  , M  , U  , P  , Z  , ESC,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  XXXX,XXXX,XXXX,ASER,NUMO,NAVO,FNCO,    OLCT, SPC,SYMO,ASER,XXXX,XXXX,XXXX,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                       F13, DOT, SPC,    XXXX, TAB,NUMT
//                   |----+----+----|   |----+----+----|
)


[_NAV] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, ENT,STAB, ESC, TAB, DEL,              STAB,PGUP, UP ,PGDN, APP,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   ENT,OLGU,OLCT,OLSF,OLAL,BSPC,              BSPC,LEFT,DOWN,RGHT, ENT, APP,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,CTLZ,CTLX,CTLC,CTLV,ASER,               TAB,HOME, DEL, END, INS,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,     F13, SPC,SYMO,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


[_NUM] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,COMM,PGUP, UP ,PGDN,CIRC,              MINS, 7  , 8  , 9  ,ASTR,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,N000,LEFT,DOWN,RGHT,QUOT,              BSPC, 4  , 5  , 6  , ENT, ASTR,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,OLGU,OLCT,OLSF,OLAL,PERC,              PLUS, 1  , 2  , 3  ,SLSH,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,LNUO,NAVO,SYMO,    OLAL, 0  , DOT,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_FUNC] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, DOT, L  , T  , H  , V  ,              OLAL, F7 , F8 , F9 , F11,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
   DOT, SPC, O  , I  , N  ,BSPC,              OLSF, F4 , F5 , F6 , F10, F11,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, Z  , P  , U  , M  , X  ,              OLCT, F1 , F2 , F3 , F12,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,OEXT,NAVO,MOUO,    OLME,CAPS,OLGU,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_SYM] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  PIPE, GT ,MINS,DQUO,PLUS,SCLN,               GRV,RBRC,RPRN,RCBR,PIPE,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  PIPE, LT ,UNDS,QUOT, EQL,COLN,              BSPC,LBRC,LPRN,LCBR,AMPR,PIPE,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,EXLM,ASTR, AT ,SLSH,QUES,              TILD, DLR,HASH,BSLS,PERC,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,OLME,NAVO,OLHY,    OLCA,OLCS,NAVO,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),



[_EXT] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,RSET,SLCK,VOLU,NLCK,WAKE,              XXXX,XXXX,XXXX,XXXX,XXXX,____,
//----+----+----+----+----+----|             |----+----+----+----,----+----,
  ____,WFAV,MPRV,VOLD,MNXT,PSCR,              XXXX,XXXX,XXXX,XXXX,XXXX,XXXX,
//----+----+----+----+----+----|             |----+----+----+----,----+----,
  ____,PAUS,MSTP,MUTE,MPLY,SLEP,              XXXX,XXXX,XXXX,XXXX,XXXX,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    XXXX,XXXX,XXXX,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),

[_MOUS] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, F24, F17, F18, F19,PGUP,              ACL0,WH_U,MS_U,WH_D,BTN3,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, F20, F14, F15, F16,PGDN,              ACL1,MS_L,MS_D,MS_R,BTN1,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,CAPS, F21, F22, F23,ALF4,              ACL2,WH_L,BTN2,WH_R,BTN4,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    OLCT,BTN1,BTN2,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),


[_LNUM] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, DOT,  7 ,  8 ,  9 ,OLGU,              PMNS, P7 , P8 , P9 ,PAST,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,  0 ,  4 ,  5 ,  6 ,BSPC,               P0 , P4 , P5 , P6 ,PENT,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,PERC,  1 ,  2 ,  3 ,RALT,              PPLS, P1 , P2 , P3 ,PSLS,____,
//----+----,----+----+----+----+----|   |----|----+----+----+----+----+----,
  ____,____,____,____,NUMO,NAVO,FNCO,    PDOT, P0 ,NLCK,____,____,____,____,
//----+----+----+----+----+----+----|   |----+----+----+----+----+----+----,
                      ____,____,____,    ____,____,____
//                   |----+----+----|   |----+----+----|
),



[_LASE] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,____,  L ,  T ,  H ,  V ,                K ,  F ,  D ,  C ,____,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, SPC,  O ,  I ,  N ,BSPC,                Y ,  R ,  E ,  S ,  A ,COMM,
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

[_GHEA] = KC_KEYMAP(
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____,XXXX, C  , A  , D  , K  ,               V  , H  , T  , L  ,XXXX,____,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  COMM, F  , S  , E  , R  , Y  ,              BSPC, N  , I  , O  , ENT, DOT,
//----+----+----+----+----+----|             |----+----+----+----+----+----,
  ____, Q  , W  , G  , B  , J  ,               X  , M  , U  , P  , Z  ,____,
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
        default:
            return true;
    }

};
