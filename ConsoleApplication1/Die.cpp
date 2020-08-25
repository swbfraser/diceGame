#include "Die.h"
#include <cstdlib>


void Die::roll()
{
	int roll = rand() % numberOfFaces + 1;
	setFaceValue(roll);

}



