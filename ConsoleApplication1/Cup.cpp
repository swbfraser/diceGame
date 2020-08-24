#include "Cup.h"




void Cup::roll()
{
	die1.roll();
	die2.roll();
}


int Cup::total()
{
	return die1.getFaceValue() + die2.getFaceValue();
}

int Cup::isEqualDieRolls()
{
	return die1.getFaceValue() == die2.getFaceValue();
}
