#include <iostream> //Allows cout cin
#include <string>
#include <vector>
#include <algorithm> //for sort and count.

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

	//Problem solving
	//Must use cin.ignore() or getline(); to consome the hidden white space from the cin >> used above.
	//
	cin.ignore();

	cout << endl << "Please enter a phrase: ";
	getline(cin, phrase1);

	cout << endl;

	cout << "Please enter another phrase: ";
	getline(cin, phrase2);

	cout << endl;

	//Calculating
	auto phrase1size = phrase1.length();
	auto phrase2size = phrase2.length();
	if (phrase1size == phrase2size) {
		cout << phrase1 << " and " << phrase2 << " are the same length." << endl;
	}
	else if (phrase1size > phrase2size) {
		cout << phrase1 << " is the bigger word." << endl;
	}
	else {
		cout << phrase2 << " is the bigger word.";
	}

	cin.ignore();

	getchar();
}

void collection() {
	//Data field
	vector<int> vi;
	vector<string> vs;

	//Calc
	for (int i = 0; i < 10; i++) {
		vi.push_back(i);
	}

	/*
	ranged based for: "For every item do this" there is no funny business no skipping.
	It's just like int i = 0; i < 10; i++ yada yada.
	*/
	for (auto item : vi) {
		cout << item << " ";
	}
	cout << endl;

	//New vector
	cout << "Enter three words! ";
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		vs.push_back(s);
	}

	for (auto item : vs) {
		cout << item << " ";
	}
	cout << endl;

	cout << "int vector vi has " << vi.size() << " elements" << endl;

	//Accessing certain elements 0-9
	vi[5] = 3;
	vi[6] = -1;
	vi[1] = 99;

	cout << endl << "Element 4 of vi is: " << vi.at(3) << endl;

	for (auto item : vi) {
		cout << item << " ";
	}

	

	/* 
	----Method 1 of displaying vectors--- 
	
	for (unsigned int i = 0; i < vi.size(); i++) {
		cout << vi[i] << " ";
	}

	cout << endl;
	*/

	/*
	----Method 2 of displaying vectors-- -

		for (unsigned int i = 0; i < vi.size(); i++) {
			cout << vi.at(i) << " ";
		}

	cout << endl;
	*/

	/*
----Method 3 of displaying vectors-- -

	for (auto i = begin(vi); i != end(vi); i++ {
		cout << *i << " ";
	}

cout << endl;
*/

	cout << endl;

	int threes = count(begin(vi), end(vi), 3);

	cout << endl;

	sort(begin(vs), end(vs));
	for (auto item : vs) {
		cout << item << " ";
	}
	cout << endl;

	cout << "vector of ints has " << threes << " elements" << endl;

	int tees = count(begin(vs[0]), end(vs[0]), 't');
	cout << "First word has " << tees << " letters t's" << endl;

	

	cin.ignore();

	getchar();
}