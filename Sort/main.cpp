#include <iostream>
#include <list>
#include "sort.h"

using namespace std;

int main() {
	list<int> l;
	for (int i = 0, x; i < 10; i++) {
		cin >> x;
		l.push_back(x);
	}
	bubbleSort(l);
}