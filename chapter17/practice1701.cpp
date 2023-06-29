#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

int main() {
  using namespace std;
  cout << "Enter some numbers to store in vector (enter q to end): " << endl;

  string userInput;
  vector<int> integers;
  while (userInput != "q") {
    cin >> userInput;
    if (userInput != "q") {
      int number = stoi(userInput);
      integers.push_back(number);
    }
  }
  cout << "Vector contains: ";
  for (size_t index = 0; index < integers.size(); ++index) {
    cout << integers[index] << ' ';
  }
  cout << endl;

  cout << "The vector contains " << integers.size() << " elements." << endl;
  cout << "What element would you like to check for? ";
  int element = 0;
  cin >> element;
  cout << "You want the element in vector is: " << integers[element] << endl;

  // add find feature
  cout << "What element would you like to find in the vector? ";

  int findElement = 0;
  cin >> findElement;

  auto elementIterator = find(integers.begin(), integers.end(), findElement);
  if (elementIterator != integers.end()) {
    size_t position = distance(integers.begin(), elementIterator);
    cout << "Found " << findElement << " at position " << position << endl;
  } else {
    cout << "Element not found." << endl;
  }
  return 0;
}