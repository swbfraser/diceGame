#pragma once
class Die
{
private:
	static const int numberOfFaces = 6;
	int faceValue;
public:
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

