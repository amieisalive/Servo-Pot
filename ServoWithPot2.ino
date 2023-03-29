
#include <Servo.h>
int val = 0;
int pot = 9;

void setup() {
myservo.attach(9);
}

void loop() {
val analogRead(pot);
val = map(val, 0, 1023, 0, 180);
myservo.write(val);
delay(15);
}
