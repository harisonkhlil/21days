#include <iostream>
#include <string>
using namespace std;

const double Pi = 3.1415926;

class Shape {
public:
  virtual void Area() {}
  virtual void Print() {}
  virtual ~Shape() {}
};

class Cicle : public Shape {
public:
  auto Area(double inputRadius) { return Pi * inputRadius * inputRadius; }
  void Print() { cout << "This is a circle"; }
};

class Triangle : public Shape {
public:
  auto Area(double userInputWide, double userInputHigh) {
    return userInputHigh * userInputWide;
  }
  void Print() { cout << "This is a triangle"; }
};

int main(int argc, char *argv[]) {
  cout << "This program to calculate triangle(circle) area" << endl;
  cout
      << "Enter y to calculate a circle and vice versa to calculate a triangle" << endl;
  char userInput = 'y';
  cin >> userInput;

  if (userInput == 'y') {
    cout << "Please input radius: ";
    double inputRadius;
    cin >> inputRadius;
    Cicle *pCircle = new Cicle;
    pCircle->Print();
    cout << ", and it area is: " << pCircle->Area(inputRadius) << endl;
    delete pCircle;
  } else {
    cout << "Please input high and wide: ";
    auto inputWide = 0.0, inputHigh = 0.0;
    cin >> inputHigh >> inputWide;
    Triangle userTriangle;
    userTriangle.Print();
    cout << ", and it area is " << userTriangle.Area(inputWide, inputHigh)
         << endl;
  }
  return 0;
}
