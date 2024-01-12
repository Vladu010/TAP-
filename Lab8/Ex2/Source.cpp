#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cctype> // for std::tolower

int main(int argc, char* argv[]) {
    std::ofstream fout("out.txt");
    std::ifstream fin("in.txt");

    std::string word;
    std::map<std::string, unsigned> count;

    if (fin.is_open()) {
        while (fin >> word) {
            
            for (char& c : word) {
                c = std::tolower(c);
            }

            ++count[word];
        }

        fin.close();
    }
    else {
        std::cout << "Unable to open the file for reading.\n";
        return 1; 
    }

    if (fout.is_open()) {
        std::map<std::string, unsigned>::iterator it;
        for (it = count.begin(); it != count.end(); ++it) {
            fout << it->first << " -> " << it->second << " counted" << std::endl;
        }

        fout.close();
    }
    else {
        std::cout << "Unable to open the file for writing.\n";
        return 1; 
    }

    std::cout << "Done!" << std::endl;
    std::cin.ignore();
    return 0;
}
