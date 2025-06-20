#include<iostream>

using namespace std;

class Test {
    int a;
    public:
    Test(int);
    void display() {
        cout<<"The value of a is: "<<a;
    }
};

Test::Test(int value) {
    a = value;
}

int main() {
    Test T(20);
    cout<<"Value of the constructor declared outside is: ";
    T.display();
}