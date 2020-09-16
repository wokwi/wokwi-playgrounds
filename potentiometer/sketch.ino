/* Potentiometer controlled LED Blink */

void setup() {
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(11, HIGH);
  delayPotentiometer();
  digitalWrite(11, LOW);
  delayPotentiometer();
}

int delayValue() {
  int value = analogRead(A0);
  return map(value, 0, 1023, 100, 1000);
}

void delayPotentiometer() {
  for (int i = 0; i < delayValue(); i++) {
    delay(1);
  }
}
