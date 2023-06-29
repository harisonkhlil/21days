#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::cout << "Enter a line of text: " << std::endl;
  std::string userInput;
  std::getline(std::cin, userInput);

  char copyInput[20] = {'\0'};
  if (userInput.length() < 20) {
    strcpy(copyInput, userInput.c_str());
    std::cout << "copyInput contains: " << copyInput << std::endl;
  } else {
    std::cout << "Bounds exceeded: won't copy" << std::endl;
  }
  return 0;
}
