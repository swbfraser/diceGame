#include "DiceGame.h"

void DiceGame::setGameResult(bool gameResult)
{
	this->gameResult = gameResult;
}

void DiceGame::play()
{
	bool winner = false;
	int tries = 0;


	Cup cup1(3);
	Cup cup2(2);


	cup2 = cup1;

	while (!winner && tries < maxTries) {
		tries++;

		cup.roll();
		if (cup.isEqualDieRolls())
		{
			winner = true;
		}
		
	}

	setGameResult(winner);

}
