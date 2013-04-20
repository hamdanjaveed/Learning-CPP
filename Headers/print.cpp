#include <iostream>
#include "print.h"

using namespace std;

void print(string message) {
	cout << message << endl;
}

void printVector(vector<int> vect) {
	cout << "[" << vect[0];
	for (vector<int>::size_type i = 1; i < vect.size(); i++) {
		cout << ", " << vect[i];
	}
	cout << "]" << endl;
}

void changeVector(vector<int>& vect) {
	vect[0] = 71;
}

void printList(list<int> list)