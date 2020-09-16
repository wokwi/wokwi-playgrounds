#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "gift.h"
#include "pitches.h"

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

//notes in the melody
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_G4, NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_F4
};

//note durations: 4 = quarter note, 8 = eight note, etc.
int noteDurations[] = {
  8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 2,
};

int frame = 0;
String message = "Happy Birthday, Karin";
int messageIndex = 0;

void drawFrame() {
  display.clearDisplay();
  display.drawBitmap(40, 0, gift_frames[frame], GIFT_FRAME_WIDTH, GIFT_FRAME_HEIGHT, 1);
  display.setCursor(0, 52);
  display.print(message.substring(0, messageIndex));
  display.display();
  frame = (frame + 1) % GIFT_FRAME_COUNT;
  if (frame % 3 == 0) {
    messageIndex = (messageIndex + 1) % 40;
  }
}

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);
  display.setTextColor(SSD1306_WHITE);

  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);

  for (int thisNote = 0 ; thisNote < 25 ; thisNote++) {
    int randomLight1 = random(9, 12);
    int randomLight2 = random(9, 12);
    int randomLight3 = random(9, 12);

    digitalWrite (randomLight1, HIGH);
    digitalWrite (randomLight2, HIGH);
    digitalWrite (randomLight3, LOW);

    int noteDuration = 1130 / noteDurations[thisNote];
    tone (6, melody[thisNote], noteDuration);
    int pause = noteDuration * 1.275;
    delay (pause);
    noTone(6);

    drawFrame();
  }

  delay(3000);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void loop() {
  drawFrame();
  delay(GIFT_FRAME_DELAY);
}
