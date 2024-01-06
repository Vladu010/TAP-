#include <iostream>
#include "Carte.h"
#include <vector>

using namespace std;

int main() {

	vector<Carte> carte{ Carte("a1", "t1", "isbn1", 1), Carte("a2", "t2", "isbn2", 2), Carte("a3", "t3", "isbn3", 2), Carte("a1", "t4", "isbn4", 4) };

	/*cout << carte[1].getAutor();
	carte[1].setAutor("gicu");
	cout <<  carte[1].getAutor();*/

	string aut;
	cout << "Autor cautat: ";
	cin >> aut;

	bool gasit = false;

	for (int i = 0; i < carte.size(); ++i)
	{
		if (aut == carte[i].getAutor()) {
			cout << "Cartea " << i << " are autorul " << aut << endl;
			gasit = true;
		}
	}

	if (!gasit)
		cout << "Nu s-a gasit nici o carte cu autorul " << aut << endl;

	cout << Carte::getCount();

	return 0;
}