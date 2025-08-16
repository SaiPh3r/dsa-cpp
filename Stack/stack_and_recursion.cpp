// this stack and recursion is a pattern will be used in several questions afterwards
#include <iostream>
#include <stack>
using namespace std;

void inserAtBottom(stack<int> &s , int value){
    // base case
    if(s.empty()){
        s.push(value);
        return;
    }
    // ek case hum smbhal lenge baaki recursion
    int topValue = s.top();
    s.pop();
    // ab hum recursion call krlege
    inserAtBottom(s , value);

    // back-tracking for pushing the values
    s.push(topValue);
}


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    inserAtBottom(s , 5);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    return 0;
}

