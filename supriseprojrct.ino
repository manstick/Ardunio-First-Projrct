int i = 0;

void setup() {
  pinMode(13, OUTPUT);
  //Led
  pinMode(8, OUTPUT);
  //Buzzer
}

void loop() {
  if (i % 2 == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(8, LOW);
  }
  
  delay(1000);
  i++;
}
