#include "Die.h"
#include <cstdlib>



Die::Die() :numberOfFaces(6)
{
}

void Die::roll()
{
	int roll = rand() % numberOfFaces + 1;
	setFaceValue(roll);

}



