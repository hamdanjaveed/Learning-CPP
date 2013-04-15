// 4.1.5, using functions
#include <iostream>
#include <string>
#include <algorithm> // to use the sort function
#include <vector> // to use vectors
#include <stdexcept> // to use the domain_error

using namespace std;

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
		while (in >> temp) {
			homework.push_back(temp);
		}
		in.clear();
	}
	return in;
}

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
	readHomework(cin, homework);

	try {
		double finalGrade = grade(midterm, final, homework);
		cout << "Your final grade is " << finalGrade << endl;
	} catch (domain_error) {
		cout << endl << "You must enter your grades. Try again." << endl;
		return 1;
	}

	return 0;
}
