#include <iostream>
using namespace std;

void myArray(double userArray[], int length) {
  for (int index = 0; index < length;++index) {
    cout << userArray[index] << " ";
  }
}

int main (int argc, char *argv[]) {
  double userArray[5] = {22.1, 33.0, 55.7, 44.6, 23.0};
  myArray(userArray, 5);
  return 0;
}
