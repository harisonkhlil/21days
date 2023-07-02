#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

template <typename T> void DisplayContents(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    cout << *element << " ";
  }
  cout << endl;
}

template <typename elementType> struct DisplayDoubleElement {
  int times = 0;
  elementType number;

  // 先要进行构造函数,将 times 初始化
  DisplayDoubleElement() : times(0) {}
  void operator()(const elementType &element) {
    ++times;
    cout << 2 * element << " ";
  }
  bool operator()(const elementType &element1, const elementType &element2) {
    return (element1 > element2);
  }
};

int main() {
  vector<int> numInVec;

  // 循环输入数字,直到输入 q 为止
  cout << "Enter a number (q to quit)" << endl;
  cout << "> ";
  string userInput;

  while (true) {
    getline(cin, userInput);
    if (userInput == "q") {
      break;
    }
    numInVec.push_back(stoi(userInput));
    cout << "> ";
  }

  // 显示输入数字的 2 倍
  DisplayDoubleElement<int> result;
  result =
      for_each(numInVec.begin(), numInVec.end(), DisplayDoubleElement<int>());

  // 显示 functor 被调用的次数
  cout << endl << "Functor invoked " << result.times << " times" << endl;

  // 使用降序排序
  vector<int> numsInVec;
  for (int sample = 10; sample > 0; --sample)
    numsInVec.push_back(sample * 10);
  sort(numsInVec.begin(), numsInVec.end(), DisplayDoubleElement<int>());
  DisplayContents(numsInVec);
  return 0;
}
