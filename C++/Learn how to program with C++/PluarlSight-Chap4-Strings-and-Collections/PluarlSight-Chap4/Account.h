#pragma once

#include "Transaction.h"

#include <vector>
#include <string>

class Account {
private:
	//Data fields
	int balance;
	std::vector<Transaction> log;
public:
	Account(); //Constructor
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
};