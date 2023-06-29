#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double> class HoldsPair {
private:
  T1 value1;
  T2 value2;

public:
  HoldsPair(const T1 &val1, const T2 &val2) : value1(val1), value2(val2) {}
  const T1 &GetFirstValue() const { return value1; }
  /*
  这里的第一个 const 修饰的是 GetFirstValue()
  函数返回值的类型，表示该函数返回的值是一个常量引用，即返回的值不能被修改。第二个
  const 修饰的是 GetFirstValue()
  函数本身，表示该函数是一个常量成员函数，即该函数不能修改类的成员变量。这两个const
  关键字的作用是确保函数返回的值不会被修改，同时也确保该函数不会修改类的成员变量，从而提高代码的可靠性和安全性。
  */
  const T2 &GetSecondValue() const { return value2; }
};

int main() {
  HoldsPair<short, const char *> pairShortStr(25, "Learn templates, love C++");

  cout << "The second object contains -" << endl;
  cout << "Value 1: " << pairShortStr.GetFirstValue() << endl;
  cout << "Value 2: " << pairShortStr.GetSecondValue() << endl;

  return 0;
}