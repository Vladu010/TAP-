#include <iostream>
#include "Dreapta.h"
#include "Punct.h"

using namespace std;

static int contor;

void centruDeGreutateTriunghi(Punct** p) {
	if (contor == 3) {
		double a = 0, b = 0;
		for (int i = 0; i < 3; ++i)
			a += p[i]->getx();
		for (int i = 0; i < 3; ++i)
			b += p[i]->gety();
		cout << "Centrul de greutate al triunghiului format de 3 puncte are coordonatele: "
			<< "\nx = " << a / 3 << "\ny = " << b / 3;
	}
}

int main() {

	Dreapta d1(3, 2);

	int n;
	cout << "n = ";
	cin >> n;

	Punct** p = new Punct * [n];
	for (int i = 0; i < n; ++i)
	{
		p[i] = new Punct();
		cout << "Coordonatele punctului " << i << " sunt : " << "\nx = ";
		int a, b;
		cin >> a;
		p[i]->setx(a);
		cout << "y = ";
		cin >> b;
		p[i]->sety(b);
		contor++;
	}

	Punct p1(1, 1);
	Punct p2(1, 4);

	//cout << distanta(p1, p2);
	//cout << p1.distanta(p2);	

	Punct p3 = p1;
	Dreapta d3 = d1;

	centruDeGreutateTriunghi(p);

	delete[] p;

	return 0;
}