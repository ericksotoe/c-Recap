#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace ees {

const string CATNAME = "Mari";


class Cat {
public:
  Cat();
  virtual ~Cat();
  void speak();
};

} /* namespace ees */

#endif /* ANIMALS_H_ */