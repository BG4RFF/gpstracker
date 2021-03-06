#include <Arduino.h>

void on(int led) {
  digitalWrite(led, 1);
}

void off(int led) {
  digitalWrite(led, 0);
}

void flash(int led) {
  on(led);
  delay(30);
  off(led);
}

void blink(int led) {
  off(led);
  delay(30);
  on(led);
}
