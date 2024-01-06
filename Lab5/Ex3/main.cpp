#include <iostream>
#include "Stack.h"


using namespace std;

int main()
{
	Stack stiva;
	Stack st(50);

	try {
		stiva.push(1);
		stiva.push(2);
		stiva.push(3);
	}
	catch (Stack::Stack_full exception) {
		cout << "Stiva plina.";
	}

	try {
		stiva.pop();
	}
	catch (Stack::Stack_empty exception) {
		cout << "Stiva goala.";
	}

	stiva.print();

	return 0;
}