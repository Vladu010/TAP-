#pragma once

#include <iostream>
#include "Persoana.h"

class ANGAJAT : public PERSOANA
{
protected:
	string email, departament;
public:
	ANGAJAT(string cnp, string nume, string email, string departament);
	~ANGAJAT();
	ANGAJAT(const ANGAJAT&);
	ANGAJAT& operator=(const ANGAJAT&);

	inline string getDepartament() { return departament; }
	inline void detalii() override { cout << "ANGAJATul " << nume << " face parte din departamentul: " << getDepartament() << endl; }


};
