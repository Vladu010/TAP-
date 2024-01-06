#include "Echilateral.h"

Echilateral::Echilateral(int l) :l(l)
{
}

Echilateral::~Echilateral()
{
}

Echilateral::Echilateral(const Echilateral& e)
{
	l = e.l;
}

Echilateral& Echilateral::operator=(const Echilateral& e)
{
	l = e.l;
	return *this;
}
