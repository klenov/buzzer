# Buzzer

To use this library you need an arduibo board connected with piezoelectric buzzer.

Library provides two options to controll a buzzer:
1. `Buzz.play("^_^__^^")` will play two short beeps and one long beep. Play method accepts a string composed of `_`(silence) and `^`(beep). 

Complete example:
```Arduino
#include <Buzzer.h>

void setup() {
  Buzz.init(3); // assuming that your buzzer is connected to digital pin 3 (could be any digital pin)
  Buzz.play("^_^__^^");
}

void loop() {
}

```

2. Non-blocking method `Buzz.beep(1000)` will beep for 1 second but will NOT pause the execution.
```Arduino
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
```
