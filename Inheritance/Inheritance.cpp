#include <iostream>
using namespace std;

class Animal {

public:
  void speak() { cout << "Grrrrr" << endl;}
};

// cat inherits from animal
class Cat: public Animal {
public:
  void jump() { cout << "Jumping" << endl;}
};

class Tiger: public Cat {
public:
  void sleep() { cout << "zzzzzz" << endl; }
};


int main() {
  Animal a;
  a.speak();

  Cat cat;
  cat.speak();
  cat.jump();

  Tiger tiger;
  tiger.speak();
  tiger.jump();
  tiger.sleep();

  return 0;
}