#include <deque>
#include <iostream>
#include <string>
using namespace std;

template <typename T> void DisplayDeque(deque<T> inDQ) {
  for (auto element = inDQ.cbegin(); element != inDQ.cend(); ++element) {
    cout << *element << endl;
  }
}

int main() {
  deque<string> strDeque{"Hello", "Containers are cool!", "C++ is evolving!"};
  DisplayDeque(strDeque);
  return 0;
}