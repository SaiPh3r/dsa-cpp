#include <iostream>
#include <stack>
using namespace std;
// sorted insert using recursion

void sorted_insert(stack<int>&s , int value){
    // base case
    if(s.empty()){
        s.push(value);
        return;
    }
    if(value<=s.top()){
        s.push(value);
        return;
    }
    // ek case hum solve krlege baki recursion
    int topElement = s.top();
    s.pop();
    sorted_insert(s,value);
    // backtracking
    s.push(topElement);
}



int main(){
    stack<int>s;
    s.push(30);
    s.push(20);
    s.push(10);
    sorted_insert(s,25);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}