void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 0;
  int y = 0;
  x = analogRead(A0);
  y = map(x, 0, 4095, 0, 255);
  Serial.println(y);
  analogWrite(2, y);
  delay(50);
}
