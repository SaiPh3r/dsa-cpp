#include <iostream>
#include <vector>
using namespace std;


int rob(vector<int>& nums , int index){
    // base case 
    if(index>= nums.size()) return 0;

    //include
    int includeAns = nums[index]+rob(nums , index+2);
    //exclude
    int excludeAns = 0+rob(nums , index+1);

    return max(includeAns , excludeAns);
}

int main(){
    vector<int> arr = {2,7,9,3,1};
    
    int ans = rob(arr , 0);
    cout<<ans<<endl;
    return 0;
}