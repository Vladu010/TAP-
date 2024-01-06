#include<iostream>
#include"Fractie.h"

using namespace std;

int main()
{
	Fractie f1;
	Fractie f2;
	Fractie rez;

	cin >>f1 >> f2;
	rez = f1+f2;
	cout << "Adunare " << rez.print();

	rez = f1-f2;
	cout << endl << "Scadere " << rez.print();

	rez = f1*(f2);
	cout << endl << "inmultire " << rez.print();

	rez = f1/(f2);
	cout << endl << "imparti " << rez.print();

	rez = f1.reciproc();
	cout << endl << "reciproca " << rez.print() << endl <<f1.print()<<endl;

	if (f1==f2) { cout << " e true"; }
	else { cout << "nu"; };

	cout << f1 << f2;


	return 0;
}