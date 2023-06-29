#include <iostream>
using namespace std;

void Display() {}

template <typename input1, typename... Last>
void Display(input1 const arg1, Last const... args) {
  cout << arg1 << " ";
  Display(args...);
}

int main() {
  Display(1, 2, 3, 4, 5, 6, 7, 8, 9);
  return 0;
}