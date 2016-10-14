#include "Vector3.h"
#include <math.h>

Vector3 Vector3::CrossVector3(const Vector3 vl, const Vector3 vr) {
	Vector3 ret;
	ret.x = (vl.y * vr.z) - (vl.z * vr.y);
	ret.y = (vl.z * vr.x) - (vl.x * vr.z);
	ret.z = (vl.x * vr.y) - (vl.y * vr.x);

	return ret;
}
float Vector3::DotVector3(const Vector3 vl, const Vector3 vr) {
	return vl.x * vr.x + vl.y * vr.y + vl.z * vr.z;
}

float Vector3::Distance() {
	return sqrtf( x * x + y * y + z * z);
}

Vector3::Vector3()
{
	x = y = z = 0.0f;
}


Vector3::~Vector3()
{
}
