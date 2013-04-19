// 4.2.3, using structs
#include <iostream>
#include <string>
#include <algorithm> // to use the sort function
#include <vector> // to use vectors
#include <stdexcept> // to use the domain_error

using namespace std;

struct Student {
	string name;
	double midterm;
	double final;
	vector<double> homework;
};

double grade(double midterm, double final, double homework) {
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double median(vector<double> vec) {
	typedef vector<double>::size_type vectorSize;
	vectorSize size = vec.size();

	if (size == 0) {
		throw domain_error("median of an empty vector");
	}

	sort(vec.begin(), vec.end());

	vectorSize middle = size / 2;

	return (size % 2 == 0) ? (vec[middle] + vec[middle - 1]) / 2 : vec[middle];
}

double grade(double midterm, double final, const vector<double>& homework) {
	if (homework.size() == 0) {
		throw domain_error("student has no homework marks");
	}
	return grade(midterm, final, median(homework));
}

istream& readHomework(istream& in, vector<double>& homework) {
	if (in) {
		homework.clear();
		double temp;
		cout << "Enter the first homework: ";
		in >> temp;
		if (in) {
			do {
				homework.push_back(temp);
				cout << "Enter another homework: ";
			} while(in >> temp);
		}
		in.clear();
	}
	return in;
}

bool readStudent(istream& in, Student& s) {
	cout << "Cin is: " << (in.fail() ? "true" : "false") << endl;
	in.ignore(numeric_limits<streamsize>::max(),'\n'); 
	in.clear();
	cout << "Cin before name: " << (in.fail() ? "true" : "false") << ", " << in << endl;
	in >> s.name;
	cout << "Cin after name: " << (in.fail() ? "true" : "false") << ", " << in << endl;
	in >> s.midterm;
	in >> s.final;
	readHomework(in, s.homework);
	cout << "Failed: " << (in.fail() ? "true" : "false") << endl;
	return !in.fail();
}

double grade(const Student& s) {
	return grade(s.midterm, s.final, s.homework);
}

bool compareStudent(const Student& student1, const Student& student2) {
	return student1.name < student2.name;
}

int main () {
	vector<Student> students;
	Student temp;
	string::size_type longestName = 0;

	while (readStudent(cin, temp)) {
		longestName = max(longestName, temp.name.size());
		students.push_back(temp);
	}

	sort(students.begin(), students.end(), compareStudent);

	for (vector<Student>::size_type i = 0; i < students.size(); i++) {
		cout << students[i].name << string(longestName + 1 - students[i].name.size(), ' ');
		
		try {
			double finalGrade = grade(students[i]);
			cout << "Your final grade is " << finalGrade << endl;
		} catch (domain_error) {
			cout << endl << "You must enter your grades. Try again." << endl;
			return 1;
		}

		cout << endl;
	}

	return 0;
}
