#include <iostream>
using namespace std;

class Fish {
public:
  virtual void Swim() { // Swim( )被声明为虚函数， 则将参数 myFish（其类型为
                        // Fish&）设置为一个 Tuna 对象时，myFish.Swim( )将执行
                        // Tuna::Swim( )，
    cout << "Fish swims!" << endl;
  }
};

class Tuna : public Fish {
  void Swim() { cout << "Tuna swims!" << endl; }
};

class Carp : public Fish {
  void Swim() { cout << "Carp swims!" << endl; }
};

void MakeFishSwim(Fish &inputFish) { inputFish.Swim(); }
int main(int argc, char *argv[]) {
  Tuna myDinner;
  Carp myLunch;

  MakeFishSwim(myDinner);
  MakeFishSwim(myLunch);
  return 0;
}
