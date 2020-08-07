//this will 100% work for win 10 nto sure about lower versions but it should
//created by Gladiator-16
#include "DigiKeyboard.h"
void setup() {
   
}
void loop() {
    DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
    DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); 
DigiKeyboard.delay(500);

// If you want to use Chrome or Firefox instead of IE, remove 'iexplorer' from the following line
 DigiKeyboard.print(" http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);
DigiKeyboard.sendKeyStroke(KEY_S,MOD_CONTROL_LEFT);
DigiKeyboard.delay(2000);
 DigiKeyboard.print("%userprofile%\\ducky.jpg");
 DigiKeyboard.sendKeyStroke(KEY_ENTER); 
 DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); 
DigiKeyboard.delay(1000);
DigiKeyboard.print("%userprofile%\\ducky.jpg");
DigiKeyboard.delay(200);
 DigiKeyboard.sendKeyStroke(40); 
 DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(43);
   DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(40);
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
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
   for(;;){ /*empty*/ }
}
