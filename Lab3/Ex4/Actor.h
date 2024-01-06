#pragma once
#include <iostream>

using namespace std;

class Actor
{
private:
	string nume;
	string prenume;
	int varsta;

	static int nrInstanteActor;

public:
	Actor(string nume = "numeActor", string prenume = "prenumeActor", int varsta = 0);
	Actor(const Actor& a);
	~Actor();
	Actor& operator=(const Actor& a);

	inline void setNume(string n) { nume = n; }
	inline string getNume() { return nume; }
	inline int static getNrInstanteActor() { return nrInstanteActor; }
};

