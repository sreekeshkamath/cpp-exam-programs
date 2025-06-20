#include<iostream>
#include<forward_list>

using namespace std;

int main() {
    forward_list<int> flist = {10, 20, 30, 40, 50};

    auto it = flist.begin();
    while(it != flist.end()) {
        cout<<*it<<endl;
        ++it;
    }
}