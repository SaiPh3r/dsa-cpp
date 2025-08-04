#include <iostream>
using namespace std;

class Vehicle{
    public:
        string name;

        Vehicle(string name){
            this->name = name;
            cout<<"Inside Vehicles constructor , "<<name<<endl;
        }

        void startEngine(){
            cout<<"Engine of "<<name<<"started"<<endl;
        }
        void stopEngine(){
            cout<<"Engine of "<<name<<"stopped"<<endl;
        }
};

class Car : public Vehicle{
    public:

        int doors;
        string transimisionType;

        Car(string name , int doors ,string transimisionType  ): Vehicle(name){
            this->doors = doors;
            this->transimisionType = transimisionType;
            cout<<"I am inside car constructor , "<<name<<endl;
        }

        void startAc(){
            cout<<"ac started of car: "<<name<<endl;
        }
};

int main(){
    Car A ("Sonet" , 4 , "manual" );
    A.startAc();
    return 0;
}