#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace eri {

class Complex {
 private:
  double real;
  double imaginary;

 public:
  Complex();
  Complex(double real, double imaginary);
  ~Complex();

  Complex(const Complex& other);  // copy constructor
  const Complex& operator=(const Complex& other);

  double getReal() const { return this->real; }
  double getImaginary() const { return this->imaginary; }
};

ostream& operator<<(ostream& out, const Complex& c);

}  // namespace eri

#endif /* COMPLEX_H_ */