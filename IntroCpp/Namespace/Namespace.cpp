#include <iostream>
#include "Cat.h"
#include "Animals.h"

using namespace std;
using namespace mks;
// can wrap a class in namespace to use different classes with same name

int main() {

  Cat cat;
  cat.speak();

  ees::Cat cat2;
  cat2.speak();

  mks::Cat cat3;
  cat3.speak();

  cout << ees::CATNAME << endl;
  cout << mks::CATNAME << endl;

  return 0;
}