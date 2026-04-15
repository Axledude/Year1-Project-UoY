
#include "CustomCharacters.h"
#include "Quiz.h"
 
Math 
 // example of a math game being declared
    math_001(
    "2 + 2 = ?",
    "4","2","1","8",
    10);

Memory 
 // example of a memory game being declared
    meme_001(
    "Smile, Heart, Dollar, Star",
    char_smile,char_heart,char_dollar,char_star,
    100); 

 /* Premise for making a quiz,
  *
  * start by declaring what type it is with its class
  * give its quiz number as a name and pass variables as shown
  * and make sure its externalised in the Quiz.h file...
  * "extern Memory meme_056"
 */

 // get score
 int Quiz::getscore(Quiz quiz_){
    return quiz_.score;
 };

 // get text answer
 const char *Quiz::get_text_answer(Quiz quiz_){
    return quiz_.answer_t;
 };

 // get byte answer
 const byte *Quiz::get_byte_answer(Quiz quiz_){
    return quiz_.answer_b;
 };