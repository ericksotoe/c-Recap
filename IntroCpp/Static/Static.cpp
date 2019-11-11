#include <iostream>
using namespace std;

// .h file content
class Test {

private:
  int id;
  static int count;

public:
  // initialization of const must be done in header
  static int const MAX = 99;

public:
  Test() { id = ++count; }

  int getId() { return id; }

  static void showInfo() { cout << count << endl; }
};

// .cpp file
int Test::count = 0;

int main() {
  cout << Test::MAX << endl;
  Test t1;
  cout << "Obj 1 has id " << t1.getId() << endl;
  Test t2;
  cout << "Obj 2 has id " << t2.getId() << endl;
  Test::showInfo();

  return 0;
}