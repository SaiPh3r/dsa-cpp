#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;


int main(){
    set<int>s;
    s.insert(10);
    s.insert(30);
    s.insert(20);

    set<int>:: iterator it = s.begin();
    while(it!=s.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //empty
    //size 
    //clear

    if(s.find(11)!=s.end()){
        cout<<"found";
    }else{
        cout<<"not found"<<endl;

    }

    if(s.count(10) ==1){
        cout<<"found";
    }else{
        cout<<"not found"<<endl;

    }


    return 0;
}