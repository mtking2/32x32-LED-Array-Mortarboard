
void pong_reload(int scoreL, int scoreR) {
  //matrix.fillRect(0, 0, 32, 32, matrix.Color333(0, 0, 0));
  for (int i=0; i<33; i+=2) {
    matrix.drawPixel(16, i, matrix.Color333(7, 7, 7)); 
  }
  matrix.setTextSize(1);  
  matrix.setTextColor(matrix.Color333(2,2,2));
  

//  for (int i=0; i<5; i++) {
//    matrix.setCursor(19, 0);
//    matrix.println("0");
//  }
  

  matrix.setCursor(9, 0);    // start at top left, with one pixel of spacing
  
  matrix.println(String(scoreL));

  matrix.setCursor(19, 0);
  matrix.println(String(scoreR));
  
  //matrix.fillRect(16, 0, 1, 32, matrix.Color333(2, 2, 2));
  
}

void pong(int del) {
  int x=15, y=10, scoreL=0, scoreR=0;
  pong_reload(scoreL, scoreL);

  int padL = 10;
  int padR = 15;
  boolean leftTog = false, rightTog = false;
  boolean yTog = false;
  matrix.fillRect(0, padL, 2, 10, matrix.Color333(2, 2, 2));
  matrix.fillRect(30, padR, 2, 10, matrix.Color333(2, 2, 2));

  
  delay(2000);

  for (int i=0; scoreL<3 && scoreR<3; i++) {
    matrix.fillRect(x, y, 2, 2, matrix.Color333(2, 2, 2));
    delay(del*2);
    matrix.fillRect(x, y, 2, 2, matrix.Color333(0, 0, 0));
    pong_reload(scoreL, scoreL);

    x--; y++;
    
    if (x<0) { 
      scoreL++;
      matrix.fillRect(9, 0, 5, 8, matrix.Color333(0, 0, 0));
      pong_reload(scoreL, scoreR);
      x=15; y=10;
    }
    if (x>31) {
      scoreR++;
      matrix.fillRect(19, 0, 5, 8, matrix.Color333(0, 0, 0));
      pong_reload(scoreL, scoreR);
      x=15; y=10;
    }

    matrix.fillRect(0, padL, 2, 10, matrix.Color333(0, 0, 0));
    matrix.fillRect(30, padR, 2, 10, matrix.Color333(0, 0, 0));

    if (padL==22) leftTog = true;
    if (padL==0) leftTog = false;
    if (padR==0) rightTog = true;
    if (padR==22) rightTog = false;
  
    if (leftTog) padL--;
    else padL++;

    if (rightTog) padR++;
    else padR--;
    matrix.fillRect(0, padL, 2, 10, matrix.Color333(2, 2, 2));
    matrix.fillRect(30, padR, 2, 10, matrix.Color333(2, 2, 2));
    delay(del);
  }
}

