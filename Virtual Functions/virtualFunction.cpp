#include<iostream>
using namespace std;

class Base {
    public: 
        virtual void show() {
            cout<<"Base class show function\n";
        }
}

class Derived: public Base {
    public:
        void show() override {
            cout<<"Derived class show function\n";
        }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show(); // Notice its base class. We are overriding the base class function.
    return 0;
}