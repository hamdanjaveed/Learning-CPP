#include <iostream>
#include <string>

using namespace std;

int main () {
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Please enter your midterm and final marks: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all of your homework marks: ";
	int count = 0;
	double sum = 0;

	double temp;

	while (cin >> temp) {
		sum += temp;
		count++;
	}

	cout << "Your final grade is " << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << endl;

	return 0;
}
