#include <exception>
#include <iostream>

using namespace std;

void goesWrong() {
  bool error1Detected = true;
  bool error2Detected = false;

  if (error1Detected) {
    throw bad_alloc();
  }

  if (error2Detected) {
    throw exception();
  }
}

int main() {
  try {
    goesWrong();
    // catch exceptions from subclass first and parent at end
  } catch (bad_alloc &e) {
    cout << "catching badAll " << e.what() << endl;
  } catch (exception &e) {
    cout << "catching except " << e.what() << endl;
  }
  return 0;
}