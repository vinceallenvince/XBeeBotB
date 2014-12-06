int potPin = 2;

void setup() {
  Serial.begin(57600);
}

void loop() {
  int val = map(analogRead(potPin), 0, 1023, 1, 9);
  Serial.println(val);
  delay(50);
}
