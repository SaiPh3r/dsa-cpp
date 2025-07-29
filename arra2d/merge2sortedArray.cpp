#include<iostream>
#include<vector>
using namespace std;

void merge2sorted(const vector<int>& arr1, const vector<int>& arr2, vector<int>& ans ){
    int i=0;
    int j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        ans.push_back(arr2[j]);
        j++;
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    
}


int main(){
    vector<int> num1 = {1,2,3};
    vector<int> num2 = {8,9};
    vector<int> ans;
    merge2sorted(num1, num2, ans);

    return 0;
}