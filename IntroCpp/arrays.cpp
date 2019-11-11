#include <iostream>
using namespace std;

int main() {

  cout << "printing ints" << endl;
  cout << "==============" << endl;
  int values[3];
  values[0] = 55;
  values[1] = 123;
  values[2] = 78;

  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;

  cout << "printing doubles" << endl;
  cout << "==============" << endl;
  // declaring array
  double numbers[4] = {4.5, 2.3, 7.2, 8.1};

  for (int i = 0; i < 4; i++) {
    cout << numbers[i] << endl;
  }

  cout << "init with zeros" << endl;
  cout << "==============" << endl;

  int numberArray[8] = {};

  for (int i = 0; i < 8; i++) {
    cout << numberArray[i] << endl;
  }

  string exts[] = {"apple", "banana", "orange"};

  
  





  return 0;
}