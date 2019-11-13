#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> numbers(0);

  cout << "Size: " << numbers.size() << endl;
  // size of internal aray
  int capacity = numbers.capacity();
  cout << "capacity: " << capacity << endl;
  for (int i = 0; i < 10000; i++) {
    if (numbers.capacity() != capacity) {
      capacity = numbers.capacity();
      cout << "new capacity: " << capacity << endl;
    }
    numbers.push_back(i);
  }

  numbers.reserve(100000);
  cout << numbers[2] << endl;
  cout << "Size: " << numbers.size() << endl;
  cout << "Capacity after clear: " << numbers.capacity() << endl;

  return 0;
}