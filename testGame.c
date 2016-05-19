#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Game.h"

#define DEFAULT_DISCIPLINES {STUDENT_BQN, STUDENT_MMONEY, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MJ, STUDENT_BPS, STUDENT_MTV, \
                STUDENT_MTV, STUDENT_BPS,STUDENT_MTV, STUDENT_BQN, \
                STUDENT_MJ, STUDENT_BQN, STUDENT_THD, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MTV, STUDENT_BQN, STUDENT_BPS}

#define DEFAULT_DICE {9,10,8,12,6,5,3,11,3,11,4,6,4,7,9,2,8,10,5}
#define TERRA_NULLIS -1

void testGetTurnNumber (void);
void testGetWhoseTurn (void);


int main (int argc, char * argv[]) {
   testGetTurnNumber();
   testGetWhoseTurn();
   
   return EXIT_SUCCESS;
}
void testGetTurnNumber (void) {
   // creating a new game
    int disciplines[] = DEFAULT_DISCIPLINES;
    int dice[] = DEFAULT_DICE;
    int diceScore = 0;
    Game g = newGame (disciplines, dice);
   
    // checks that the initial turn is -1
    assert(getTurnNumber(g) == TERRA_NULLIS);
    // check that after making one dice roll , the turn is 0
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 0);

    //check that after making two dice rolls, the turn is 1 
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 1);

    //check that after making three dice rolls, the turn is 2
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 2);

    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 3);
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 4);
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 5);
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 6);
}   

//return the player id of the player whose turn it is
//the result of this function is NO_ONE during Terra Nullis
void testGetWhoseTurn (void) {
   int disciplines[] = DEFAULT_DISCIPLINES;
   int dice[] = DEFAULT_DICE;
   int diceScore = 0;
   Game g = newGame (disciplines, dice);
   //checks that the intial player is no one
   assert(getWhoseTurn(g) == NO_ONE);

   //checks that the first player to make a move is uni a 
   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_A);

   //checks that the second player to make a move is uni b
   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_B);

   //checks that the third player to make a move is uni c 
   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_C);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_A);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_B);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_C);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_A);

}

/*void testNewGameData(void) {
   int disciplines[] = DEFAULT_DISCIPLINES;
   int dice[] = DEFAULT_DICE;
   Game g = newGame (disciplines, dice);




}*/#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Game.h"

#define DEFAULT_DISCIPLINES {STUDENT_BQN, STUDENT_MMONEY, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MJ, STUDENT_BPS, STUDENT_MTV, \
                STUDENT_MTV, STUDENT_BPS,STUDENT_MTV, STUDENT_BQN, \
                STUDENT_MJ, STUDENT_BQN, STUDENT_THD, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MTV, STUDENT_BQN, STUDENT_BPS}

#define DEFAULT_DICE {9,10,8,12,6,5,3,11,3,11,4,6,4,7,9,2,8,10,5}
#define TERRA_NULLIS -1

void testGetTurnNumber (void);
void testGetWhoseTurn (void);


int main (int argc, char * argv[]) {
   testGetTurnNumber();
   testGetWhoseTurn();
   
   return EXIT_SUCCESS;
}
void testGetTurnNumber (void) {
   // creating a new game
    int disciplines[] = DEFAULT_DISCIPLINES;
    int dice[] = DEFAULT_DICE;
    int diceScore = 0;
    Game g = newGame (disciplines, dice);
   
    // checks that the initial turn is -1
    assert(getTurnNumber(g) == TERRA_NULLIS);
    // check that after making one dice roll , the turn is 0
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 0);

    //check that after making two dice rolls, the turn is 1 
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 1);

    //check that after making three dice rolls, the turn is 2
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 2);

    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 3);
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 4);
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 5);
    throwDice(g,diceScore);
    assert(getTurnNumber(g) == 6);
}   

//return the player id of the player whose turn it is
//the result of this function is NO_ONE during Terra Nullis
void testGetWhoseTurn (void) {
   int disciplines[] = DEFAULT_DISCIPLINES;
   int dice[] = DEFAULT_DICE;
   int diceScore = 0;
   Game g = newGame (disciplines, dice);
   //checks that the intial player is no one
   assert(getWhoseTurn(g) == NO_ONE);

   //checks that the first player to make a move is uni a 
   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_A);

   //checks that the second player to make a move is uni b
   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_B);

   //checks that the third player to make a move is uni c 
   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_C);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_A);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_B);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_C);

   throwDice(g,diceScore);
   assert(getWhoseTurn(g) == UNI_A);

}

/*void testNewGameData(void) {
   int disciplines[] = DEFAULT_DISCIPLINES;
   int dice[] = DEFAULT_DICE;
   Game g = newGame (disciplines, dice);




}*/
