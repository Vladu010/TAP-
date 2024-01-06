#include "Nod.h"
#include <iostream>

using namespace std;

Nod::Nod(int info, Nod* succ) :info(info), succ(succ)
{

}

Nod::Nod(const Nod& n) {
	succ = n.succ;
	info = n.info;
}

Nod::~Nod() {
	info = 0;
}

Nod& Nod::operator=(const Nod& n)
{
	succ = n.succ;
	info = n.info;

	return *this;
}













