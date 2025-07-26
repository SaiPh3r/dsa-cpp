// solving this problem with this approach will give tle in leetcode or gfg 
// using recursion->include , exclude approach
#include <iostream>
#include <vector>
using namespace std;

int change(int amount , int index , vector<int>& coins){
    // base cases:
    // 1
    if(amount == 0 ) return 1;
    // 2
    if(index >= coins.size()) return 0;

    // include
    int includeans=0;
    if(coins[index]<=amount){
        includeans = change(amount - coins[index] , index , coins);
    }
    // exclude 
    int excludeans = change(amount , index+1 , coins);

    int total  = includeans + excludeans;
    return total;
}

int main(){
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    int ans = change(amount , 0 , coins);
    cout<<ans<<endl;
    return 0;

}