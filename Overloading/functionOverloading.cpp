#include<iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a,  float b) {
    return a + b;
}

int main() {
    float a = 3.4;
    float b = 7.7;

    int c = 4;
    int d = 6;

    cout<<"The sum of integer numbers is: "<<add(c, d)<<endl;
    cout<<"The sum of floating numbers is: "<<add(a, b);

    return 0;
}