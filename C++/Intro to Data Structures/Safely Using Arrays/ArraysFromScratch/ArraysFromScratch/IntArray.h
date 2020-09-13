#pragma once
class IndexOutOfBoundsException {

};

class IntArray
{
private:
	//Data fields
	int* m_ptr{ nullptr };
	int m_size = 0;

public:
	//Data Fields
	//Constructors
	IntArray();

	IntArray(int);

	//Destructor
	~IntArray();

	//Getters
	int getSize() const;

	//Methods
	//"Checks if the array is empty"
	bool isEmpty() const;
	//"Provides protection to make sure the index doesn't goes out of bounds."
	bool isValidIndex(int) const;

	//Overloads
	int& operator [] (int);

	int operator [] (int) const;
};

