/** PEX2.c
* ===========================================================
* Name: C3C Max Perkins, 22 Sep 2020
* Section: M3/4
* Project: PEX 2 - Pigs
* Purpose: Pigs Game
* Documentation Statement: None.
* ============================================================
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "pex1functs.h"

int main(void) {

    printf("Pig!\n\n");

    int pips;
    int player = 0;
    int score0 = 0;
    int score1 = 0;
    int turns = 0;
    int turnTotal = 0;
    int currentTotal = 0;
    bool keepGoing = true;
    char yesno[4];
/*
    printf("Select a die number:\n");
    scanf("%d", &pips);
    drawDie(pips);

    printf("%d\n", rollDie());
    
    printf("Enter the number of pips on the die, the player, the current total, the player 0 score, and the player 1 score in that order:\n");
    scanf("%d %d %d %d %d", &pips, &player, &currentTotal, &score0, &score1);
    turnStatus(pips, player, currentTotal, score0, score1);

    gameStatus(player, score0, score1);
*/
    while ((score0 < 100) && (score1 < 100) && (turns < 40)) {
        
        //player 0's turn to start
        turnTotal = 0;
        currentTotal = 0;
        while (keepGoing == true) {
            pips = rollDie();
            drawDie(pips);
            printf("You have rolled a %d!\n", pips);
            turnStatus(pips, player, currentTotal, score0, score1);
            if (pips == 1) {
                keepGoing = false;
                currentTotal = 0;
            }
            else {
                currentTotal += pips;
                printf("would you like to keep going?\nEnter yes or no:\n");
                scanf("%s", yesno);
                printf("\n");
                if (strcmp(yesno, "yes") == 0) {
                    keepGoing = true;
                }
                else {
                    keepGoing = false;
                }
            }
        }
        turnTotal = currentTotal;
        score0 = totalScore(score0, turnTotal);
        gameStatus(player, score0, score1);
        player = (int)fabs(player - 1);
        keepGoing = true;

        //player 1's turn to start
        turnTotal = 0;
        currentTotal = 0;
        while (keepGoing == true) {
            pips = rollDie();
            drawDie(pips);
            printf("You have rolled a %d!\n", pips);
            turnStatus(pips, player, currentTotal, score0, score1);
            if (pips == 1) {
                keepGoing = false;
                currentTotal = 0;
            }
            else {
                currentTotal += pips;
                printf("would you like to keep going?\nEnter yes or no:\n");
                scanf("%s", yesno);
                printf("\n");
                if (strcmp(yesno, "yes") == 0) {
                    keepGoing = true;
                }
                else {
                    keepGoing = false;
                }
            }
        }
        turnTotal = currentTotal;
        score1 = totalScore(score1, turnTotal);
        gameStatus(player, score0, score1);
        player = (int)fabs(player - 1);
        keepGoing = true;

        ++turns;
    }

    if (turns == 40) {
        printf("40 turns were taken, and the game has been ended.\n");
    }

    char c;
    scanf(" %c,", &c);
    return 0;
}