#include<iostream>
using namespace std;
class Base {
public:
    void baseMethod() {
       cout << "Base class method" << endl;
    }
};

class Derived : public Base {
public:
    void derivedMethod() {
       cout << "Derived class method" << endl;
    }
};

int main() {
    Derived obj;
    obj.baseMethod();     // Inherited from Base
    obj.derivedMethod();  // Defined in Derived
    return 0;
}

