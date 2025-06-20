#include<iostream>

using namespace std;

class A {
    public:
    virtual void display() = 0;
    virtual void display(int) = 0;
};

class B: public A {
    public:
    void display() {
        cout<<"This is of the derived class";
    }
    void display(int a) {
        cout<<"This is the display of derived class with number: " << a;
    }
};

int main() {
    A *a;
    B b;
    a = &b;
    a->display(3); // We are always taking the base class. Use -> always.
    return 0;
}