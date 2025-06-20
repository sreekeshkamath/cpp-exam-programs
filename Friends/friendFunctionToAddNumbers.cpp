#include<iostream>

using namespace std;

class AddNumbers{
    private:
        int n;

    public:
        friend void add(int n);
};

void add(int n) {
    AddNumbers number;
    number.n = n;
    int result = 0;
    for (int i = 0; i < numbers.n; i++) {
        result += i;
    }
    cout<<"The sum of the number is: "<<number.a + number.b<<endl;
}

int main() {
    add();

    return 0;
}