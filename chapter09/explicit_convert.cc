#include <iostream>
using namespace std;

class Human {
  int age;

public:
  explicit Human(int humansAge) : age(humansAge) {}
  /*
  * 和这个式子一样
  * explicit Human(int humansAge) { age = humansAge; }
  */
};

void DoSomething(Human person) {
  cout << "Human sent did something" << endl;
  return;
}

int main(int argc, char *argv[]) {
  Human kid(10);
  Human anotherKid = Human(11);
  DoSomething(kid);

  // DoSomething(10); // error: could not convert '10' from 'int' to 'Human'
  return 0;
}
