#include <iostream>
using namespace std;

int main() {
  /* code */
  
  int numberCats = 5;
  int numberDogs = 7;
  int numberAnimals = numberCats + numberDogs;
  
  cout << "number of cats: " << numberCats << endl;
  cout << "number of dogs: " << numberDogs << endl;

  cout << "Total number of animals: " << numberAnimals << endl;
  cout << "new dog acquired" << endl;

  numberDogs = numberDogs + 1;
  cout << "New numebr of dogs: " << numberDogs << endl;

  return 0;
}
