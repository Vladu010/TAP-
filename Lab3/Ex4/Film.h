#pragma once
#include <iostream>
#include "Actor.h"

using namespace std;

class Film
{
private:
	string nume;
	int nrActori;
	double buget;
	Actor** actori;
	int contor_actori;
public:
	Film(string nume = "numeFilm", int nrActori = 0, double buget = 0.0);
	Film(const Film& f);
	~Film();
	Film& operator=(const Film& f);

	string getNume();
	void setNume(string s);
	int getNumarActori();
	int getBuget();

	void adaugaActor(Actor* a);
	void afisareActori();

	friend void actoriComuni(const Film& f1, const Film& f2);

	friend class Actor;
};
