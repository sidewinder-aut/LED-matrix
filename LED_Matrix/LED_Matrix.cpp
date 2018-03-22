#include <Wire.h>
#include <Adafruit_NeoPixel.h>

// Define output pins for LED strips
#define pin_for_strip_1   6
Adafruit_NeoPixel strip_1 = Adafruit_NeoPixel(10, pin_for_strip_1, NEO_GRB + NEO_KHZ800);


void setup() {
    // Start serial output
    Serial.begin(9600);

    // LED strip setup
    strip_1.begin();
    strip_1.show(); // Initialize all pixels to 'off'
}


void loop() {
  for(int i=0; i<10; i++){
    if(i<3){
      strip_1.setPixelColor(i, strip_1.Color(0,0,125));
      strip_1.show();
    }
    if(i>=3 && i<6){
      strip_1.setPixelColor(i, strip_1.Color(0,125,0));
      strip_1.show();
    }
    if(i>=6 && i<10 ){
      strip_1.setPixelColor(i, strip_1.Color(125,0,0));
      strip_1.show();
    }
    delay(1000);
  }
}
