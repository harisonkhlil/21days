#include <iostream>
#include <memory>

using namespace std;

class Fish {
public:
  Fish() { cout << "Fish: Constructed!" << endl; }
  ~Fish() { cout << "Fish: DEstructed!" << endl; }

  void Swim() const { cout << "Fish swim in water" << endl; }
};

void MakeFishSwim(const unique_ptr<Fish> &inFish) { inFish->Swim(); }

int main() { 
	unique_ptr<Fish> smartFish(new Fish);
	smartFish->Swim();

	MakeFishSwim(smartFish);

	unique_ptr<Fish> copySmartFish;
}
