#include <iostream>
using namespace std;

class Motor {
public:
  void SwitchIgnition() { cout << "Ignition ON" << endl; }
  void PumpFuel() { cout << "Fuel in cylinders" << endl; }
  void FireCylindes() { cout << "Vroooom" << endl; }
};

class Car : protected Motor {
public:
  void Move() {
    SwitchIgnition(); // RaceCar has access to members of
    PumpFuel();       // base Motor due to "protected" inheritance
    FireCylindes();   // between RaceCar & Car, Car & Motor
    FireCylindes();
  }
};

int main() {
  Car myDreamCar;
  myDreamCar.Move();
  return 0;
}
