// Fractie.h
#ifndef FRACTIE_H
#define FRACTIE_H

#include <iostream>
#include <string>

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

    Fractie adunare(const Fractie&);
    Fractie scadere(const Fractie&);
    Fractie inmultire(const Fractie&);
    Fractie impartire(const Fractie&);

    Fractie simplifica();
    Fractie reciproc();
    bool egal(const Fractie&);


    std::string print();
};

#endif // FRACTIE_H
