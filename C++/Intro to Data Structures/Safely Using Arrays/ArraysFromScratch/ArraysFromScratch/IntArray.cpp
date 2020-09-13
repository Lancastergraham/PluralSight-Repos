#include "IntArray.h"
//Exception class


//Private Section
//Data fields

//Public Section
//Constructors
//Default Constructor
IntArray::IntArray() {};

//Building Constructor
IntArray::IntArray(int size) {
	if (size != 0) {

		//Without the "{}" it will fill with garbage values
		//With "{}" it will be empty
		m_ptr = new int[size] {};
		m_size = size;
	}
}

//Destructor
IntArray::~IntArray() {
	delete[] m_ptr;
}

//Getters
//const value is essentially setting to read-only and can't alter the values
int IntArray::getSize() const {
	return m_size;
}

//Methods
bool IntArray::isEmpty() const {
	return(m_size == 0);
}

bool IntArray::isValidIndex(int index) const {
	return (index >= 0) && (index < m_size);
}

//Overloads
int& IntArray::operator [] (int index) {
	if (!isValidIndex(index)) {
		throw IndexOutOfBoundsException{};
	}
	return m_ptr[index];
}

int IntArray::operator [] (int index) const {
	if (!isValidIndex(index)) {
		throw IndexOutOfBoundsException{};
	}
	return m_ptr[index];
}