#include "IntArray.h"


//--Private Section
//Data Fields

//Methods

//--Public Section
//Data Fields

//Constructors
//Default Constructor
IntArray::IntArray() {};

//Building Constructor
IntArray::IntArray(int size) {
	if (size != 0) {


		m_ptr = new int[size] {};
		m_size = size;
	}
}

//Copy Constructor
IntArray::IntArray(const IntArray& rhs) {
	if (!rhs.isEmpty()) {
		m_size = rhs.m_size;

		m_ptr = new int[m_size] {};

		for (int i = 0; i < m_size; i++) {
			m_ptr[i] = rhs.m_ptr[i];
		}
	}
}

//Destructor
IntArray::~IntArray() {
	delete[] m_ptr;
}


//-----This is actually overloading the = operator!!!
//Copy Constructor
//IntArray::IntArray(const IntArray& rhs) {
//	//Step 1: Avoid Self-Assignment
//	if (this != &rhs) {
//		//Step 2: Delete Dynamically allocated memory.
//		if (m_ptr) { //This is equivalent to "if (arr != NULL)"
//			delete[] m_ptr;
//			m_ptr = NULL;
//		}
//		//Step 3: Copy Static data
//		m_size = rhs.m_size;
//		//Step 4: Copy Dynamic data
//		if (m_size) { // This is equivalent to "if (m_size != 0)" 
//			m_ptr = new int[m_size];
//			for (int i = 0; i < m_size; i++) {
//				m_ptr[i] = rhs.m_ptr[i];
//			}
//		}
//	}
//	//Step 5: Return
//	return *this;
//}



//Getters
int IntArray::getSize() const{
	return m_size;
}

//Methods
bool IntArray::isEmpty() const {
	return (m_size == 0);
}

bool IntArray::isValidIndex(int index) const {
	return (index >= 0) && (index < m_size);
}

//Overloads
//Subscripts
int& IntArray::operator[] (int index) {
	//if (!isValidIndex(index)) {
	//	throw IndexOutOfBoundsException{};
	//}
	
	return m_ptr[index];
}

int IntArray::operator[] (int index) const {
	//if (!isValidIndex(index)) {
	//	throw IndexOutOfBoundsException{};
	//}
	
	return m_ptr[index];
}

//Friend Overloads
std::ostream& operator << (std::ostream& os, const IntArray& array) {
	os << '[';
	for (unsigned int i = 0; i < array.getSize(); i++) {
		os << array[i];
		if (i != array.getSize() - 1) {
			os << ", ";
		}
	}
	os << "]" << std::endl << std::endl;
	return os;
}
