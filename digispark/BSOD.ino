// Petya Prank
// Spanish keyboard

#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); // Turn on PIN 1 (LED)
  DigiKeyboard.delay(1000);
}

void loop(){
  DigiKeyboard.update(); // Start and keep alive the keyboard driver

  DigiKeyboard.sendKeyStroke(0); // Send empty key to start transfer
  delay(500);

  // Open URL in full screen
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(250);
  DigiKeyboard.print("iexplore /k https>&&www.cryptoprank.com&");
  DigiKeyboard.sendKeyStroke(KEY_3, MOD_ALT_RIGHT);
  DigiKeyboard.println(F("&petya"));
  
  while(1){
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
  }
}