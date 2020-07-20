#include "Functions.h"

#include <iostream>

using namespace std;

int main() {

	auto a = add(3, 4);
	cout << a << endl;
	double b = add(1.2, 3.4);
	cout << b << endl;
	double c = add(1.2, 3.4, 5.6);
	cout << c << endl;

	/*
	Here I have all the add functions in the functions.cpp, without it being a header file.
	Pretty neat.
	*/

	system("pause");
	return 0;
}