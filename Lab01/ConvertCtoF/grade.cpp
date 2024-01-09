// grade.cpp
#include "grade.h"

double Grade::grad;
Grade::Type Grade::type;

Grade::Grade(double initialGrad) {
    grad = initialGrad;
    type = Celsius;
}

void Grade::setGrade(double newGrad) {
    grad = newGrad;
}

void Grade::convertCtoF() {
    grad = (grad * (9.0 / 5)) + 32;
    type = Fahrenheit;
}

void Grade::convertFtoC() {
    grad = (grad - 32) * (5.0 / 9);
    type = Celsius;
}

std::string Grade::toString() {
    return std::to_string(grad) + " grade " + (type == Celsius ? "Celsius" : "Fahrenheit");
}
