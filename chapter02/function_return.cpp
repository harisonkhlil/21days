#include <iostream>

int demoConsoleOut();


int demoConsoleOut() {
	using std::endl;
	using std::cout;

	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi actually is 22 / 7 =" << 22.0 / 7.0 << endl;


	return 0;
}

int main() {
	demoConsoleOut();

	return 0;
}
