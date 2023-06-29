#include <iostream>
#include <bitset>
using namespace std;

int main() {
	cout << "Enter two values to show what is the bit calculate: " << endl;
	bool firstBool = 0;
	cin >> firstBool;
	bool secondBool = 0;
	cin >> secondBool;

	bitset<8> bitFirstBool(firstBool);
	bitset<8> bitSecondBool(secondBool);
	cout << "The firstBool to bit is  " << bitFirstBool << endl;
	cout << "The secondBool to bit is " << bitSecondBool << endl;
	return 0;
}
