#include <iostream>
#include "Cat.h"

using namespace std;

int main() {

  Cat cat1;
  Cat cat2;

  cat1.makeHappy();
  cat1.speak();
  cat1.jump();

  cat2.makeSad();
  cat2.speak();
  cat2.jump();

  return 0;
}