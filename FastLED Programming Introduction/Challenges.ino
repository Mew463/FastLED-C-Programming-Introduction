// ----- Problem 1 -----
void turnLedOn(CRGB color, int index) {
  leds[index] = color;
  FastLED.show();   // <-- Very important and easy to forget!!!
}

void turnLedOff(int index) {
  leds[index] = CRGB::Black;
  FastLED.show();   // <-- Very important and easy to forget!!!
}

// ----- Problem 2 -----
void turnAllLedsOff() {
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = CRGB::Black;
  FastLED.show();
}

void turnAllLedsOn(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = color;
  FastLED.show();
}

// ----- Problem 3 -----
void bouncePixel(CRGB color, int waitTime) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;     // set led to the given color 
    FastLED.show(); // display the color onto the strip
    delay(waitTime); // wait the given amount of time
    leds[i] = CRGB::Black; // set led back to the color black
  }

  for (int i = NUM_LEDS-1; i > 0; i--) {
    leds[i] = color;     // set led to the given color 
    FastLED.show(); // display the color onto the strip
    delay(waitTime); // wait the given amount of time
    leds[i] = CRGB::Black; // set led back to the color black
  }

}