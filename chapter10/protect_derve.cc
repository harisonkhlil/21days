#include <iostream>
using namespace std;

class Fish {
protected:
  bool isFreshWaterFish; // accessible only to derved class

public:
  Fish(bool isFreshWate) : isFreshWaterFish(isFreshWate) {}
  void Swim() {
    if (isFreshWaterFish)
      cout << "Swims in lake" << endl;
    else
      cout << "Swims in sea" << endl;
  }
};

class Carp : public Fish {
public:
  Carp() : Fish(false) {}
};

class Tuna : public Fish {
public:
  Tuna() : Fish(true) {}
  void Swim() { // 可以覆盖 Base 类的方法
    cout << "Tuna swims real fast." << endl;
    Fish::Swim(); // 是用作用域运算符调用了 Fish 的方法
  }
};

int main(int argc, char *argv[]) {
  Carp myLunch;
  Tuna myDinner;

  cout << "About my food: " << endl;
  cout << "Lunch: ";
  myLunch.Swim();
  cout << "Dinner: ";
  myDinner.Swim();
  myLunch.Fish::Swim(); // invokes Fish::Swim() using instance of Tuna
  return 0;
}
