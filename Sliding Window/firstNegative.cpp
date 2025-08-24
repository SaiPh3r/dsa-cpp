#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> firstNegative(vector<int>&arr , int k){
    vector<int>ans;
    deque<int>dq;
    
    // 1st window
    // addition
    for(int index =0; index<k ; index++){
        int element = arr[index];
        if(element<0){
            dq.push_back(index);
        }
    }
    // answer
    if(dq.empty()){
        ans.push_back(0);
    }else{
        ans.push_back(arr[dq.front()]);
    }

    // remaining windows;

    for(int i = k; i<arr.size();i++){
        // removal'
        if(!dq.empty() && i-dq.front() >=k){
            dq.pop_front();
        } 
        // after removal addition
        int element = arr[i];
        if(element<0){
            dq.push_back(i);
        }
        // ans
        if(dq.empty()){
            ans.push_back(0);
        }else{
            ans.push_back(arr[dq.front()]);
        }
    }

        return ans;
}

int main(){
    vector<int>a = {-8  ,2 ,3, -6, 10};
    vector<int>ans =firstNegative(a , 2);
    for(int val:ans){
        cout<<val<<" ";
    }


    
    return 0;
}
