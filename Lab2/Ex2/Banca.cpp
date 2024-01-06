#include "Banca.h"
#include <iostream>

Banca::Banca(string cod, int nrclienti) {
	this->cod = cod;

	this->clienti = new Client * [nrclienti];
	this->nrclienti = nrclienti;
	this->contor_clienti = 0;

	for (int i = 0; i < nrclienti; i++)
		clienti[i] = NULL;

}

void Banca::adaugaClient(Client* client)
{
	if (contor_clienti < nrclienti) {
		this->clienti[contor_clienti++] = client;
	}
}

Client Banca::getClient(int index)
{
	if (index >= 0 && index < contor_clienti)
		return *clienti[index];
}

void Banca::afisareBanca()
{
	std::cout << this->cod << std::endl;

	for (int i = 0; i < this->contor_clienti; i++) {
		std::cout << clienti[i]->nume << " " << clienti[i]->prenume << " " << clienti[i]->adresa << std::endl;

		for (int j = 0; j < this->clienti[i]->contor_conturi; j++) {
			std::cout << clienti[i]->conturi[j]->nrcont << " "
				<< clienti[i]->conturi[j]->moneda << " "
				<< clienti[i]->conturi[j]->suma << std::endl;
		}

		std::cout << std::endl;
	}
}
