#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  cout << "How many integers shall I reserve memory for?" << endl;
  int numEntries = 0;
  cin >> numEntries;

  int *myNumbers = new int[numEntries]; // 申请一个int类型的数组内存空间, 且格式为: Type* Pointer = new Type[numElements]
  cout << "Memory allocated at: 0x" << myNumbers << hex << endl;
  delete[] myNumbers;
  return 0;
}
