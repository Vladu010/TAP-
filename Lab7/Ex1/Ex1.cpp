#include<iostream>
#include"Tablou.h"
using namespace std;

int main() {

	int n;
	cout << "n = ";
	cin >> n;

	int* v = new int[n];
	for (int i = 0; i < n; ++i) {
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}

	int M1;
	int M2;

	M1 = Maxim<int>(v, n);
	M2 = Minim<int>(v, n);

	cout <<M1<<" " << M2 << endl;

	int x;
	cin >> x;
	cout << SecvSearch(v, n, x);
	//afisare(v, n);

	/*int x;
	cout << "nr de elemente: " << endl;
	cin >> x;

	char* a = new char[x];
	for (int k = 0; k < x; k++)
	{
		cin >> a[k];
	}

	Bubble<char>(a, x);
	afisare<char>(a, x);*/




	return 0;
}