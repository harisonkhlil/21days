#include "iostream"
#include <cstddef>
using namespace std;

class Fish {
public:
  virtual Fish *Clone() = 0; // 这里使用 virtual 虚函数 格式为 virtual ClassType
                             // *Function() = 0;
  virtual void Swim() = 0; // 这里是虚函数
  virtual ~Fish(){};       // 这里搞了一个虚析构函数
};

class Tuna : public Fish {
public:
  Fish *Clone() override {
    return new Tuna(*this);
  } // override 让编译器检查是否为虚函数, 函数 *this 返回生成一个实例
  void Swim() final override {
    cout << "Tuna swims fast in the sea" << endl;
  } // final 关键字禁止继承
};

class BluefinTuna final : public Tuna { // 高级类,不允许继承
public:
  Fish *Clone() override { return new BluefinTuna(*this); }
  // Cannot override Tuna::Swim as it is "final" in Tuna
};

class Carp final : public Fish {
  Fish *Clone() override { return new Carp(*this); }
  void Swim() override final { cout << "Carp swims slow in the lake" << endl; };
};

int main(int argc, char *argv[]) {
  const int ARRAY_SIZE = 4;
  Fish *myFish[ARRAY_SIZE] = {NULL};
  myFish[0] = new Tuna();
  myFish[1] = new Carp();
  myFish[2] = new BluefinTuna();
  myFish[3] = new Carp();

  Fish *myNewFishes[ARRAY_SIZE];
  for (int index = 0; index < ARRAY_SIZE; ++index) {
    myNewFishes[index] = myFish[index]->Clone();
  }
  for (int index = 0; index < ARRAY_SIZE; ++index) {
    myNewFishes[index]->Swim();
  }
  for (int index = 0; index < ARRAY_SIZE; ++index) {
    delete myFish[index];
    delete myNewFishes[index];
  }
  return 0;
}
