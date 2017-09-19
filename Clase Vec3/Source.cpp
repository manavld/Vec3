#include <stdio.h>
#include <iostream>
#include "Header.h"
using namespace std;
int main() {

	printf("HELLO\n");

	Vec3<float> vector1(2, 5, 5.4);
	Vec3<float> vector2(1, 2, 1);
	Vec3<float> vector3=vector1+vector2;
	Vec3<float> vector4 = vector2;
	cout << (vector4 == vector2) << endl;
	cout << vector1.getx() <<" "<< vector1.gety() <<" "<< vector1.getz() << endl;
	cout << vector3.getx() << " " << vector3.gety() << " " << vector3.getz() << endl;
	(vector1 += vector3);
	(vector2 -= vector1);
	cout << vector1.getx() << " " << vector1.gety() << " " << vector1.getz() << endl;
	cout << vector2.getx() << " " << vector2.gety() << " " << vector2.getz() << endl;
	vector3.zero();
	cout << vector3.getx() << " " << vector3.gety() << " " << vector3.getz() << endl;

	system("pause");
	return 0;
}