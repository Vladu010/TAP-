#include "Triunghi.h"

Triunghi::Triunghi(int l1, int l2, int l3) :l1(l1), l2(l2), l3(l3)
{
}

Triunghi::~Triunghi() {}

Triunghi::Triunghi(const Triunghi& t)
{
	l1 = t.l1;
	l2 = t.l2;
	l3 = t.l3;
}

Triunghi& Triunghi::operator=(const Triunghi& t)
{
	l1 = t.l1;
	l2 = t.l2;
	l3 = t.l3;

	return *this;
}
