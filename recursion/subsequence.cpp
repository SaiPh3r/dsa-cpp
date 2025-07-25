#include <iostream>
#include<vector>
using namespace std;


void subsequence(string s ,int index  , string output , vector<string>& ans ){
    //base case
    if(index == s.length()){
        ans.push_back(output);
        return;
    }
    //ek case hum handle krenege inclusion and exclusion ka baaki recusrion smbhal lega
    char ch = s[index];
    //inclusion
    subsequence(s , index+1 , output+ch,ans);
    //exclusion
    subsequence(s,index+1,output,ans);


}

int main(){
    string s = "sai";
    vector<string>ans;
    int index=0;
    string output="";
    subsequence(s, index , output, ans);
    sort(ans.begin() , ans.end());
    for(string val:ans){
        cout<<val<<" ";
    }
    return 0;
}