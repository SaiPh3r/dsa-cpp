#include    <iostream>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    //binary_search -> returns boolean
    bool ans = binary_search(arr.begin(),arr.end(),40);
    cout<<ans<<endl;

    //lower_bound
    auto it = lower_bound(arr.begin(),arr.end(),35);
    cout<<*it<<endl;

    //upper_bound
    auto it2 = upper_bound(arr.begin(),arr.end(),30);
    cout<<*it2<<endl;



    return 0;
}