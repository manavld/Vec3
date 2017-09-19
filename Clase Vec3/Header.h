#ifndef VEC3_HPP
#define VEC3_HPP
#include <iostream>

template <class TYPE>

class Vec3 {
private:
	TYPE x, y, z;
public:
	Vec3() { x = 0; y = 0; z = 0; };
	Vec3(TYPE x, TYPE y, TYPE z):x(x), y(y), z(z) {};
	/*Vec3(TYPE valx, TYPE valy, TYPE valz) {
		x = valx;
		y = valy;
		z = valz;
	}*/

	TYPE getx() const {
		return x;
	}
	TYPE gety() const {
		return y;
	}
	TYPE getz() const {
		return z;
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	Vec3 operator + (Vec3 vec) {
		return Vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	Vec3 operator - (Vec3 vec) {
		return Vec3(x - vec.x, y - vec.y, z - vec.z);
	}

	void operator += (Vec3 vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;
	}

	void operator -= (Vec3 vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
	}

	Vec3 operator = (Vec3 vec) {
		return Vec3(vec.x = x, vec.y = y, vec.z = z);
	}

	bool operator == (const Vec3 &vec1)  {
		return x == vec1.x && y == vec1.y && z == vec1.z;
	}




};


	



#endif

