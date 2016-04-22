#include "Buzzer.h"

//  "^^__^^___"

Buzzer::Buzzer() :
will_turn_off_at(0),
state(0)
{ }

void Buzzer::init( uint8_t buzzer_pin, uint16_t s_duration ) {
  _buzzer_pin = buzzer_pin;
  _s_duration = s_duration;
  pinMode(_buzzer_pin, OUTPUT);
}

void Buzzer::turnOn() {
  digitalWrite(_buzzer_pin, HIGH);
  state = 1;
}

void Buzzer::turnOff() {
  digitalWrite(_buzzer_pin, LOW);
  state = 0;
}

void Buzzer::beep(uint32_t duration) {
  will_turn_off_at = millis() + duration;
  turnOn();
}

void Buzzer::update() {
  if(state && millis() > will_turn_off_at ) {
    turnOff();
  }
}

void Buzzer::decode(char symbol) {

  if( symbol == '^' ) {
    turnOn();  
  }

  if( symbol == '_' ) {
    turnOff();  
  }

}

void Buzzer::play(const char* pattern) {

  for(uint16_t i=0; i < strlen(pattern); i++ ) {

    decode( pattern[i] );
    delay(_s_duration);

  }

  turnOff();

}

Buzzer Buzz = Buzzer();
