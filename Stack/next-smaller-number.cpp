#include <iostream>
#include<stack>
#include<vector>
using namespace std;


void solve(stack<int>&st , vector<int>&v , vector<int> &ans){
    // logic
    int n = v.size();
    for(int i=n-1;i>=0;i--){
        int element = v[i];

        while(st.top()>= element){
            st.pop();
        }
        // this mean smaller number found
        ans.push_back(st.top());
        st.push(element);
    }
}
int main(){
    
    vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    
    
    stack<int>st;
    st.push(-1);

    vector<int>ans;
    solve(st , v , ans);
    reverse(ans.begin() , ans.end());
    for(int val: ans){
        cout<<val<<" ";
    }

    return 0;
}