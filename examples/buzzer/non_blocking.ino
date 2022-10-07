/*
   Buzzer Library - Example
   https://github.com/klenov/buzzer
*/

#include <Buzzer.h>

void setup() {
  Buzz.init(3); // any digital pin number
}

void loop() {
  // other staff...

  Buzz.beep(1000); // non-blocking variant, will NOT pause the execution for beep
  Buzz.update();

  // other staff...
}
