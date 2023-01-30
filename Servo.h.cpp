#ifndef SERVO_H
#define SERVO_H

#include <cstdint>

class Servo {
public:
  Servo();
  ~Servo();
  void attach(int pin);
  void write(int angle);
  int read();
  void detach();

private:
  int pin_;
  int angle_;
};

#endif // SERVO_H
