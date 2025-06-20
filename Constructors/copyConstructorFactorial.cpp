#include<iostream>

using namespace std;

class Factorial {
    int n;
    int fact;
    public:
        Factorial(int number) {
            n = number;
            fact = 1;
        }

        Factorial(Factorial &F) {
            F.display();
        }

        void display() {
            if (n == 0) {
                fact = 0;
            } else {
                for(int i=1; i <= n; i++) {
                    fact = fact * i;
                }
            }
            
            cout<<"The factorial of "<<n<<" is: "<<fact;
        }
};

int main() {
    Factorial f(5);
    Factorial f1(f);
    return 0;
}