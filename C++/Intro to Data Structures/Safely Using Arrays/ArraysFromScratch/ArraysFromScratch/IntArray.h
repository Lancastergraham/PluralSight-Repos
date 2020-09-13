#pragma once
class IntArray
{
private:
	//Data fields
	int* m_ptr;
	int m_size;

public:
	//Data Fields
	//Constructors
	int intArray();

	int intArray(int);

	//Getters
	int getSize() const;

	//Methods
	bool isEmpty() const;
};

