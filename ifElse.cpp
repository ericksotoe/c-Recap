#include <iostream>
using namespace std;

int main() {

  cout << "1. \tAdd new record." << endl;
  cout << "2. \tDelete record." << endl;
  cout << "3. \tView record" << endl;
  cout << "4. \tSearch record." << endl;
  cout << "5. \tQuit." << endl;

  cout << "Enter your selection > " << flush;

  int value;
  cin >> value;

  if (value == 5) {
    cout << "Application quitting ... " << endl;
  } else if (value == 4) {
    cout << "Searching right meow" << endl;
  } else if (value == 3) {
    cout << "Insufficient privileges to use these menu options." << endl;
  } else if (value == 2) {
    cout << "file has been deleted" << endl;
  } else if (value == 1) {
    cout << "adding new record" << endl;
  } else {
    cout << "invalid option" << endl;
  }
   
  return 0;
}