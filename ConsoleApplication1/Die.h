#pragma once
class Die
{
private:
	const int numberOfFaces;
	int faceValue;
public:
	Die();
	void roll();
	int getFaceValue();
	void setFaceValue(int faceValue);
};


inline int Die::getFaceValue()
{
	return faceValue;
}

inline void Die::setFaceValue(int faceValue)
{
	this->faceValue = faceValue;
}

