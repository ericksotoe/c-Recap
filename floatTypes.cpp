#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  float fValue = 76.4;

  cout << sizeof(float) << endl;
  cout << setprecision(20) << fixed << "float value: " << fValue << endl;

  double dValue = 76.4;
  cout << setprecision(20) << fixed << dValue << endl;

  long double lValue = 123.475735637593757347;
  cout << setprecision(20) << fixed << lValue << endl;

  return 0;
}