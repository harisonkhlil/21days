#include <iostream>
using namespace std;
const double Pi = 3.1415926;

double Area(double radius) { return (4 * Pi * radius * radius * radius) / 3; }
double Area(double radius, double height) {
  return Pi * radius * radius * height;
}
int main(int argc, char *argv[]) {
  cout << "Enter z for Cylinder, c for Circle: ";
  char userSelection = '\0';
  cin >> userSelection;

  cout << "Enter radius: ";
  double radius = 0;
  cin >> radius;

  if (userSelection == 'z') {
    cout << "Enter height: ";
    double height = 0;
    cin >> height;

    cout << "Area of cylinde is: " << Area(radius, height) << endl;
  } else {
    cout << "Area of circle is: " << Area(radius) << endl;
  }
  return 0;
}
