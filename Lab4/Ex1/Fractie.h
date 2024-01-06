// Fractie.h
#ifndef FRACTIE_H
#define FRACTIE_H

#include <iostream>
#include <string>
#include <ostream>
#include <istream>

using namespace std;

class Fractie {
private:
    int numarator;
    int numitor;

public:
    Fractie();
    Fractie(int numarator);
    Fractie(int numarator, int numitor);
    Fractie(const Fractie& other);
    ~Fractie();

    int getNumarator();
    int getNumitor();
    void setNumarator(int n);
    void setNumitor(int n);

    static int cmmdc(int n1, int n2);
    static int cmmmc(int n1, int n2);

    Fractie operator+(const Fractie&);
    Fractie operator-(const Fractie&);
    Fractie operator*(const Fractie&);
    Fractie operator/(const Fractie&);

    void operator+=(const Fractie&);
    void operator-=(const Fractie&);
    void operator*=(const Fractie&);
    void operator/=(const Fractie&);

    Fractie& operator--();
    Fractie operator--(int a);
    Fractie& operator++();
    Fractie operator++(int a);
    Fractie& operator=(const Fractie&);


    Fractie simplifica() const ;
    Fractie reciproc();

    friend bool operator==(const Fractie&, const Fractie&);
    friend bool operator!=(const Fractie&, const Fractie&);
    friend bool operator<(const Fractie&, const Fractie&);  
    friend bool operator>(const Fractie&, const Fractie&);
    friend bool operator<=(const Fractie&, const Fractie&);
    friend bool operator>=(const Fractie&, const Fractie&);

    friend ostream& operator<<(ostream&, const Fractie&);
    friend istream& operator>>(istream&, Fractie&);
    std::string print();
};

#endif // FRACTIE_H
