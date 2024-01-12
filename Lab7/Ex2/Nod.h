#pragma once
#include <iostream>

template <class T>
class Nod
{
private:
	T info;
	Nod* succ;
public:
	Nod(T info, Nod* succ = NULL);
	Nod(const Nod& n);
	~Nod();
	Nod& operator=(const Nod& n);

	template <class T>
	friend class Lsi;
};
