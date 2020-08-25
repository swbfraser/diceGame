#pragma once

#include "Die.h"
class Cup
{
private:

	size_t numberOfDice;
	Die* dice;

	size_t getNumberOfDice() const;

public:

	Cup();
	Cup(size_t numberOfDice);
	~Cup();
	Cup(const Cup& rhs);

	Cup& operator =(const Cup& rhs);


	void roll();
	int total();
	bool isEqualDieRolls();
};


inline size_t Cup::getNumberOfDice() const
{
	return numberOfDice;
}

