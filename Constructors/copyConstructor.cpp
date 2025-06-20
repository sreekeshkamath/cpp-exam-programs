#include<iostream>
using namespace std;

class Student {
    int age;
    public:
        Student(int a) {
            age = a;
            cout << "Constructor called\n";
        }

        Student(const Student &s) {
            age = s.age + 3;
            cout << "Copy Constructor called\n";
        }

        void showAge() {
            cout<<"Age: "<<age<<endl;
        }
};

int main() {
    Student s1(18);
    // Student s2 = s1;
    // OR
    Student s2(s1);

    s1.showAge();
    s2.showAge();

    return 0;
}