#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _NUM 1
#define _SYM 2
#define _NAV 3
#define _LNAV 4
#define _EMOJI 5
#define _FNC 6

enum custom_keycodes {
  TRIPLE0 = SAFE_RANGE,
  EMOJI,
  KC_E_A,
  KC_E_B
};

#define KC_ KC_TRNS
#define _______ KC_TRNS

#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)
#define KC_CTLA LCTL(KC_A)
#define KC_STAB LSFT(KC_TAB)
#define KC_SWC LALT(KC_DEL)

#define KC_BASE TO(_BASE)
#define KC_NAV MO(_NAV)
#define KC_NAVX TG(_NAV)
#define KC_LNAV MO(_LNAV)
#define KC_LNVX TG(_LNAV)
#define KC_NUM MO(_NUM)
#define KC_NUMX TG(_NUM)
#define KC_SYM MO(_SYM)
#define KC_SYMX TG(_SYM)
#define KC_FNC MO(_FNC)
#define KC_FNCX TG(_FNC)
#define KC_EMOJ OSL(_EMOJI)
#define KC_TRI0 TRIPLE0


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     BASE,LGUI,LCTL,LSFT,LALT,SPC ,               ESC ,BSPC,RSFT,RCTL,TAB ,NUMX,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LNVX, Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,EMOJ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     SWC , A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,ENT ,SWC ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     FNC , Z  , X  , C  , V  , B  ,LNAV,     NAV , N  , M  ,COMM, DOT,SLSH,NAVX,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LCTL,NAV ,NUM ,         SYM ,SPC ,RALT
  //                  `----+----+----'        `----+----+----'
  ),

  [_NUM] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , GT ,MINS,RPRN,PLUS,CIRC,               MINS, 1  , 2  , 3  ,ASTR,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , LT ,PERC,LPRN, EQL, DEL,               BSPC, 4  , 5  , 6  ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , GRV,SLSH,TRI0,ASTR,    ,    ,         ,PLUS, 7  , 8  , 9  ,SLSH,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,         DOT, 0  ,
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

  [_NAV] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , ENT,STAB, ESC, TAB, DEL,               MENU,PGUP, UP ,PGDN,STAB,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,LGUI,LCTL,LSFT,LALT,BSPC,               BSPC,LEFT,DOWN,RGHT,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,CTLZ,CTLX,CTLC,CTLV,CTLA,    ,         , TAB,HOME, DEL, END,CAPS,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_LNAV] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,STAB,PGUP, UP ,PGDN,MENU,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,ENT ,RGHT,DOWN,LEFT,BSPC,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , INS,HOME, DEL, END, TAB,    ,         ,    ,    ,    ,    ,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_EMOJI] = KC_KEYMAP(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,E_A ,E_A ,E_A ,E_A ,E_A ,               E_A ,E_A ,E_A ,E_A ,E_A ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,E_A ,E_A ,E_A ,E_A ,E_A ,               E_A ,E_A ,E_A ,E_A ,E_A ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,E_A ,E_A ,E_A ,E_A ,E_B ,    ,         ,E_A ,E_A ,E_A ,E_A ,E_A ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
 ),

 [_FNC] = KC_KEYMAP(
 //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
        ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
 //|----+----+----+----+----+----|              |----+----+----+----+----+----|
        ,LGUI,LCTL,LSFT,LALT,    ,               F12 , F1 , F2 , F3 ,F10 ,    ,
 //|----+----+----+----+----+----|              |----+----+----+----+----+----|
        ,    ,    ,    ,    ,    ,               WH_U, F4 , F5 , F6 ,    ,    ,
 //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
        ,LGUI,LCTL,LSFT,LALT,    ,    ,         ,WH_D, F7 , F8 , F9 ,F11 ,    ,
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
  switch (keycode) {
    case TRIPLE0:
      if (record->event.pressed) {
        SEND_STRING("000");
      }
      return false;
      break;
    case EMOJI:
      if (record->event.pressed) {
        set_oneshot_layer(_EMOJI, ONESHOT_START);
      }
      return false;
      break;
    case KC_E_A:
      if (record->event.pressed) {
        SEND_STRING(":-)");
        set_oneshot_layer(_BASE, ONESHOT_PRESSED);
      }
      return false;
      break;
    case KC_E_B:
      if (record->event.pressed) {
        SEND_STRING(":-(");
        set_oneshot_layer(_BASE, ONESHOT_PRESSED);
      }
      return false;
      break;
  }
  return true;
}
