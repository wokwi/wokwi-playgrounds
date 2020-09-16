#include <EEPROM.h>

#define BUTTON_PIN 9
#define DEBOUNCE_TIME 50

struct UserData {
  bool firstTime;
  char name[32];
  long pressCounter;
  double buttonSeconds;
};

struct UserData userData;

void initUserData() {
  userData.firstTime = true;
  memset(userData.name, 0, sizeof(userData.name));
  userData.pressCounter = 0;
  userData.buttonSeconds = 0;
}

void saveUserData() {
  EEPROM.put(0, userData);
}

void inputUserName() {
  // Remove old data from the Serial input buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.println("Welcome to the Arduino EEPROM Playground!");
  Serial.println("Please type your name:");

  int inputChar = Serial.read();
  int index = 0;
  while (inputChar != '\n') {
    if (inputChar != -1 && index < sizeof(userData.name) - 1) {
      userData.name[index] = inputChar;
      index++;
    }
    inputChar = Serial.read();
  }
  userData.name[index] = '\0'; // End of string
  userData.firstTime = false;

  saveUserData();

  Serial.print("Nice to meet you, ");
  Serial.print(userData.name);
  Serial.println("!");

  Serial.println("Now, press the button...");
}

void greetUser() {
  Serial.print("Good you see you again, ");
  Serial.print(userData.name);
  Serial.println("!");

  Serial.println("To delete all data, write 'E'.");
}

void printButtonStats() {
  Serial.print("You pressed the button ");
  Serial.print(userData.pressCounter);
  Serial.print(" times, for a total of ");
  Serial.print(userData.buttonSeconds);
  Serial.println(" seconds.");
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(115200);

  EEPROM.get(0, userData);

  if (userData.firstTime) {
    initUserData();
    inputUserName();
  } else {
    greetUser();
    printButtonStats();
  }
}

bool buttonPressed() {
  return digitalRead(BUTTON_PIN) == LOW;
}

void loop() {
  // Wait for button press
  if (buttonPressed()) {
    long pressStartTime = millis();
    delay(DEBOUNCE_TIME); // Wait for the button to settle
    while (buttonPressed()); // and to be released...

    userData.pressCounter++;
    userData.buttonSeconds += (double)(millis() - pressStartTime) / 1000;
    saveUserData();

    printButtonStats();
  }

  if (Serial.available() && Serial.read() == 'E') {
    Serial.print("Erasing your data...");
    initUserData();
    saveUserData();
    Serial.println("DONE!");
    Serial.println("");

    // Now start from the beginning...
    inputUserName();
  }
}
