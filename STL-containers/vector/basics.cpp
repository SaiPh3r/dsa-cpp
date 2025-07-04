#include <iostream>
#include <vector>
using namespace std;

int main(){

    //creation
    vector<int>marks;
    vector<int>miles(10);
    vector<int>age(10 , 18);  // 10 is size and will be intialized by 18;

    // letsee iterator
    vector<int> ::iterator it = age.begin();
    while(it != age.end()){
        cout<< *it<<" ";
        it++;
    }

    //member functions
    //1 .begin()
    cout<<*(age.begin())<<endl;  

    //2 .end()

    //3 .push_back()
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);

    //4 .pop_back()
    marks.pop_back();
    
    //5 .size()
    cout<<"size of the vector is "<<marks.size()<<endl;
    

    //6 .front() and .back()
    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;

    //7 .empty() //return booleon;

    //8 .capacity()
    cout<<marks.capacity()<<endl;

    //9 .reserve() //it reserves minimum capacity
    marks.reserve(10);
    cout<<marks.capacity()<<endl;

    //10 .clear()    //remove all elements in vector

    //11 .insert(iterator , value)

    //12 .erase(range) ex - marks.erase(marks.begin() , marks.end())

    //13 .swap()
    marks.swap(age);
    cout<<age[0]<<endl;
    cout<<marks[0]<<endl;

    //14 for loop
    for(int i : age){
        cout<<i<<" "<<endl;
    }

    //2d-vector
    vector<vector<int>>v;
    vector<int>a = {1,2,3};
    vector<int>b = {4,5,6};
    vector<int>c = {7,8,9};
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    for(size_t i = 0; i < v.size(); i++){
        for(size_t j = 0; j < v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;

}