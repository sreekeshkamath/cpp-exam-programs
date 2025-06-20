#include<iostream>

using namespace std;

class A {
    static int n;
    public:

    void display() {
        n = n + 1;
        cout<<"The count of n is: "<<n<<endl;
    }

    void static displayWithStatic() {
        n = n + 1;
        cout<<"The count to display with static is: "<<n<<endl;
    }
};
int A::n = 0;
int main() {
    A a1;
    a1.display();
    A a2;
    a2.display();
    A a3;
    a3.display();
    A::displayWithStatic();
    return 0;
}