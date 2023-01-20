<<<<<<< HEAD
#include "Arduino.h"
#include "FanControl.h"

FanControl::FanControl() {
  fan1 = 3;
  fan2 = 5;
  fan3 = 6;
  fan4 = 9;
  fan5 = 10;
}

void FanControl::fan1On(int duty) {
  analogWrite(fan1, duty);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}

void FanControl::fan2On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, duty);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}

void FanControl::fan3On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, duty);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}

void FanControl::fan4On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, duty);
  analogWrite(fan5, 0);
}

void FanControl::fan5On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, duty);
}

void FanControl::off() {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}
=======
#include "Arduino.h"
#include "FanControl.h"

FanControl::FanControl() {
  fan1 = 3;
  fan2 = 5;
  fan3 = 6;
  fan4 = 9;
  fan5 = 10;
}

void FanControl::fan1On(int duty) {
  analogWrite(fan1, duty);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}

void FanControl::fan2On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, duty);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}

void FanControl::fan3On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, duty);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}

void FanControl::fan4On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, duty);
  analogWrite(fan5, 0);
}

void FanControl::fan5On(int duty) {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, duty);
}

void FanControl::off() {
  analogWrite(fan1, 0);
  analogWrite(fan2, 0);
  analogWrite(fan3, 0);
  analogWrite(fan4, 0);
  analogWrite(fan5, 0);
}
>>>>>>> e089bb7db33fb37cfc3facb48be4e2c05cdd71c3
