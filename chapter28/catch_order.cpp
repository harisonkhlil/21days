#include <iostream>
using namespace std;

struct StructA {
  StructA() { cout << "Constructor of StructA" << endl; }
  ~StructA() { cout << "Destructor of StructA" << endl; }
};

struct StructB {
  StructB() { cout << "Constructor of StructB" << endl; }
  ~StructB() { cout << "Destructor of StructB" << endl; }
};

void FuncB() {
  cout << "In Func B" << endl;
  StructA objA;
  StructB objB;
  cout << "About to throw up!" << endl;
  throw "Throwing for the heck of it"; // throw 意思是抛出异常
}

void FuncA() {
  try {
    cout << "In Func A" << endl;
    StructA objA;
    StructB objB;
    FuncB();
    cout << "FuncA: returning to caller" << endl;
  } catch (const char *exp) {
    cout << "FuncA: Caught exception: " << exp << endl;
    cout << "Handled it, will not throw to caller" << endl;
    throw "This is a error";
  }
}

int main() {
  cout << "main(): Started execution" << endl;
  try {
    FuncA();
  } catch (const char *exp) {
    cout << "Exception: " << exp << endl;
  }
  cout << "main(): exiting gracefully" << endl;
}