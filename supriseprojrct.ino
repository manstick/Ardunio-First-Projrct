int i = 0;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  if (i % 2 == 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  
  delay(1000);
  i++;
}