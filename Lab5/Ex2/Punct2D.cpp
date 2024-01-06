#include "PUNCT2D.h"
#include <math.h>
#include<iostream>

using namespace std;

PUNCT2D::PUNCT2D(int x, int y) :x(x), y(y) {}

PUNCT2D::PUNCT2D(const PUNCT2D& punct)
{
	this->x = punct.x;
	this->y = punct.y;
}

PUNCT2D::~PUNCT2D()
{
	this->x = 0;
	this->y = 0;
}

PUNCT2D& PUNCT2D::operator=(const PUNCT2D& punct)
{
	this->x = punct.x;
	this->y = punct.y;
	return *this;
}

void PUNCT2D::distanta(const PUNCT2D& p)
{
	cout << "Distanta dintre cele 2 puncte in plan: " << sqrt(pow((this->x - p.x), 2) + pow((this->y - p.y), 2)) << endl;
}

int PUNCT2D::getCoordonateX()
{
	return this->x;
}

int PUNCT2D::getCoordonateY()
{
	return this->y;
}

bool PUNCT2D::operator==(const PUNCT2D& punct) const {
	return (this->x == punct.x && this->y == punct.y);
}

bool PUNCT2D::operator<(const PUNCT2D& punct) const
{
	if (this->x == punct.x)
		return (this->y < punct.y);
	else
		return (this->x < punct.x);
}

bool PUNCT2D::operator>(const PUNCT2D& punct) const
{
	if (this->x == punct.x)
		return (this->y > punct.y);
	else
		return (this->x > punct.x);
}

bool PUNCT2D::operator<=(const PUNCT2D& punct) const
{
	if (this->x == punct.x)
		return (this->y <= punct.y);
	else
		return (this->x <= punct.x);
}

bool PUNCT2D::operator>=(const PUNCT2D& punct) const
{
	if (this->x == punct.x)
		return (this->y >= punct.y);
	else
		return (this->x >= punct.x);
}

// PUNCT2D PUNCT2D::operator-() const
// {
// 	return 1 ;
// }

// PUNCT2D PUNCT2D::operator+(const PUNCT2D&) const
// {
// 	return 1 ;
// }

// PUNCT2D PUNCT2D::operator-(const PUNCT2D&) const
// {
// 	return 1 ;
// }

// PUNCT2D PUNCT2D::operator*(const PUNCT2D&) const
// {
// 	return 1 ;
// }

// PUNCT2D PUNCT2D::operator/(const PUNCT2D&) const
// {
// 	return 1 ;
// }

// PUNCT2D& PUNCT2D::operator*=(const PUNCT2D& p)
// {
// 	return 1 ;
// }

// PUNCT2D& PUNCT2D::operator/=(const PUNCT2D& p)
// {
// 	return 1 ;
// }

// PUNCT2D& PUNCT2D::operator++()
// {
// 	return 1 ;
// }

// PUNCT2D& PUNCT2D::operator--()
// {
// 	return 1 ;
// }

ostream& operator<<(ostream& os, const PUNCT2D& punct)
{
	os << "coordonata x este: " << punct.x << "\ncoordonata y este: " << punct.y;
	return os;
}

istream& operator>>(istream& is, PUNCT2D& punct)
{
	cout << "introduceti coordonata x: ";
	is >> punct.x;
	cout << "introduceti coordonata y: ";
	is >> punct.y;

	return is;
}
