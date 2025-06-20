#include<iostream>

using namespace std;

template<typename T>
void display(T arr[6]) {
    for(int i=0;i<6;i++) {
        cout<<arr[i]<<endl;
    }
}

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    float arr2[6] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6};
    char arr3[6] = {'a', 'b', 'c', 'd'};
    display(arr1);
    display(arr2);
    display(arr3);
}