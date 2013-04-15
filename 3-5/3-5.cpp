// 3-5 hold multiple students (3 homework grades)
#include <iostream>
#include <string>
#include <algorithm> // to use the sort function
#include <vector> // to use vectors

using namespace std;

int main () {
	const int numberOfHomeworkMarks = 3;

	vector<string> names;
	string tempName;

	vector<double> marks;

	cout << "Please enter your first name: ";
	while (cin >> tempName) {

		names.push_back(tempName);

		cout << "Please enter your midterm and final marks: ";
		double midterm, final;
		cin >> midterm >> final;

		cout << "Enter your " << numberOfHomeworkMarks << " homework marks: ";

		vector<double> homework;
		double temp;
		double sum = 0;

		while (homework.size() < numberOfHomeworkMarks && cin >> tempName) {
			sum += temp;
			homework.push_back(temp);
		}

		typedef vector<double>::size_type vecDoubleSize;	

		vecDoubleSize numberOfHomeworkMarks = homework.size();

		if (numberOfHomeworkMarks < numberOfHomeworkMarks) {
			cout << "Error: Not enough homework marks were entered.\nTerminating...";
			return 1;
		}

		double finalMark = 0.2 * midterm + 0.4 * final + 0.4 * sum / numberOfHomeworkMarks;
		marks.push_back(finalMark);

		cout << "Marks entered." << endl;
		cout << "Please enter your name: ";
	}

	typedef vector<string>::size_type vecStringSize;	

	vecStringSize numberOfStudents = names.size();

	if (numberOfStudents == 0) {
		cout << "Error: No students were entered.\nTerminating...";
		return 1;
	}

	cout << endl;

	for (int i = 0; i < numberOfStudents; i++) {
		cout << names[i] << ": " << marks[i] << endl;
	}

	return 0;
}
