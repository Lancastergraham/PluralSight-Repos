#include "IntArray.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {


		IntArray a{ 10 };

		for (unsigned int i = 0; i < a.getSize(); i++) {
			a[i] = (i + 1) * 10;
		}

		cout << "Array Elements for A: " << a << endl;

		IntArray b = a;



		
		cout << endl;

		cout << "Array Elements for A: " << a << endl;

		cout << "-------------------------------------" << endl;

		b[1] = 100;
		cout << endl << "Array Elements for B: " << b << endl;

		cout << "-------------------------------------" << endl;

		cout << endl << "Array Elements for B: " << b << endl;
		cout << endl << "Array Elements for A: " << a << endl;
		

	
	system("pause");

	return 0;
}