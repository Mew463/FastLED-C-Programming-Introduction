#include <FastLED.h>

#define LED_PIN    9 
#define NUM_LEDS   10
#define BRIGHTNESS 100
CRGB leds[NUM_LEDS];

void setup() { // Stuff in here runs once
  /* FIX ME: What code to  enable the Serial monitor? */
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip ); // Initialize the led strip
  FastLED.setBrightness(100);                                                             // set the brightness (0 - 100)

  turnLedOff(1);


}
void loop() { // Stuff in here runs forever
  
}

// Problem 1
int turnLedOff(int index) {
  leds[index] = CRGB::Black;  
  FastLED.show();         // <-- Very important and easy to forget!!!
  return index;
}

int turnLedOn(CRGB color, int index) {
  /* COMPLETE ME */
  
}

// Problem 2
void turnAllLedsOff() {
  for (int i = 0; i < NUM_LEDS; i++)
    // What should we put here to turn the led at index "i" off? 
  FastLED.show();
}

void turnAllLedsOn(CRGB color) {
  /* COMPLETE ME */
}

// Problem 3
void bouncePixel(CRGB color, int waitTime) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
    leds[i-1] = CRGB::Black;
    FastLED.show();
    delay(waitTime);
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



