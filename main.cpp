//
//  main.cpp
//  PrivateInheritance
//
//  Created by apple on 2020/6/25.
//  Copyright © 2020 apple. All rights reserved.
//

#include <iostream>
using namespace std;

class IAutoCar {
public:
    virtual void doDrive() = 0;
    virtual void doSpeedup() = 0;
    virtual void doBreakdown() = 0;
};

class Toyota {

public:
  void drive() {
      cout << "Toyota - drive" << endl;
  }

  void speedup() {
      cout << "Toyota - speedup" << endl;
  }

  void breakdown() {
      cout << "Toyota - breakdown" << endl;
  }

};

class AutoCar : public IAutoCar, private Toyota {

public:

    void doDrive() {
        cout << "record drive behavior" << endl;
        Toyota::drive();
    }

    void doSpeedup() {
        cout << "record speedup behavior" << endl;
        Toyota::speedup();
    }

    void doBreakdown() {
        cout << "record doBreakdown behavior" << endl;
          Toyota::breakdown();
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    AutoCar c;
    c.doDrive();
    c.doSpeedup();
    c.doBreakdown();
    return 0;
}
