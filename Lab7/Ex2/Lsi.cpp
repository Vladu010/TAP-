#include "Lsi.h"
#include <iostream>

using namespace std;

template <class T>
Lsi<T>::Lsi() {
	list = NULL;
}

template<class T>
Lsi<T>::~Lsi()
{
}

template<class T>
Lsi<T>::Lsi(const Lsi<T>& l)
{
	this->front = NULL;
	Nod* tmp = l.front;
	while (tmp != NULL)
	{
		this->insertNode(tmp->info);
		tmp = tmp->succ;
	}
}

template<class T>
Lsi<T>& Lsi<T>::operator=(const Lsi<T>& l)
{
	this->front = NULL;
	Nod* tmp = l.front;
	while (tmp != NULL)
	{
		this->insertNode(tmp->info);
		tmp = tmp->succ;
	}
	return *this;
}

template<class T>
bool Lsi<T>::operator==(const Lsi& l) const
{
	if (front == nullptr && l.front == nullptr)
		return true;

	Nod* p = front;
	Nod* q = l.front;
	while (p != nullptr)
	{
		if (*p != *q)
		{
			return false;
		}
		p = p->next;
		q = q->next;
	}

	return true;
}

template<class T>
void Lsi<T>::insertNode(T info)
{
	Nod* newNode = new Nod(info);

	if (front == NULL) {
		front = newNode;
		return;
	}

	Nod* tmp = front;
	while (tmp->succ != NULL)
		tmp = tmp->succ;

	tmp->succ = newNode;
}

template<class T>
void Lsi<T>::printLSI()
{
	if (front == NULL) {
		cout << "Lista este goala.";
	}

	Nod* tmp = front;

	while (tmp != NULL)
	{
		cout << tmp->info << " ";
		tmp = tmp->succ;
	}
}

template<class T>
void Lsi<T>::deleteNode(int i)
{
	if (front == NULL) {
		cout << "Lista este goala.";
		return;
	}

	int contor = 0;

	Nod* tmp = front;

	while (contor <= i && tmp->succ != NULL)
	{
		if (contor + 1 == i) {
			tmp->succ = tmp->succ->succ;
			cout << "\nNodul " << i << " a fost sters" << endl;
			return;
		}
		contor++;
	}
}

template <class T>
ostream& operator<<(ostream& os, const Lsi<T>& L)
{
	Nod<T> tmp = L.List;
	while (tmp != NULL)
	{
		os << tmp->info;;
		tmp = tmp->succ;
	}

	return os;
}

template <class T>
istream& operator<<(istream& is, Lsi<T>& L)
{
	Nod<T> tmp = L.List;
	while (tmp != NULL)
	{
		is >> tmp->info;;
		tmp = tmp->succ;
	}

	return is;
}

