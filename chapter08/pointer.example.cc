// 证明了指针的地址和指针指向的变量的地址是不同的
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int age = 30;
  int *p_age = &age;

  cout << "Integer age is at: 0x" << hex << p_age << endl; // Integer age is at: 0x0x16d10706c
  cout << "The p_age memory address is: " << &p_age << endl; // The p_age memory address is: 0x16d107060
  return 0;
}
