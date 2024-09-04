#include <TFT_eSPI.h>
#include "bitmap.h" 

TFT_eSPI tft = TFT_eSPI(); 

 
void setup() {
  Serial.begin(115200);

  tft.begin();
  tft.setSwapBytes(true); 

  tft.fillScreen(TFT_BLACK);
  tft.pushImage(0,0,240,240,Babak2);
}

void loop() {

}
