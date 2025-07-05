#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    make_heap(arr.begin(),arr.end());
    //insertion
    arr.push_back(99);
    push_heap(arr.begin(),arr.end());   //this is very imp step

    //deletion
    pop_heap(arr.begin(),arr.end());
    arr.pop_back();

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    //sort_heap

    return 0;
}