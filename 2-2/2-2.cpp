// 2-2 Use a different amount of padding between vert and horiz

#include <iostream>
#include <string>

// say that we're using the std namespace
using namespace std;

int main() {
	// ask for the person's name
	cout << "Please enter your name: ";

	// read the name
	// a variable to hold the user's name
	string name;
	// read the name
	cin >> name;

	// build the message
	const string greeting = "Hello, " + name + "!";

	// the number of blank spaces around the greeting vertically
	const int vPad = 1;
	// the number of blank spaces around the greeting horizontally
	const int hPad = 0;

	// the number of rows and columns to write
	const int rows = vPad * 2 + 3;
	const string::size_type columns = greeting.size() + hPad * 2 + 2;

	// write a line to separate output
	cout << endl;

	// write the output
	for (int r = 0; r < rows; r++) {
		string::size_type c = 0;
		while (c < columns) {
			if (r == vPad + 1 && c == hPad + 1) {
				cout << greeting;
				c += greeting.size();
			} else {
				if (r == 0 || r == rows - 1 || c == 0 || c == columns - 1) {
					cout << "*";
				} else {
					cout << " ";
				}
				c++;
			}
		}
		cout << endl;
	}
	return 0;
}
