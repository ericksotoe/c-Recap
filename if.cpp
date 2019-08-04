#include <iostream>

using namespace std;

int main() {
  string password = "hello";
  cout << "enter your password > " << flush;
  string input;
  cin >> input;

  if (input == password) {
    cout << "success" << endl;
  } if (input != password) {
    cout << "failure" << endl;
  }

  // cout << "'" << input << "'" << endl;
}