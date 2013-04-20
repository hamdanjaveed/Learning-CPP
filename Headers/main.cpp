#include "print.h"

using std::vector;

int main() {
	print("This is a message.");
	vector<int> vect;
	vect.push_back(6);
	vect.push_back(8);
	vect.push_back(65);
	vect.push_back(23);
	vect.push_back(645);
	vect.push_back(13);
	vect.push_back(3);
	vect.push_back(54);
	printVector(vect);
	changeVector(vect);
	printVector(vect);
}