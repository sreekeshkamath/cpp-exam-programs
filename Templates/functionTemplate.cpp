#include<iostream>

using namespace std;



template<typename T>
void add(T a, T b) {
    cout<<"The sum of the numbers are: "<<a+b<<endl;
}

void add(int a, int b) {
    cout<<"Sum of integer numbers are: "<<a+b<<endl;
}

int main() {
    add(3,4);
    add(5.6, 8.0);
    return 0;
}