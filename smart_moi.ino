#include <Survo.h>

int touch_sensor = D2;
int servoPin = D5
Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  servo.attach(servoPin)
  pinMode(touch_sensor, INPUT)
}

void loop() {
  int touch_sensor_result = digitalRead(touch_sensor)

  servo.write(0)
  Serial.println(touch_sensor_result)
  
  if(touch_sensor_result == 1){
    servo.write(40)
    delay(2000)
  }
}
