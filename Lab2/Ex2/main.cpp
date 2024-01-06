#include "Banca.h"
#include "Client.h"
#include "ContBancar.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{

    
    string numeBanca;
    unsigned nrClientiBanca;

    cout << "Nume Bank: ";
    cin >> numeBanca;

    cout << "Nr. de clienti:";
    cin >> nrClientiBanca;

    Banca b(numeBanca, nrClientiBanca);


    for (unsigned i = 0; i < nrClientiBanca; ++i) {
        string nume, prenume, adresa;
        unsigned nrBankAccounturi;

        cout << "Dati datele clientului (nume,prenume,adresa,nrBankAccounturi): ";
        cin >> nume >> prenume >> adresa >> nrBankAccounturi;

        Client* cl = new Client(nume, prenume, adresa, nrBankAccounturi);
        b.adaugaClient(cl);

        for (unsigned j = 0; j < nrBankAccounturi; ++j) {
            string nrBankAccount, moneda;
            float suma;

            cout << "Dati datele BankAccountului (nrBankAccount,moneda,suma): ";
            cin >> nrBankAccount >> moneda >> suma;

            ContBancar* cont = new ContBancar(nrBankAccount, moneda, suma);

            cl->adaugaCont(cont);
        }
    }

    b.afisareBanca();

    unsigned indexCl = 0; //al catalea client
    unsigned index1 = 0, index2 = 1; //din ce index de BankAccount in ce alt index de BankAccount se transfera
    
    b.getClient(0);

    cout << endl;
    b.afisareBanca();

   

    cout << endl;
    b.afisareBanca();

    cout << endl;
    b.afisareBanca();
    
}