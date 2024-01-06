#pragma once
#include <iostream>
#include "Dreptunghic.h"
#include "Isoscel.h"

class Dreptunghic_isoscel : public Dreptunghic, public Isoscel
{
protected:
	int l1, l2, l3;
public:
	Dreptunghic_isoscel(int l1 = 0, int l2 = 0, int l3 = 0);
	~Dreptunghic_isoscel();
	Dreptunghic_isoscel(const Dreptunghic_isoscel&);
	Dreptunghic_isoscel& operator=(const Dreptunghic_isoscel&);

	inline void arie() override { cout << "Aria triunghiului dreptunghic isoscel este: " << l1 * l2 / 2 << endl; }
	inline void perimetru() override { cout << "Perimetrul triunghiului dreptunghic isoscel este: " << l1 + l2 + l3 << endl;; }
};
