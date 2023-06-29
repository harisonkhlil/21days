#include <iostream>
#include <string>

int main() {
  using namespace std;

  cout << "Enter a string: ";
  string userInput;
  getline(cin, userInput);

  string reverseUserInput = userInput;
  reverse(reverseUserInput.begin(), reverseUserInput.end());

  if (userInput == reverseUserInput) {
    cout << "That's a palindrome!" << endl;
  } else {
    cout << "That's not a palindrome!" << endl;
  }

  return 0;
}