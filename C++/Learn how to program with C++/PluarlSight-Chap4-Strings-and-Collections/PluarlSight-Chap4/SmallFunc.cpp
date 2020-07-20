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

	int l = greeting.length();
	cout << "\"" + greeting + "\" is " << l << "characters long." << endl;
	auto space = greeting.find(' ');
	string beginning = greeting.substr(space + 1);
	cout << beginning << endl;
	if (beginning == name) {
		cout << "expected result." << endl;
	}
}

void smallDemo() {
	
}