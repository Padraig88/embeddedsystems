
#include <Arduino_LSM9DS1.h>


float calculateAngle(float x, float y, float z) {

  float angle = 0;

  angle = atan(x / sqrt(y * y + z * z));

  angle = (angle * 180) / M_PI;

  //your code here

  return angle;
}



void setup() {
  Serial.begin(9600);
  while (!Serial)
    ;
  Serial.println("Started");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1)
      ;
  }

  Serial.print("Accelerometer sample rate = ");
  Serial.print(IMU.accelerationSampleRate());
  Serial.println("Hz");
}
void loop() {

  float x, y, z;

  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);

    float res = calculateAngle(x, y, z);

    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
    Serial.print('\t');
    Serial.println(res);
  }
  delay(1000);
}
