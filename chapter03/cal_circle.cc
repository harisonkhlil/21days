#include <cmath>
#include <iostream>
using namespace std;
const double Pi = acos(-1);

int main() {
  cout << "You will get a result about a circle" << endl;
  cout << "Enter a radius: ";
  double radius;
  cin >> radius;

  double perimeter = radius * 2 * Pi;
  double area = Pi * radius * radius;
  cout << "The circle perimeter is " << perimeter << endl;
  cout << "The circle area is " << area << endl;
  return 0;
}
