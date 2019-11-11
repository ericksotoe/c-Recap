#ifndef CAT_H_
#define CAT_H_

#include <iostream>

using namespace std;

namespace mks {

const string CATNAME = "Erick";

class Cat {
public:
  Cat();
  virtual ~Cat();
  void speak();
};

} /* namespace mks */

#endif /* CAT_H_ */