#include <iostream>
#include <limits>
using namespace std;

int main() {

  int value = 54656;
  cout << value << endl;

  cout << "max int value " << INT_MAX << endl;
  cout << "min int value " << INT_MIN << endl;

  long int lValue = 23453523456234523;
  cout << lValue << endl;

  short int sValue = 23434;
  cout << sValue << endl;

  cout << "size of int: " << sizeof(int) << endl;
  cout << "size of short int " <<  sizeof(short int) << endl;

  unsigned int uValue = 2345234;
  cout << "size of uInt " << sizeof(unsigned int) << endl;

  return 0; 
}