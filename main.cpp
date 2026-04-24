
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
thread_sleep_for(100); // wake up time for LCD CRUCIAL

screen.cls();

screen.printf("Team");                      //prompt #1
screen.locate(0,1);                         //[Team            ]
screen.printf("Kombat       Ltd");          //[Kombat       Ltd]

thread_sleep_for(1000);
screen.cls();
thread_sleep_for(100);

screen.printf("Version");                   //prompt #2
screen.locate(0,1);                         //[Version         ]
screen.printf("V:%s",version_num);          //[V.#.#           ]

thread_sleep_for(1000);
screen.cls();
thread_sleep_for(100);

screen.locate(5,0);
screen.printf("KOMBAT");                    //prompt #3
screen.locate(5,1);                         //[     KOMBAT     ]
screen.printf("BOX!");                      //[     BOX!       ]

thread_sleep_for(1000); // notice no clear

// Any button to start

screen.setCustomChar(0, button_on);
screen.setCustomChar(1, button_off);
while(OR_button_on() == 0) {                //prompt #3 continued:
    screen.locate(10,1);                    //[     KOMBAT     ]
    screen.writeCustomChar(0);              //[     BOX!  o    ]alton
    thread_sleep_for(500);                  //[     BOX!  O    ]altoff
    screen.locate(10,1);
    screen.writeCustomChar(1);
    thread_sleep_for(500);
}
screen.cls();



/* Select Profile
*
* [Simple FSM Logic]
* display the profiles "A: DAVE, B: CHRIS, C: JEN, D: MACY"
* Event = PRESS ONE BUTTON
* -> flash the corresponding button
* 
*/

screen.setCustomChar(2, button_off);
screen.setCustomChar(3, button_on);
screen.setCustomChar(4, button_off);
screen.setCustomChar(5, button_off);



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