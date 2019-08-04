#include <iostream>
using namespace std;

int main() {
  bool bValue = true;
  cout << bValue << endl;

  char cValue = 'a';
  cout << cValue << endl;
  cout << sizeof(char) << endl;

  wchar_t wValue = 'i';
  cout << (char)wValue << endl;
  cout << "size of wchar " << sizeof(wchar_t) << endl;
  return 0;
}