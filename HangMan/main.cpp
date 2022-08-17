#include "Main.h"
#pragma once

Main instanceHead;
Game gameInstance;

int main() 
{
	gameInstance.init();
	instanceHead.gameLoop();
	return 0;
}

void Main::gameLoop() 
{
	while (gameInstance.isPlaying()) { // Game Code runs in here
		{gameInstance.runGame();}
	}
	if (!gameInstance.isPlaying()) {
		gameInstance.setGameState(OVER);
		gameInstance.gameOver();
	}
}