#ifndef CAT_H_
#define CAT_H_

class Cat {

  private:
    // instance variable
    bool happy;

  public:
    // instance methods
    void makeHappy();
    void makeSad();
    void speak();
    void jump();

    // constructor
    Cat();
    // destrucctor
    ~Cat();
};

#endif /* CAT_H_ */