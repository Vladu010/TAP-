#pragma once

#include "Persoana.h"
#include <iostream>

using namespace std;

class STUDENT : public PERSOANA {

protected:
	string email;
	int nota;

public:
	STUDENT(string nume = "", string cnp = 0, string email = "", int nota = 0);
	~STUDENT();
	STUDENT(const STUDENT&);
	STUDENT& operator=(const STUDENT&);

	inline int getNota() { return nota; }
	inline void detalii() override { cout << "Studentul " << nume << " are nota: " << getNota() << endl; }



};
