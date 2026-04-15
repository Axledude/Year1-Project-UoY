
#include "FUNC.h"

/*
*   The FUNC header and Source files are the initial areas to add in function and components to be implemented to the design
*   Any development will be tracked via growth within these files
*   External development will be responded to in .txt file within Headers_Features folder
*/

// Programme
int main() {
const char *version_num = "1.6";

/*START GAME PROMPTS*/

// LOGO & Data screen - version, group name etc
screen.printf("Team");
screen.locate(0,1);
screen.printf("Kombat       Ltd");
thread_sleep_for(1000);
/*
screen.cls();
thread_sleep_for(1000);

screen.printf("Version");
screen.locate(0,1);
screen.printf("V.%s",version_num);
thread_sleep_for(1000);

screen.locate(4,0);
screen.printf("KOMBAT");
screen.locate(4,1);
screen.printf("BOX!");
*/


// Any button to start

/* screen.writeCustomChar(0x40, button_on);
screen.writeCustomChar(0x41, button_off);
while(OR_button_on() == 0){
screen.locate(10,1);
screen.printf("%s",button_off);
thread_sleep_for(500);
screen.locate(10,1);
screen.printf("%s",button_on);
thread_sleep_for(500);
}
screen.cls();
*/



/* Initialising screen
 *
 * run any threads before hand
 */
/* screen.locate(3,0);
screen.printf("LOADING");
thread_sleep_for(250);
screen.printf(".");
thread_sleep_for(250);
screen.printf(".");
thread_sleep_for(250);
screen.printf(".");
thread_sleep_for(250);
screen.cls();
*/



/* Select Profile
*
* [Simple FSM Logic]
* display the profiles "A: DAVE, B: CHRIS, C: JEN, D: MACY"
* Event = PRESS ONE BUTTON
* -> flash the corresponding button
* 
*/
/* char text1[] = "Select your profile!";
rolling_text(text1,10,0,3); 
screen.cls();
*/



/* Pre-warning
* The text will overlap before hand untill hovered over
*/
/* screen.locate(0,0);
screen.printf("A:%s",slot1.name);
screen.locate(8,0);
screen.printf("B:%s",slot2.name);
screen.locate(0,1);
screen.printf("C:%s",slot3.name);
screen.locate(8,1);
screen.printf("D:%s",slot4.name);
*/



/*
* if: pressed again
* -> Selected Profile
* -> Display "Profile: NAME"
* -> MoveOn/Break 
* 
* if: press another button
* return to start of 'PRESS ONE BUTTON
* 
*/
/*MODULES TO RUN*/

// .start(GAME1);
// wait untill logic:

// .start(GAME2);
// wait untill logic:

// .start(GAME3);
// wait untill logic:

/*END GAME PROMPTS*/

// Score earned screen
// lives kept screen
// Games won screen
// END



/*
Testcode:
*/

}