#include <iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);


    vector<int>:: iterator it = arr.begin();

    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //diff types of iterators are there
    //forward iterator
    //bidirectional iterator
    //random access iterator
    //input iterator
    //output iterator







    return 0;
}