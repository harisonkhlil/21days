#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>

int main() {
  using namespace std;

  cout << "Please enter a string: ";
  string userInput;
  getline(cin, userInput);

  for (size_t nCharIndex = 0; nCharIndex < userInput.length();
       nCharIndex += 2) {
    userInput[nCharIndex] = toupper(userInput[nCharIndex]);
  }

  cout << "Your string converted to upper case is: " << userInput << endl;
  return 0;
}
