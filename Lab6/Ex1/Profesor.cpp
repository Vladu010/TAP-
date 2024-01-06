#include "Profesor.h"

PROFESOR::PROFESOR(string cnp, string nume, string email, string materia) :PERSOANA(cnp, nume), email(email), materia(materia)
{
}

PROFESOR::~PROFESOR() {}

PROFESOR::PROFESOR(const PROFESOR& p) :PERSOANA(p.cnp, p.nume)
{
	email = p.email;
	materia = p.materia;
}

PROFESOR& PROFESOR::operator=(const PROFESOR& p)
{
	PERSOANA::operator=(p);
	email = p.email;
	materia = p.materia;

	return *this;
}
