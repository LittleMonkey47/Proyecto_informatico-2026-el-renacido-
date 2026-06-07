#include <Adafruit_NeoPixel.h>

#define PIN 6
#define CANTIDAD 12

Adafruit_NeoPixel leds(CANTIDAD, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  leds.begin();
  leds.show();
}

void loop()
{
  leds.clear();

  leds.setPixelColor(0, 255, 0, 0);
  leds.setPixelColor(2, 255, 0, 0);
  leds.setPixelColor(4, 255, 0, 0);
  leds.setPixelColor(6, 255, 0, 0);
  leds.setPixelColor(8, 255, 0, 0);
  leds.setPixelColor(10, 255, 0, 0);

  leds.show();
  delay(500);

  leds.clear();
  leds.show();
  delay(500);

  leds.setPixelColor(1, 0, 0, 255);
  leds.setPixelColor(3, 0, 0, 255);
  leds.setPixelColor(5, 0, 0, 255);
  leds.setPixelColor(7, 0, 0, 255);
  leds.setPixelColor(9, 0, 0, 255);
  leds.setPixelColor(11, 0, 0, 255);

  leds.show();
  delay(500);

  leds.clear();
  leds.show();
  delay(500);

  leds.setPixelColor(0, 0, 255, 0);
  leds.setPixelColor(2, 0, 255, 0);
  leds.setPixelColor(4, 0, 255, 0);
  leds.setPixelColor(6, 0, 255, 0);
  leds.setPixelColor(8, 0, 255, 0);
  leds.setPixelColor(10, 0, 255, 0);

  leds.show();
  delay(500);

  leds.clear();
  leds.show();
  delay(500);

  leds.setPixelColor(1, 255, 255, 0);
  leds.setPixelColor(3, 255, 255, 0);
  leds.setPixelColor(5, 255, 255, 0);
  leds.setPixelColor(7, 255, 255, 0);
  leds.setPixelColor(9, 255, 255, 0);
  leds.setPixelColor(11, 255, 255, 0);

  leds.show();
  delay(500);

  leds.clear();
  leds.show();
  delay(500);
}