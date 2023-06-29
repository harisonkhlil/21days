#include <iostream>
using namespace std;

int main() {
  int *poinToAnInt = new int;
  int *pNumCopy = poinToAnInt;
  *pNumCopy = 30;
  cout << *poinToAnInt;
  delete poinToAnInt;
  return 0;
}
