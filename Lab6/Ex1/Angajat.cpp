#include "ANGAJAT.h"

ANGAJAT::ANGAJAT(string cnp, string nume, string email, string departament) :PERSOANA(cnp, nume), email(email), departament(departament)
{
}

ANGAJAT::~ANGAJAT() {}

ANGAJAT::ANGAJAT(const ANGAJAT& a) :PERSOANA(a.cnp, a.nume)
{
	email = a.email;
	departament = a.departament;
}

ANGAJAT& ANGAJAT::operator=(const ANGAJAT& a)
{
	PERSOANA::operator=(a);
	email = a.email;
	departament = a.departament;

	return *this;
}
