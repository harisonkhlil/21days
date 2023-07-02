#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> numsInVec{2017, 0, -1, 10101, 25};

  size_t numZeroes = count(numsInVec.cbegin(), numsInVec.cend(), 0);

  cout << "Number of instances of '0': " << numZeroes << endl;
  size_t numEvenNums =
      count_if(numsInVec.cbegin(), numsInVec.cend(),
               [](const int &num) -> bool { return ((num % 2) == 0); });
  cout << "Number of even elements: " << numEvenNums << endl;
  cout << "Number of odd elements: ";
  cout << numsInVec.size() - numEvenNums << endl;
}