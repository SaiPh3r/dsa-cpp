// basics of queue
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"size: "<<q.size()<<endl;
    cout<<q.empty()<<endl;

    cout<<q.front()<<endl; 
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;

    return 0;
}