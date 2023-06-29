#include <iostream>
#include <string>
using namespace std;

template <typename T, typename Pred>
int countMatchElements(T *beg, T *end, Pred pred) {
  int result = 0;
  for (; beg != end; ++beg) {
    if (pred(*beg))
      ++result;
  }
  return result;
}

// 主函数
int main() {
  // 定义一个整型数组
  int intArray[] = {11, 16, 21, 19, 17, 30};

  // 定义一个 lambda 表达式，用于判断元素是否大于 10
  auto greater10 = [](auto &val) -> bool { return val > 10; };

  // 统计大于20 的元素数量并输出
  cout << countMatchElements(intArray, intArray + 6, greater10)
       << endl; // 这里的知识是 数组相当于指针,数组的第一个指针指向 array[0]

  // 返回 0 表示程序正常结束
  return 0;
}
