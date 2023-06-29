#include <iostream>
using namespace std;

const double Pi = 3.1415926;

auto Area(double radius) {
  return radius * radius * Pi;
}

int main (int argc, char *argv[]) {
  cout << "Enter radius: ";
  double radius = 0;
  cin >> radius;

  // Call function "Area"
  cout << "Area is: " << Area(radius) << endl;
  return 0;
}
