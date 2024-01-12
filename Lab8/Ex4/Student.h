#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string CNP;
    std::string name;
    double labGrade;
    double examGrade;
    int absences;

    Student(); 
    Student(const std::string& cnp, const std::string& studentName, double lab, double exam, int abs);

    bool operator==(const Student& other) const;
    bool operator<(const Student& other) const;
};

#endif 
