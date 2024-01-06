#include "PUNCT3D.h"
#include <math.h>
#include<iostream>

using namespace std;

PUNCT3D::PUNCT3D(int x, int y, int z) :PUNCT2D(x, y)
{
	this->z = z;
}

PUNCT3D::PUNCT3D(const PUNCT3D& p) : PUNCT2D(p)
{
	this->z = p.z;
}

PUNCT3D::~PUNCT3D()
{
	this->z = 0;
}

PUNCT3D& PUNCT3D::operator=(const PUNCT3D& p)
{
	if (this != &p)
	{
		PUNCT3D::operator=(p);
		this->z = p.z;
	}
	return *this;
}

void PUNCT3D::distanta(const PUNCT3D& p)
{
	cout << "Distanta dintre 2 puncte in spatiu: " << sqrt(pow((x - p.x), 2) + pow((y - p.y), 2) + pow((z - p.z), 2)) << endl;
}

// bool PUNCT3D::operator==(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// bool PUNCT3D::operator<(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// bool PUNCT3D::operator>(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// bool PUNCT3D::operator<=(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// bool PUNCT3D::operator>=(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// PUNCT3D PUNCT3D::operator-() const
// {
// 	return 1 ;;
// }

// PUNCT3D PUNCT3D::operator+(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// PUNCT3D PUNCT3D::operator-(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// PUNCT3D PUNCT3D::operator*(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// PUNCT3D PUNCT3D::operator/(const PUNCT3D&) const
// {
// 	return 1 ;;
// }

// PUNCT3D& PUNCT3D::operator*=(const PUNCT3D&)
// {
// 	return 1 ;;
// }

// PUNCT3D& PUNCT3D::operator/=(const PUNCT3D&)
// {
// 	return 1 ;;
// }

// PUNCT3D& PUNCT3D::operator++()
// {
// 	return 1 ;;
// }

// PUNCT3D& PUNCT3D::operator--()
// {
// 	return 1 ;;
// }

ostream& operator<<(ostream& os, const PUNCT3D& p)
{
	os << "x: " << p.x << "  y: " << p.y << "  z: " << p.z;
	return os;
}

istream& operator>>(istream& is, PUNCT3D& p)
{
	cout << "coordonata x este: ";
	is >> p.x;
	cout << "coordonata y este: ";
	is >> p.y;
	cout << "coordonata z este: ";
	is >> p.z;

	return is;
}
