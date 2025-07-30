#include <iostream>
#include <vector>
using namespace std;

void permutation(string &s , int i){
    // base case
    if(i>=s.size()){
        cout<<s<<endl;
    }
    // Logic
    for(int j=i;j<s.size();j++){
        swap(s[i] , s[j]);
        // recursive call
        permutation(s , i+1);
        // backtracking casue we passed s as reference
        swap(s[i],s[j]);
    }
}

int main(){
    string s = "abc";
    permutation(s,0);
    return 0;
}