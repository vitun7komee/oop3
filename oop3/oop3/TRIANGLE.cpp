#include "Triangle.h"

Triangle::Triangle(){

	Angle A1(0, 0);
	Angle B1(0, 0);
	Angle C1(0, 0);
	A = A1;
	B = B1;
	C = C1;
	AB = 0;
	BC = 0;
	CA = 0;
}
Triangle::Triangle(Angle a, Angle b, Angle c, double ab, double bc, double ca){
	A = a;
	B = b;
	C = c;
	AB = ab;
	BC = bc;
	CA = ca;
}
Angle Triangle::getA() { return A; }
Angle Triangle::getB(){ return B; }
Angle Triangle::getC(){ return C; } 
double Triangle::getAB() { return AB; }
double Triangle::getBC() { return BC; }
double Triangle::getCA() { return CA; }
void Triangle::setA(Angle a) { A = a; }
void Triangle::setB(Angle b) { B = b; }
void Triangle::setC(Angle c) { C = c; }
void Triangle::setAB(double ab) { AB = ab; }
void Triangle::setBC(double bc) { BC = bc; }
void Triangle::setCA(double ca) { CA = ca; }
double Triangle::perimeter() {
	return AB + BC + CA;
}
double Triangle::square() {

/*	double sin = B.Sin();
	return (0.5 * AB * BC * sin)*/;
	double p = (AB + BC + CA) / 2;
	double AH = (2 / BC) * sqrt(p * (p - AB) * (p - BC) * (p - CA));
	return (AH * BC * 0.5);
}
void Triangle::heights() {
	double p = (AB + BC + CA) / 2;
	double AH = (2 / BC) * sqrt(p* (p - AB)* (p - BC)* (p - CA));
	double BH = (2 / AB) * sqrt(p * (p - AB) * (p - BC) * (p - CA));
	double CH = (2 / CA) * sqrt(p * (p - AB) * (p - BC) * (p - CA));
	std::cout << "height to side AB - " << CH << std::endl;
	std::cout << "height to side BC - " << AH << std::endl;
	std::cout << "height to side CA - " << BH << std::endl;
}
void Triangle::TriangleTypeA() {
	if (A.getANG() > 90 || B.getANG() > 90 || C.getANG() > 90) { std::cout << "obtuse triangle\n"; }
	else if (A.getANG() == 90 || B.getANG() == 90 || C.getANG() == 90) { std::cout << "right triangle\n"; }
	else if (A.getANG() < 90 && B.getANG() < 90 && C.getANG() < 90) { std::cout << "sharp rectangle\n"; }
}
void Triangle::TriangleTypeS() {
	if (AB == BC == CA) { std::cout << "equilateral triangle\n"; }
	else if (AB == BC || AB == CA || BC == CA) { std::cout << "Isosceles triangle\n"; }
	else if (A.getANG() == 90 || B.getANG() == 90 || C.getANG() == 90) { std::cout << "right triangle\n"; }
}
std::ostream& operator<<(std::ostream& out, Triangle& tri)
{
	out << "triangle angles in radians : (" << tri.A.ConversionToRadians() << ' ' << tri.B.ConversionToRadians() << ' ' << tri.C.ConversionToRadians() << ")" << std::endl;
	out << "sides of a triangle : " << tri.getAB() << ' ' << tri.getBC() << ' ' << tri.getCA() << std::endl;
	return out;

}
std::istream& operator>>(std::istream& in, Triangle& tri) {
	std::cout << "enter the sides of the triangle :\n";

	in >> tri.AB;
	std::cin.ignore();
	in >> tri.BC;
	std::cin.ignore();
	in >> tri.CA;
	std::cin.ignore();

	std::cout << "enter the angles of the triangle :\n";
	std::cout << "sequentially enter the degree measure of the angle and its minutes :\n";
	double a, b, c; double A, B, C;
	std::cin >> A >> a; std::cin >> B >> b; std::cin >> C >> c;
	tri.A.setd(A); tri.B.setd(B); tri.C.setd(C);
	tri.A.setm(a); tri.B.setm(b); tri.C.setm(c);

	return in;
}

