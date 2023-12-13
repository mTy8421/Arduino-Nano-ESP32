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
  Mouse.move(5, 0, 0);
  delay(50);
}
