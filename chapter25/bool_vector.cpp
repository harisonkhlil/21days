#include <bitset>
#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<bool> boolFlags(3);

  boolFlags[0] = true;
  boolFlags[1] = true;
  boolFlags[2] = false;
  boolFlags.push_back(true);

  cout << "The contents of the vector are: " << endl;
  for (size_t index = 0; index < boolFlags.size(); ++index) {
    cout << boolFlags[index] << " ";
  }
  cout << endl;
  boolFlags.flip();
  cout << "The contents of the vector are: " << endl;
  for (size_t index = 0; index < boolFlags.size(); ++index)
    cout << boolFlags[index] << ' ';
  cout << endl;
}