#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int maxSize = 1000;

	char* str = new char[maxSize];

	cout << "Enter a string: ";
	cin.getline(str, maxSize);

	int len = strlen(str);

	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	// Displaying the reversed string
	cout << "Reversed string: " << str << endl;

	// Freeing the dynamically allocated memory
	delete[] str;

	return 0;
}