void setup() {
  Serial.begin(115200);
  Serial.println("Welcome to the Serial Playground!");
  Serial.println("---------------------------------");
}

byte value = 0;
void loop() {
  Serial.print("Counter: ");
  Serial.print(value);
  Serial.print(", hex: ");
  Serial.println(value, HEX);
  value += 1;
  delay(500);
}
