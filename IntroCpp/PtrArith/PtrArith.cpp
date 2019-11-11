#include <iostream>

using namespace std;

int main() {
  const int elements = 5;
  string texts[elements] = {"one", "two", "three", "four", "five"};
  string *pTexts = texts;
  pTexts += 3;
  cout << *pTexts << endl;
  pTexts -= 2;
  
  string *pEnd = &texts[elements];
  pTexts = texts;

  while (pTexts != pEnd) {
    cout << *pTexts << endl;
    pTexts++;
  }


  return 0;
}