// prev smaller element using stack;
#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

void solve(stack<int> &st ,vector<int> &v , vector<int>& ans ){
    for(int i=0; i<v.size();i++){
        int element = v[i];
        while(st.top() >= element){
            st.pop();
        }
        // this means we get smaller element or we get -1
        ans.push_back(st.top());
        st.push(element);
    }
}

int main(){
    stack<int>st;
    st.push(-1);
    vector<int> v;
    vector<int>ans;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    solve(st ,v , ans);

    for(int val:ans){
        cout<<val<<" ";
    }

    return 0;
}