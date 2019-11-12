#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // ofstream outFile; // use this for an open file with 1 arg

  fstream outFile;

  string outputFileName = "text.txt";
  // outFile.open(outputFileName);
  outFile.open(outputFileName, ios::out);

  if (outFile.is_open()) {
    outFile << "Hello there" << endl;
    outFile << 123 << endl;
    outFile.close();
  } else {
    cout << "Could not create file: " << outputFileName << endl;
  }

  return 0;
}