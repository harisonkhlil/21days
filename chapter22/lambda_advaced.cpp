#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T> void DisplayContents(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    cout << *element << endl;
  }
}
int main() {
  vector<string> namesInVec{"jim", "Jack", "Sam", "Anna"};

  cout << "The names in vector in order of insertion: " << endl;
  DisplayContents(namesInVec);

  cout << "Order after case sensitive sort: " << endl;
  sort(namesInVec.begin(), namesInVec.end());
  DisplayContents(namesInVec);
  cout << "Order after sort ignoring case:" << endl;
  sort(
      namesInVec.begin(), namesInVec.end(),
      [](const string &str1, const string &str2) {
        string str1LowerCase;
        str1LowerCase.resize(str1.size());

        transform(str1.cbegin(), str1.cend(), str1LowerCase.begin(), ::tolower);

        string str2LowerCase;
        str2LowerCase.resize(str2.size());

        transform(str2.cbegin(), str2.cend(), str2LowerCase.begin(), ::tolower);

        return (str1LowerCase < str2LowerCase);
      });
  DisplayContents(namesInVec);
  return 0;
}