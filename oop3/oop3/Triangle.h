#pragma once
#include "Angle.h"
class Triangle {
	Angle A;
	Angle B;
	Angle C;
	double AB;
	double BC;
	double CA;
public:
	Triangle();
	Triangle(Angle a, Angle b, Angle c, double ab, double bc, double ca);
	Angle getA();
	Angle getB();
	Angle getC();
	double getAB();
	double getBC();
	double getCA();
	void setA(Angle a);
	void setB(Angle b);
	void setC(Angle c);
	void setAB(double ab);
	void setBC(double bc);
	void setCA(double ac);
	double perimeter();
	double square();
	void heights();
	void TriangleTypeA();
	void TriangleTypeS();
	friend std::ostream& operator<<(std::ostream& out, Triangle& tri);
	friend std::istream& operator>>(std::istream& in, Triangle& tri);
};
