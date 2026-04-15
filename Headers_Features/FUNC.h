
#ifndef FUNC_MBED /* Header Guards */
#define FUNC_MBED

/*----------------------------------INCLUDE DECLARATIONS LIKE FN(); AND CLASS OBJECTS;-----------------------------------------*/

/*--- Header files to be included ---*/

#include "mbed.h"
#include "TextLCD.h"
#include "CustomCharacters.h"
#include "Quiz.h"
#include "Profiles.h"

/*--- Global declaration ---*/
extern Profiles slot1, slot2, slot3, slot4;
extern TextLCD screen;
extern InterruptIn butt_A, butt_B, butt_C, butt_D;
extern bool butt_state_A, butt_state_B, butt_state_C, butt_state_D;

void rolling_text(char text[], int roll_margin, int row, int coloumn);
int text_length(const char *text);
int speed(int level /*Speed levels: 1,2,3*/);
void reset_characters();

/*--- Button functions ---*/
void state_A();
void state_B();
void state_C();
void state_D();
void state_notA();
void state_notB();
void state_notC();
void state_notD();
void reset_all_states();
bool OR_button_on();

#endif