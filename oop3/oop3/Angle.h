#pragma once
#include <iostream>
#define _USE_MATH_DDEFINES
#include <cmath>
#define M_PI 3.14159265358979323846
#include "string"

class Angle {
	double degree;
	double minutes;
public:
	Angle();
	Angle(double d, double m);
	double getd();
    double getm();
	double getANG();
	void setd(int d);
	void setm(int m);
	double ConversionToRadians();
	double Sin();
	double range0360();
	void operetorsrv(const Angle& ang);
	Angle operator-(const Angle& ang);
	Angle operator+(const Angle& ang);
	std::string toString();
	//friend std::ostream& operator<<(std::ostream& out, Angle& ang);
	//friend std::istream& operator>>(std::istream& in, Fuzzy& fuzzy)
	Angle& operator=(const Angle& ang);

	
};
