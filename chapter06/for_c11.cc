#include <initializer_list>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int someNums[] = {1, 101, -1, 40, 2040};
  for (const int &aNum : someNums)
    cout << aNum << endl;
  for (auto anElement : {5, 222, 110, -45, 2017})
    cout << anElement << " " << endl;
  char charArray[] = {'h', 'e', 'l', 'l', 'o'};
  for (auto aChar : charArray)
    cout << aChar << " " << endl;
  double moreNums[] = {3, 14, -1.3, 22, 10101};
  for (auto anElement : moreNums)
    cout << anElement << " " << endl;
  string sayHello{"Hello World"};
  for (auto anElement : sayHello)
    cout << anElement << " " << endl;
}
