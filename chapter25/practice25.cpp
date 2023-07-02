#include <bitset>
#include <iostream>
using namespace std;

int main() {
  bitset<4> fourBits("1100");

  bitset<4> fourBits2("0110");

  std::bitset<4> addResult(fourBits.to_ulong() + fourBits2.to_ulong());
  std::cout << "The result of the addition is: " << addResult;
}