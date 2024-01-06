#include "Angajat.h"
#include "Manager.h"
#include <iostream>

int main()
{
    Angajat angajat1(10, 50);
    cout << "angajat1 are: " << angajat1.getNrOre() << " ore" << endl;
    cout << "angajat1 are: " << angajat1.getTarifOrar() << " tarifOrar" << endl;
    cout << "angajat1 are: " << angajat1.getSalar() << " salar" << endl;


    Manager manager1(10.6, 50, 3);
    cout << "manager1 are: " << manager1.getNrOre() << " ore" << endl;
    cout << "manager1 are: " << manager1.getTarifOrar() << " tarifOrar" << endl;
    cout << "manager1 are: " << manager1.getSalar() << " salar" << endl;
    cout << "manager1 are: " << manager1.getNrSubordonati() << " angajati" << endl;

    Angajat angajat2;
    cin >> angajat2;
    cout << angajat2;

    Manager manager2;
    cin >> manager2;
    cout << manager2;




    return 0;
}