#include <iostream>
#include <string>

int main() {
  using namespace std;

  string stlString = "Hello String"; // Sample string

  // Access the contents of the string using array syntax
  cout << "Display elements in string using array-syntax: " << endl;
  for (size_t charCounter = 0; charCounter < stlString.length();
       ++charCounter) { // size_t is an unsigned integer type
    cout << "Character [" << charCounter << "] is: ";
    cout << stlString[charCounter] << endl;
  }

  // Access the contents of a string using iterators
  cout << "Display elements in string using iterators: " << endl;
  int charOffset = 0;
  for (auto charLocator = stlString.cbegin(); // auto: C++11
       charLocator != stlString.cend(); ++charLocator) {
    cout << "Character [" << charOffset++ << "] is: ";
    cout << *charLocator << endl;
  }

  cout << endl;

  cout << "The char* representation of the string is: ";
  cout << stlString.c_str() << endl;
}