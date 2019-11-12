#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // opens file named text.txt
  string inFileName = "text.txt";
  ifstream inFile;
  inFile.open(inFileName);

  // if the file is opened correctly get the lines and print them out
  if (inFile.is_open()) {
    string line;

    while (inFile) {
      getline(inFile, line);  // grabs one line
      cout << line << endl;
    }
    inFile.close();
  } else {
    cout << "Cannot open file: " << inFileName << endl;
  }

  return 0;
}