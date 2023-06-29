#include <iostream>
#include <string>
using namespace std;

class Human {
private:
  string name;
  int age;

public:
  Human() {
    age = 0;
    cout << "Constructed an instance of class Human" << endl;
  }
  void SetName(string humanName) { name = humanName; }
  void SetAge(int humanAge) { age = humanAge; }
  void IntroduceSelf() {

    cout << "I am " + name << " and am ";

    cout << age << " years old" << endl;
  }
};

int main() {
  Human firstWoman;
  firstWoman.SetAge(28);
  firstWoman.SetName("Eve");
  firstWoman.IntroduceSelf();
  return 0;
}
