#include <functional>
#include <iostream>
#include <queue>
#include <vector>

int main() {
  using namespace std;
  priority_queue<int, vector<int>, greater<>> numsInPrioQ;
  cout << "Inserting {10, 5, -1, 20} into the priority_queue" << endl;
  numsInPrioQ.push(10);
  numsInPrioQ.push(5);
  numsInPrioQ.push(-1);
  numsInPrioQ.push(20);
  cout << "Deleting the " << numsInPrioQ.size() << " elements" << endl;

  while (!numsInPrioQ.empty()) {
    cout << "Deleting topmost element: " << numsInPrioQ.top() << endl;
    numsInPrioQ.pop();
  }
}