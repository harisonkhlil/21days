#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int *p_AnInt = new int; // 申请一个int类型的内存空间, 且格式为: Type* Pointer = new Type
  cout << "Enter your age: ";
  cin >> *p_AnInt;
  cout << "Your age is: " << *p_AnInt << " is at: " << p_AnInt << endl;

  delete p_AnInt; // 释放内存空间
  return 0;
}
