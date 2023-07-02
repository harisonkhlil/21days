#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename T> void DisplayContents(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    cout << *element << " ";
  }
  cout << endl;
}

int main() {
  vector<int> numsInVec{101, -4, 500, 21, 42, -1};
  sort(numsInVec.begin(), numsInVec.end(),
       [](const int &num1, const int &num2) -> bool { return (num1 > num2); });
  DisplayContents(numsInVec);

  int userInput = 0;
  cout << "Enter a number to add in vector: " << endl << "> ";
  cin >> userInput;

  for_each(numsInVec.begin(), numsInVec.end(),
           [userInput](int &num) { num += userInput; });
  DisplayContents(numsInVec);
  return 0;
}