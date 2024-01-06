#pragma once
#include <iostream>

using namespace std;

class PERSOANA
{
protected:
	string cnp, nume;

public:
	PERSOANA(string cnp = "", string nume = "");
	~PERSOANA();
	PERSOANA(const PERSOANA&);
	PERSOANA& operator=(const PERSOANA&);

	virtual void detalii() { cout << "persoana " << this->nume << " are cnp-ul: " << this->cnp << endl; }



};
