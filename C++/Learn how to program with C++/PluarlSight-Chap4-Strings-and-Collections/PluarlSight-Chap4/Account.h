#pragma once

#include "Transaction.h"

#include <vector>
#include <string>

class Account {
private:
	//Data fields
	int balance;
	std::vector<Transaction> log;
	//Testing encapsulation
	int limit;
public:
	Account(); //Constructor
	std::vector<std::string> Report() const;
	bool Deposit(int amt);
	bool Withdraw(int amt);

	//Inline function
	/*
	Standard convention if it's bigger than a single line it should not be in the header file and be in the implementation file .cpp
	*/
	int getBalance() const { return balance; }
};