#pragma once
#include "Client.h"
#include <string>

using namespace std;

class Banca
{
private:
	// string cod;

	// Client** clienti;
	// int nrclienti;
	// int contor_clienti;

public:
	Banca(string cod, int nrclienti);
	void adaugaClient(Client* client);
	Client getClient(int index);
	void afisareBanca();

	string cod;

	Client** clienti;
	int nrclienti;
	int contor_clienti;
};




