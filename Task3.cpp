#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
	
	cout << "Memory location: " << ptr << endl;

	cout << "Value: " << *ptr << endl;
}

int main() {
	// Task 1: Allocate an int on the stack
	int iValue = 42;
	cout << "--- Stack Allocation ---" << endl;
	analyze_pointer(&iValue);
	cout << endl;

	// Task 2: Allocate an int on the heap
	int *heapValue = new int;
	*heapValue = 99;
	cout << "--- Heap Allocation ---" << endl;
	analyze_pointer(heapValue);
	delete heapValue;

	return 0;
}