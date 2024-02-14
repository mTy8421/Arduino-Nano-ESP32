void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(2, 128);
  delay(100);
}

// 64 = 25%, 127 = 50%, 191 = 75%, 255 = 100%