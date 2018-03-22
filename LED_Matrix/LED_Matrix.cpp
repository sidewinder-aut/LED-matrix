#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_NeoPixel.h>


// Define output pins for LED strips
#define pin_for_strip_1 	6
#define pin_for_strip_2 	7

// Define the two strips (strip objects)
Adafruit_NeoPixel strip_1 = Adafruit_NeoPixel(10, pin_for_strip_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_2 = Adafruit_NeoPixel(10, pin_for_strip_2, NEO_GRB + NEO_KHZ800);


void setup() {

	  // Start serial output
	  Serial.begin(9600);


	  // LED strip setup
	  strip_1.begin();
	  strip_1.show(); // Initialize all pixels to 'off'
	  strip_2.begin();
	  strip_2.show();
}

void loop() {
	for(int i=0; i<10; i++){
		strip_1.setPixelColor(i, strip_1.Color(125,0,0));
		strip_1.show();
		strip_2.setPixelColor(i, strip_2.Color(0,125,0));
		strip_2.show();
		delay(1000);
	}
}
