// myNumbers 是一个指针， 指向第一个元素 （myNumber[0]）
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int myNums[5] = {1, 2, 3, 4, 5};
  int *p_myNums = myNums;
  if (p_myNums == &myNums[0]) {
    cout << "These two equals" << endl;
  }
  return 0;
}
