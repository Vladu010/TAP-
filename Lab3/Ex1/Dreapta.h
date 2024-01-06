#pragma once
#include <iostream>

using namespace std;

class Dreapta
{
private:
	int m, n;

public:
	Dreapta(int m = 1, int n = 0);
	Dreapta(const Dreapta& dr);
	~Dreapta();
	Dreapta& operator=(const Dreapta& dr);

	friend class Punct;
};
