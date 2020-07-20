#include <iostream> //Allows cout cin
#include <string>

using namespace std;

int main() {
	string name;
	cout << "Who are you? ";
	cin >> name;
	string greeting = "Hello, " + name;

	if (name == "Lancaster") {
		greeting += ", I know you!";
	}

	cout << greeting << endl;

	return 0;
}