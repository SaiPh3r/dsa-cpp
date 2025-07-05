#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<int> arr = {10 , 20 , 30 , 40 , 50};
    //accumulate
    int total = accumulate(arr.begin(), arr.end(),0);
    cout<<total<<endl;
    
    //inner_product
    vector<int> arr2 = {1,2,3,4,5};
    int ans = inner_product(arr.begin(),arr.end(),arr2.begin(),0);
    cout<<ans<<endl;

    //partial_sum
    vector<int>result(arr.size());
    partial_sum(arr.begin(), arr.end(),result.begin());

    for(int val:result){
        cout<<val<<" ";
    }
    cout<<endl;

    //iota
    vector<int>first(5);
    iota(first.begin() , first.end(),250);
    for(int val:first){
        cout<<val<<" ";
    }
    cout<<endl;




    return 0;
}