void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  for (i = 0; i < 256; i++){
    analogWrite(2, i);
    delay(50);
  }
  for(i = 255; i > 0; i--){
    analogWrite(2, i);
    delay(50);
  }
}
