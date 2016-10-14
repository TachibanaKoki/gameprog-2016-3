#pragma once
#include "Vector3.h"

class Quaternion
{
public:
	static Quaternion Slerp(Vector3,Vector3,float t);
	float w, x, y, z;
	Quaternion();
	~Quaternion();
private:

};

