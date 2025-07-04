#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;


int main(){
    //creation
    unordered_map<string,string> table;

    //insertion
    table["in"] = "india"; // method 1
    table.insert(make_pair("en","england")); // method 2

    pair<string,string>p;   // method 3
    p.first = "br";  
    p.second = "brazil";
    table.insert(p);


    cout<<table.size()<<endl;

    // table.clear();
    // cout<<table.size()<<endl;

    //.empty() , return boolean

    cout<<table["in"]<<endl;
    table["in"] = "india2";
    cout<<table["in"]<<endl;

    unordered_map<string,string>:: iterator it = table.begin();
    while(it != table.end()){
        pair<string,string> p = *it; 
        cout<<p.first<<endl;
        it++;
    }
    cout<<endl;

    // .erase(table.begin(),table.end());

    if(table.find("inn") !=table.end()){
        cout<<"key found"<<endl;
    }else{
        cout<<"key not found"<<endl;
    }

    if(table.count("in") == 1){
        cout<<"key found"<<endl;
    }else{
        cout<<"key not found";
    }



    return 0;
}