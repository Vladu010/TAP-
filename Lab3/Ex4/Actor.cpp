#include "Actor.h"
#include <iostream>

using namespace std;

Actor::Actor(string nume, string prenume, int varsta) :nume(nume), prenume(prenume), varsta(varsta)
{
	nrInstanteActor++;
}

Actor::Actor(const Actor& a)
{
	nume = a.nume;
	prenume = a.prenume;
	varsta = a.varsta;
	nrInstanteActor++;
}

Actor::~Actor()
{
	nume = "";
	prenume = "";
	varsta = 0;
	nrInstanteActor--;
}

Actor& Actor::operator=(const Actor& a)
{
	nume = a.nume;
	prenume = a.prenume;
	varsta = a.varsta;

	return *this;
}

int Actor::nrInstanteActor = 0;