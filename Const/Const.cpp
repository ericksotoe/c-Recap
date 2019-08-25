#include <iostream>
using namespace std;

class Animal {

  private:
    string name;

  public:
    void setName(string name) { this->name = name; };
    void speak() const { cout << "My name is: " << name << endl; };
};

int main() {

  const double PI = 3.141592;
  cout << PI << endl;

  Animal animal;
  animal.setName("Freddy");
  animal.speak();

  int value = 8;
  // const int *pValue = &value; // pointer to an int that is constant
  // int *const pValue = &value; // constant pointer to an int
  int *pValue = &value;

  cout << *pValue << endl;

  int number = 11;
  pValue = &number; // error when reassigning const ptr: int *const pValue = &value;
  *pValue = 12; // error when changing value of ptr of int that is const: const int *pValue = &value;

  cout << *pValue << endl;


  return 0;
}