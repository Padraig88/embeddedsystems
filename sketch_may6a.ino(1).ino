// https://support.arduino.cc/hc/en-us/articles/360014654820-Use-the-built-in-sensors-on-Nano-33-BLE-Sense
#include <Arduino_LPS22HB.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial);
    

  if (!BARO.begin()) 
    Serial.println("Failed to initialize pressure sensor!");
    while (1);
      
  }

  void loop() {
    if (Serial.available()) {
      char chee = Serial.read();
      switch (chee) {
        
        case 'a':
          Serial.println("Case is a: accelerometer");

          break;
        case 'g':
          Serial.println("Case is g: gyroscope");

          break;
        case 'm':
          Serial.println("Case is m: magnetometer");

          break;
        case 't':
          Serial.println("Case is t: temperature");
          //float temperature = HTS.readTemperature();

          // print each of the sensor values
          Serial.print("Temperature = ");
          //Serial.print(temperature);
          Serial.println(" °C");
          break;
        case 'h':
          Serial.println("Case is h: humidity");

          break;
        case 'P':
          Serial.println("Case is p: pressure");
float pressure = BARO.readPressure();
Serial.println(pressure);
          break;
      }
    }
  }
