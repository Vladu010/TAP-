#include <iostream>
#include "Film.h"
#include "Actor.h"
#include <algorithm> 
#include <vector>  

using namespace std;

int main()
{

	Actor a("a", "a", 1);
	Actor b("b", "b", 2);
	Actor c("c", "c", 3);
	Actor d("d", "d", 4);

	cout << "Nr de obiecte tip actor: " << Actor::getNrInstanteActor() << endl;

	Film f1("nf1", 4, 50000);
	Film f2("nf2", 2, 100000);
	Film f3("nf3", 3, 25000);

	f1.adaugaActor(&a);
	f1.adaugaActor(&b);
	f1.adaugaActor(&c);
	f1.adaugaActor(&d);

	f2.adaugaActor(&a);
	f2.adaugaActor(&b);

	f3.adaugaActor(&a);
	f3.adaugaActor(&b);
	f3.adaugaActor(&c);

	cout << "Afisare actori film f1: ";
	f1.afisareActori();
	cout << "\nAfisare actori film f2: ";
	f2.afisareActori();
	cout << "\nAfisare actori film f3: ";
	f3.afisareActori();

	vector<int> sortareNrActori{ f1.getNumarActori(),f2.getNumarActori(),f3.getNumarActori() };

	sort(sortareNrActori.begin(), sortareNrActori.end());

	cout << "\nSortare dupa nr de actori: ";
	for (int i = 0; i < 3; ++i)
	{
		cout << sortareNrActori[i] << " ";
	}

	vector<int> sortareBuget{ f1.getBuget(),f2.getBuget(),f3.getBuget() };

	sort(sortareBuget.begin(), sortareBuget.end());

	cout << "\nSortare dupa buget: ";
	for (int i = 0; i < 3; ++i)
	{
		cout << sortareBuget[i] << " ";
	}

	actoriComuni(f1, f2);

	return 0;
}