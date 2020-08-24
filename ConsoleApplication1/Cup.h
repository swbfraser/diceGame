#pragma once

#include "Die.h"
class Cup
{
private:
	Die die1;
	Die die2;

public:

	void roll();
	int total();
	int isEqualDieRolls();
};

