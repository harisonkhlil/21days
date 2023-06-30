#include <iostream>
#include <list>
using namespace std;

template <typename T> void DisplayContents(const T &container) {
  for (auto element = container.cbegin(); element != container.end();
       ++element) {
    cout << *element << " ";
  }
  cout << endl;
}

int main() {
  list<int> linkInts1;

  linkInts1.insert(linkInts1.begin(), 2); // 最开始插入一个 2
  linkInts1.insert(linkInts1.begin(), 1); // 在 2 前面插入一个 1

  linkInts1.insert(linkInts1.end(), 3); // 在 2 后面插入一个 3
  cout << "The contents of list 1 after inserting elements:" << endl;
  DisplayContents(linkInts1);

  list<int> linkInts2;
  linkInts2.insert(linkInts2.begin(), 4, 0);
  cout << "The contents of list 2 after inserting '";
  cout << linkInts2.size() << "' elements of a value:" << endl;
  DisplayContents(linkInts2);

  list<int> linkInts3;
  linkInts3.insert(linkInts3.begin(), linkInts1.begin(), linkInts1.end());
  cout << "The contents of list 3 after inserting the contents of ";
  cout << "list 1 at the beginning:" << endl;
  DisplayContents(linkInts3);

  linkInts3.insert(linkInts3.end(), linkInts2.begin(), linkInts2.end());
  cout << "The contents of list 3 after inserting ";
  cout << "the contents of list 2 at the end:" << endl;
  DisplayContents(linkInts3);
  return 0;
}
