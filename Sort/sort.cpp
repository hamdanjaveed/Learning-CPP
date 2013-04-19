// sort.cpp

#include <iostream>
#include "sort.h"

using namespace std;

void bubbleSort(vector<int> list) {
	bool didSwap = true;
	int temp;
	while(didSwap) {
		didSwap = false;
		for (vector<int>::size_type i = 1; i < list.size(); i++) {
			if (list[i] < list[i - 1]) {
				int temp = list[i];
				list[i] = list[i - 1];
				list[i - 1] = temp;
				didSwap = true;
			}
		}
	}
	cout << "[" << list[0];
	for (vector<int>::size_type i = 1; i < list.size(); i++) {
		cout << ", " << list[i];
	}
	cout << "]" << endl;
}