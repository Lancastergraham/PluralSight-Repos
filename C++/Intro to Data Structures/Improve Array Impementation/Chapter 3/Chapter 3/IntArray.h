#pragma once
#include <iostream>

class IndexOutOfBoundsException {

};

class IntArray
{
private:
	//Data fields
	int* m_ptr{ nullptr };
	int m_size = 0;

public:
	//Data fields

	//Constructors
	//Default Constructor
	IntArray();
	//Building Constructor
	IntArray(int);
	//Destructor
	~IntArray();
	//Copy Constructor
	IntArray(const IntArray&);

	//Getters
	int getSize() const;

	//Methods
	//Checks to see if empty
	bool isEmpty() const;
	//Checks to make sure to not go out of bounds when asked for index
	bool isValidIndex(int) const;

	//Overloads
	//Subscripts Overloads
	int& operator [] (int);
	int operator [] (int) const;

	//Friend Overloads
	friend std::ostream& operator<< (std::ostream&, const IntArray& array);
};

