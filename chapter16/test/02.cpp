// 编写一个程序，告诉用户输入的句子包含多少个元音字母。
#include <iostream>
#include <string>

int main() {
  using namespace std;

  cout << "Enter a staement to find vowel letters number: ";
  string userInput;
  getline(cin, userInput);

  int vowelCount = 0;
  for (auto charLocator = userInput.cbegin(); charLocator != userInput.cend();
       ++charLocator) {
    switch (*charLocator) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      ++vowelCount;
      break;
    default:
      break;
    }
  }

  cout << "Your string contained " << vowelCount << " vowels." << endl;

  return 0;
}