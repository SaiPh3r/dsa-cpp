#include <iostream>
using namespace std;

class Student{
    public:
        int id;
        int age;
        string name;

        Student(int id1 , int age1  ,string name1 ){
            this->id = id1;
            this->age = age1;
            this->name = name1;
            cout<<id<<" "<<age<<" "<<name<<endl;

        }
        //copy constructor
        Student(const Student &s){
            this->id = s.id;
            this->age = s.age;
            this->name = s.name;
            cout<<"Copy constructor created"<<endl;
        }

        void study(){
            cout<<this->name<<"Studying"<<endl;
        }
        void sleep(){
            cout<<this->name<<"Sleeping"<<endl;
        }
};

int main(){
    Student s(1,2,"sai");
    Student P(0,3,"HEllo");
    Student Q = P;
    cout<<Q.name<<endl;
   
    return 0;
}