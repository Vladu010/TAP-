#pragma once
#include <iostream>
#include "PUNCT2D.h"

class PUNCT3D : public PUNCT2D
{
protected:
	int z;

public:
	PUNCT3D(int x = 0, int y = 0, int z = 0);
	PUNCT3D(const PUNCT3D& p);
	~PUNCT3D();
	PUNCT3D& operator=(const PUNCT3D& p);

	void distanta(const PUNCT3D& p);

	bool operator==(const PUNCT3D&) const;
	bool operator<(const PUNCT3D&) const;
	bool operator>(const PUNCT3D&) const;
	bool operator<=(const PUNCT3D&) const;
	bool operator>=(const PUNCT3D&) const;

	PUNCT3D operator-() const;

	PUNCT3D operator+(const PUNCT3D&) const;
	PUNCT3D operator-(const PUNCT3D&) const;
	PUNCT3D operator*(const PUNCT3D&) const;
	PUNCT3D operator/(const PUNCT3D&) const;


	PUNCT3D& operator*=(const PUNCT3D&);
	PUNCT3D& operator/=(const PUNCT3D&);

	PUNCT3D& operator++();
	PUNCT3D& operator--();

	friend ostream& operator<<(ostream&, const PUNCT3D&);
	friend istream& operator>>(istream&, PUNCT3D&);
};

