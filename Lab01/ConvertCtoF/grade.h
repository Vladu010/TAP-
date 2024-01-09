// grade.h
#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include <string>

class Grade {
private:
    static double grad;
    enum Type { Celsius, Fahrenheit };
    static Type type;

public:
    Grade(double initialGrad);

    void setGrade(double newGrad);

    void convertCtoF();

    void convertFtoC();

    std::string toString();
};

#endif // GRADE_H
