#include "Stack.h"
#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int max) :max(max)
{
	top = 0;
	vector = new int[max];
}

Stack::~Stack()
{
	top = 0;
	max = 0;
	delete[] vector;
}

Stack::Stack(const Stack& param)
{
	max = param.max;
	top = param.top;
	vector = new int[max];
	for (int i = 0; i < max; ++i) {
		vector[i] = param.vector[i];
	}
}

Stack& Stack::operator=(const Stack&)
{
	return *this;

}

void Stack::push(int element)
{
	if (!isFull()) {
		vector[top] = element;
		top++;
	}
	else {
		Stack_full exception;
		throw exception;
	}
}

void Stack::pop()
{
	if (!isEmpty()) {
		top--;
	}
	else {
		Stack_empty exception;
		throw exception;
	}
}

bool Stack::isFull()
{
	if (top == max)
		return true;
	return false;
}

bool Stack::isEmpty()
{
	if (top == 0)
		return true;
	return false;
}

void Stack::print() {
	if (isEmpty())
	{
		cout << "Stiva este goala.";
	}
	else {
		for (int i = 0; i < top; ++i) {
			cout << vector[i] << " ";
		}
	}
}

void Stack::peek() {
	if (isEmpty())
	{
		cout << "Stiva este goala.";
	}
	else {
		cout << "Peek: " << vector[top - 1];
	}
}


