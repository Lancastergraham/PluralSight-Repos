//Smallest C++ Application
#include <iostream>

using namespace std;

int main() {

	cout << "Hello" << endl << endl;

	/*
	Without initializing the variable it will crash the computer
	*/
	int i;
	i = 3;

	int j = 2;

	double k = 9.0 / 5;

	/*
	In order to get a decimal one of the numbers must be #.0, or been a double to begin with.
	An example being double m = 9, and then making double k = m / 5;
	*/

	cout << i << " " << j << " " << k << endl;

	/*
	if - else statements
	*/

	/*
	for loop was created after the while statement
	*/

	for (int loop = 0; loop < 10; loop++) {
		cout << loop << " " << endl;
	}
	
	/*
	While loop was created after the if - else statements.
	*/
	bool keepGoing = true;
	string Answer = "Y";

	while (keepGoing == true) {

		cout << "Enter a number: ";
		cin >> i;
		cout << "Enter another number: ";
		cin >> j;

		if (i < j) {
			cout << "The second number is larger" << endl;
		}
		else if (i == j) {
			cout << "Both numbers are equal" << endl;
		}
		else {
			cout << "The first number is larger" << endl;
		}

		cout << "Would you like to continue? Y/N" << endl;
		cin >> Answer;
		

		if (Answer == "N" || Answer == "n") {
			keepGoing = false;
			cout << "Thank you for playing" << endl;
		}
	}

	system("pause");
	return 0;
}

//The language is case sensitive generally leaning to lower case.

//Running on Command Line
/*
Type CMD into search bar at bottom left. While there type cd - Change directory and drag the file icon, from the current directory into Command line "C:\YadaYada\Yada\Yada\" type dir - Directory to make sure you're in the right directory. Then select the .exe to run the program.
*/