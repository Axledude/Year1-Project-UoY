
#include "Profiles.h"
#include "mbed.h"

// change lives
int Profiles::changelives(int val /*either 1,2,3*/){
    lives = lives + val;
    return score;
}

// change score
int Profiles::changescore(int val){
    score = score + val;
    return score;
}