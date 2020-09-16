/**
 * Simple 7-Segment Timer Counter (Minutes and Second).
 *
 * Drives four-segment displays, with common ANODEs connected
 * at pins 2, 3, 4, and 5, and segment lines at pins 6-13.
 * Enjoy ;-)
 */

#include <SevSeg.h>

SevSeg sevseg;

void setup() {
  byte digits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  bool resistorsOnSegments = false;
  byte hardwareConfig = COMMON_ANODE;
  bool updateWithDelays = false;
  bool leadingZeros = true;
  bool disableDecPoint = false;
  sevseg.begin(hardwareConfig, digits, digitPins, segmentPins, resistorsOnSegments,
               updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);
}

int seconds = 0;
int minutes = 0;
unsigned long lastMillis = 0;

void loop() {
  if (millis() - lastMillis >= 1000) {
    lastMillis = millis();
    seconds++;
    if (seconds == 60) {
      seconds = 0;
      minutes++;
      if (minutes == 60) {
        minutes = 0;
      }
    }
    sevseg.setNumber(minutes * 100 + seconds, 2);
  }

  sevseg.refreshDisplay();
}
