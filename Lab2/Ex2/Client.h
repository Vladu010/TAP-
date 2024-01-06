#pragma once
#include "ContBancar.h"

class Client
{
private:
	// string nume;
	// string prenume;
	// string adresa;

	// ContBancar** conturi;
	// int nr_conturi;
	// int contor_conturi;

	// friend class Bank;

public:
	Client(string nume, string prenume, string adresa, int nrconturi);
	//Client(const Client& c);

	void adaugaCont(ContBancar* cont);
	ContBancar getBankAccount(int index);
	string nume;
	string prenume;
	string adresa;

	ContBancar** conturi;
	int nr_conturi;
	int contor_conturi;

	friend class Bank;
};




