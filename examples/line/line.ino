#include <Linefollower.h>

Linefollower sensor(1,2,3,4,5,6,7,8,9,10,11,12);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

sensor.line();
}
