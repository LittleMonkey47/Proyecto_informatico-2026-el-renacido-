#include <Adafruit_NeoPixel.h>

#define pin 6
#define cantidad 6
#define Fot A1
int luz;
Adafruit_NeoPixel leds(cantidad, pin, NEO_GRB + NEO_KHZ800);

void setup()
{
 leds.begin();
 leds.show();
  
}

void loop()
{
  luz = analogRead(Fot);

  luz = map(luz, 713, 1022, 0, 100);

  leds.show();
  leds.clear();
  delay(500);
   if (luz > 30)
  {
       leds.show();
       leds.setPixelColor(0, 0, 255, 0);
      
     if (luz > 31)
     {
       leds.show();
       leds.setPixelColor(1, 255, 255, 0);
       leds.setPixelColor(2, 255, 255, 0);
       leds.setPixelColor(3, 255, 255, 0);
     }
  }
       
 
     
   

  

}