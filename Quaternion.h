#pragma once
#include "Vector3.h"

class Quaternion
{
public:
	static Quaternion Slerp(Vector3,Vector3,float t);
	Quaternion();
	~Quaternion();
private:
	float w, x, y, z;
};

