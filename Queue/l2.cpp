#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQ(queue<int>& q){
    // push all elements of queue into stack 
    // then push all elements of stack into queue;
    stack<int>st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    // after we got our queue emoty and stack with values
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void printQ(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverseQusingRec(queue<int>&q){
    // base case
    if(q.empty()){
        return;
    }
    
    // recursion logic
    int temp = q.front();
    q.pop();

    // recursive call
    reverseQusingRec(q);

    // back tracking
    q.push(temp);
    
}


int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    printQ(q);
    cout<<endl;


    reverseQ(q);
    printQ(q);
    reverseQusingRec(q);
    cout<<endl;
    printQ(q);
    
    return 0;
}