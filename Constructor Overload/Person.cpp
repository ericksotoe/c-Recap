#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person() {
  name = "undefined";
  age = 0;
}

Person::Person(string name, int age) {
  this->name = name;
  this->age = age;
}

string Person::toString() {
  stringstream ss;
  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;

  return ss.str();
}