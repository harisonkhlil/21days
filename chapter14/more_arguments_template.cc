#include <iostream>
#include <string>
using namespace std;

// 定义一个模板函数，用于将一个值加到结果中
template <typename Res, typename ValType> void Sum(Res &result, ValType &val) {
  result += val;
}

// 定义一个可变参数模板函数，用于将多个值加到结果中
template <typename Res, typename First, typename... Rest>
void Sum(Res &result, First vall, Rest... valN) {
  result += vall;
  Sum(result, valN...); // 递归调用 Sum 函数，将剩余的值加到结果中
}

int main() {
  double dResult = 0;
  Sum(dResult, 3.14, 4.56, 1.1111); // 将多个 double 类型的值加到 dResult 中
  cout << "dResult = " << dResult << endl;

  string strResult;
  Sum(strResult, "Hello ", "World"); // 将多个 string 类型的值加到 strResult 中
  cout << "strResult = " << strResult.c_str() << endl;

  return 0;
}