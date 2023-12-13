#include "USB.h"
#include "USBHIDMouse.h"
USBHIDMouse Mouse;


void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  USB.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Mouse.press();
  delay(100);
  Mouse.release();
}
