// 3.2.2, using vectors
#include <iostream>
#include <string>
#include <algorithm> // to use the sort function
#include <vector> // to use vectors

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

	vector<double> homework;
	double temp;

	while (cin >> temp) {
		homework.push_back(temp);
	}

	typedef vector<double>::size_type vecSize;
	vecSize numberOfHomeworkMarks = homework.size();

	if (numberOfHomeworkMarks == 0) {
		cout << "Error: No homework marks were entered.\nTerminating...";
		return 1;
	}

	sort(homework.begin(), homework.end());

	vecSize middle = numberOfHomeworkMarks / 2;
	double median;
	median = middle % 2 == 0 ? (homework[middle] + homework[middle - 1]) / 2 : homework[middle];

	cout << "Your final grade is " << 0.2 * midterm + 0.4 * final + 0.4 * median << endl;

	return 0;
}
