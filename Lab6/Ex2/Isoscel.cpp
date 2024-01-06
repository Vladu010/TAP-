#include "Isoscel.h"

Isoscel::Isoscel(int l1, int l3) :Triunghi(l1, l3)
{
}

Isoscel::~Isoscel() {}

Isoscel::Isoscel(const Isoscel& i) :Triunghi(i.l1, i.l3)
{
}

Isoscel& Isoscel::operator=(const Isoscel& i)
{
	Triunghi::operator=(i);

	return *this;
}
