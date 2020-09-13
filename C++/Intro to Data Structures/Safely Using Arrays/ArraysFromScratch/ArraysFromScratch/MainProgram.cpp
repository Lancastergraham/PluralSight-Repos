#include "IntArray.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;

int main() {

	try {
		//--Start-- First Array and statements
		cout << "Creating an array." << endl;
		IntArray a{ 10 };

		for (int i = 0; i < a.getSize(); i++) {
			a[i] = (i + 1) * 10;
		}

		cout << "Array elements: ";
		for (int i = 0; i < a.getSize(); i++) {
			cout << a[i] << " ";
		}
		cout << endl;

		cout << "Array size is: " << a.getSize() << endl;
		//--End-- First Array and statements
		cout << "-------------------------------------------" << endl;

		//--Start-- Display Statement
		cout << "Please enter an array index: ";
		int index{};
		cin >> index;

		cout << "The element at index " << index << " is " << a[index] << endl;
		cout << "-------------------------------------------" << endl;

		//--Start-- Second Array and statements
		cout << "Creating an array containing 10 elements." << endl;
		IntArray b{ 10 };
		cout << "b.getSize() is " << b.getSize() << endl;
		assert(!b.isEmpty());

		cout << "-------------------------------------------" << endl;

		//cout << "Setting a[0] to 7" << endl;
		//a[0] = 7;

		//cout << "a[0] is: " << a[0] << endl;
		//cout << "-------------------------------------------" << endl;
	}
	catch (const IndexOutOfBoundsException& e) {
		cout << endl << "ERROR: Invalid array index!!" << endl;
	}

	system("pause");

	return 0;
}