#include <Arduino_LPS22HB.h>
#include <Arduino_LSM9DS1.h>
#include <Arduino_HTS221.h>

void setup() {
  Serial.begin(9600);
  while (!Serial)
    ;
  // put your setup code here, to run once:
  //setup sensors here...
  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1)
      ;
  }
  if (!BARO.begin()) {
    Serial.println("Failed to initialize pressure sensor!");
    while (1)
      ;
  }
  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
    while (1)
      ;
  }
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
    }

    
      float temperature = HTS.readTemperature();

      // print each of the sensor values
      Serial.print("Temperature = ");
      Serial.print(temperature);
      Serial.println(" °C");
    }


    break;
    case 'h':
      Serial.println("Case is h: humidity");
  }
  void loop() {
    // read all the sensor values
    float humidity = HTS.readHumidity();
  }
  {

    old_hum = humidity;
    // print each of the sensor values

    Serial.print("Humidity    = ");
    Serial.print(humidity);
    Serial.println(" %");
    Serial.println();
  }

  break;
  case 'p':
    Serial.println("Case is p: pressure");
    break;
    void setup() {
      Serial.begin(9600);
      while (!Serial)
        ;

      if (!BARO.begin()) {
        Serial.println("Failed to initialize pressure sensor!");
        while (1)
          ;
      }
    }

    void loop() {
      // read the sensor value
      float pressure = BARO.readPressure();


      float altitude = 44330 * (1 - pow(pressure / 101.325, 1 / 5.255));


      // print the sensor value
      Serial.print("Altitude according to kPa is = ");
      Serial.print(altitude);
      Serial.println(" m");

      // print an empty line
      Serial.println();

      // wait 1 second to print again
      delay(1000);
    }
}
}
}
