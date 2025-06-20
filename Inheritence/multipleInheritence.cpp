#include<iostream>

using namespace std;

class A {
    public:
        void displayA() {
            cout<<"This is the display of A"<<endl;
        }
};

class B: public A {
    public:
        void displayB() {
            cout<<"This is the display of B"<<endl;
        }
};

class C: public B {
    public:
        void displayC() {
            cout<<"This is the display of C"<<endl;
        }
};

int main() {
    C c;
    c.displayA();
    c.displayB();
    c.displayC();
}
