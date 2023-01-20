#pragma once

class FanControl{
public:
  FanControl();
  void fan1On(int);
  void fan2On(int);
  void fan3On(int);
  void fan4On(int);
  void fan5On(int);
  void off();
private:
  int fan1;
  int fan2;
  int fan3;
  int fan4;
  int fan5;
};
