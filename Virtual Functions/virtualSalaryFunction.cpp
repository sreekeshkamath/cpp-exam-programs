#include<iostream>

using namespace std;

class Doctor {
    public:
    virtual void salary() {};
};

class VisitingDoctor:public Doctor {
    public:
    void salary() override {
        cout<<"This will be overriden salary";
    }
};

int main() {
    Doctor *dtr;
    VisitingDoctor vDtr;

    dtr = &vDtr;
    dtr->salary();
    return 0;
}