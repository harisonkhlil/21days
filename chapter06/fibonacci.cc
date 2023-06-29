#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number to show how many numbers: ";
	unsigned long myNumber;
	cin >> myNumber;

	cout << "This program will calculate " << myNumber << "Fibonacci Numbers at a time" << endl;

	unsigned long numFibo01 = 0, numFibo02 = 1;
	for (int counter = 0; counter < myNumber; ++counter) {

		cout << numFibo02 + numFibo01 << " ";
		unsigned long numFibo03 = numFibo02;
		numFibo02 = numFibo01 + numFibo02;
		numFibo01 = numFibo03;
	}

}
