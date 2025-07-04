#include <iostream>
#include <deque>
using namespace std;


int main(){
    deque<int>d;
    d.push_back(10);
    d.push_front(0);
    d.push_back(20);
    d.push_back(30);



    deque<int> :: iterator it = d.begin();
    while(it != d.end()){
        cout<< *it<<" ";
        it++;
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();

        deque<int> :: iterator it2 = d.begin();
    while(it2 != d.end()){
        cout<< *it2<<" ";
        it2++;
    }
    cout<<endl;

    cout<<d[0];

    // d.empty() , return booleon;
    //d.clear()
    // d.erase(d.begin(),d.begin()+1);

    return 0;
}