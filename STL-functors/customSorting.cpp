#include<iostream>
#include <vector>
using namespace std;

// lets see how we can use a functor and sort() to sort in desceding order

class functor{
    public:
    bool operator()(int a , int b){
        return a>b;
    }
};

int main(){
    vector<int> arr = {2,13,12,199,1,23,4};
    sort(arr.begin() , arr.end() , functor());

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}