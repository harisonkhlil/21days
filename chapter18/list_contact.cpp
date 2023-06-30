#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T> void displayAsContents(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    cout << *element << endl;
  }
  cout << endl;
}

struct ContactItem {
  string name;
  string phone;
  string displayAs;

  ContactItem(const string &conName, const string &conNum)
      : name(conName), phone(conNum), displayAs(conName + ": " + conNum) {}

  // used by list::remove() given Contact list item
  bool operator==(const ContactItem &itemToCompare) const {
    return (this->name < itemToCompare.name);
  }

  bool operator<(const ContactItem &itemToCompare) const {
    return (this->name < itemToCompare.name);
  }
  /*
   * 理解 operator const char *() const { return displayAs.c_str(); }
   * 1. operator const char *() const 是一个类型转换函数，它将 ContactItem
   * 类型转换为 const char * 类型
   * 2. const char * 是一个指针，指向一个字符串
   * 3. displayAs 是一个 string 类型，它有一个成员函数 c_str()，返回一个 const
   * char * 类型的指针
   * 4. operator const char *() const { return displayAs.c_str(); } 的意思是将
   * displayAs.c_str() 的返回值作为
   * operator const char *() const 的返回值
   */
  operator const char *() const { return displayAs.c_str(); }

  bool SortOnphoneNumber(const ContactItem &item1, const ContactItem &item2) {
    return (item1.phone < item2.phone);
  }
};

int main() {
  list<ContactItem> contacts;

  contacts.push_back(ContactItem("Jack Welsch", "+1 7889879879"));
  contacts.push_back(ContactItem("Bill Gates", "+1 97789787998"));
  contacts.push_back(ContactItem("Angi Merkel", "+49 234565466"));
  contacts.push_back(ContactItem("Vlad Putin", "+7 66454564797"));
  contacts.push_back(ContactItem("Ben Affleck", "+1 745641314"));
  contacts.push_back(ContactItem("Dan Craig", "+44 123641976"));

  cout << "List in initial order: " << endl;
  displayAsContents(contacts);

  contacts.sort();
  cout << "Sorting in alphabetical order via operator<:" << endl;
  displayAsContents(contacts);

  // contacts.sort(SortOnphoneNumber);
  // cout << "Sorting in order of phone numbers via predicate:" << endl;
  // displayAsContents(contacts);

  cout << "Erasing Putin from the list: " << endl;
  contacts.remove(ContactItem("Vlad Putin", ""));
  displayAsContents(contacts);

  return 0;
}