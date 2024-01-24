void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a =0;
  a = analogRead(A0);

  int b = 0;
  b = map(a, 0, 4095, 0, 100);
  
  Serial.println(a);
  delay(500);
}
