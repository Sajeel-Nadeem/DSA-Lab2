#include <iostream>
using namespace std;

int main() {
	const int size = 20;

	// Dynamically allocate memory for the array
	int *salArray = new int[size];

	// Input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> salArray[i];
	}

	// Applying increment formula
	for (int i = 0; i < size; i++) {
		salArray[i] = salArray[i] + salArray[i] / (i + 1);
	}

	// Displaying updated salaries
	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << salArray[i] << " ";
	}
	cout << endl;

	// Freeing the dynamically allocated memory
	delete[] salArray;

	return 0;
}