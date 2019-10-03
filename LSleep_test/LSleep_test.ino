#include "LSleep.h"

LSleepClass Sleep;
int count = 0;


void enterSleep(int _ms, int _mode)
{
  float _sleepTime = _ms * 0.001;
  Sleep.init(true);
  Sleep.setTime(_ms);       // 設定時間
  Sleep.setMode(_mode);     // 睡眠模式：0 不睡；1 待機狀態；2 wifi睡眠狀態；3 傳統睡眠狀態
  Serial.print("晚安(");
  Serial.print(_sleepTime, 3);
  Serial.println(" s)");
  Sleep.sleep();
  Serial.println("起床");
}

void setup() {
  Serial.begin(9600);  
  enterSleep(10,3);
}

void loop() 
{
}
