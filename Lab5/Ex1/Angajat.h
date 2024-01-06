#pragma once

#include <iostream>
using namespace std;

class Angajat
{
protected:
    double tarifOrar;
    int nrore;

public:
    Angajat(double tarifOrar = 5.5, int nrore = 0);
    Angajat(const Angajat& obiect);
    virtual ~Angajat();
    Angajat& operator=(const Angajat&);
    double getTarifOrar();
    virtual double getSalar();
    friend ostream& operator<<(ostream&, const Angajat&);
    friend istream& operator>>(istream&, Angajat&);
    int getNrOre();

};
