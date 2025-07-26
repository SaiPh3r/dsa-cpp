// lets check if the array is sorted or not using recusrsion
#include <iostream>
#include <vector>
using namespace std;

bool sorted(vector<int> arr, int index ){
    // base case
    if(index==0) return true;


    if(arr[index]<arr[index-1]){
        return false;
    }   
    //ek case solve krlo
    if(arr[index]>=arr[index-1]){
        bool ans = sorted(arr , index-1);
        return ans;
    }
}

int main(){
    vector<int> arr = {1,2,3,4 , 3};
    bool ans = sorted(arr , arr.size()-1);
    cout<<ans;
    
    return 0;
}