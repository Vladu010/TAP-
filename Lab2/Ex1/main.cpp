#include<iostream>
#include"Fractie.h"

using namespace std;

int main()
{
	Fractie f1 = Fractie(2, 4);
	Fractie f2 = Fractie(3, 2);
	Fractie rez;

	rez = f1.adunare(f2);
	cout << "Adunare " << rez.print();

	rez = f1.scadere(f2);
	cout << endl << "Scadere " << rez.print();

	rez = f1.inmultire(f2);
	cout << endl << "inmultire " << rez.print();

	rez = f1.impartire(f2);
	cout << endl << "imparti " << rez.print();

	rez = f1.reciproc();
	cout << endl << "reciproca " << rez.print() << endl <<f1.print()<<endl;

	if (f1.egal(f2)) { cout << " e true"; }
	else { cout << "nu"; };



	return 0;
}