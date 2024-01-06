#include "Dreapta.h"
#include <iostream>

using namespace std;

Dreapta::Dreapta(int m, int n) :m(m), n(n)
{

}

Dreapta::Dreapta(const Dreapta& dr)
{
	m = dr.m;
	n = dr.n;
}

Dreapta::~Dreapta()
{
	m = 1;
	n = 0;
}

Dreapta& Dreapta::operator=(const Dreapta& dr)
{
	m = dr.m;
	n = dr.n;
	return *this;
}
