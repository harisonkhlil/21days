#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

// sutruct that behaves like a function
template <typename elementType> struct DisplayElement {
  void operator()(const elementType &element) const { cout << element << " "; }
};

int main() {
  vector<int> numInVec{0, 1, 2, 3, -1, -9, 0, -999};
  cout << "Vector of integers contains: " << endl;
  for_each(numInVec.begin(), numInVec.end(), DisplayElement<int>());

  list<char> charsInList{'a', 'z', 'k', 'd'};
  cout << endl << "List of characters contains: " << endl;
  for_each(charsInList.begin(), charsInList.end(), DisplayElement<char>());
  return 0;
}