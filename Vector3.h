#pragma once
class Vector3
{
public:
	Vector3();
	~Vector3();
	static Vector3 CrossVector3(Vector3 vl, Vector3 vr);
	static float DotVector3(Vector3 vl, Vector3 vr);
	float Distance();
	float x, y, z;
	Vector3 operator * (float obj) {
		this->x *= obj;
		this->y *= obj;
		this->z *= obj;
		return *this;
	}
		Vector3 operator / (float obj) {
			this->x /= obj;
			this->y /= obj;
			this->z /= obj;
			return *this;
		}

	Vector3 operator + (Vector3 obj) {
		this->x += obj.x;
		this->y += obj.y;
		this->z += obj.z;
		return *this;
	}


};

