#pragma once
#include <iostream>
#include "Triunghi.h"

class Dreptunghic : public virtual Triunghi
{
public:
	Dreptunghic(int l1 = 0, int l2 = 0, int l3 = 0);
	virtual ~Dreptunghic();
	Dreptunghic(const Dreptunghic&);
	Dreptunghic& operator=(const Dreptunghic&);

	virtual inline void arie() override { cout << "Aria triunghiului drept. este: " << l1 * l2 / 2 << endl; }
	virtual inline void perimetru() override { cout << "Perimetrul triunghiului drept. este: " << l1 + l2 + l3 << endl; }
};

