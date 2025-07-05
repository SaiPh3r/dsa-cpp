#include <iostream>
#include<vector>
using namespace std;

int main(){

    int a = 10;
    int b = 20;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    auto it = max_element(arr.begin(),arr.end());
    cout<<*it<<endl;
    
    auto it2 = min_element(arr.begin(),arr.end());
    cout<<*it2<<endl;





    return 0;
}