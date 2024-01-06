#include <iostream>
#include "LSI.h"

using namespace std;

int main() {

	LSI l;

	l.insertNode(1);
	l.insertNode(2);
	l.insertNode(3);
	l.insertNode(4);

	l.printLSI();

	l.deleteNode(2);

	l.printLSI();

	cout << "\nlista copiata prin constructorul de copiere: ";
	LSI l2(l);
	l2.printLSI();

	cout << "\nlista copiata prin operatorul=: ";
	LSI l3 = l;
	l3.printLSI();


	l.~LSI();
	cout << "\nDestructor :";
	l.printLSI();


	return 0;
}