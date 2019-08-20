#include <iostream>

using namespace std;

void manipulate(double *value) {
  *value = 10.0;
  cout << "Value of int in manipulte: " << *value << endl;
}

int main() {

  int nValue = 8;

  int* pnValue = &nValue;
  cout << "Int value " << nValue << endl;
  cout << "Int Ptr value " << pnValue << endl;
  cout << "Int value via pointer " << *pnValue << endl;

  cout << "====================" << endl;
  double dValue = 123.4;

  cout << "1. dValue: " << dValue << endl;
  manipulate(&dValue);
  cout << "2. dValue: " << dValue << endl;



  return 0;
}