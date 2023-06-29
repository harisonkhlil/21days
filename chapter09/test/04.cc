#include <iostream>
using namespace std;

class Circle {
private:
  const double Pi = 3.1416;
  double radius;

public:
  Circle(double inputRadius) {
    radius = inputRadius;
  }
  double GetPerimeter() {
    return 2 * Pi * radius;
  }
  double GetArea() {
    return Pi * radius * radius;
  }
};

int main() {
  cout << "Enter a radius to calculte area or perimeter: ";
  double userInput = 0;
  cin >> userInput;

  Circle circle(userInput);
  cout << "The circle area is: " << circle.GetArea() << endl;
  cout << "The circle perimeter is: " << circle.GetPerimeter() << endl;
}
