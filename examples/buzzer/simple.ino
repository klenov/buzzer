/*
   Buzzer Library - Example
   https://github.com/klenov/buzzer
*/

#include <Buzzer.h>

void setup() {
  
  Buzz.init(3); // if your buzzer connected to digital pin 3 (could be any digital pin)
  Buzz.play("^_^__^^");
}

void loop() {
}
