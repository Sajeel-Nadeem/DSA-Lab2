#include <iostream>
#include <cassert>
using namespace std;

// Implemented basic logic
bool isSorted(const int* arr, const int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}

void testSortedArray() {
	int arr[] = { 1, 2, 3, 4, 5 };
	assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
	int arr[] = { 1, 4, 3, 5, 6 };
	assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
	int arr[] = { 1, 2, 2, 3, 5 };
	assert(isSorted(arr, 5) == true);
}

int main() {
	testSortedArray();
	testUnsortedArray();
	testDuplicateValues();
	cout << "Core tests passed." << endl;
	return 0;
}