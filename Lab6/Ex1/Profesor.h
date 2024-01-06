#pragma once

#include <iostream>
#include "Persoana.h"

class PROFESOR : public PERSOANA
{
protected:
	string email, materia;

public:
	PROFESOR(string cnp = "", string nume = "", string email = "", string materia = "");
	~PROFESOR();
	PROFESOR(const PROFESOR&);
	PROFESOR& operator=(const PROFESOR&);

	inline string getMaterie() { return materia; }
	inline void detalii() override { cout << "Profesorul " << nume << " preda materia: " << getMaterie() << endl; }
};
