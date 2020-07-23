#pragma once
#include "Account.h"

#include <iostream>

using namespace std;

int hiddenMain() {

	//Objects
	Account a1;
	a1.Deposit(90);

	cout << "After depositing $90" << endl;

	for (auto s : a1.Report()) {
		cout << s << endl;
	}

	a1.Withdraw(50);
	if (a1.Withdraw(100)) {
		cout << "Second withdraw succeeds" << endl;
	}

	cout << "After withdrawing $50 then $100" << endl;

	for (auto s : a1.Report()) {
		cout << s << endl;
	}

	return 0;
}