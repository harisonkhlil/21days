#include <iostream>
using namespace std;

class Animal {
public:
  Animal() { cout << "Animal constructor" << endl; }
  int age; // sample member
};

class Mammal : public virtual Animal {};
class Bird : public virtual Animal {};
class Reptile : public virtual Animal {};
class Platypus final : public Mammal, public Bird, public Reptile {
public: // 禁止鸭嘴兽作为基类使用 final
  Platypus() { cout << "Platypus constructor" << endl; }
};

int main() {
  Platypus duckBilledP;
  duckBilledP.age = 22;
  return 0;
}
