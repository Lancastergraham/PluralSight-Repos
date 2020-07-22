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

/*
Question) Write a program that asks the user for two words and tells them which is longer.
*/
void chap4Exercise() {

	string word1;
	string word2;

	cout << endl << "Please enter two words" << endl;
	cin >> word1 >> word2;

	auto word1size = word1.length();
	auto word2size = word2.length();
	if (word1size == word2size) {
		cout << word1 << " and " << word2 << " are the same length." << endl;
	}
	else if (word1size > word2size) {
		cout << word1 << " is the bigger word." << endl;
	}
	else {
		cout << word2 << " is the bigger word.";
	}
}

void chap4Exercise2() {
	//Data fields
	string phrase1;
	string phrase2;

	//Input
	cout << endl << "Please enter a phrase: ";
	getline(cin, phrase1);
	cout << "Please enter a phrase: ";
	getline(cin, phrase2);

	cout << endl;

	//Calculating
	auto word1size = phrase1.length();
	auto word2size = phrase2.length();
	if (word1size == word2size) {
		cout << phrase1 << " and " << phrase2 << " are the same length." << endl;
	}
	else if (word1size > word2size) {
		cout << phrase1 << " is the bigger word." << endl;
	}
	else {
		cout << phrase2 << " is the bigger word.";
	}
}