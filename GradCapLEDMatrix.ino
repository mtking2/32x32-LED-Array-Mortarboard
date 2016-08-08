
#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

// If your 32x32 matrix has the SINGLE HEADER input,
// use this pinout:
#define CLK 11  // MUST be on PORTB! (Use pin 11 on Mega)
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

static RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data

#include "wcu.h"
#include "mario_new.h"
#include "pacman.h"
#include "link.h"
//#include "pong.h"
#include "metroid.h"
//#include "plasma.h"
#include "misc.h"

int toggle = 52;

void setup() {
  Serial.begin(9600);
  pinMode(toggle, INPUT);
  matrix.begin();
//  WCU_loop(300, 2);
//
//  clean();
//  delay(250);
//
//  marioLoop2(60);
//  clean();
//  delay(250);
  //delay(2000); 
  //loadMario(1);
}



void mainSeq() {
  WCU_loop(300, 2);
  clean();
  delay(250);
  //check();

  loadMisc(1);
  delay(6000);
  delay(250);
  //check();
  
  pacman_loop(15);
  delay(160);
  //check();
  
  clean();
  delay(250);
  //check();
  
//  plasma(6000);
//  clean();
//  delay(500);
  
//  clean();
//  delay(250);
  
  marioLoop(80, 10);
  clean();
  delay(250);
  //check();

  loadMario(4);
  delay(3000);
  
  clean();
  delay(250);

  metroidLoop(5, 15);

  clean();
  delay(250);

  linkLoop(150, 15);
  //check();

  loadLink(2);
  delay(4000);

   //
  clean();
  delay(500);
  loadMisc(2);
  delay(500);
  google(500);

  back_and_fourth(500);
  
  clean();
  delay(2000);
  loadMisc(0);
  delay(300);
  clean();
  delay(500);
  //check();

  
  //circleZoom(50);
  //colorwheel();

 
}


static void clean() {
  // fill the screen with 'black'
  matrix.fillScreen(0);
  //delay(500);
}

void loop() {
  check();
  mainSeq();
  check();


//Serial.println(digitalRead(toggle));
//  loadMisc(1);
//  delay(6000);
//  delay(250);
//  check();
  //majors(500);
  
//  clean();
//  delay(500);
//  loadMisc(2);
//  delay(500);
//  google(500);

  //google(500);
//  majors(500);
  //back_and_fourth(500);
  //Serial.println(digitalRead(52));
  //linkLoop(150, 15);
  //pong(20);
  //mario_loop(5, 60);
  //marioLoop(100, 10);
  //marioLoop3(60);
}

void check() {
  while(digitalRead(toggle)==HIGH) {
    WCU_loop2(500, 1);
  }
}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
/*//




/*
void loadBitmap() {
  uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  memcpy_P(ptr, bmp, sizeof(bmp));
  
  // update oldColor before the loop() redraws our cursor.
  //oldColor = getPixelColor(cursorX, cursorY);  
}
*/




////////////////////////////////////////////////////////////////////////////////////////////




