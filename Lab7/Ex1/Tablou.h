#pragma once
#include <iostream>

using namespace std;

template <class T>
void afisare(T* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i]<<" ";
	}
}

template <class T>
T Maxim(T* vector, int n) {

	T max = vector[0];

	for (int i = 1; i <= n; i++) {
		if (max < vector[i]) {
			max = vector[i];
		}
	}
	return max;
}

template <class T>
T Minim(T* vector, int n) {

	T min = vector[0];

	for (int i = 1; i < n; i++) {
		if (min > vector[i]) {
			min = vector[i];
		}
	}
	return min;
}

template <class T>
void Bubble(T* a, int n)
{
	T aux;
	bool ok = 0;
	do {
		ok = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				T aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				ok = 1;
			}
		}
	} while (ok == 1);
}

template <class T>
bool SecvSearch(T* v, int n, T x) {
	Bubble(v, n);

	bool ok = 0; // se initializaeaza variabila OK cu 0
	for (int i = 1; i <= n; i++)
	{
		if (v[i] == x)
			ok = 1; // variabila OK isi modifica valoarea atunci cand gasim X-ul citit mai devreme in vector
	}
	if (ok == 1)
		cout << "gasit";
	else
		cout << "nu exsita";
	return 0;
}

template <class T>
int BinSearch(T* v,int Left, int Right, T x) {
	
	Bubble(v, Right);
	if (Left > Right)
		return -1;
	else
	{
		int Mid = (Left + Right) / 2;
		if (x == v[Mid])
			return Mid;
		if (x < v[Mid])
			return BinSearch(v,Left, Mid - 1, x);
		else
			return BinSearch(v,Mid + 1, Right, x);
	}
}



class Tablou
{

};

