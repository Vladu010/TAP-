#include "Persoana.h"

PERSOANA::PERSOANA(string cnp, string nume) : cnp(cnp), nume(nume) {}

PERSOANA::~PERSOANA()
{
	this->cnp = " ";
	this->nume = " ";
}

PERSOANA::PERSOANA(const PERSOANA& persoana)
{
	this->cnp = persoana.cnp;
	this->nume = persoana.nume;
}

PERSOANA& PERSOANA::operator=(const PERSOANA& persoana)
{
	this->cnp = persoana.cnp;
	this->nume = persoana.nume;
	return *this;
}