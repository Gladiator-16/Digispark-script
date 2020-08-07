//This DigiKeyboard Script takes a screenshot of the desktop, sets it as the wallpaper and hides the desktop icons.
//Work with Windows XP(?)/Vista(?)/7/8/8.1/10 etc.

//Original Author: CedArctic

//Enhanced By: Gladiator-16


#include "DigiKeyboard.h"
void setup() {
   pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(70,226);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("mspaint");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("%USERPROFILE%\\dab.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_K);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_X);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_V);

  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //after the script is executed the LED will start blinking
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(1000);
   digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(1000);
   digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(1000);
  for(;;){ /*empty*/ }
}
