// Arduino Dice Roller
// Copyright (C) 2020, Uri Shaked

#define BUTTON_PIN A0

const byte die1Pins[] = { 2, 3, 4, 5, 6, 7, 8};
const byte die2Pins[] = { 9, 10, 11, 12, A3, A4, A5};

void setup() {
  pinMode(A0, INPUT_PULLUP);
  for (byte i = 0; i < 7; i++) {
    pinMode(die1Pins[i], OUTPUT);
    pinMode(die2Pins[i], OUTPUT);
  }
}

void displayNumber(const byte pins[], byte number) {
  digitalWrite(pins[0], number > 1 ? HIGH : LOW); // top-left
  digitalWrite(pins[1], number > 3 ? HIGH : LOW); // top-right
  digitalWrite(pins[2], number == 6 ? HIGH : LOW); // middle-left
  digitalWrite(pins[3], number % 2 == 1 ? HIGH : LOW); // center
  digitalWrite(pins[4], number == 6 ? HIGH : LOW); // middle-right
  digitalWrite(pins[5], number > 3 ? HIGH : LOW); // bottom-left
  digitalWrite(pins[6], number > 1 ? HIGH : LOW); // bottom-right
}

bool randomReady = false;

void loop() {
  bool buttonPressed = digitalRead(BUTTON_PIN) == LOW;
  if (!randomReady && buttonPressed) {
    // Use the time until the first button press
    // to initialize the random number generator
    randomSeed(micros());
    randomReady = true;
  }

  if (buttonPressed) {
    for (byte i = 0; i < 10; i++) {
      int num1 = random(1, 7);
      int num2 = random(1, 7);
      displayNumber(die1Pins, num1);
      displayNumber(die2Pins, num2);
      delay(50 + i * 20);
    }
  }
}
