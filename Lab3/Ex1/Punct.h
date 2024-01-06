#pragma once
#include "Dreapta.h"

static Dreapta d;
static int contor_pct_sPP;
static int contor_pct_sPN;
static int contor_pct_dr;

class Punct
{
private:
	int x, y;

public:
	Punct(int x = 0, int y = 0);
	Punct(const Punct& pct);
	~Punct();
	Punct& operator=(const Punct& pct);

	double distanta(const Punct&);
	friend double distanta(const Punct&, const Punct&);

	int getx();
	int gety();

	void setx(int a);
	void sety(int b);
};

