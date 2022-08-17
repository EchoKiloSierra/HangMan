#pragma once

#define RUNNING 0
#define OVER 1
#define ERROR 2


#include <string>
using namespace std;

class Game
{

public:
	
	static void setGameState(int state); // State 0 == running, State 1 == over
	static int getGameState();
	static void runGame();
	static void init();
	static bool isPlaying();
	static void gameOver();

private:

	static enum gameStateType {running = RUNNING, over = OVER, error = ERROR};

	gameStateType gameState;

	static int guessesMade; // indicates guesses made
	static int correctGuesses; // indicates correct guesse
	static int incorrectGuesses; // indicates incorrect guesses
	int maxIncorrectGuesses;

	int difficultySetting;

	static void selectDifficulty();
	static void pickWord();


	static void drawCurrentState(int correctGuesses_Amt, int incorrectGuessesAmt);
	static void inputProcessing();

	static string guessableWordString;

};

