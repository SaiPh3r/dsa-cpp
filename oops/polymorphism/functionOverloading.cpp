#include <iostream>
using namespace std;

class Add{
    public:
        int sum(int x , int y){
            return x+y;
        }

        int sum(int x , int y , int z){
            return x+y+z;
        }

        double sum(double x, double y){
            return x+y;
        }
};

int main(){
    Add add;
    cout<<add.sum(3,4)<<endl;
    cout<<add.sum(3,4 ,3)<<endl;
    cout<<add.sum(3.3,4.3)<<endl;
    return 0; 
}
