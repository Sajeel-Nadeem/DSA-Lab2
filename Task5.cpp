#include <iostream>
#include <cassert>
using namespace std;

// Stub implementation that will cause the test to fail initially
bool isSorted(const int* arr, const int size) {
	return false;
}

void testSortedArray() {
	int arr[] = { 1, 2, 3, 4, 5 };
	assert(isSorted(arr, 5) == true);
}

int main() {
	testSortedArray();
	cout << "Initial test complete." << endl;
	return 0;
}