#include "USB.h"
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyborad;

void setup() {
  // put your setup code here, to run once:
  Keyborad.begin();
  USB.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  Keyborad.press('s');
  delay(100);
  Keyborad.releaseAll();
  delay(1000);

}
