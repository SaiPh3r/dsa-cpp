#include<iostream>
#include<stack>
#include <climits>
using namespace std;




bool isSorted(stack<int>s , int prev){
    
    // base case 
    if(s.empty()){
        return true;
    }
    // ek case hum solve krlete h 
    int next = s.top();
    if(next<prev){
        return false;
    }else{
        s.pop();
        prev = next;
       
    }
    return isSorted(s , prev);
    
}


int main(){
    stack<int>s;
    s.push(20);
    s.push(10);
    cout<<isSorted(s, INT_MIN)<<endl;
    return 0;
}