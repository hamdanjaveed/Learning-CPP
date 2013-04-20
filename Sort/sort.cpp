// sort.cpp

#include <iostream>
#include "sort.h"

void bubbleSort(list<int> list) {
	list<int>::iterator iter;
	bool didSwap = true;
	int temp;
	while(didSwap) {
		didSwap = false;
		for (iter = list.begin(); iter < list.end(); iter++) {
			list<int>::iterator prev = --iter;
			if (*iter < *(prev)) {
				int temp = *iter;
				*iter = *prev;
				*prev = temp;
				didSwap = true;
			}
		}
	}
	cout << "[" << list.front();
	for (iter = list.begin(); iter < list.end(); iter++) {
		cout << ", " << *iter;
	}
	cout << "]" << endl;
}