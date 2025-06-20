#include<iostream>

using namespace std;

template<typename T>
void swap(T a, T b) {
    T temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"The swapped values are: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

int main() {
    swap(5, 6);
    return 0;
}