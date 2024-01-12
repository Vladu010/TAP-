#include <iostream>
#include "Lsi.h"

using namespace std;

int main() {

	Lsi<int> l;

	l.insertNode(1);
	l.insertNode(2);
	l.insertNode(3);
	l.insertNode(4);

	l.printLSI();

	l.deleteNode(2);

	l.printLSI();




	return 0;
}