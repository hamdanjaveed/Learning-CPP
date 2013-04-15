#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "Please enter some numbers: ";

	vector<double> numbers;
	double temp;

	while (cin >> temp) {
		numbers.push_back(temp);
	}

	typedef vector<double>::size_type vSize;
	vSize numbersSize = numbers.size();

	if (numbersSize == 0) {
		cout << "Enter some numbers.";
		return 1;
	}

	sort(numbers.begin(), numbers.end());

	vSize quarterSize = numbers.size() / 4;

	for(int i = 0; i < 4; i++) {
		const string dashes(20, '-');
		cout << dashes << endl;
		cout << "Quartile #" << (i + 1) << endl;
		for (int j = 0; j < quarterSize; j++) {
			int index = i * quarterSize + j;
			if (i == 3) {
				for (int k = index; k < numbers.size(); k++) {
					cout << numbers[k] << endl;
				}
			} else if (index < numbers.size()) {
				cout << numbers[index];
			}
		}
		cout << endl;
	}

	return 0;
	
}
