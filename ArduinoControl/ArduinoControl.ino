#include "FanControl.h"

FanControl fanControl = FanControl();

int inputchar;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  inputchar = Serial.read(); //シリアル通信で送信された値を読み取る
  //入力があった時
  if(inputchar!=-1){
    switch(inputchar){
      case '1':
        fanControl.fan1On(255);
        break;
      case '2':
        fanControl.fan2On(255);
        break;
      case '3':
        fanControl.fan3On(255);
        break;
      case '4':
        fanControl.fan4On(255);
        break;
      case '5':
        fanControl.fan5On(255);
        break;
      case '0':
        fanControl.off();
        break;
    }
  }
}
