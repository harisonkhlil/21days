/* 解释为什么需要 operator == and operator < for set::find() and set::insert()
 * respectively:
 * 1. set::find() 用于查找元素，需要用到 operator== 来判断元素是否相等
 * 2. set::insert() 用于插入元素，需要用到 operator< 来判断元素的大小
 */
#include <cstdio>
#include <iostream>
#include <set>
#include <string>

using namespace std;

// template function to display the contents of a container
template <typename T> void DisplayContents(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    cout << *element << " " << endl;
  }
  cout << endl;
}

struct ContactItem {
  string name;
  string phoneNum;
  string displayAs;

  // constuctot to initialize the values
  ContactItem(const string &nameInit, const string &phoneInit)
      : name(nameInit), phoneNum(phoneInit),
        displayAs(nameInit + ": " + phoneInit) {}

  // used by set::find() given ContactItem
  bool operator==(const ContactItem &itemToCompare) const {
    return (itemToCompare.phoneNum == this->phoneNum);
  }

  // used to sort
  bool operator<(const ContactItem &itemToCompare) const {
    return (this->phoneNum < itemToCompare.phoneNum);
  }

  // used in displayContents via cout
  operator const char *() const { return displayAs.c_str(); }
};

int main() {
  set<ContactItem> setContacts;
  setContacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
  setContacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
  setContacts.insert(ContactItem("Angi Merkel", "+49 23456 5466"));
  setContacts.insert(ContactItem("Vlad Putin", "+7 6645 4564 797"));
  setContacts.insert(ContactItem("John Travolta", "91 234 4564 789"));
  setContacts.insert(ContactItem("Ben Affleck", "+1 745 641 314"));
  DisplayContents(setContacts);

  string inputName = "JunFeng Su";
  auto contactFound = setContacts.find(ContactItem(inputName, ""));
  if (contactFound != setContacts.end()) {
    cout << "The number of " << inputName << " is: " << contactFound->phoneNum
         << endl;
  } else {
    cout << "The number of " << inputName << " is not found!" << endl;
  }

  // query name
  cout << "Please enter a name to query: ";
  getline(cin, inputName);
  auto elementFound = setContacts.find(ContactItem(inputName, ""));
  if (elementFound != setContacts.end()) {
    cout << "The number of " << inputName << " is: " << elementFound->phoneNum
         << endl;
  } else {
    cout << "The number of " << inputName << " is not found!" << endl;
  }
  return 0;
}
