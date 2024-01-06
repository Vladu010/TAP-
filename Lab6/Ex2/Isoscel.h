#pragma once

#include <iostream>
#include <cmath>
#include "Triunghi.h"

class Isoscel : public virtual Triunghi
{
public:
	Isoscel(int l1 = 0, int l3 = 0);
	virtual ~Isoscel();
	Isoscel(const Isoscel&);
	Isoscel& operator=(const Isoscel&);

	virtual inline void arie() override { cout << "Aria triunghiului isoscel este: " << (l3 * sqrt(l1 * l1 - l3 / 2 * l3 / 2)) / 2 << endl; }
	virtual inline void perimetru() override { cout << "Perimetrul triunghiului isoscel este: " << l1 * 2 + l3 << endl; }
};
