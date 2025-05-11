// https://support.arduino.cc/hc/en-us/articles/360014654820-Use-the-built-in-sensors-on-Nano-33-BLE-Sense
#include <Arduino_LPS22HB.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial);
  }  


  void loop() {
 
  if (!BARO.begin()){ 
    Serial.println("Failed to initialize pressure sensor!");
    while (1);
      }
 
 
 float pressure = BARO.readPressure();
          Serial.println(" kpa pressure ");
          Serial.print(pressure);


 
 delay(2000);
  }
