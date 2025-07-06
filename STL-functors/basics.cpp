#include <iostream>
using namespace std;

// lets create first functor

class functor_one{
    public:
    bool operator()(int a , int b){
        return a>b;
    }
};

int main(){
    functor_one cmp;
    if(cmp(10,5)==true){
        cout<<"10 is greater tha 5"<<endl;
    }else{
        cout<<"10 is smaller tha 5"<<endl;
    }

    return 0;
}
