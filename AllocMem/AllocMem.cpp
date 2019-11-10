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
      cout << "Destructor called on " << this << endl;
    }

    void setName(string name) {
      this->name = name;
    }

    void speak() const {
      cout << "My name is: " << name << endl;
    }

};


int main() {

  Animal *pAnimal = new Animal[26]; // create 10 Animals
  char c = 'a';

  for (int i = 0; i < 26; i++, c++) {
    string name(1,c);
    pAnimal[i].setName(name);
    pAnimal[i].speak();
  }


  delete [] pAnimal; // this tells us to free up all the mem
  

  return 0;
}