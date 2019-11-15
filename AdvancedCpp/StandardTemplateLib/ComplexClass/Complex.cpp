#include "Complex.h"

namespace eri {

ostream& operator<<(ostream& out, const Complex& c) {
  out << "(" << c.getReal() << "," << c.getImaginary() << ")";
  return out;
}

Complex::Complex() : real(0), imaginary(0){};
Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}
Complex::~Complex() { cout << "destroyed object" << endl; }
Complex::Complex(const Complex& other) {
  this->real = other.real;
  this->imaginary = other.imaginary;
}
const Complex& Complex::operator=(const Complex& other) {
  this->real = other.real;
  this->imaginary = other.imaginary;
  return *this;
}
} /* namespace eri */