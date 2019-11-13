#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string, int> ages;

  ages["Mike"] = 40;
  ages["Erick"] = 20;
  ages["Mari"] = 30;

  // map is unique will override
  ages["Erick"] = 70;

  ages.insert(make_pair("Joe", 200));

  ages.insert(pair<string, int>("Peter", 100));

  cout << ages["Erick"] << endl;
  // if try to accessomething not in map will add it
  // cout << ages["f"] << endl;

  if (ages.find("Mari") != ages.end()) {
    cout << "Found Mari" << endl;
  } else {
    cout << "key not found" << endl;
  }

  cout << "\niterating using iterator" << endl;
  for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
    cout << it->first << ": " << it->second << endl;
  }

  cout << endl << "Iteratring using pairs" << endl;
  for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
    pair<string, int> age = *it;
    cout << age.first << ": " << age.second << endl;
  }

  return 0;
}