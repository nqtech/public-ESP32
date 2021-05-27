#define FASTLED_RMT_MAX_CHANNELS 1
#include <FastLED.h>
#define LEDCHAIN 13
#define NUM_LEDS 100 
CRGB leds[NUM_LEDS];


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
FastLED.addLeds<NEOPIXEL , LEDCHAIN>(leds, NUM_LEDS); 
Serial.println("LED Cleared");
}

void loop() {
  // put your main code here, to run repeatedly:
 colorWipe(192, 0, 0, 2); // Red
   delay(330);
  colorWipe(0, 0, 192, 2); //
 delay(330);
  colorWipe(0, 192, 0, 2); 
delay(330);
  
  

}


void colorWipe(uint8_t R,uint8_t G,uint8_t B , uint8_t wait) {
  
  if(wait < 1)
  {
    wait = 1;
  }
  for(uint16_t i=0; i<NUM_LEDS; i++) {
      leds[i] = CRGB(R,G,B);
     
     
  }
   FastLED.show();
      delay(wait);   
}
