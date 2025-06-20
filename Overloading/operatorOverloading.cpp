#include<iostream>

using namespace std;

class Number {
    public: 
        int value;

        Number(int v) {
            value = v;
        }

        Number operator + (int x) {
            return value + x;
        }

        void show() {
            cout<<"Value: "<<value<<endl;
        }
};

int main() {
    Number n1(10);
    Number result = n1 + 5;
    result.show();
    return 0;
}