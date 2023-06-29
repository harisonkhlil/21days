#include <iostream>
#include <string>
using namespace std;

int main() {
  const char *constCStyleString = "Hello String!";
  cout << "Constant string is: " << constCStyleString << endl;

  std::string strFromConst(constCStyleString);
  cout << "strFromConst is: " << strFromConst << endl;

  std::string str2 = "Hello String!";
  std::string str2Copy(str2);
  cout << "str2Copy is: " << str2Copy << endl;

  std::string strPartialCopy(constCStyleString, 5);
  cout << "strPartialCopy is: " << strPartialCopy << endl;

  std::string strRepeatChars(10, 'a');
  cout << "strRepeatChars is: " << strRepeatChars << endl;
  return 0;
}
