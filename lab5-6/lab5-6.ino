#include "USB.h"
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyborad;

void setup() {
  // put your setup code here, to run once:
  Keyborad.begin();
  USB.begin();
  pinMode(17, INPUT);
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  pinMode(20, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int kb_1 = digitalRead(17);
  int kb_2 = digitalRead(18);
  int kb_3 = digitalRead(19);
  int kb_4 = digitalRead(20);
  if(kb_1 == 1){
    Keyborad.press(KEY_LEFT_ARROW);
    delay(100);
    Keyborad.releseAll();
    delay(100);
  }else if(kb_2 == 1){
    Keyborad.press(KEY_UP_ARROW);
    delay(100);
    Keyborad.releseAll();
    delay(100);
  }else if(kb_3 == 1){
    Keyborad.press(KEY_DOWN_ARROW);
    delay(100);
    Keyborad.releseAll();
    delay(100);
  }else if(kb_4 == 1){
    Keyborad.press(KEY_RIGHT_ARROW);
    delay(100);
    Keyborad.releseAll();
    delay(100);
  }

}
