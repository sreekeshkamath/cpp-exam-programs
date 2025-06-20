#include<iostream>
#include<thread>

using namespace std;

void printMessage() {
    cout<<"Message received and printed asynchronously"<<endl;
}

int main() {
    thread t(printMessage);
    cout<<"Main function code runs..."<<endl;
    t.join();
    return 0;
}