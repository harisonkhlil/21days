/*
演示了各种拼接 STL string 的方法。请注意运算符+=的用法以及 append 函数的
功能。append 函数有多个重载版本，能够接受另一个 string 对象（如第 15
行所示），还能接受一个 C 风格字符串。
*/
#include <iostream>
#include <string>

int main() {
  using namespace std;

  string sampleStr1("Hello");
  string sampleStr2(" String!");

  sampleStr1 += sampleStr2;
  cout << sampleStr1 << endl;

  string sampleStr3 = " Fun is not needing to use pointers!";
  sampleStr1.append(sampleStr3);

  const char *constCStyleString = " You however still can!";
  sampleStr1.append(constCStyleString);
  cout << sampleStr1 << endl;

  return 0;
}