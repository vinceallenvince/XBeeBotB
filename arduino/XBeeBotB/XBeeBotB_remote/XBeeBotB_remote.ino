int potPin = 2;

void setup() {
  Serial.begin(57600);
}

void loop() {
  /* 
   * Reads 0 - 1023; but we should restrict input to
   * 0 - 1000 in case potentiometer doesn't send the extreme end.
   */
  int val = map(analogRead(potPin), 0, 1000, 1, 9);
  Serial.println(val);
  delay(50);
}
