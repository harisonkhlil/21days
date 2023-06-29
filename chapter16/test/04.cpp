#include <iostream>
#include <string>

int main() {
  using namespace std;

  string iStr("I");
  string lStr("Love");
  string stlStr("STL");
  string sStr("String");

  string spaceStr(" ");
  string statementStr =
      iStr + spaceStr + lStr + spaceStr + stlStr + spaceStr + sStr + spaceStr;
  cout << statementStr << endl;
  return 0;
}