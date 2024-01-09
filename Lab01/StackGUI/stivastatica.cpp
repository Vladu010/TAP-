// stivastatica.cpp
#include "stivastatica.h"
#include<iostream>
using namespace std;

// Array_Stack constructor
Array_Stack::Array_Stack(int max) {
    this->max = max;
    this->top = 0;
    this->vector = new int[max];
}

// Array_Stack destructor
Array_Stack::~Array_Stack() {
    this->top = 0;
    this->max = 0;
    delete[] this->vector;
}

// Array_Stack push method
void Array_Stack::push(int value) {
    if (isfull()) {
        throw Stack_Overflow();
    }
    this->vector[top++] = value;
}

// Array_Stack pop method
int Array_Stack::pop() {
    if (isempty()) {
        throw Stack_Underflow();
    }
    return this->vector[--top];
}

// Array_Stack peek method
int Array_Stack::peek() {
    if (isempty()) {
        throw Stack_Underflow();
    }
    return this->vector[top - 1];
}

// Array_Stack isempty method
bool Array_Stack::isempty() {
    return top == 0;
}

// Array_Stack isfull method
bool Array_Stack::isfull() {
    return top == max;
}

// Array_Stack print method
void Array_Stack::print() {
    if (isempty()) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = 0; i < top; ++i) {
        cout << this->vector[i] << " ";
    }
    cout << endl;
}
