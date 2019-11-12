#include <fstream>
#include <iostream>

using namespace std;

int main() {
  string inFileName = "stats.txt";
  ifstream inFile;

  inFile.open(inFileName);

  if (inFile.is_open()) {
    while (inFile) {
      string line;
      getline(inFile, line, ':');

      int population;
      inFile >> population;

      // inFile.get();  // grabs the newline char
      inFile >> ws;

      if (!inFile) {
        break;
      }

      cout << "'" << line << "'"
           << " --- '" << population << "'" << endl;
    }
    inFile.close();
  } else {
    return 1;
  }
  return 0;
}