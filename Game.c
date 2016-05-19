#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define NUM_UNIS 3

// player ID of each university
#define NO_ONE 0
#define UNI_A 1
#define UNI_B 2
#define UNI_C 3

// contents of an ARC
#define VACANT_ARC 0
#define ARC_A 1
#define ARC_B 2
#define ARC_C 3

// contents of a VERTEX
#define VACANT_VERTEX 0  
#define CAMPUS_A 1
#define CAMPUS_B 2
#define CAMPUS_C 3
#define GO8_A 4
#define GO8_B 5
#define GO8_C 6

// action codes
#define PASS 0
#define BUILD_CAMPUS 1
#define BUILD_GO8 2
#define OBTAIN_ARC 3
#define START_SPINOFF 4
#define OBTAIN_PUBLICATION 5
#define OBTAIN_IP_PATENT 6
#define RETRAIN_STUDENTS 7

// disciplines
#define STUDENT_THD 0
#define STUDENT_BPS 1
#define STUDENT_BQN 2
#define STUDENT_MJ  3
#define STUDENT_MTV 4
#define STUDENT_MMONEY 5

#define NUM_REGIONS 19
#define PATH_LIMIT 150

#define TRUE 1
#define FALSE 0

//
#define NUM_DISCIPLINES 6

//the game state before dice is thrown
#define TERRA_NULLIS -1

#include "Game.h"

//all the data for the game that are made by the functions to be stored 
//in this game struct
typedef struct _players {
   int disciplines[NUM_DISCIPLINES];
   int numUni;
   int publications;
   int ARCgrants;
   int IP;
} players;


typedef struct _game {
   int turnNumber;
   int whoseTurn;
   players playerStats[NUM_UNIS];
} game;


Game newGame (int discipline[], int dice[]) {
   Game startData = 0;

   assert(startData == NULL);
   startData = malloc (sizeof(game));
   //making sure the mem alloc was properly done; that it is referenced
   assert (startData != NULL);

   //turnNumber should start at terra nullis before dice is thrown
   startData->turnNumber = TERRA_NULLIS;

   //during terra_nullis, it is no one's turn
   startData->whoseTurn = NO_ONE;

   //***For each player, how can I create separate data for each person??*** //Solved (Asked Harry)

   //each player should begin with default number of disciplines
   //that is: 3 x BPS, 3 x B?, 1 x MTV, 1 x MJ, 1 x M$, and no ThD students
   startData->playerStats[UNI_A].disciplines[STUDENT_THD] = 0;
   startData->playerStats[UNI_A].disciplines[STUDENT_BPS] = 3;
   startData->playerStats[UNI_A].disciplines[STUDENT_BQN] = 3;
   startData->playerStats[UNI_A].disciplines[STUDENT_MJ] = 1;
   startData->playerStats[UNI_A].disciplines[STUDENT_MTV] = 1;
   startData->playerStats[UNI_A].disciplines[STUDENT_MMONEY] = 1;

   startData->playerStats[UNI_B].disciplines[STUDENT_THD] = 0;
   startData->playerStats[UNI_B].disciplines[STUDENT_BPS] = 3;
   startData->playerStats[UNI_B].disciplines[STUDENT_BQN] = 3;
   startData->playerStats[UNI_B].disciplines[STUDENT_MJ] = 1;
   startData->playerStats[UNI_B].disciplines[STUDENT_MTV] = 1;
   startData->playerStats[UNI_B].disciplines[STUDENT_MMONEY] = 1;

   startData->playerStats[UNI_C].disciplines[STUDENT_THD] = 0;
   startData->playerStats[UNI_C].disciplines[STUDENT_BPS] = 3;
   startData->playerStats[UNI_C].disciplines[STUDENT_BQN] = 3;
   startData->playerStats[UNI_C].disciplines[STUDENT_MJ] = 1;
   startData->playerStats[UNI_C].disciplines[STUDENT_MTV] = 1;
   startData->playerStats[UNI_C].disciplines[STUDENT_MMONEY] = 1;

   //each player should have two uni's at the start
   //startData->numUni = 2;
   startData->playerStats[UNI_A].numUni = 2;
   startData->playerStats[UNI_B].numUni = 2;
   startData->playerStats[UNI_C].numUni = 2;
   //each player should not have publications, ARC grants or IP patents
   startData->playerStats[UNI_A].publications = 0;
   startData->playerStats[UNI_A].ARCgrants = 0;
   startData->playerStats[UNI_A].IP = 0;

   startData->playerStats[UNI_B].publications = 0;
   startData->playerStats[UNI_B].ARCgrants = 0;
   startData->playerStats[UNI_B].IP = 0;

   startData->playerStats[UNI_C].publications = 0;
   startData->playerStats[UNI_C].ARCgrants = 0;
   startData->playerStats[UNI_C].IP = 0;
   

   return startData;
}

void disposeGame (Game g) {
   //releases the memory and dereferences the pointer to the Game struct
   free(g);
}

void makeAction (Game g, action a) {
   //makes an action depending on the available resources
}

void throwDice (Game g, int diceScore) {
   //throws a dice at the start of each round
   //***throwDice function***
   
   //after throwing dice, turn round increases
   g->turnNumber = getTurnNumber(g) + 1;
   //printf ("%d, turnNumber\n",g->turnNumber);             //(debugged)

   //after dicerolls, the player changes
   g->whoseTurn = ((getWhoseTurn(g) + 1)%3);
   if (g->whoseTurn == 0) {
      g->whoseTurn = getWhoseTurn(g) + 3;
   }
   //printf ("P%d, whose turn?\n",g->whoseTurn);            //(debugged)
} 

int getDiscipline (Game g, int regionID) {
   //gets the discipline in a given regionID
   return 0;
}

int getDiceValue (Game g, int regionID) {
   //gets the diceValue for a given regionID
   return 0;
}

int getMostARCs (Game g) {
   return 0;
}

int getMostPublications (Game g) {
   return 0;
}

int getTurnNumber (Game g) {
   int turnNumber;
   turnNumber = g->turnNumber;
   return turnNumber;
}

int getWhoseTurn (Game g) {
   int whoseTurn;
   whoseTurn = g->whoseTurn;
   return whoseTurn;
}

int getCampus(Game g, path pathToVertex) {
   return 0;
}

int getARC(Game g, path pathToEdge) {
   return 0;
}

int isLegalAction (Game g, action a) {
   return 0;
}

int getKPIpoints (Game g, int player) {
   return 0;
}

int getARCs (Game g, int player) {
   return 0;
}

int getGO8s (Game g, int player) {
   return 0;
}

int getCampuses (Game g, int player) {
   return 0;
}

int getIPs (Game g, int player) {
   return 0;
}

int getPublications (Game g, int player) {
   return 0;
}

int getStudents (Game g, int player, int discipline) {
   return 0;
}

int getExchangeRate (Game g, int player, 
                     int disciplineFrom, int disciplineTo) {
   return 0;
}
