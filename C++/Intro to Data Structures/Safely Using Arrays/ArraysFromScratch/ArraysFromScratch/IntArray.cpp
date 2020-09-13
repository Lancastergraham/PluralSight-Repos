#include "IntArray.h"
//Private Section
//Data fields
int* m_ptr{ nullptr };
int m_size = 0;

//Public Section
//Constructors
//Default Constructor
int IntArray::intArray() {};

//Building Constructor
int IntArray::intArray(int size) {
	if (size != 0) {
		m_ptr = new int[size] {};
		m_size = size;
	}
}

int getSize() const {
	return m_size;
}

bool isEmpty() const {
	return(m_size == 0);
}