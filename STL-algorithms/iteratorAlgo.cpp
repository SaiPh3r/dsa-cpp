#include<iostream>
#include<vector>
using namespace std;


void printDouble(int a){
    cout<<2*a<<endl;
}

bool checkeven(int a){
    return a%2==0;
}

int main(){
    vector<int>v = {1 ,2 ,3 ,4 ,5 , 2 , 2};
    //for_each()
    for_each(v.begin() , v.end(), printDouble);

    //find
    int target = 2;
    vector<int>:: iterator it = find(v.begin() , v.end() , target);
    cout<<*it<<endl;

    //find_if
    auto it1=find_if(v.begin(),v.end(),checkeven);
    cout<<*it1<<endl;

    //count
    int ans = count(v.begin() , v.end(), target);
    cout<<ans<<endl;

    //count_if
    int c = count_if(v.begin(), v.end(), checkeven);
    cout<<c<<endl;

    //sort
    sort(v.begin(),v.end());
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    //reverse
    reverse(v.begin(),v.end());
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    //rotate
    vector<int>S = {1,2,3,4,5};
    rotate(S.begin(),S.begin()+2 , S.end());
    for(int val:S){
        cout<<val<<" "; 
    }
    cout<<endl;

    //unique
    auto it2 = unique(v.begin() , v.end());
    // it ke pehle sare. unique elemnts
    //it ke baad sare duplicate
    v.erase(it2 , v.end());
    for(int val:v){
        cout<<val<<" , ";
    }
    cout<<endl;

    //partition
    partition(v.begin() , v.end() , checkeven);
    for(int val:v){
        cout<<val<<" ,, ";
    }

    


    return 0;
}