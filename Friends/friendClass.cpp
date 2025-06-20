#include<iostream>
using namespace std;

class A {
    private:
        int secret = 42;
        friend class B;
};

class B {
    public:
        void reveal(A obj) {
            cout<<"Accessing A's private data"<<obj.secret<<endl;
        }
};

int main() {
    A a;
    B b;
    b.reveal(a);
    return 0;
}