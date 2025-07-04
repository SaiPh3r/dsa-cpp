#include <iostream>
#include <list>
using namespace std;


int main(){
    // creation
    list<int>myList;
    //insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    myList.push_front(0);
    
    myList.pop_back();
    myList.pop_front();

    // myList.clear();

    // .empty() , return booleon;

    myList.front();
    myList.back();


    // letsee iterator
    list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        cout<< *it<<" ";
        it++;
    }
    cout<<endl;

    myList.remove(10);

    list<int>::iterator it2 = myList.begin();
    while(it2 != myList.end()){
        cout<< *it2<<" ";
        it2++;
    }

    //we can also swap
    // first.swap(second); 


    //.insert(first.begin  , 100);

    //.  erase(range) , for eg = list.erase(list.begin(),list.end());


    return 0;
}