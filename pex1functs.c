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
#include <stdlib.h>
#include <math.h>
#include "pex1functs.h"

void drawDie(int pips) {
    if (pips == 1) {
        printf(" ------- \n|       |\n|   *   |\n|       |\n ------- \n");
    }
    if (pips == 2) {
        printf(" ------- \n| *     |\n|       |\n|     * |\n ------- \n");
    }
    if (pips == 3) {
        printf(" ------- \n| *     |\n|   *   |\n|     * |\n ------- \n");
    }
    if (pips == 4) {
        printf(" ------- \n| *   * |\n|       |\n| *   * |\n ------- \n");
    }
    if (pips == 5) {
        printf(" ------- \n| *   * |\n|   *   |\n| *   * |\n ------- \n");
    }
    if (pips == 6) {
        printf(" ------- \n| *   * |\n| *   * |\n| *   * |\n ------- \n");
    }
}

int rollDie() {
    return ((rand() % 6) +1);
}

void turnStatus(int die, int player, int currentTotal, int score0, int score1) {
    if (die == 1) {
        printf("Player %d pigged out.\n\n", player);
    }
    else {
        printf("Current score for player %d = %d.\n", player, (currentTotal + die));
        if (player == 0) {
            printf("Total score = %d.\n", (score0 + currentTotal + die));
        }
        if (player == 1) {
            printf("Total score = %d.\n", (score1 + currentTotal + die));
        }
    }
}

void gameStatus(int player, int score0, int score1) {
    if ((score0 < 100) && (score1 < 100)) {
        printf("Player 0 score: %d\n", score0);
        printf("Player 1 score: %d\n", score1);
        printf("It is Player %d turn.\n\n", ((int)fabs(player - 1)));
    }
    else if (score0 >= 100) {
        printf("Player 0 score: %d\n", score0);
        printf("Player 1 score: %d\n", score1);
        printf("Player 0 won!\n");
    }
    else {
        printf("Player 0 score: %d\n", score0);
        printf("Player 1 score: %d\n", score1);
        printf("Player 1 won!\n");
    }
}

int totalScore(int score, int turnTotal) {
    return (score + turnTotal);
}