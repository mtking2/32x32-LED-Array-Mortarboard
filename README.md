# 32x32-LED-Array-Mortarboard
I equipped my university graduation cap with a 32×32 LED array, an Arduino Mega, three SPDT switches, a 2000mAh li-ion battery, lots of wire, and lots of Arduino code. By doing this I was able to display numerous animations, pictures, and text on the LED grid. This repository contains all of the Arduino code and bitmaps that I used to make it.

http://imgur.com/a/ziBfg

## Processing Script
`BMPformat.pde` will convert a 32x32 px image into a formated header file containing the array of hex values to be copied into `PROGMEM` space which the Adafruit library uses to display the image on the panel.

1. Open `BMPformat.pde` in Processing and Run it.
2. Select a 32x32px bitmap image in the file chooser dialog.
3. The resulting header file should be written to a subfolder called **headerFiles** in the same directory along side the image.
