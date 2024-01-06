#include <iostream>
#include "Triunghi.h"
#include "Dreptunghic.h"
#include "Isoscel.h"
#include "Dreptunghic_isoscel.h"
#include "Echilateral.h"

using namespace std;

int main()
{
	Triunghi triunghi(3, 4, 5);
	triunghi.arie();
	triunghi.perimetru();

	Dreptunghic dreptunghic(3, 4, 5);
	dreptunghic.arie();
	dreptunghic.perimetru();

	Isoscel isoscel(5, 6);
	isoscel.arie();
	isoscel.perimetru();

	Dreptunghic_isoscel dreptunghic_isoscel(3, 4, 5);
	dreptunghic_isoscel.arie();
	dreptunghic_isoscel.perimetru();

	Echilateral echilateral(3);
	echilateral.arie();
	echilateral.perimetru();





	return 0;
}