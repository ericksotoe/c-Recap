#include <iostream>

using namespace std;

int main() {
  string text1 = "hello";
  cout << text1 << endl;

  char text[] = {'h', 'e', 'l', 'l', 'o'};
  char texts[] = "hello";

  cout << text << endl;
  cout << texts << endl;

  for (int i = 0; i < sizeof(text); i++) {
    cout << i << ": " << text1[i] << endl;
    cout << i << ": " << text[i] << endl;
    cout << i << ": " << texts[i] << endl;
  }


  return 0;
}