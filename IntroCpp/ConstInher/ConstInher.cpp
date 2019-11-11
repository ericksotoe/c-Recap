#include <iostream>
using namespace std;

class Machine {
private:
  int id;

public:
  Machine() : id(0) { cout << "Machine no-arg constructor called." << endl; };
  Machine(int id) : id(id) {
    cout << "Machine Param constructor called." << endl;
  };

  void info() { cout << "ID #: " << id << endl; };
};

class Vehicle : public Machine {
public:
  Vehicle(int id) : Machine(id) {
    cout << "Vehicle Param constructor called." << endl;
  };
  Vehicle() { cout << "Vehicle no-arg constructor called." << endl; };
};

class Car : public Vehicle {
public:
  Car() : Vehicle(999) { cout << "Car no-arg constructor called." << endl; };
};

int main() {
  Car v1;
  v1.info();

  return 0;
}