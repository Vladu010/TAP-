#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>
#include <iomanip>
#include "Student.h"

class CompareByExam {
public:
    bool operator()(const Student& a, const Student& b) const {
        return a.examGrade < b.examGrade;
    }
};

class CompareByName {
public:
    bool operator()(const Student& a, const Student& b) const {
        return a.name < b.name;
    }
};

int main() {
    std::set<Student> students;
    std::set<Student, CompareByExam> studentsByExam;
    std::set<Student, CompareByName> studentsByName;

    std::ifstream inputFile("students.txt");
    if (inputFile.is_open()) {

        inputFile.close();
    }
    else {
        std::cout << "Unable to open the file for reading.\n";
        return 1;
    }

    studentsByName.insert(students.begin(), students.end());

    studentsByExam.insert(students.begin(), students.end());


    return 0;
}
