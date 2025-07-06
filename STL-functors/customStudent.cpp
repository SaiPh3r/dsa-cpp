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

class functor{
    public:
        bool operator()(Students a , Students b){
            return a.marks < b.marks;
        }
};

int main() {
    Students s1(90 , "sai");
    Students s2(80 , "lakshay");
    Students s3(85 , "parth");
    vector<Students>arr;
    arr.push_back(s1);
    arr.push_back(s2);
    arr.push_back(s3);

    sort(arr.begin() , arr.end() , functor());
    for( Students val: arr){
        cout << val.name << " " << val.marks << " ";
    }
    cout<<endl;
    

    return 0;
}