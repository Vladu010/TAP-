#include "Dreptunghic_isoscel.h"

Dreptunghic_isoscel::Dreptunghic_isoscel(int l1, int l2, int l3) :l1(l1), l2(l2), l3(l3)
{
}

Dreptunghic_isoscel::~Dreptunghic_isoscel() {}

Dreptunghic_isoscel::Dreptunghic_isoscel(const Dreptunghic_isoscel& d_i)
{
	l1 = d_i.l1;
	l2 = d_i.l2;
	l3 = d_i.l3;
}

Dreptunghic_isoscel& Dreptunghic_isoscel::operator=(const Dreptunghic_isoscel& d_i)
{
	l1 = d_i.l1;
	l2 = d_i.l2;
	l3 = d_i.l3;

	return *this;
}
