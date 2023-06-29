#include <iostream>
using namespace std;

int main() {
  const int ARRAY_LENGTH1 = 3;
  const int ARRAY_LENGTH2 = 2;

  int myNums1[ARRAY_LENGTH1] = {35, -3, 0};
  int myNums2[ARRAY_LENGTH2] = {20, -1};

  cout << "Multiplying each int in myNums1 by each in myNums2:" << endl;
  for (int index1 = ARRAY_LENGTH1-1; index1 >= 0; --index1) {
    for (int index2 = ARRAY_LENGTH2-1; index2 >= 0; --index2) {
      cout << myNums1[index1] << " x " << myNums2[index2] << " = "
           << myNums1[index1] * myNums2[index2] << endl;
    }
  }
  return 0;
}
