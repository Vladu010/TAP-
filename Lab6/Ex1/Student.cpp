#include "Student.h"

STUDENT::STUDENT(string cnp, string nume, string email, int nota) :PERSOANA(cnp, nume), email(email), nota(nota)
{
}

STUDENT::~STUDENT() {}

STUDENT::STUDENT(const STUDENT& s) :PERSOANA(s.cnp, s.nume)
{
	email = s.email;
	nota = s.nota;
}

STUDENT& STUDENT::operator=(const STUDENT& s)
{
	PERSOANA::operator=(s);
	email = s.email;
	nota = s.nota;

	return *this;
}
