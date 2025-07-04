#include <iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq;
    //max-heap->maximum value - highest priority

    pq.push(10);
    pq.push(25);  // priority element
    pq.push(20);

    //top element -> highest priority element
    cout<<pq.top()<<endl;

    pq.pop(); // 25 will be poped and 20 will be at top then
    cout<<pq.top()<<endl;

    if(pq.empty()==true){
        cout<<"pq is empty"<<endl;
    } else{
        cout<<"pq is not empty"<<endl;
    }
    
    // we can also create a min heap by:-
    priority_queue<int,vector<int> , greater<int>> min_pq; // this is the syntax 
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(20);
    cout<<min_pq.top()<<endl;

    return 0;
}