#pragma once

#include <iostream>
#include "Nod.h"

using namespace std;

template <class T>
class Lsi
{
	Nod<T> front;
public:
	Lsi();
	~Lsi();
	Lsi(const Lsi<T>&);
	Lsi& operator=(const Lsi<T>&);

	bool operator==(const Lsi&) const;

	void insertNode(T);
	void printLSI();
	void deleteNode(int);

	friend ostream& operator<<(ostream&, const Lsi<T>&);
	friend istream& operator<<(istream&, Lsi<T>&);

};
