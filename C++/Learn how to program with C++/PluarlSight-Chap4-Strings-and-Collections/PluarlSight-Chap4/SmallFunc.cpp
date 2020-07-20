#include <iostream> //Allows cout cin
#include <string>

using namespace std;

void helloName() {
	string name;
	cout << "Who are you? ";
	cin >> name;
	string greeting = "Hello, " + name;

	if (name == "Lancaster") {
		greeting += ", I know you!";
	}

	cout << greeting << endl;
}