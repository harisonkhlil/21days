#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

template <typename T> struct CaseInsensitiveCompare {
  bool operator()(const T &str1, const T &str2) {
    T str1Copy = str1, str2Copy = str2;

    transform(str1Copy.begin(), str1Copy.end(), str1Copy.begin(), ::tolower);
    transform(str2Copy.begin(), str2Copy.end(), str2Copy.begin(), ::tolower);
    return (str1Copy < str2Copy);
  }
};
int main() {
  list<string> listNames{"Jack", "john", "sean", "Anna"};
  vector<string> vecNames(4);
  fill(vecNames.begin(), vecNames.end(), "N/A");

  copy(listNames.begin(), listNames.end(), vecNames.begin());
  sort(vecNames.begin(), vecNames.end(), CaseInsensitiveCompare<string>());

  // 将 vecNames 元素转化为小写
  for_each(vecNames.begin(), vecNames.end(), [](string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
  });

  vector<string>::const_iterator iNames;

  for (iNames = vecNames.begin(); iNames != vecNames.end(); ++iNames) {
    cout << *iNames << endl;
  }
}
