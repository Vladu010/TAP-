#include "Punct.h"
#include <iostream>
#include "Dreapta.h"

using namespace std;

Punct::Punct(int x, int y) :x(x), y(y)
{
	if ((d.m * x + d.n) == y)
		contor_pct_dr++;

	if ((d.m * x + d.n - y) > 0)
		contor_pct_sPP++;
	else
		contor_pct_sPN++;
}

Punct::Punct(const Punct& pct)
{
	x = pct.x;
	y = pct.y;
}

Punct::~Punct()
{
	contor_pct_sPP--;
	contor_pct_sPN--;
	contor_pct_dr--;
}

Punct& Punct::operator=(const Punct& pct)
{
	x = pct.x;
	y = pct.y;
	return *this;
}

double Punct::distanta(const Punct& pct)
{
	return sqrt(pow((this->y - this->x), 2) + pow((pct.y - pct.x), 2));
}

double distanta(const Punct& p1, const Punct& p2)
{
	return sqrt(pow((p1.y - p1.x), 2) + pow((p2.y - p2.x), 2));
}

int Punct::getx() {
	return x;
}

int Punct::gety() {
	return y;
}

void Punct::setx(int a) {
	x = a;
}

void Punct::sety(int b) {
	y = b;
}