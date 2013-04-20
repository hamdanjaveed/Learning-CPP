// sort.cpp

#include <iostream>
#include <list>
#include "sort.h"

using namespace std;

void bubbleSort(list<int> l) {
	list<int>::iterator current;
	bool didSwap = true;
	int temp;
	while(didSwap) {
		didSwap = false;
		for (current = l.begin(); current != l.end(); current++) {
			list<int>::iterator previous = --current;
			current++;
			if (*current < *previous) {
				temp = *current;
				*current = *previous;
				*previous = temp;
				didSwap = true;
			}
		}
	}
	cout << "[" << l.front();
	current = l.begin();
	for (current++; current != l.end(); current++) {
		cout << ", " << *current;
	}
	cout << "]" << endl;
}