#include <iostream>

using namespace std;

class Animal {

  private:
    string name;

  public:
    Animal() {
      cout << "Animal Created" << endl;
    }

    Animal(const Animal& other) : name(other.name) {
      cout << "Animal created by copy" << endl;
    }

    ~Animal() {
      cout << "Destructor called on " << this->name << endl;
    }

    void setName(string name) {
      this->name = name;
    }

    void speak() const {
      cout << "My name is: " << name << endl;
    }

};

Animal* createAnimal() {
  Animal *pAnimal = new Animal();
  pAnimal->setName("Betty");
  return pAnimal;
}

int main() {

  Animal *frog = createAnimal();
  frog->speak();

  Animal *pCat1 = new Animal();
  pCat1->setName("Erick"); // same as (*pCat1).setName("Erick")
  pCat1->speak();
  delete pCat1;  
  delete frog;

  return 0;
}