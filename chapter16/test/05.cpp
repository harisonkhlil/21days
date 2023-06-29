#include <cstddef>
#include <iostream>
#include <string>

int main() {
  using namespace std;

  string str = "Good day String! Today is beautiful!";
  size_t charPos = str.find("a", 0);

  while (charPos != string::npos) {
    cout << "\"a\" found at position " << charPos << endl;
    size_t searchOffset = charPos + 1;
    charPos = str.find("a", searchOffset);
  }
  return 0;
}