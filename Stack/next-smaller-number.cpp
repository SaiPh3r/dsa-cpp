#include <iostream>
#include <stack>
#include<vector>
#include <algorithm>

using namespace std;

void smaller(stack<int>&st , vector<int>v , vector<int> &ans){
    int n = v.size()-1;
    for(int i=n;i>=0;i--){
        int element = v[i];
        
        while(element <= st.top()){
            st.pop();
        }
        // this means we got to the index where smaller value is there
        ans.push_back(st.top());
        st.push(element);
        
    }
}


int main() {
    stack<int>s;
    s.push(-1);
    vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    vector<int>ans;
    smaller(s , v , ans );
    reverse(ans.begin() , ans.end());
    
    for(int val:ans){
        cout<<val<<" ";
    }


    return 0;
}