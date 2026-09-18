#include <iostream>
#include <cassert>
using namespace std;

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

void testSingleElement() {
	int arr[] = { 42 };
	assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
	int arr[] = { 5, 4, 3, 2, 1 };
	assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
	int arr[] = { -5, -2, 0, 3 };
	assert(isSorted(arr, 4) == true);
}

int main() {
	testSortedArray();
	testUnsortedArray();
	testDuplicateValues();
	testSingleElement();
	testDescendingArray();
	testNegativeValues();
	cout << "Edge case tests added." << endl;
	return 0;
}