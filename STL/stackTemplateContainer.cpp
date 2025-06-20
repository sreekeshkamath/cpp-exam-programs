#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> st;

    st.push(3);
    st.push(4);
    st.push(6);

    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}