#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Test {
 private:
  string name;

 public:
  Test(string name) : name(name) {}
  Test(const Test &other) {
    // cout << "copy constructor called " << endl;
    this->name = other.name;
  }

  ~Test() {
    // cout << "Object destroyed" << endl;
  }

  void print() const { cout << this->name << endl; }
};

int main() {
  // LIFO
  stack<Test> testStack;

  // when doint it this way we destroy original and use copy constructor
  testStack.push(Test("erick"));
  testStack.push(Test("mari"));
  testStack.push(Test("joe"));

  cout << endl;

  /*
  Invalid code since we are referencing destroyed object
  Test &test1 = testStack.top();
  testStack.pop();
  test1.print();
  */

  /*
    Test &test1 = testStack.top();
    test1.print();

    testStack.pop();

    Test &test2 = testStack.top();
    test2.print();
    */

  while (testStack.size() > 0) {
    Test &test1 = testStack.top();
    test1.print();
    testStack.pop();
  }

  cout << "--------------------------" << endl;

  // FIFO
  queue<Test> testQueue;

  // when doint it this way we destroy original and use copy constructor
  testQueue.push(Test("erick"));
  testQueue.push(Test("mari"));
  testQueue.push(Test("joe"));

  cout << endl;
  testQueue.back().print();
  cout << endl;

  while (testQueue.size() > 0) {
    Test &test1 = testQueue.front();
    test1.print();
    testQueue.pop();
  }

  return 0;
}