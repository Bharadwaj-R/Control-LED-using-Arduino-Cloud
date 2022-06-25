#include "arduino_secrets.h"
#include "thingProperties.h"

void setup() 
{
  pinMode(16, OUTPUT);
  Serial.begin(9600);
  delay(1500); 
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}


void loop() 
{
  ArduinoCloud.update();
}


void onLedChange()  
{
  if(led)
  {
    digitalWrite(16, HIGH);
  }
  else
  {
    digitalWrite(16, LOW);
  }
}
