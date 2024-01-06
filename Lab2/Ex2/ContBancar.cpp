#include "ContBancar.h"

ContBancar::ContBancar(string nrcont, string moneda, float suma) : suma(suma), moneda(moneda), nrcont(nrcont) {};

ContBancar::ContBancar(const ContBancar& cont) {
	this->suma = cont.suma;
	this->moneda = string(cont.moneda);
	this->nrcont = string(cont.nrcont);
}

float ContBancar::getSumaTotala() {
	return this->suma + this->getDobanda();
}

float ContBancar::getDobanda() {
	if (this->moneda.compare("RON") == 0) {
		return ((this->suma < 500) ? 0.3 : 0.8);
	}
	else {
		return 0.1;
	}
}

void ContBancar::depunere(float suma) {
	if (suma >= 0)
		this->suma += suma;
}

void ContBancar::retragere(float suma) {
	if (suma >= 0)
		this->suma -= suma;
}






