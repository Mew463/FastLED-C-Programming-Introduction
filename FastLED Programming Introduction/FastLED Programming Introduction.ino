#include <FastLED.h>

#define LED_PIN    9 
#define NUM_LEDS   10
#define BRIGHTNESS 100
CRGB leds[NUM_LEDS];

void setup() { // Stuff in here runs once
  /* FIX ME: What code to enable the Serial monitor? */
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip ); // Initialize the led strip
  FastLED.setBrightness(100);                                                             // set the brightness (0 - 100)

  turnLedOn(CRGB::Blue, 5); // Example function call. 
   


}
void loop() { // Stuff in here runs forever
  
}





