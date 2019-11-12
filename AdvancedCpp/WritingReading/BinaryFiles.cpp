#include <fstream>
#include <iostream>

using namespace std;

// the #pragma pack removes the padding on struct
#pragma pack(push, 1)

struct Person {
  char name[50];
  int age;
  double height;
};
// the #pragma pack(pop) adds back the padding
#pragma pack(pop)

int main() {
  Person someone = {"Erick", 29, 5.10};

  string fileName = "test.bin";

  // writes a struct to binary file
  ofstream outPutFile;

  outPutFile.open(fileName, ios::binary);

  if (outPutFile.is_open()) {
    outPutFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
    outPutFile.close();
  } else {
    cout << "could not create file " << fileName << endl;
    return 1;
  }

  // reads from a binary file
  Person someoneElse = {};
  ifstream inPutFile;

  inPutFile.open(fileName, ios::binary);

  if (inPutFile.is_open()) {
    inPutFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
    inPutFile.close();
  } else {
    cout << "could not read file " << fileName << endl;
    return 1;
  }

  cout << someoneElse.name << ", " << someoneElse.age << ", "
       << someoneElse.height << endl;
  return 0;
}