#include <iostream>
#include "PUNCT2D.h"
#include "PUNCT3D.h"

using namespace std;

int main()
{
	PUNCT2D p1_2D(3, 5);
	PUNCT2D p2_2D(3, 6);

	p1_2D.distanta(p2_2D);


	PUNCT3D p1_3D(4, 5, 1);
	PUNCT3D p2_3D(1, 4, 2);

	p1_3D.distanta(p2_3D);




	return 0;
}