#include<iostream>

using namespace std;

template<typename T> 
class Test {
    public:
        T x;
        T y;

    Test(T val1, T val2) {
        x = val1;
        y = val2;
    }

    void getValues() {
        cout<<x<<" "<<y<<endl;
    }
};

int main() {
    Test t1(10,20);
    t1.getValues();

    Test t2(10.15, 11.44);
    t2.getValues();

    return 0;
}