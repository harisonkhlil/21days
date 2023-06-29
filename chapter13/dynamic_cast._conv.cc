#include <iostream>
using namespace std;

class Fish {
public:
  virtual void Swim() { cout << "Fish swims in water" << endl; }
  virtual ~Fish() {}
};

class Tuna : public Fish {
public:
  void Swim() { cout << "Tuna swims real fast in the sea" << endl; }
  void BecomeDinner() { cout << "Tuna became dinner in Sushi" << endl; }
};

class Carp : public Fish {
public:
  void Swim() { cout << "Carp swims real slow in the lake" << endl; }
  void Talk() { cout << "Carp talked Carp!" << endl; }
};

void DetectFishType(Fish *objFish) {
  Tuna *objTuna = dynamic_cast<Tuna *>(objFish);
  if (objTuna) {
    cout << "Detected Tuna. Making Tuna dinner: " << endl;
    objTuna->BecomeDinner();
  }

  Carp *objCarp = dynamic_cast<Carp *>(objFish);
  if (objCarp) {
    cout << "Detected Carp. Making carp talk: " << endl;
    objCarp->Talk();
  }

  cout << "Verifying type using virtual Fish::Swim: " << endl;
  objFish->Swim();
}

int main() {
  Carp *ptrCarp = new Carp; // create a Carp object instead of a Fish object
  Tuna *ptrTuna = new Tuna;

  DetectFishType(ptrTuna);
  cout << endl;
  DetectFishType(ptrCarp);
  return 0;
}