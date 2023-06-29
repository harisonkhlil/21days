#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> intArray{50, 2991, 23, 9999};

  cout << "The contents of the vector are: " << endl;

  auto  arrIterator = intArray.begin(); // auto = int vector<int>::iterator
  while (arrIterator != intArray.end()) {

    cout << *arrIterator << endl;
    ++arrIterator;
  }

  vector<int>::iterator elFind = find(intArray.begin(), intArray.end(), 2991);
  if (elFind != intArray.end()) {
    int elPos = distance(intArray.begin(), elFind);
    cout << "Value " << *elFind;
    cout << " found in the vector at position: " << elPos << endl;
  }
  return 0;
}
