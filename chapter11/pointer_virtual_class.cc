/*Output:
Allocating a Tuna on the free store:
Constructed Fish
Constructed Tuna
Deleting the Tuna:
Destroyed Tuna
Destroyed Fish
--------------------------------------
Instantiating a Tuna on the stack:
Constructed Fish
Constructed Tuna
Automatic destruction as it goes out of scope:
Destroyed Tuna
Destroyed Fish
无论 Tuna 对象是使用 new 在自由存储区中实例化的（第 37
行），还是以局部变量的方式在栈中实例化 的，构造函数和析构函数的调用顺序都相同。
*/
#include <iostream>
using namespace std;

class Fish {
public:
  Fish() { cout << "Constructed Fish" << endl; }
  virtual ~Fish() { cout << "Destroyed Fish" << endl; }
};

class Tuna : public Fish {
public:
  Tuna() { cout << "Constructed Tuna" << endl; }
  ~Tuna() { cout << "Destroyed Tuna" << endl; }
};

void DeleteFishMemory(Fish *inputFish) { delete inputFish; }

int main() {
  cout << "Allocating a Tuna on the free store:" << endl;
  Tuna *pTuna = new Tuna; // 使用 new 创建一个 Tuna 实例
  cout << "Deleting the Tuna: " << endl;
  DeleteFishMemory(pTuna);

  cout << "--------------------------------------" << endl;
  cout << "Instantiating a Tuna on the stack:" << endl;
  Tuna myDinner;
  cout << "Automatic destruction as it goes out of scope: " << endl;
  return 0;
}
