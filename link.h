#include "linkBMPS.h"

void loadLink(int arg) {
  
  switch (arg) {
    case 0: 
      memcpy_P(ptr, link1, sizeof(link1));
      break;
    case 1: 
      memcpy_P(ptr, link2, sizeof(link2));
      break;
    case 2: 
      memcpy_P(ptr, triforce, sizeof(triforce));
      break;
    
  }

}

void linkLoop(int del, int count) {
  loadLink(0);
  delay(1500);

  for (int i=0; i<count; i++) { 
    loadLink(1);
    delay(del);
    loadLink(0);
    delay(del);
  }
  delay(1500);
  
}

