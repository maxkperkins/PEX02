/** PEX2.c
* ===========================================================
* Name: C3C Max Perkins, 22 Sep 2020
* Section: M3/4
* Project: PEX 2 - Pigs
* Purpose: Pigs Game
* Documentation Statement: None.
* ============================================================
*/

#ifndef PEX1FUNCTS_H
#define PEX1FUNCTS_H

/*** @fn void drawDie(int pips)
 *   @brief A function that draws the correct die with based on the number of pips
 *   @param pips - the number of indents on the die 
 *   @returns no value, but prints the correct die to main
 */
void drawDie(int pips);

/*** @fn int rollDie()
 *   @brief A function that randomly generates a die number
 *   @returns a random die value (integer 1-6)
 */
int rollDie();

/*** @fn void turnStatus(int die, int player, int currentTotal, int score0, int score1)
 *   @brief A function that notifies the player of their turn status (pigged out or current turn total)
 *   @param die - number of pips on the die rolled
 *   @param player - the player whose turn it is
 *   @param currentTotal - the player's score prior to rolling
 *   @param score0 - player 0's score
 *   @param score1 - player 1's score
 *   @returns no value, but prints the status to main
 */
void turnStatus(int die, int player, int currentTotal, int score0, int score1);

/*** @fn gameStatus(int player, int score0, int score1)
 *   @brief A function that notifies the players of the game status
 *   @param player - the player whose turn just ended
 *   @param score0 - player 0's score
 *   @param score1 - player 1's score
 *   @returns no value, but prints the game status to main
 */
void gameStatus(int player, int score0, int score1);

/*** @fn totalScore(int score, int turnTotal)
 *   @brief A function that calculates a player's total score
 *   @param score - the player's score before the turn
 *   @param turnTotal - the player's score for that turn
 *   @returns the player's total score at the end of the turn
 */
int totalScore(int score, int turnTotal);

#endif //PEX1FUNCTS_H