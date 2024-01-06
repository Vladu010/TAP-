#include "Angajat.h"
#include <iostream>

using namespace std;


Angajat::Angajat(double tarifOrar, int nrore) : tarifOrar(tarifOrar), nrore(nrore) {}

Angajat::Angajat(const Angajat& obiect)
{
    this->tarifOrar = obiect.tarifOrar;
    this->nrore = obiect.nrore;
}

Angajat::~Angajat()
{
    this->nrore = 0;
    this->tarifOrar = 0;
}

Angajat& Angajat::operator=(const Angajat& angajat)
{
    this->nrore = angajat.nrore;
    this->tarifOrar = angajat.tarifOrar;

    return *this;
}

ostream& operator<<(ostream& os, const Angajat& angajat)
{
    os << "tarifOrar = " << angajat.tarifOrar << " \nnrore= " << angajat.nrore << endl;
    return os;
}


istream& operator>>(istream& is, Angajat& angajat)
{
    cout << "introduceti val nrore: " << endl;
    is >> angajat.nrore;
    cout << "introduceti val tariforar: " << endl;
    is >> angajat.tarifOrar;
    return is;
}

int Angajat::getNrOre()
{
    return this->nrore;
}

double Angajat::getSalar()
{
    return this->nrore * this->tarifOrar;
}

double Angajat::getTarifOrar()
{
    return this->tarifOrar;
}