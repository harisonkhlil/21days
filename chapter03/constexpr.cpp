#include <cmath>
#include <iostream>
using namespace std;

double GetPi() { return acos(-1); }
double TwicePi() { return 2 * GetPi(); }

int main() {
  const double pi = 22.0 / 7;
  cout << "constant pi contains value " << pi << endl;
  cout << "constexpr GetPi() returns value " << GetPi() << endl;
  cout << "constexpr TwicePi() returns value " << TwicePi() << endl;

  return 0;
}
