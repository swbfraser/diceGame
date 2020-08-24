#pragma once
#include "Cup.h"

class DiceGame
{
private:
	const int maxTries = 3;

	Cup cup;
	bool gameResult = false;
	
	void setGameResult(bool gameResult);

public:
	void play();
	bool getGameResult();

};

inline bool DiceGame::getGameResult()
{
	return gameResult;
}

