#include <string.h>

#include <cstring>
#include <iostream>
using namespace std;

class MyString {
 private:
  char *buffer;
  MyString() : buffer(NULL) { cout << "Default constructor called" << endl; }

 public:
  // 普通的构造函数
  MyString(const char *initialInput) {
    cout << "Constructor called for: " << initialInput << endl;
    if (initialInput != NULL) {
      buffer = new char[strlen(initialInput) + 1];
      strcpy(buffer, initialInput);
    } else {
      buffer = NULL;
    }
  }

  // // 复制构造函数
  // MyString(const MyString &copySrc) {
  //   cout << "Copy constructor copies: " << copySrc.buffer << endl;
  //   if (copySrc.buffer != NULL) {
  //     buffer = new char[strlen(copySrc.buffer) + 1];
  //     strcpy(buffer,
  //            copySrc.buffer); // deep copy from the source into local buffer
  //   } else {
  //     buffer = NULL;
  //   }
  // }
  //
  // // 复制赋值运算符
  // MyString &operator=(const MyString &copySrc) {
  //   cout << "Copy assignment op. copies: " << copySrc.buffer << endl;
  //   if ((this != &copySrc) && (copySrc.buffer != NULL)) {
  //     if (buffer != NULL)
  //       delete[] buffer;
  //     buffer = new char[strlen(copySrc.buffer) + 1];
  //     strcpy(buffer, copySrc.buffer);
  //   }
  //   return *this;
  // }

  // 移动构造函数
  MyString(MyString &&moveSrc) {
    cout << "Move constructor moves: " << moveSrc.buffer << endl;
    if (moveSrc.buffer != NULL) {
      buffer = moveSrc.buffer;  // take ownership i.e. 'move'
      moveSrc.buffer = NULL;    // free move source
    }
  }
  // 移动赋值运算符
  MyString &operator=(MyString &&moveSrc) {
    cout << "Move assignment op. moves: " << moveSrc.buffer << endl;
    if ((moveSrc.buffer != NULL) && (this != &moveSrc)) {
      delete[] buffer;          // release own buffer
      buffer = moveSrc.buffer;  // take ownership i.e. 'move'
      moveSrc.buffer = NULL;    // free move source
    }
    return *this;
  }

  // 唯一不理解的就是这个
  operator const char *() { return buffer; }

  ~MyString() {
    if (buffer != NULL) delete[] buffer;
  }
  int GetLength() const { return strlen(buffer); }
  MyString operator+(const MyString &addThis) {
    cout << "operator+ called: " << endl;
    MyString newStr;
    if (addThis.buffer != NULL) {
      newStr.buffer = new char[GetLength() + strlen(addThis.buffer) + 1];
      strcpy(newStr.buffer, buffer);
      strcat(newStr.buffer, addThis.buffer);
    }
    return newStr;
  }
};

int main(int argc, char *argv[]) {
  MyString Hello("Hello ");
  MyString World("World");
  MyString CPP(" of C++");
  MyString sayHelloAgain("overwrite this");
  sayHelloAgain = Hello + World + CPP;
  return 0;
}
