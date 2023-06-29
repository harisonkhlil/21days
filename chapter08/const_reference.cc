#include <iostream>
using namespace std;

void GetSquare(const int &number, int &result) {
  result = number*number;
}
int main (int argc, char *argv[]) {
  cout << "Enter a number you wise to square: ";
  int number = 0;
  cin >> number;

  int square = 0;
  GetSquare(number, square);
  cout << number << "^2 = " << square << endl;
  return 0;
}
