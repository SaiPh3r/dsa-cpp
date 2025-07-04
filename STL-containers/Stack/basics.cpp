#include <iostream>
#include <stack>
using namespace std;

int main(){
    //creation
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    //st.empty() returns booleon
    //swap , first.swap(second);
    return 0;
}