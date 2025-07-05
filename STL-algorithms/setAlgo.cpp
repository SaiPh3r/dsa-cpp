#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);


    vector<int>arr2;
    arr2.push_back(30);
    arr2.push_back(40);
    arr2.push_back(50);
    arr2.push_back(60);

    vector<int>un ;
    vector<int>in ;
    vector<int>diff;
    set_union(arr.begin(),arr.end() , arr2.begin(),arr2.end() , inserter(un , un.begin()));
    set_intersection(arr.begin(),arr.end() , arr2.begin(),arr2.end() , inserter(in , in.begin()));
    set_difference(arr.begin(),arr.end() , arr2.begin(),arr2.end() , inserter(diff , diff.begin()));


    for(int a:un){
        cout<<a<<" ";
    }
    cout<<endl;

    for(int a:in){
        cout<<a<<" ";
    }
    cout<<endl;

    for(int a:diff){
        cout<<a<<" ";
    }
    cout<<endl;


    //set_symmetric_difference




    return 0;
}