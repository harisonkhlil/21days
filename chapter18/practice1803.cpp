#include <iostream>
#include <list>
#include <vector>

using namespace std;

template <typename T> void DisplayElements(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    cout << *element << " ";
  }
  cout << endl;
}
int main() {
  vector<int> vector{1, 2, 3, 4, 5};
  list<int> list{1, 2, 3, 4, 5};

  list.insert(list.begin(), vector.begin(), vector.end());
  DisplayElements(list);

  return 0;
}