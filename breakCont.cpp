#include <iostream>
using namespace std;

int main() {
  // for (int i = 0; i < 5; i++) {
  //   cout << "i is: " << i << endl;

  //   if (i == 3) {
  //     break;
  //   }
  //   cout << "looping ..." << endl;
  // }

  // cout << "Program quitting ..." << endl;

  for (int i = 0; i < 5; i++) {
    cout << "i is: " << i << endl;

    if (i == 3) {
      continue;
    }
    cout << "looping ..." << endl;
  }

  cout << "Program quitting ..." << endl;


  return 0;
}