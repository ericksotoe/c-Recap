#include <iostream>
using namespace std;

class Test {
 private:
  int id;
  string name;

 public:
  Test() : id(0), name("") {}
  Test(int id, string name) : id(id), name(name) {}
  Test(const Test& other) {
    this->id = other.id;
    this->name = other.name;
  }

  void print() { cout << id << ": " << name << endl; }

  const Test& operator=(const Test& other) {
    this->id = other.id;
    this->name = other.name;
    return *this;
  }

  friend ostream& operator<<(ostream& out, const Test& other) {
    out << other.id << ": " << other.name;
    return out;
  }
};

int main() {
  Test test1(10, "Erick");
  Test test2(20, "Mari");

  cout << test1 << endl;
  test1.print();

  return 0;
}