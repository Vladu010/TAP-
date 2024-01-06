#pragma once
#include <iostream>
#include "Isoscel.h"

class Echilateral : public Isoscel
{
protected:
	int l;
public:
	Echilateral(int l = 0);
	~Echilateral();
	Echilateral(const Echilateral&);
	Echilateral& operator=(const Echilateral&);

	inline void arie() { cout << "Aria triunghiului echilateral este: " << l * l * sqrt(3) / 4 << endl; }
	inline void perimetru() override { cout << "Perimetrul triunghiului echilateral este: " << l * 3 << endl; }
};
