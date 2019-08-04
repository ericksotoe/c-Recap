#include <iostream>
using namespace std;

int main() {


  cout << "enter your name: " << flush;
  string input;
  cin >> input;
  cout << "string you entered: " << input << endl;

  cout << "enter a number: " << flush;
  int value;
  cin >> value;
  cout << "You enterd: " << value << endl;

  return 0;
}