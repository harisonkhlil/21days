#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;
template <typename T> void DisplayElements(const T &container) {
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    std::cout << element->first << " -> " << element->second << std::endl;
  }
  cout << endl;
}

struct PredIgnoreCase {

  bool operator()(const string &str1, const string &str2) const {
    string str1NoCase(str1), str2NoCase(str2);
    transform(str1.begin(), str1.end(), str1NoCase.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2NoCase.begin(), ::tolower);

    return (str1NoCase < str2NoCase);
  }
};

typedef map<string, string> DIR_WITH_CASE;              // case sensitive
typedef map<string, string, PredIgnoreCase> DIR_NOCASE; // case insensitive

int main() {
  // Case sensitive directory: Key is name, value is phone number
  DIR_WITH_CASE dirWithCase;
  dirWithCase.insert(make_pair("John", "2345764"));
  dirWithCase.insert(make_pair("JOHN", "2345764"));
  dirWithCase.insert(make_pair("Sara", "42367236"));
  dirWithCase.insert(make_pair("Jack", "32435348"));
  cout << "Displaying contents of the case-sensitive map:" << endl;
  DisplayElements(dirWithCase);

  // Case insensitive directory: Key is name, value is phone number
  DIR_NOCASE dirNoCase(dirWithCase.cbegin(), dirWithCase.cend());

  cout << "Displaying contents of the case-insensitive map:" << endl;
  DisplayElements(dirNoCase);

  cout << "Please enter a name to search" << endl << "> ";
  string name;

  // getline() 与 cin >> name 的区别:
  // cin >> name 会在遇到空格时停止读取, 而 getline() 会一直读取到换行符,
  // 并将换行符从输入流中移除
  getline(cin, name);

  auto pairWithCase = dirWithCase.find(name);
  if (pairWithCase != dirWithCase.end()) {
    cout << "Num in case-sens. dir: " << pairWithCase->second << endl;
  } else {
    cout << "Num not found in case-sensitive dir" << endl;
  }

  auto pairNoCase = dirNoCase.find(name);
  if (pairNoCase != dirNoCase.end()) {
    cout << "Num in case-insens. dir: " << pairNoCase->second << endl;
  } else {
    cout << "Num not found in case-insensitive dir" << endl;
  }
  return 0;
}