#include <iostream>
using namespace std;

class Students{
    public:
    int marks;
    string name;

    Students(int a , string b){
        marks = a;
        name = b;
    }     
};

//functor
class functor{
    public:
    bool operator()(Students a, Students b){
        return a.marks<b.marks;
    }
};


int main(){
    functor cmp;

    Students s1(90 , "sai");
    Students s2(80 , "lakshay");

    if(cmp(s1 , s2 ) ==true){
        cout<<"sai ke marks kam h";
    }else{
        cout<<"lakshay ke marks kam h";

    }

    return 0;
}