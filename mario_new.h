#include "marioBMPS_NEW.h"

void loadMario(int arg) {
  
  switch (arg) {
    case 0: 
      memcpy_P(ptr, mario_standing, sizeof(mario_standing));
      break;
    case 1: 
      memcpy_P(ptr, mario_walk1, sizeof(mario_walk1));
      break;
    case 2: 
      memcpy_P(ptr, mario_walk2, sizeof(mario_walk2));
      break;
    case 3: 
      memcpy_P(ptr, mario_walk3, sizeof(mario_walk3));
      break;
    case 4: 
      memcpy_P(ptr, box32, sizeof(box32));
      break;
    
  }

}

void marioLoop(int del, int count) {

  loadMario(0);
  delay(1500);

  for (int i=0; i<count; i++) {
    loadMario(1);
    delay(del);
    loadMario(2);
    delay(del);
    loadMario(3);
    delay(del);
    loadMario(2);
    delay(del);
  }
  loadMario(1);
  delay(del);
  loadMario(0);
  delay(1500);
}

