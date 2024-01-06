#include "LSI.h"
#include <iostream>

using namespace std;

LSI::LSI(Nod* front) :front(front)
{

}

LSI::LSI(const LSI& l)
{
	this->front = NULL;
	Nod* tmp = l.front;
	while (tmp != NULL)
	{
		this->insertNode(tmp->info);
		tmp = tmp->succ;
	}
}

LSI::~LSI()
{
	front = NULL;
}

LSI& LSI::operator=(const LSI& l)
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

void LSI::insertNode(int info) {
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

void LSI::printLSI()
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

void LSI::deleteNode(int i)
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







