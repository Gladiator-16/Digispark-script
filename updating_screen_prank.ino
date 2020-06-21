//generated by Duckyspark https://github.com/toxydose/Duckyspark

#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_DOWN  0x51
#define KEY_ARROW_UP    0x52

void setup() {

DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0);

// fake update LUL
// author: Judge2020 https://judge2020.com
// edited by: DanielL99 on github (thanks!)
//  
// let the ducky HID enumerate
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT | 0);
DigiKeyboard.delay(500);
DigiKeyboard.print(F(" http://fakeupdate.net/win10/index.html"));
DigiKeyboard.sendKeyStroke(KEY_ENTER,0);

}


void loop() {

}