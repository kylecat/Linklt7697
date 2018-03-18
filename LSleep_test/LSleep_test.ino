#include "LSleep.h"

LSleepClass Sleep;
int count = 0;

void setup() {
  Serial.begin(9600);
  Sleep.init();
  Sleep.setTime(10000);
  Sleep.setMode(3);
  Serial.println(F("睡覺測試"));
  Sleep.sleep();
  Serial.println(F("起床"));
}

void loop() {
  unsigned long _t = millis();

  Serial.print(F("睡覺Loop:("));
  Serial.print(count);
  Serial.println(")");
  Sleep.sleep();
  Serial.println(F("起床"));

  Serial.print(F("睡眠時間: "));
  float Duration = (millis() - _t) / 1000;
  Serial.print(Duration);
  Serial.println(F("s"));

  Serial.println(F("*****************"));
  Serial.println();
  count++;
}
