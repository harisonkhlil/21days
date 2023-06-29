#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Date {
 private:
  int day, month, year;
  string dateInString;

 public:
  Date(int inDay, int inMonth, int inYear)
      : day(inDay), month(inMonth), year(inYear) {}
  explicit operator const char *() {
    ostringstream formattedDate;
    formattedDate << day << "/" << month << "/" << year;

    dateInString = formattedDate.str();
    return dateInString.c_str();
  }
  Date operator++() {
    Date copy(month, day, year);
    ++day;
    return copy;
  };
  explicit operator int() { return (day + month + year); }
};

int main() {
  Date Holiday(26, 7, 2023);
  ++Holiday;
  cout << "Holiday is on: " << static_cast<const char *>(Holiday) << endl;
  // string strHoliday(Holiday);
}
