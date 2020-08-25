#pragma once
#include "Cup.h"

class DiceGame
{
private:
	static const int maxTries = 4;

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

