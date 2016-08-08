
#include "pacmanBMPS.h"

void load_pacman(int arg) {
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  //uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  switch (arg) {
    case 0: 
      memcpy_P(ptr, pacman, sizeof(pacman));
      break;
    case 1:
      memcpy_P(ptr, pacman1, sizeof(pacman1));
      break;
    case 2:
      memcpy_P(ptr, pacman2, sizeof(pacman2));
      break;
    case 3:
      memcpy_P(ptr, pacman3, sizeof(pacman3));
      break;
    case 4:
      memcpy_P(ptr, pacman4, sizeof(pacman4));
      break;
    case 5:
      memcpy_P(ptr, pacman5, sizeof(pacman5));
      break;
    case 6:
      memcpy_P(ptr, pacman6, sizeof(pacman6));
      break;
    //default:
    //  clean();
    //  break;
  }
}

void pacman_loop(int count) {
  for (int c=0; c<count;c++) {
    for (int i=0; i<7; i++) {
      load_pacman(i);
      matrix.drawRect(28-(i+6), 14, 2, 4, matrix.Color333(5, 5, 5));
      matrix.drawRect(27-(i+6), 15, 4, 2, matrix.Color333(5, 5, 5));
      matrix.drawRect(40-(i+6), 14, 2, 4, matrix.Color333(5, 5, 5));
      matrix.drawRect(39-(i+6), 15, 4, 2, matrix.Color333(5, 5, 5));
      delay(20);
    }
    for (int i=6,j=13; i>=0; i--,j++) {
      load_pacman(i);
      matrix.drawRect(41-j, 14, 2, 4, matrix.Color333(5, 5, 5));
      matrix.drawRect(40-j, 15, 4, 2, matrix.Color333(5, 5, 5));
      delay(20);
    }
  }
}
