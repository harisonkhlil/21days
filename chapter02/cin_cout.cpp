/* 这是一个实例
 * 能够显示多行文字
 */
#include <iostream>
#include <string>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;

	// 声明一个整型变量
	int inputNumber;

	cout << "Enter an integer: ";

	// store integer givev user input 
	cin >> inputNumber;

	cout << "Enter your name: ";

	string inputName;

	cin >> inputName;
	
	cout << inputName << " entered " << inputNumber << endl;

	return 0;
}
