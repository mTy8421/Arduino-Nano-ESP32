void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_a = 0;
  val_a = analogRead(A0);
  Serial.println(val_a);
  delay(500);
}
