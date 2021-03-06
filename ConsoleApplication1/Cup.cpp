#include "Cup.h"

Cup::Cup() :Cup(2) {};

Cup::Cup(size_t numberOfDice)
{
	this->numberOfDice = numberOfDice;
	dice = new Die[numberOfDice];
}

Cup::Cup(const Cup& rhs)
{
	dice = new Die[rhs.getNumberOfDice()];
	numberOfDice = rhs.getNumberOfDice();

	for (size_t i = 0; i < rhs.getNumberOfDice(); i++)
	{
		dice[i] = rhs.dice[i];
	}

}

Cup::~Cup() {
	delete[] dice;
}

Cup& Cup::operator=(const Cup& rhs)
{

	if (this == &rhs) return *this;

	delete[] dice;
	dice = new Die[rhs.getNumberOfDice()];
	numberOfDice = rhs.getNumberOfDice();

	for (size_t i = 0; i < rhs.getNumberOfDice(); i++)
	{
		dice[i] = rhs.dice[i];
	}

	return *this;
}

void Cup::roll()
{
	
	for (size_t i = 0; i < getNumberOfDice(); i++)
	{
		dice[i].roll();
	}

}


int Cup::total()
{
	int result = 0;
	for (size_t i = 0; i < getNumberOfDice(); i++)
	{
		result+=dice[i].getFaceValue();
	}
	return result;
}

bool Cup::isEqualDieRolls()
{
	bool result = true;
	int faceValue = dice[0].getFaceValue();

	for (size_t i = 1; i < getNumberOfDice(); i++)
	{
		result = result && (faceValue == dice[i].getFaceValue());
	}
	return result;

}
