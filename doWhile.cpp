#include <iostream>
using namespace std;

int main() {

  const string password = "hello";
  string input;

  do {
    cout << "Enter your password > " << flush;
    cin >> input;

    if (input != password) {
    cout << "Password denied." << endl;
    } 

  } while (input != password);

  cout << "Password accepted." << endl;

  return 0;
}
