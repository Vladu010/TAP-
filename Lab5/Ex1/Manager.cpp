#include "Manager.h"
#include <iostream>
#include "Angajat.h"

using namespace std;


Manager::Manager(double tarifOrar, int nrore, int nrsubordonati) :Angajat(tarifOrar, nrore)
{
    this->nrsubordonati = nrsubordonati;
}

Manager::Manager(const Manager& manager) : Angajat(manager)
{
    nrsubordonati = manager.nrsubordonati;
}

Manager::~Manager()
{
    //Angajat::~Angajat(this);
    this->nrsubordonati = 0;
}

double Manager::getSalar()
{

    return (Angajat::getSalar() + (50 / 100) * Angajat::getSalar());
}

Manager& Manager::operator=(const Manager& manager)
{
    this->nrore = manager.nrore;
    this->tarifOrar = manager.tarifOrar;
    this->nrsubordonati = manager.nrsubordonati;

    return *this;
}

ostream& operator<<(ostream& os, const Manager& manager)
{
    Angajat::operator<<(os, manager);

    os << "\nnr subordonati: " << manager.getNrSubordonati();

    return os;
}

istream& operator>>(istream& is, Manager& manager)
{
    operator>>(is, manager);
    cout << "introduceti nr de angajati: " << endl;
    is >> manager.nrsubordonati;

    return is;
}

int Manager::getNrSubordonati()
{
    return this->nrsubordonati;
}