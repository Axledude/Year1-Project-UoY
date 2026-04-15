
#ifndef QUIZ_H
#define QUIZ_H

#include "TextLCD.h"
#include "mbed.h"

class Quiz {
public:

 // basic components of the quizes that are gonna be used
    const char *text;
    const char *answer_t, *ans2t, *ans3t, *ans4t; /* text answers */
    const byte *answer_b, *ans2b, *ans3b, *ans4b; /* character answers */
    int score;

 // Parent constructor for math quizes
    Quiz(
        const char *text, 
        const char *answer_t, // real ans
        const char *ans2t, 
        const char *ans3t, 
        const char *ans4t, 
        int score
        ){
        this ->text = text;
        this ->answer_t = answer_t;
        this ->ans2t = ans2t;
        this ->ans3t = ans3t;
        this ->ans4t = ans4t;
        this ->score = score;
    }

 // Parent constructor for memory quizes
    Quiz(
        const char *text, 
        const byte *answer_b, // real ans
        const byte *ans2b, 
        const byte *ans3b, 
        const byte *ans4b, 
        int score
        ){
        this ->text = text;
        this ->answer_b = answer_b;
        this ->ans2b = ans2b;
        this ->ans3b = ans3b;
        this ->ans4b = ans4b;
        this ->score = score;
    }

 // methods being declared
    int getscore(Quiz quiz_);
    const char *get_text_answer(Quiz quiz_);
    const byte *get_byte_answer(Quiz quiz_);

};

struct Math : public Quiz{

 // Child inherited constructor
    Math(
        const char *t,
        const char *a1t, // text
        const char *a2t, 
        const char *a3t, 
        const char *a4t,
        int s) : Quiz(t,a1t,a2t,a3t,a4t,s) {}

    int getscore();

};

struct Memory : public Quiz{

 // Child inherited constructor
    Memory(
        const char *t,
        const byte *a1b, // chars
        const byte *a2b, 
        const byte *a3b, 
        const byte *a4b,
        int s) : Quiz(t,a1b,a2b,a3b,a4b,s) {}

    int getscore();

};


#endif

extern Memory meme_001;
extern Math math_001;