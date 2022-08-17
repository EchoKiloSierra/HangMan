#include "Game.h"
#include "Main.h"
#include <iostream>

#if __INTELLISENSE__
#pragma diag_suppress 144
#endif

//int guessesMade, correctGuesses, incorrectGuesses = 0;

static Game gameInst;

void Game::init() 
{
	gameInst.setGameState(RUNNING);
	selectDifficulty();
	pickWord();
};

void Game::runGame() 
{

}

void Game::gameOver() 
{
	
	
}

void Game::selectDifficulty() 
{
	std::cout << "Select a difficulty: " << "\n" << "Press 1 for Easy" << "\n" << "Press 2 for Medium" << "\n" << "Press 3 for Hard" << "\n";
	std::cin >> gameInst.difficultySetting;

	switch (gameInst.difficultySetting)
	{
	case 1:
		gameInst.maxIncorrectGuesses = 10;
		break;
	case 2:
		gameInst.maxIncorrectGuesses = 6;
		break;
	case 3:
		gameInst.maxIncorrectGuesses = 3;
		break;

	default:
		cout << "Invalid Difficulty selected. Try again." << "\n" << endl;
		selectDifficulty();
	}
}

void Game::pickWord() 
{
	//TODO: Pick Word from txt file
}

bool Game::isPlaying() 
{
	if (getGameState() == RUNNING) {
		return true;
	}
	else if (getGameState() == OVER) {
		return false;
	}
	else {
		cout << "gameState Handling Error at: Game::isPlaying()" << endl;
		return false;
	}
}

void Game::setGameState(int state)
{
	if		(state == RUNNING) {gameStateType gameState = running;}
	else if (state == OVER) {gameStateType gameState = over;}
	else { cout << "gameState Handling Error at: Game::setGameState()" << endl;}
}

int Game::getGameState() 
{
	if (gameInst.gameState == RUNNING) {return RUNNING;}
	else if (gameInst.gameState == OVER) {return OVER;}
	else {cout << "gameState Handling Error at: Game::getGameState()" << endl; return ERROR;}
}

void Game::drawCurrentState(int correctGuesses, int incorrectGuesses) 
{
	// Draws word, used letters and gallows
}