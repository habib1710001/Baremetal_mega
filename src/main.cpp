#include <Arduino.h>
#include <stdint.h>

#define MASK(x)(uint8_t(1) << x)
#define BPORTB *((volatile uint8_t*) 0x25)
#define BDDRB *((volatile uint8_t*) 0x24)

void setup(){
  BDDRB |= MASK(7);
}
void loop(){
     BPORTB |= MASK(7);
     delay(1000);
     BPORTB &= ~MASK(7);
     delay(500);
}