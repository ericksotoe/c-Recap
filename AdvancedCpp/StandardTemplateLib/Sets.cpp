#include <iostream>
#include <set>
using namespace std;

class Test {
 private:
  int id;
  string name;

 public:
  Test() : id(0), name("") {}
  Test(int id, string name) : id(id), name(name) {}

  void print() const { cout << id << ": " << name << endl; }

  bool operator<(const Test &other) const { return this->name < other.name; }
};

int main() {
  set<int> numbers;
  numbers.insert(5);
  numbers.insert(2);
  numbers.insert(30);
  numbers.insert(1);

  for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
    cout << *it << endl;
  }

  set<int>::iterator itFind = numbers.find(130);

  if (itFind != numbers.end()) {
    cout << "Found: " << *itFind << endl;
  } else {
    cout << "Didnt find number" << endl;
  }

  // count will return 1 if found it else 0
  if (numbers.count(30)) {
    cout << "Number found" << endl;
  }

  set<Test> tests;

  tests.insert(Test(10, "Mike"));
  tests.insert(Test(30, "Joe"));
  tests.insert(Test(333, "Joe"));
  tests.insert(Test(20, "Sue"));

  for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
    it->print();
  }

  return 0;
}