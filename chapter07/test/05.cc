#include <iostream>
using namespace std;
const double Pi = 3.1416;

// void Area(double radius);
// void Perimeter(double radius);

void Area(double radius) {
  cout << "The circle area is " << Pi * radius * radius << endl;
}

void Perimeter(double radius) {
  cout << "The circle Perimeter is " << 2 * Pi * radius << endl;
}

int main (int argc, char *argv[]) {
  cout << "Enter radius: ";
  double radius = 0;
  cin >> radius;

  Area(radius);
  Perimeter(radius);
  return 0;
}


