
#include "metroidBMPS.h"

void loadMetroid(int arg) {
  //uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  switch (arg) {
    case 0: 
      memcpy_P(ptr, samus_standing, sizeof(samus_standing));
      break;
    case 1:
      memcpy_P(ptr, metroid_side1, sizeof(metroid_side1));
      break;
    case 2:
      memcpy_P(ptr, samus_crouch, sizeof(samus_crouch));
      break;
    case 3:
      memcpy_P(ptr, samus_fire1, sizeof(samus_fire1));
      break;
    case 4:
      memcpy_P(ptr, samus_fire2, sizeof(samus_fire2));
      break;
    //default:
    //  clean();
    //  break;
  }
}

void metroidLoop(int del, int c) {
  int x=16, y=12;
  loadMetroid(0);
  delay(1000);
  loadMetroid(1);
  delay(500);
  for (int i=0; i<c; i++) {
    matrix.drawRect(x, y, 1, 2, matrix.Color333(5, 5, 5));
    delay(del);
    
    for (int j=x; j<34; j++) {  
      matrix.drawRect(j, y, 3, 2, matrix.Color333(5, 5, 5));
      delay(del);
      loadMetroid(1);
    }
  }

  y=19;
  delay(500);
  loadMetroid(2);
  delay(500);
  
  for (int i=11; i>=0; i--) {  
    matrix.drawCircle(x, y, i, matrix.Color333(5, 5, 5));
    delay(del*4);
    loadMetroid(2);
  }

  for (int i=0; i<8; i++) {
    for (int j=11; j>=0; j--) {  
      matrix.drawCircle(x, y, j, matrix.Color333(5, 5, 5));
      matrix.fillCircle(x, y, i, matrix.Color333(1, 2, 5));
      delay(del*4);
      loadMetroid(2);
    }     
  }

  ////////////////////////////////////////////////////////
  // Start plasma ball peak charge
  ////////////////////////////////////////////////////////
  for (int i=0; i<6; i++) {
    for (int j=0; j<6; j++) {
      matrix.drawCircle(x, y, j, matrix.Color333(5, 2, 1));
      matrix.fillCircle(x, y, 8, matrix.Color333(1, 2, 5));
      delay(del*5);
      loadMetroid(2);
    }
  }

  for (int i=8; i>=0; i--) {  
    matrix.fillCircle(x, y, i, matrix.Color333(1, 2, 5));
    delay(del*8);
    loadMetroid(2);
  }
  
  y=12;
  delay(500);
  loadMetroid(1);
  delay(500);


   ////////////////////////////////////////////////////////
  // Start gun blink
  ////////////////////////////////////////////////////////
  for (int i=0; i<3; i++) {
    for (int i=0; i<4; i++) {  
      matrix.drawCircle(x, y, i, matrix.Color333(5, 5, 5));
      delay(del*4);
      loadMetroid(1);
    }
    for (int i=0; i<4; i++) {  
      matrix.drawCircle(x, y, i, matrix.Color333(5, 5, 5));
      delay(del*4);
      loadMetroid(1);
    }
    delay(1000);
  }


  ////////////////////////////////////////////////////////
  // Start fire plasma ball annimation
  ////////////////////////////////////////////////////////
  for (int i=0; i<7; i++) { 
    x = x>4 == 1 ? x++: x;
    matrix.fillCircle(x, y, i, matrix.Color333(1, 2, 5));
    delay(del-5);
    if (i==5 || i==6) {loadMetroid(3);delay(del);}
    else loadMetroid(1);
    
  }
  matrix.fillCircle(++x, y, 6, matrix.Color333(1, 2, 5));
  delay(del-5);
  loadMetroid(4);
  matrix.fillCircle(++x, y, 6, matrix.Color333(1, 2, 5));
  delay(del);
  x++;
  
  for (int i=x; i<40; i++) {
    matrix.fillCircle(i, y, 6, matrix.Color333(1, 2, 5));
    delay(del-5);
    if (i>=x&&i<(x+2)) {
      loadMetroid(3);
      matrix.fillCircle(i, y, 6, matrix.Color333(1, 2, 5));
      delay(30);}
    else {loadMetroid(1);}
  }
  delay(1500);
  loadMetroid(0);
  delay(1000);
}

