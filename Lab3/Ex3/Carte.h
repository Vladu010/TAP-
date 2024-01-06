#pragma once
#ifndef _CARTE_
#define _CARTE_
#include <iostream>

using namespace std;

class Carte
{
private:
	string autor;
	string titlu;
	string ISBN;
	double pret;

	static int count;

public:
	Carte(string autor = "autor", string titlu = "titlu", string ISBN = "ID", double pret = 0);
	Carte(const Carte& c);
	~Carte();
	Carte& operator=(const Carte& c);

	inline void setAutor(string s) { autor = s; }
	inline void setTitlu(string s) { titlu = s; }
	inline void setISBN(string s) { ISBN = s; }
	inline void setpret(double p) { pret = p; }

	inline string getAutor() { return this->autor; }
	inline string getTitlu() { return this->titlu; }
	inline string getISBN() { return this->ISBN; }
	inline double getPret() { return this->pret; }

	inline static int getCount() { return count; }
};

#endif