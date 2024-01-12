#include "Student.h"

Student::Student() : labGrade(0.0), examGrade(0.0), absences(0) {}

Student::Student(const std::string& cnp, const std::string& studentName, double lab, double exam, int abs)
    : CNP(cnp), name(studentName), labGrade(lab), examGrade(exam), absences(abs) {}

bool Student::operator==(const Student& other) const {
    return name == other.name;
}

bool Student::operator<(const Student& other) const {
    return name < other.name;
}
