#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop(); // removes the last pushed element
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}