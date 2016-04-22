
#ifndef BUZZER_H
#define BUZZER_H

#include <inttypes.h>
#include <Arduino.h>

class Buzzer {
public:
  Buzzer();

  void init(uint8_t, uint16_t s_duration = 100);

  void turnOn(void);
  void turnOff(void);
  void beep(uint32_t);

  void update();

  void decode(char);
  void play(const char*);

private:
  uint8_t    _buzzer_pin;
  uint16_t   _s_duration;
  uint8_t    state;
  uint32_t   will_turn_off_at;
};

extern Buzzer Buzz;
#endif