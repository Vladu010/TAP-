#pragma once

#include <iostream>
using namespace std;

class PUNCT2D
{
public:
    PUNCT2D(int x = 0, int y = 0);
    PUNCT2D(const PUNCT2D& punct);
    ~PUNCT2D();
    PUNCT2D& operator=(const PUNCT2D&);
    virtual void distanta(const PUNCT2D&);
    int getCoordonateX();
    int getCoordonateY();

    bool operator==(const PUNCT2D&) const;
    bool operator<(const PUNCT2D&) const;
    bool operator>(const PUNCT2D&) const;
    bool operator<=(const PUNCT2D&) const;
    bool operator>=(const PUNCT2D&) const;

    PUNCT2D operator-() const;

    PUNCT2D operator+(const PUNCT2D&) const;
    PUNCT2D operator-(const PUNCT2D&) const;
    PUNCT2D operator*(const PUNCT2D&) const;
    PUNCT2D operator/(const PUNCT2D&) const;


    PUNCT2D& operator*=(const PUNCT2D&);
    PUNCT2D& operator/=(const PUNCT2D&);

    PUNCT2D& operator++();
    PUNCT2D& operator--();

    friend ostream& operator<<(ostream&, const PUNCT2D&);
    friend istream& operator>>(istream&, PUNCT2D&);

protected:
    int x, y;


};
