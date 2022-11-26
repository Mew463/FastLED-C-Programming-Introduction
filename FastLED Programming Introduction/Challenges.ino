// ----- Problem 1 -----
void turnLedOn(CRGB color, int index) {
  leds[index] = color;
  FastLED.show();   // <-- Very important and easy to forget!!!
}

void turnLedOff(int index) {
  /* COMPLETE ME */
}

// ----- Problem 2 -----
void turnAllLedsOff() {
  for (int i = 0; i < NUM_LEDS; i++)
    // What should we put here to turn the led at index "i" off? 
  FastLED.show();
}

void turnAllLedsOn(CRGB color) {
  /* COMPLETE ME */
}

// ----- Problem 3 -----
void bouncePixel(CRGB color, int waitTime) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
    FastLED.show();
    delay(waitTime);
    leds[i] = CRGB::Black;
  }

  /* FINISH ME */

}

// Optional Problems
void makeRainbow(int delayTime) {
  static uint8_t starthue = 0;
  delay(delayTime);
  fill_rainbow(leds, NUM_LEDS, starthue++, 4);
  FastLED.show();
  
}