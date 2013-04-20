#include <iostream>
#include "sort.h"

using namespace std;

int main() {
	list<int> list;
	for (int i = 0, x; i < 10; i++) {
		cin >> x;
		list.push_back(x);
	}
	list<int>::iterator iter;
	//bubbleSort(list);
}