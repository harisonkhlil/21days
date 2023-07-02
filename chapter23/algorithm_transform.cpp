#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  using namespace std;

  string str{"THIS is a TEst string!"};
  cout << "The sample string is: " << str << endl;

  string strLowerCaseCopy;
  strLowerCaseCopy.resize(str.size());
  transform(str.begin(), str.end(), strLowerCaseCopy.begin(), ::tolower);

  cout << "Result of 'transform' on the string with 'tolower':" << endl;
  cout << "\"" << strLowerCaseCopy << "\"" << endl << endl;

  vector<int> numsInVec1{2017, 0, -1, 42, 10101, 25};
  vector<int> numsInVec2(numsInVec1.size(), -1);

  deque<int> sumInDeque(numsInVec1.size());

  transform(numsInVec1.begin(), numsInVec1.end(), numsInVec2.begin(),
            sumInDeque.begin(), plus<int>());

  cout << "Result of 'transform' using binary function 'plus': " << endl;
  cout << "Index Vector1 + Vector2 = Result (in Deque)" << endl;
  for (size_t index = 0; index < numsInVec1.size(); ++index) {
    cout << index << " \t " << numsInVec1[index] << "\t+ ";
    cout << numsInVec2[index] << "\t= " << sumInDeque[index] << endl;
  }
}