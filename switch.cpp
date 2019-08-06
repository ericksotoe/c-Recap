#include <iostream>
using namespace std;

int main() {
  int value = 0;

  switch(value) {
    case 4:
      cout << "Value is 4" << endl;
      break;
    case 5:
      cout << "Value is 5" << endl;
      break;
    case 6:
      cout << "Value is 6" << endl;
      break;
    default:
      cout << "Unrecog value" << endl;
      break;
  }


  return 0;
}