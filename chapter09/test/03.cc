#include <string>
using namespace std;

class Human {
private:
  int age;
  string name;

public:
  Human(string inputName = "Eve", int inputAge = 28) : age(inputAge), name(inputName) {}
};
