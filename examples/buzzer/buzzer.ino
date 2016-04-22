/*
   Buzzer Library - Example
   https://github.com/klenov/buzzer
*/

#include <Buzzer.h>

void setup() {
  
  Buzz.init(3); // any digital pin number

  Buzz.play("^_^__^^");

  // Buzz.beep(1000); // non-blocking variant
}

void loop() {  
  // Buzz.update();
}
