#include <iostream>
#include <map>

using namespace std;

int main() {
  multimap<int, string> lookup;

  lookup.insert(make_pair(30, "mike"));
  lookup.insert(make_pair(10, "vikey"));
  lookup.insert(make_pair(30, "raj"));
  lookup.insert(make_pair(20, "bob"));

  for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
    cout << it->first << ": " << it->second << endl;
  }

  cout << endl;

  for (multimap<int, string>::iterator it = lookup.find(20); it != lookup.end(); it++) {
    cout << it->first << ": " << it->second << endl;
  }

  // using equal range to return 2 iters that span where the item is found
  cout << endl;
  pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its =
      lookup.equal_range(30);

  for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
    cout << it->first << ": " << it->second << endl;
  }

  // c++ 11 we can use auto for this
  cout << endl;
  auto its2 = lookup.equal_range(30);

  for (multimap<int, string>::iterator it = its2.first; it != its2.second; it++) {
    cout << it->first << ": " << it->second << endl;
  }

  return 0;
}