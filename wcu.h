#include "wcuBMPS.h"

void loadWCU(int arg) {
  uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  switch (arg) {
    case 0: 
      memcpy_P(ptr, W, sizeof(W));
      break;
    case 1:
      memcpy_P(ptr, WC, sizeof(WC));
      break;
    case 2:
      memcpy_P(ptr, WCU, sizeof(WCU));
      break;
    case 3:
      memcpy_P(ptr, wcu_black, sizeof(wcu_black));
      break;
    case 4:
      memcpy_P(ptr, wcu_purple, sizeof(wcu_purple));
      break;
  }
}

void WCU_loop(int del, int count) {
  
  for (int i=0; i<count; i++) {
    matrix.fillRect(0, 0, 32, 32, matrix.Color333(0, 0, 0));
    delay(del*2);
    loadWCU(0);
    delay(del);
    loadWCU(1);
    delay(del);
    loadWCU(2);
    delay(del);
    loadWCU(3);
    delay(del);
    loadWCU(4);
    delay(del);
  
    loadWCU(3);
    delay(del);
    loadWCU(4);
    delay(del);
  
//    loadWCU(3);
//    delay(del);
//    loadWCU(4);
//    delay(del);
  
    loadWCU(3);
    delay(del);
    loadWCU(4);
    delay(2500);
  }
  
}


void WCU_loop2(int del, int count) {
  
  for (int i=0; i<count; i++) {
    matrix.fillRect(0, 0, 32, 32, matrix.Color333(0, 0, 0));
    delay(del*2);
    loadWCU(0);
    delay(del);
    loadWCU(1);
    delay(del);
    loadWCU(2);
    delay(del);
    loadWCU(3);
    delay(del);

    loadWCU(3);
    delay(15000);
  }
  
}


