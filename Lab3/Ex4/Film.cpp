#include "Film.h"
#include <iostream>
#include <algorithm> 

using namespace std;

Film::Film(string nume, int nrActori, double buget) :nume(nume), nrActori(nrActori), buget(buget)
{
	actori = new Actor * [nrActori];
	contor_actori = 0;
}

Film::Film(const Film& f)
{
	nume = f.nume;
	nrActori = f.nrActori;
	buget = f.buget;

	actori = new Actor * [nrActori];
	for (int i = 0; i < nrActori; ++i)
		actori[i] = f.actori[i];
}

Film::~Film()
{
	nume = "";
	nrActori = 0;
	buget = 0.0;
	//delete[] actori;
}

Film& Film::operator=(const Film& f)
{
	nume = f.nume;
	nrActori = f.nrActori;
	buget = f.buget;

	for (int i = 0; i < f.nrActori; ++i)
		actori[i] = f.actori[i];

	return *this;
}

string Film::getNume()
{
	return nume;
}

void Film::setNume(string s)
{
	nume = s;
}

int Film::getNumarActori()
{
	return nrActori;
}

int Film::getBuget()
{
	return buget;
}

void Film::adaugaActor(Actor* a)
{
	actori[contor_actori++] = a;
}

void Film::afisareActori()
{
	for (int i = 0; i < nrActori; ++i)
		cout << actori[i]->getNume() << " ";
}

void actoriComuni(const Film& f1, const Film& f2)
{
	for (int i = 0; i < f1.nrActori; ++i)
		for (int j = 0; j < f2.nrActori; ++j)
			if (f1.actori[i] == f2.actori[j])
				cout << "\nActor comun: " << f1.actori[i]->getNume();
}