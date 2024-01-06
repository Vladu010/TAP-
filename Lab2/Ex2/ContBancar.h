#pragma once

#include <iostream>
using std::string;

class Operations {
private:

public:
	virtual float getSumaTotala() = 0;
	virtual float getDobanda() = 0;
	virtual void depunere(float suma) = 0;
	virtual void retragere(float suma) = 0;
};

class ContBancar : Operations
{
private:
	float suma;
	string moneda;
	string nrcont;

	friend class Banca;

public:
	ContBancar(string nrcont, string moneda, float suma);
	ContBancar(const ContBancar& cont);

	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void retragere(float suma);
};



