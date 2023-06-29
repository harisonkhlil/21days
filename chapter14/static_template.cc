#include <iostream>
using namespace std;

template <typename T> class TestStatic {
public:
  static int staticVal; // 将类成员声明为静态的，该成员将由类的所有实例共享
};

template <typename T> int TestStatic<T>::staticVal; // 初始化模板类的静态成员

int main() {
  TestStatic<int> intInstance;
  cout << "Setting staticVal for intInstance to 2011" << endl;
  intInstance.staticVal = 2011;
  TestStatic<double> dblnstance;
  cout << "Setting staticVal for Double_2 to 1011" << endl;
  dblnstance.staticVal = 1011;
  cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
  cout << "dblnstance.staticVal = " << dblnstance.staticVal << endl;
  return 0;
}