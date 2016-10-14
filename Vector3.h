#pragma once
class Vector3
{
private:
	float x, y, z;
public:
	Vector3();
	~Vector3();
	static Vector3 CrossVector3(const Vector3 vl, const Vector3 vr);
	static float DotVector3(const Vector3 vl, const Vector3 vr);
	float Distance() const;
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

