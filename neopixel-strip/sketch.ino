#include <Adafruit_NeoPixel.h>

#define PIN        6
#define NUMPIXELS  8

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

int r = 150;
int g = 0;
int b = 0;

void loop() {
  pixels.clear();

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, r, g, b);
    pixels.show();
    delay(200);
  }

  int temp = b;
  b = g;
  g = r;
  r = temp;
}
