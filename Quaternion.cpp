#include "Quaternion.h"
#include <math.h>
//(??, (?? ? ??) ?? + (?? ~ ??) ~ ??cos?? + ?? ~ ?? sin ??)
Quaternion Quaternion::Slerp(Vector3 x1, Vector3 x2, float t)
{
	Quaternion q = Quaternion();
	Vector3 x;
	Vector3 crossV = Vector3::CrossVector3(x1, x2);
	Vector3 v = crossV / crossV.Distance();
	float rad = Vector3::DotVector3(x1, x2) / (x1.Distance()*x2.Distance());
	rad *= t;
	Vector3 a = (v*Vector3::DotVector3(v, x)) + Vector3::CrossVector3(Vector3::CrossVector3(v, x), v*cos(rad)) + Vector3::CrossVector3(v, x*sin(rad));
	return q;
}



Quaternion::Quaternion()
{
	x = y = z = 0.0f;
	w = 1.0f;
}


Quaternion::~Quaternion()
{
}


