#ifndef PROFILES_H
#define PROFILES_H

#include "mbed.h"

struct Profiles {

 // attributes to the asorting profiles
    const char *name;
    int score = 0; //initial values
    int lives = 3;
    int q_answered;

 // simple constructor
    Profiles(
        const char *name,
        int score,
        int lives
        ){
        this ->name = name;
        this ->score = score;
        this ->lives = lives;
    }
    
 // methods being declared
    // +ve or -ve dependant values of score "you lost" changescore(profile,-40);
    int changescore(int val /*either 1,2,3*/); 
    int changelives(int val);

};

#endif