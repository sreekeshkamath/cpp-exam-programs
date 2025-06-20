#include<iostream>

using namespace std;

int main() {
    double a;
    try {
        if (a == 2) {
            throw a;
        } else if (a == 2.5) {
            throw a;
        } else if (a == 'c') {
            throw a;
        } else {
            throw "Nothing";
        }
    } catch (int a) {
        cout<<"Variable is an integer";
    } catch (float a) {
        cout<<"Variable is a float";
    } catch (...) { // Catch all exceptions
        cout<<"Something fishy";
    }
    return 0;
    
}