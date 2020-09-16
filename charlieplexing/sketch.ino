/**
   Charlieplexed LED Matrix Scanning demo.

   Copyright (C) 2019, Uri Shaked. Released under the MIT license.
*/

#define SCAN_DELAY 50

byte LEDS[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10 };
const byte LED_COUNT = sizeof(LEDS);

void setup() {
}

void loop() {
  for (int i = 0; i < LED_COUNT; i++) {
    for (int j = 0; j < LED_COUNT; j++) {
      if (i != j) {
        pinMode(LEDS[i], OUTPUT);
        pinMode(LEDS[j], OUTPUT);
        digitalWrite(LEDS[i], LOW);
        digitalWrite(LEDS[j], HIGH);
        delay(SCAN_DELAY);
        pinMode(LEDS[i], INPUT);
        pinMode(LEDS[j], INPUT);
      }
    }
  }
}
