#include <iostream>
using namespace std;

int main() {
	enum DayOfWeek {
		Monday = 0,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};
	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day (Sunday = 0): ";
	int dayInput = Sunday;
	cin >> dayInput;
}
