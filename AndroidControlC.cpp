#include <Servo.h>
#include <Servo.h>

int main() {
  Servo servo;
  servo.attach(9);
  servo.write(180);
  ...
  return 0;
}

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

int basePos = 90;
int shoulderPos = 90;
int elbowPos = 90;
int gripperPos = 90;

void setup() {
  baseServo.attach(9);
  shoulderServo.attach(10);
  elbowServo.attach(11);
  gripperServo.attach(12);
}

void loop() {
  baseServo.write(basePos);
  shoulderServo.write(shoulderPos);
  elbowServo.write(elbowPos);
  gripperServo.write(gripperPos);
}
