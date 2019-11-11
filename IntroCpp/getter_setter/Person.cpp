#include <iostream>
#include "Person.h"

using namespace std;

// person constructor
Person::Person() {
  name = "George";
}

string Person::toString() {
  return "Person's name is: " + name;
}

void Person::setName(string newName) {
  name = newName;
}

string Person::getName() {
  return name;
}