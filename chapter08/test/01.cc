#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int number = 3;
  int *pNum1 = &number; // 脑子残了,指针的定义就是这样写的
  cout << pNum1 << " and " << number << endl;

  *pNum1 = 20;
  cout << pNum1 << " and " << number << endl;

  int *pNum2 = pNum1; // 指针的赋值
  cout << pNum1 << " and " << pNum2 << " and " << number << endl;
  int **ppNum = &pNum1; // 指针的指针
  cout << pNum1 << " and " << pNum2 << " and " << number << " " << ppNum << endl;

  number *= 2;
  cout << pNum1 << " and " << pNum2 << " and " << number << endl;
  return 0;
}
