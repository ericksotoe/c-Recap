#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {

  private:
    string name;

  public:
    // constructor
    Person();

    string toString();

    // seter and getters
    void setName(string newName);
    string getName();
};

#endif /* PERSON_H_ */