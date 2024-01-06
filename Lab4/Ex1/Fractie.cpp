#include "Fractie.h"

#include<iostream>
#include<string>


Fractie::Fractie() {
    this->numarator = 0;
    this->numitor = 1;
}

Fractie::Fractie(int nummarator) {
    this->numarator = nummarator;
    this->numitor = 1;
}

Fractie::Fractie(int numarator, int numitor) {
    this->numarator = numarator;
    this->numitor = numitor;
}

Fractie::Fractie(const Fractie& other) {
    this->numarator = other.numarator;
    this->numitor = other.numitor;
}
Fractie::~Fractie() {
    this->numarator = 0;
    this->numitor = 0;
}

int Fractie::getNumarator() { return this->numarator; }
int Fractie::getNumitor() { return this->numitor; }
void Fractie::setNumarator(int n) { this->numarator = n; }
void Fractie::setNumitor(int n) { this->numitor = n; }

int Fractie::cmmdc(int n1, int n2) {
    int cmmdcNr;
    int copiea = n1, copieb = n2;
    while (copieb) {
        int aux = copiea % copieb;
        copiea = copieb;
        copieb = aux;
    }
    cmmdcNr = copiea;

    return cmmdcNr;
}

int Fractie::cmmmc(int n1, int n2) {
    //Calcularea CMMMC-ului
    int cmmmcNr = n1 * n2 / cmmdc(n1, n2);
    return cmmmcNr;
}

Fractie Fractie::operator+(const Fractie& f2) {
    Fractie rez = Fractie();
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return NULL;
    }
    else if (this->numitor == f2.numitor) {
        rez.numitor = this->numitor;
        rez.numarator = this->numarator + f2.numarator;
    }
    else {
        int cmmmcr = cmmmc(this->numitor, f2.numitor);
        rez.setNumitor(cmmmcr);
        rez.setNumarator(this->numarator * (cmmmcr / this->numitor) + f2.numarator * (cmmmcr / f2.numitor));
    }
    return rez.simplifica();
}

Fractie Fractie::operator-(const Fractie& f2) {
    Fractie rez = Fractie();
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return NULL;
    }
    else if (this->numitor == f2.numitor) {
        rez.numitor = this->numitor;
        rez.numarator = this->numarator - f2.numarator;
    }
    else {
        int cmmmcr = cmmmc(this->numitor, f2.numitor);
        rez.setNumitor(cmmmcr);
        rez.setNumarator(this->numarator * (cmmmcr / this->numitor) - f2.numarator * (cmmmcr / f2.numitor));
    }
    return rez.simplifica();
}

Fractie Fractie::operator*(const Fractie& f2)
{
    Fractie rez = Fractie();
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return NULL;
    }
    else {
        rez.numarator = this->numarator * f2.numarator;
        rez.numitor = this->numitor * f2.numitor;
    }
    return rez.simplifica();
}

Fractie Fractie::operator/(const Fractie& f2)
{
    Fractie rez = Fractie();
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return NULL;
    }
    else {
        rez.numarator = this->numarator * f2.numitor;
        rez.numitor = this->numitor * f2.numarator;
    }
    return rez.simplifica();
}

void Fractie::operator+=(const Fractie& f2)
{
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return;
    }
    if (this->numitor == f2.numitor) {
        this->numarator += f2.numarator;
    }
    else {
        int cmmmcr = cmmmc(this->numitor, f2.numitor);
        this->numitor = cmmmcr;
        this->numarator = this->numarator * (cmmmcr / this->numitor) + f2.numarator * (cmmmcr / f2.numitor);
    }
}

void Fractie::operator-=(const Fractie& f2)
{
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return;
    }
    if (this->numitor == f2.numitor) {
        this->numarator -= f2.numarator;
    }
    else {
        int cmmmcr = cmmmc(this->numitor, f2.numitor);
        this->numitor = cmmmcr;
        this->numarator = this->numarator * (cmmmcr / this->numitor) - f2.numarator * (cmmmcr / f2.numitor);
    }
}

void Fractie::operator*=(const Fractie& f2)
{
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return;
    }
    else {
        this->numarator *=f2.numarator;
        this->numitor *=f2.numitor;
    }
}

void Fractie::operator/=(const Fractie& f2)
{
    if (this->numitor == 0 || f2.numitor == 0) {
        std::cout << "eroare";
        return;
    }
    else {
        this->numarator *= f2.numitor;
        this->numitor *= f2.numarator;
    }
}


Fractie& Fractie::operator--()//predecrementare
{
    this->numarator = this->numarator - (1 * this->numitor);
    return *this;
}

Fractie Fractie::operator--(int a)
{
    Fractie f = *this;
    --*this;
    return f;
}

Fractie& Fractie::operator++()
{
    this->numarator = this->numarator + (1 * this->numitor);
    return *this;
}

Fractie Fractie::operator++(int a)
{
    Fractie f = *this;
    ++*this;
    return f;
}


Fractie& Fractie::operator=(const Fractie& f2)
{
    this->numarator = f2.numarator;
    this->numitor = f2.numitor;

    return *this;
}


Fractie Fractie::simplifica() const
{
    int n = cmmdc(this->numarator, this->numitor);
    return Fractie(this->numarator/n,this->numitor/n);
}

Fractie Fractie::reciproc()
{
    return Fractie(this->numitor,this->numarator);
}

bool operator==(const Fractie& f1, const Fractie& f2)
{
    Fractie fr1 = f1.simplifica();
    Fractie fr2 = f2.simplifica();

    if (fr1.numarator == fr2.numarator && fr1.numitor == fr2.numitor)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator!=(const Fractie& f1, const Fractie& f2)
{
    if (f1.numarator * f2.numitor != f1.numitor * f2.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<(const Fractie& f1, const Fractie& f2)
{
    if (f1.numarator * f2.numitor < f1.numitor * f2.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>(const Fractie& f1, const Fractie& f2)
{
    if (f1.numarator * f2.numitor > f1.numitor * f2.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<=(const Fractie& f1, const Fractie& f2)
{
    if (f1.numarator * f2.numitor <= f1.numitor * f2.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>=(const Fractie& f1, const Fractie& f2)
{
    if (f1.numarator * f2.numitor >= f1.numitor * f2.numarator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator<<(ostream& os, const Fractie& fr)
{
    os << fr.numarator << "/" << fr.numitor;
    return os;
}

istream& operator>>(istream& is, Fractie& fr)
{
    cout << "introduceti numaratorul: " << endl;
    is >> fr.numarator;
    cout << "introduceti numitorul: " << endl;
    is >> fr.numitor;
    return is;
}


std::string Fractie::print() {
    return std::to_string(this->numarator) + "/" + std::to_string(this->numitor);
}