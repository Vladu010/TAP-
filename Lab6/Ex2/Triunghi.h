#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Triunghi
{
protected:
	int l1, l2, l3;
public:
	Triunghi(int l1 = 0, int l2 = 0, int l3 = 0);
	virtual ~Triunghi();
	Triunghi(const Triunghi&);
	Triunghi& operator=(const Triunghi&);

	virtual inline void arie() { cout << "Aria triunghiului este: " << sqrt(((l1 + l2 + l3) / 2) * (((l1 + l2 + l3) / 2) - l1) * (((l1 + l2 + l3) / 2) - l2) * (((l1 + l2 + l3) / 2) - l3)) << endl; }
	virtual inline void perimetru() { cout << "Perimetrul triunghiului este: " << l1 + l2 + l3 << endl; }
};

