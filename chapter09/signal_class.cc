#include <iostream>
#include <string>
using namespace std;

class President {
private:
  President(){};                                 // defult construtor
  President(const President &);                  // copy construtor
  const President &operator=(const President &); // assignment operator

  string name;

public:
  static President &GetInstance() {
    // static objiect are constructed only once.
    static President onlyInstance;
    return onlyInstance;
  }

  string GetName() { return name; }
  void SetName(string InputName) { name = InputName; }
};

int main(int argc, char *argv[]) {
  President &onlyPresident = President::GetInstance(); // only the one method.
  onlyPresident.SetName("Su JunFeng");
  // President second; // 这行和下面这行都是一个问题,因为已经私有
  // President* third= new President();
  // President fourth = onlyPresident; // 试图使用复制构造函数创建现有对象的拷贝
  // 但是第 8 行已经设置私有
  // onlyPresident = President::GetInstance(); // 试图使用赋值运算符

  cout << "The name of the President is: ";
  cout << President::GetInstance().GetName() << endl;
}
