#pragma once

#include "Die.h"
class Cup
{
private:

	int numberOfDice;
	Die* dice;

	size_t getNumberOfDice();

public:

	Cup();
	Cup(int numberOfDice);
	~Cup();

	void operator =(Cup& rhs);

	void roll();
	int total();
	bool isEqualDieRolls();
};


inline size_t Cup::getNumberOfDice()
{
	return numberOfDice;
}

