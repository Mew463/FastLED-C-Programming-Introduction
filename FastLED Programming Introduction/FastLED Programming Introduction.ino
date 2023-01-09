#include <FastLED.h>

#define LED_PIN    9 
#define NUM_LEDS   10
#define BRIGHTNESS 100
CRGB leds[NUM_LEDS];

void setup() { // Stuff in here runs once
  Serial.begin(9600);/* FIX ME: What code to enable the Serial monitor? */

  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip ); // Initialize the led strip
  FastLED.setBrightness(100);                                                             // set the brightness (0 - 100)

  // Problem 1
  turnLedOn(CRGB::Blue, 0); 
  turnLedOn(CRGB::Red, 9); 
  delay(1000);
  turnLedOff(0);
  turnLedOff(9);
  delay(500);

  //Problem 2
  turnLedOn(CRGB::Red, 9);
  delay(500);
  turnAllLedsOff();
  delay(500);
  turnAllLedsOn(CRGB::Red);
   

}
void loop() { // Stuff in here runs forever
  // Problem 3
  bouncePixel(CRGB::White, 50);  
}





