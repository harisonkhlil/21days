/*
 * set or multiset 的区别在于 set 不允许重复元素，而 multiset 允许重复元素
 */
#include <functional>
#include <iostream>
#include <set>

typedef std::multiset<int> MSETINT;
template <typename T> bool SortDescending(const T &item1, const T &item2) {
  return (item1 > item2);
}

template <typename T> void DisplayContents(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    std::cout << *element << " ";
  }
  std::cout << std::endl;
}

int main() {
  using namespace std;

  set<int> setInts{202, 151, -999, -1};
  setInts.insert(-1); // duplicate
  cout << "Contents of the set: " << endl;
  DisplayContents(setInts);

  // 使 setInts 降序排列
  // set<int, decltype(&SortDescending<int>)> setIntsDesc(SortDescending<int>);

  set<int, greater<>> setIntsDesc; // 两种方式都可以
  setIntsDesc.insert(setInts.begin(), setInts.end());
  cout << "Contents of the descending set: " << endl;
  DisplayContents(setIntsDesc);

  multiset<int> msetInts;
  msetInts.insert(setInts.begin(), setInts.end());
  msetInts.insert(-1); // duplicate

  cout << "Contents of the multiset: " << endl;
  DisplayContents(msetInts);
  cout << "Number of instances of '-1' in the multiset are: '";
  cout << msetInts.count(-1) << "'" << endl;

  // Find
  set<int> setInts1{43, 78, -1, 124};
  DisplayContents(setInts1);

  auto elementFound = setInts1.find(-1);
  if (elementFound != setInts1.end()) {
    cout << "Element " << *elementFound << " found!" << endl;
  } else {
    cout << "Element not found in set!" << endl;
  }

  auto anotherFind = setInts1.find(12345);
  if (anotherFind != setInts1.end()) {
    cout << "Element " << *anotherFind << " found!" << endl;
  } else {
    cout << "Element not found in set!" << endl;
  }

  // Erase
  MSETINT msetInts1{43, 78, 78, -1, 124};
  cout << "multiset contains " << msetInts1.size() << " elements: ";
  DisplayContents(msetInts1); // set 会默认设置为升序

  int eraseInt = -1;
  msetInts1.erase(eraseInt);

  cout << "multiset now contains " << msetInts1.size() << " elements: ";
  DisplayContents(msetInts1);

  return 0;
}