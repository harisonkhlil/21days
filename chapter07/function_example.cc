#include <iostream>
// Calculate Circle area
using namespace std;
double Area(double radius);
double Circumference(double radius);
const double Pi = 3.1415926535;

int main() {
  cout << "Enter radius: ";
  double radius = 0;
  cin >> radius;
  cout << "Area is: " << Area(radius) << endl;

  cout << "Circumference is: " << Circumference(radius) << endl;
  return 0;
}
double Area(double radius) { return Pi * radius * radius; }

double Circumference(double radius) { return 2 * Pi * radius; }
