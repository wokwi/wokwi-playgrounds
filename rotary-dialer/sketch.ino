// Include the library code:
#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
#define INDIALPIN 3
#define PULSEPIN 2
boolean inDialPinLastState;
boolean pulsPinLastState;
byte counter = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("System started");
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // set the fixed text
  lcd.setCursor(0, 0);
  pinMode(INDIALPIN, INPUT_PULLUP);
  pinMode(PULSEPIN, INPUT_PULLUP);
  inDialPinLastState = digitalRead(INDIALPIN);
  pulsPinLastState = digitalRead(PULSEPIN);
}

void loop() {
  boolean inDialPinState = digitalRead(INDIALPIN);
  boolean pulsPinState = digitalRead(PULSEPIN);
  if (inDialPinState != inDialPinLastState) {
    if (!inDialPinState) {
      Serial.println("Start of dial");
      counter = 0;
    } else {
      Serial.println("End of dial");
      Serial.print("Dialed Digit - ");
      Serial.println(counter);
      if (counter) {
        counter = counter % 10;
        lcd.print(counter);
      }
    } //end if
    inDialPinLastState = inDialPinState;
  } //end if
  if (pulsPinLastState != pulsPinState) {
    if (!pulsPinLastState) {
      counter++;
    } // end if
    Serial.println("pulsPinState - " + String(pulsPinState));
    pulsPinLastState = pulsPinState;
  }
}
