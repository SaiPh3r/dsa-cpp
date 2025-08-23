#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void reverseInK(queue<int>&q , int k , int unused){
    if(unused>=k){
        // reverse
        stack<int>st;
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        for(int i=0;i<k;i++){
            q.push(st.top());
            st.pop();
        }
        // recursive call
        reverseInK(q , k , unused-k);
    }else{// base case
        for(int i=0;i<unused; i++){
            q.push(q.front());
            q.pop();
        }
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    reverseInK(q , 3 , q.size());

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}