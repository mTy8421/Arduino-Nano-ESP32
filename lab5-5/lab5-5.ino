#include "USB.h"
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyborad;

void setup() {
  // put your setup code here, to run once:
  Keyborad.begin();
  USB.begin();
  pinMode(17, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int kb_1 = digitalRead(17);
  if(kb_1 == 1){
    Keyborad.press(KEY_LEFT_CTRL);
    Keyborad.press(KEY_LEFT_ALT);
    Keyborad.press(KEY_DELETE);
    delay(100);
    Keyborad.releaseAll();
    delay(500);
  }

}
