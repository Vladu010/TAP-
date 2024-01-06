#include "Dreptunghic.h"
#include "Triunghi.h"

Dreptunghic::Dreptunghic(int l1, int l2, int l3) :Triunghi(l1, l2, l3)
{
}

Dreptunghic::~Dreptunghic() {}

Dreptunghic::Dreptunghic(const Dreptunghic& d) :Triunghi(d.l1, d.l2, d.l3)
{
}

Dreptunghic& Dreptunghic::operator=(const Dreptunghic& d)
{
	Triunghi::operator=(d);

	return *this;
}
