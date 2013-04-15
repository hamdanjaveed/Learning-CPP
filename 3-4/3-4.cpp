#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cout << "Enter some words: ";
	string temp;
	vector<string> strings;

	while(cin >> temp) {
		strings.push_back(temp);
	}

	typedef vector<string>::size_type vSize;
	vSize stringsSize = strings.size();

	if (stringsSize == 0) {
		cout << "Eror: No words entered.\nTerminating...";
		return 1;
	}

	string::size_type longest = strings[0].size(), shortest = strings[0].size();

	for (int i = 1; i < stringsSize; i++) {
		longest = max(longest, strings[i].size());
		shortest = min(shortest, strings[i].size());
	}

	cout << "The longest string was " << longest << " characters long." << endl;
	cout << "The shortest string was " << shortest << " characters long." << endl;

	return 0;
}
