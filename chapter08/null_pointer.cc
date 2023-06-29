#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int* pointsToManyNums = new(nothrow) int [0x1fffffff]; // 我去,我的内存太大了
  if(pointsToManyNums) {
    delete[] pointsToManyNums;
  } else {
    cout << "Memory allocation failed. Ending program" << endl;
  }
  return 0;
}
