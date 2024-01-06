#include <iostream>
#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"

using namespace std;

int main()
{
	STUDENT a("19310842106", "andrei", "andrei@gmail.com", 7);
	STUDENT b("29310842106", "dana", "dana@gmail.com", 9);

	a.detalii();
	b.detalii();

	PROFESOR p("19310842106", "Profesor", "profesor@gmail.com", "geografie");

	p.detalii();

	ANGAJAT angj("6732626236", "Angajat", "angajat@gmail.com", "departament");

	angj.detalii();

	return 0;
}