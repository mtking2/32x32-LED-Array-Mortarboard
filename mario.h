
#include "marioBMPS.h"

//void marioLoop(int del) {
//    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
//    memcpy_P(ptr, mario_standing, sizeof(mario_standing));
//    delay(1000);
//    
//    memcpy_P(ptr, mario1, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario2, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario3, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario4, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario5, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario6, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario7, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario8, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario9, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario10, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario11, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario12, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario13, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario14, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario15, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario16, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario17, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario18, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario19, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario20, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario21, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario22, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario23, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario24, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario25, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario26, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario27, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario28, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario29, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario30, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario31, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario32, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario33, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario34, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario35, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario36, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario37, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario38, sizeof(mario1));
//    delay(del);
//    memcpy_P(ptr, mario39, sizeof(mario1));
//    delay(del);
////    memcpy_P(ptr, mario40, sizeof(mario1));
////    delay(del);
//    matrix.swapBuffers(true);
//    matrix.updateDisplay();
//    memcpy_P(ptr, mario41, sizeof(mario1));
//    delay(del);
////    memcpy_P(ptr, mario42, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario43, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario44, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario45, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario46, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario47, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario48, sizeof(mario1));
////    delay(del);
////    memcpy_P(ptr, mario49, sizeof(mario1));
////    delay(del);
//    
//    
//      
//}


void loadMario(int arg) {
  uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
  switch (arg) {
    case 0: 
      memcpy_P(ptr, mario_standing, sizeof(mario_standing));
      break;
    case 1:
      memcpy_P(ptr, mario1, sizeof(mario1));
      break;
    case 2:
      memcpy_P(ptr, mario2, sizeof(mario2));
      break;
    case 3:
      memcpy_P(ptr, mario3, sizeof(mario3));
      break;
    case 4:
      memcpy_P(ptr, mario4, sizeof(mario4));
      break;
    case 5:
      memcpy_P(ptr, mario5, sizeof(mario5));
      break;
    case 6:
      memcpy_P(ptr, mario6, sizeof(mario6));
      break;
    case 7:
      memcpy_P(ptr, mario7, sizeof(mario7));
      break;
    case 8:
      memcpy_P(ptr, mario8, sizeof(mario8));
      break;
    case 9:
      memcpy_P(ptr, mario9, sizeof(mario9));
      break;
    case 10:
      memcpy_P(ptr, mario10, sizeof(mario10));
      break;
    case 11:
      memcpy_P(ptr, mario11, sizeof(mario11));
      break;
    case 12:
      memcpy_P(ptr, mario12, sizeof(mario12));
      break;
    case 13:
      memcpy_P(ptr, mario13, sizeof(mario13));
      break;
    case 14:
      memcpy_P(ptr, mario14, sizeof(mario14));
      break;
    case 15:
      memcpy_P(ptr, mario15, sizeof(mario15));
      break;
    case 16:
      memcpy_P(ptr, mario16, sizeof(mario16));
      break;
    case 17:
      memcpy_P(ptr, mario17, sizeof(mario17));
      break;
    case 18:
      memcpy_P(ptr, mario18, sizeof(mario18));
      break;
    case 19:
      memcpy_P(ptr, mario19, sizeof(mario19));
      break;
    case 20:
      memcpy_P(ptr, mario20, sizeof(mario20));
      break;
    case 21:
      memcpy_P(ptr, mario21, sizeof(mario21));
      break;
    case 22:
      memcpy_P(ptr, mario22, sizeof(mario22));
      break;
    case 23:
      memcpy_P(ptr, mario23, sizeof(mario23));
      break;
    case 24:
      memcpy_P(ptr, mario24, sizeof(mario24));
      break;
    case 25:
      memcpy_P(ptr, mario25, sizeof(mario25));
      break;
    case 26:
      memcpy_P(ptr, mario26, sizeof(mario26));
      break;
    case 27:
      memcpy_P(ptr, mario27, sizeof(mario27));
      break;
    case 28:
      memcpy_P(ptr, mario28, sizeof(mario28));
      break;
    case 29:
      memcpy_P(ptr, mario29, sizeof(mario29));
      break;
    case 30:
      memcpy_P(ptr, mario30, sizeof(mario30));
      break;      
    default:
      break;
  }
}

void loadMario2(int arg) {
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
    switch (arg) {
        case 31:
          memcpy_P(ptr, mario31, sizeof(mario31));
          break;
        case 32:
          memcpy_P(ptr, mario32, sizeof(mario32));
          break;
        case 33:
          memcpy_P(ptr, mario33, sizeof(mario33));
          break;
        case 34:
          memcpy_P(ptr, mario34, sizeof(mario34));
          break;
        case 35:
          memcpy_P(ptr, mario35, sizeof(mario35));
          break;
        case 36:
          memcpy_P(ptr, mario36, sizeof(mario36));
          break;
        case 37:
          memcpy_P(ptr, mario37, sizeof(mario37));
          break;
        case 38:
          memcpy_P(ptr, mario38, sizeof(mario38));
          break;
        case 39:
          memcpy_P(ptr, mario39, sizeof(mario39));
          break;
        case 40:
          memcpy_P(ptr, mario40, sizeof(mario40));
          break;
        case 41:
          memcpy_P(ptr, mario41, sizeof(mario41));
          break;
        case 42:
          memcpy_P(ptr, mario42, sizeof(mario42));
          break;
        case 43:
          memcpy_P(ptr, mario43, sizeof(mario43));
          break;
        case 44:
          memcpy_P(ptr, mario44, sizeof(mario44));
          break;
        case 45:
          memcpy_P(ptr, mario45, sizeof(mario45));
          break;
        case 46:
          memcpy_P(ptr, mario46, sizeof(mario46));
          break;
        case 47:
          memcpy_P(ptr, mario47, sizeof(mario47));
          break;
        case 48:
          memcpy_P(ptr, mario48, sizeof(mario48));
          break;
        case 49:
          memcpy_P(ptr, mario49, sizeof(mario49));
          break;
        case 50:
          memcpy_P(ptr, mario50, sizeof(mario50));
          break;
        case 51:
          memcpy_P(ptr, mario51, sizeof(mario51));
          break;
        case 52:
          memcpy_P(ptr, mario52, sizeof(mario52));
          break;
        case 53:
          memcpy_P(ptr, mario53, sizeof(mario53));
          break;
        case 54:
          memcpy_P(ptr, mario54, sizeof(mario54));
          break;
        case 55:
          memcpy_P(ptr, mario55, sizeof(mario55));
          break;
        case 56:
          memcpy_P(ptr, mario56, sizeof(mario56));
          break;
        case 57:
          memcpy_P(ptr, mario57, sizeof(mario57));
          break;
        case 58:
          memcpy_P(ptr, mario58, sizeof(mario58));
          break;
        default:
          break;
    }
}

void loadMario3(int arg) {
    uint8_t *ptr = matrix.backBuffer(); // Get address of matrix data
    switch(arg) {
        case 59:
          memcpy_P(ptr, mario59, sizeof(mario59));
          break;
        case 60:
          memcpy_P(ptr, mario60, sizeof(mario60));
          break;
        case 61:
          memcpy_P(ptr, mario61, sizeof(mario61));
          break;
        case 62:
          memcpy_P(ptr, mario62, sizeof(mario62));
          break;
        case 63:
          memcpy_P(ptr, mario63, sizeof(mario63));
          break;
        case 64:
          memcpy_P(ptr, mario64, sizeof(mario64));
          break;
        case 65:
          memcpy_P(ptr, mario65, sizeof(mario65));
          break;
        case 66:
          memcpy_P(ptr, mario66, sizeof(mario66));
          break;
        case 67:
          memcpy_P(ptr, mario67, sizeof(mario67));
          break;
        case 68:
          memcpy_P(ptr, mario68, sizeof(mario68));
          break;
//        case 69:
//          memcpy_P(ptr, mario69, sizeof(mario69));
//          break;
//        case 70:
//          memcpy_P(ptr, mario70, sizeof(mario70));
//          break;
//        case 71:
//          memcpy_P(ptr, mario71, sizeof(mario71));
//          break;
        default:
          break;
    }
}

void marioLoop(int del) {
    for (int i=0; i<31; i++) {
        loadMario(i);
        if (i==0 || i==18 || i==19 || i==29 || i==30)
            delay(1000);
        else
            delay(del);
    }
}

void marioLoop2(int del) {
    for (int i=31; i<59; i++) {
        loadMario2(i);
        delay(del);
    }
    delay(1000);
}

void marioLoop3(int del) {
    for (int i=59; i<72; i++) {
        loadMario3(i);
        delay(del);
    }
}


//void mario_loop(int count, int del) {
//  //matrix.fillRect(0, 0, fill, 32, matrix.Color333(0, 1, 0));
//  //ptr+=4*count;
//  //matrix.fillRect(32, 0, -4*count, 32, matrix.Color333(0, 1, 0));
//  //ptr-=4*count;
//  
//  loadMario(0);
//  delay(2500);
//
//  int fill=0;
//  for (int i=0; i<count; i++) {
//    loadMario(1);
//    matrix.fillRect(0, 0, fill, 32, matrix.Color333(0, 1, 0));
//    ptr++; fill++;
//    delay(del);
//    loadMario(2);
//    matrix.fillRect(0, 0, fill, 32, matrix.Color333(0, 1, 0));
//    ptr++; fill++;
//    delay(del);
//    loadMario(3);
//    matrix.fillRect(0, 0, fill, 32, matrix.Color333(0, 1, 0));
//    ptr++; fill++;
//    delay(del);
//    loadMario(2);
//    matrix.fillRect(0, 0, fill, 32, matrix.Color333(0, 1, 0));
//    ptr++; fill++;
//    delay(del);
//  
//  }
//  
//  loadMario(0);
//  matrix.fillRect(0, 0, fill, 32, matrix.Color333(0, 1, 0));
//  delay(2500);
//  ptr-=4*count;
//
//}
