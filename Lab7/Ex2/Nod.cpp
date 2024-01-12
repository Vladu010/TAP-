#include "Nod.h"

template <class T>
Nod<T>::Nod(T info, Nod* succ) :info(info), succ(succ)
{
}

template <class T>
Nod<T>::Nod(const Nod& n)
{
	succ = n.succ;
	info = n.info;
}

template <class T>
Nod<T>::~Nod()
{
}

template <class T>
Nod<T>& Nod<T>::operator=(const Nod<T>& n)
{
	succ = n.succ;
	info = n.info;

	return *this;
}
