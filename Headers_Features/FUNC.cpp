
#include "FUNC.h"

/*   -----   FOR STRUCTURED DEFINITIONS   -----   */

/*------------------------------------------Static Objects to be used---------------------------------------------*/

Profiles 
    slot1("Dave",0,3),
    slot2("Chris",0,3),
    slot3("Jen",0,3),
    slot4("Lucy",0,3);
TextLCD screen(D8, D9, D4, D5, D6, D7, TextLCD::LCD16x2);
InterruptIn butt_A(D10), butt_B(D11), butt_C(D12), butt_D(D13);
bool butt_state_A, butt_state_B, butt_state_C, butt_state_D;

/*------------------------------------------Functions to be declared----------------------------------------------*/

/** Set button A to High
  */
void state_A(){
    butt_state_A = 1;
}

/** Set button B to High
  */
void state_B(){
    butt_state_B = 1;
}

/** Set button C to High
  */
void state_C(){
    butt_state_C = 1;
}

/** Set button D to High
  */
void state_D(){
    butt_state_D = 1;
}

/** Set button A to Low
  */
void state_notA(){
    butt_state_A = 0;
}

/** Set button B to Low
  */
void state_notB(){
    butt_state_B = 0;
}

/** Set button C to Low
  */
void state_notC(){
    butt_state_C = 0;
}

/** Set button D to Low
  */
void state_notD(){
    butt_state_D = 0;
}

/** Set all button states to Low
  */
void reset_all_states(){
    butt_state_A=0, butt_state_B=0, butt_state_C=0, butt_state_D = 0;
}

/** true when any button is High
  */
bool OR_button_on(){
    bool or_state = 0;
    if(butt_state_A || butt_state_B || butt_state_C || butt_state_D == 1){
        or_state = 1;
    }
    return or_state;
}

/** reads how many characters are in a text
  * @param text Any length - natural keyboard characters
  */
int text_length(const char *text) {
    if (text == nullptr) {
        return 0;
    }
    int count = 0;
    while (text[count] != '\0') {
        count++;
    }
    return count;
}

/** simple function to roll the text 16 characters at a time across the screen
  * starting at the cursors location
  * 
  * @param text         Any length - natural keyboard characters
  * @param roll_margin  Size of the 'window' the text is being rolled at [full length: 16]
  * @param row          locator function parameter 0-1
  * @param coloumn      locator function parameter 0-15
  * 
  */
void rolling_text(char text[], int roll_margin, int row, int coloumn){
    int length = text_length(text);
    for(int starting_character =0; starting_character<length +16; starting_character++){
        int i;
        screen.locate(0,0);

        for(i=starting_character; i<starting_character +16; i++){
            if(text[i] != '\0'){
                screen.printf("%c", text[i]);
            } else if(text[i] == '\0'){
                break;
            }
        }

        if(starting_character>length +16){
            for(int k=0; k<16; k++){
                screen.locate(0,16-k);
                screen.printf(0);
            }
        }
        thread_sleep_for(250);
    }
};

void reset_characters(){

}

/*
int speed(int level){
    switch(level){
    case 1:
        return 250;
    case 2:
        return 500;
    case 3:
        return 1000;
    }  
};
*/

void Thread_001(){
    // threaded content
}
void Thread_002(){
    // threaded content
}
void Thread_003(){
    // threaded content
}