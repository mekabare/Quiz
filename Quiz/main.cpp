#pragma once
#include "main.h"
#include "game.h"
#include "player.h"
#include "continue.h"
#include "newGame.h"
#include "menu.h"

//Player 1
Player player;

int main() {

	char input; // input buffer for menu control
	Difficulty difficulty; // difficulty picked by user
	printMenu(input, 50);

//Menu

	//>New Game
		//>Enter Name
		//>User-data gets created
		//>Continue 
		
	//>Continue (if no new game)
		//>pick player data
		//>pick difficulty
		//>Game Start
		
	//>Check Leaderboard
		//>Print leaderboard.txt 
		
	//>How to Play
		//>Print manual.txt
		
	//>Exit
		//>Save data, EXIT
}
