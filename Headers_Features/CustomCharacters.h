#ifndef MBED_CustomCharacters_H
#define MBED_CustomCharacters_H

#include "TextLCD.h"

// use LCD screen bit to byte conversion webs online and put in the correseponding hex code to an array with the 'byte' data type.
// MAKE YOUR OWN CUSTOM CHARACTERS HERE:
const byte char_heart[] = {
    0B00000,
    0B01010,
    0B11111,
    0B11111,
    0B01110,
    0B00100,
    0B00000,
    0B00000
};
const byte char_dollar[] = {
    0B00100,
    0B01110,
    0B10100,
    0B01110,
    0B00101,
    0B01110,
    0B00100,
    0B00000
};
const byte char_star[] = {
    0B00000,
    0B00100,
    0B01110,
    0B11111,
    0B01110,
    0B11011,
    0B00000,
    0B00000
};
const byte char_smile[] = {
    0B00000,
    0B00000,
    0B01010,
    0B00000,
    0B10001,
    0B01110,
    0B00000,
    0B00000
};
const byte button_off[] = {
  0B00000,
  0B01110,
  0B10001,
  0B10001,
  0B10001,
  0B01110,
  0B10001,
  0B01110
};
const byte button_on[] = {
  0B00000,
  0B00000,
  0B01110,
  0B11111,
  0B11111,
  0B11111,
  0B11111,
  0B01110
};

#endif