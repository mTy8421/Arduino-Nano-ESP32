void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  analogWriteResolution(10); // 8 = 255, 10 = 1023, 12 = 4095
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = 0;
  a = analogRead(A0);
  analogWrite(2, a);
  delay(50);
}