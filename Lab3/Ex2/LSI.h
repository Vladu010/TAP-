#pragma once
#include <iostream>
#include "Nod.h"

using namespace std;

class LSI
{
private:
	Nod* front = NULL;

public:
	LSI(Nod* front = NULL);
	LSI(const LSI& l);
	~LSI();
	LSI& operator=(const LSI& l);

	void insertNode(int);
	void printLSI();
	void deleteNode(int);
};


