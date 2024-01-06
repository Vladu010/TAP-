#include "Carte.h"
#include <iostream>

using namespace std;

Carte::Carte(string autor, string titlu, string ISBN, double pret) :autor(autor), titlu(titlu), ISBN(ISBN), pret(pret)
{
	++count;
}

Carte::Carte(const Carte& c)
{
	autor = c.autor;
	titlu = c.titlu;
	ISBN = c.ISBN;
	pret = c.pret;
	++count;
}

Carte::~Carte()
{
	autor = " ";
	titlu = " ";
	ISBN = " ";
	pret = 0;
	--count;
}

Carte& Carte::operator=(const Carte& c)
{
	autor = c.autor;
	titlu = c.titlu;
	ISBN = c.ISBN;
	pret = c.pret;
	return *this;
}

int Carte::count = 0;