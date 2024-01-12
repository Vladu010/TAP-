//#define CRT_SECURE_NO_WARNING
#include<iostream>
#include<set>
#include<string>
#include<fstream>
using namespace std;

int main(int argc, char* argv[])
{
	ofstream fout("out.txt");
	ifstream fin("in.txt");

	string word;
	set <string> strset;
	set <string>::iterator setit;


	if (fin.is_open()) {
		string line;
		while (fin>>word) {
			strset.insert(word);
		}
		fin.close();
	}
	else {
		std::cout << "Unable to open the file for reading1.\n";
	}

	if (fout.is_open()) {
		for (setit = strset.begin(); setit != strset.end(); setit++)  //afisare
		{
			fout << *setit << " ";
		}
		fout.close();
	}
	else {
		std::cout << "Unable to open the file for writing2.\n";
	}
	
	/*
	set <string>::iterator  pozportocala;
	pozportocala = strset.find("portocala");
	if (pozportocala != strset.end()) cout << "E in set";
	else cout << "Nu e in set";*/
	cout << "Done!"<< endl;
	fflush(stdin);
	cin.ignore();
	return 0;
}