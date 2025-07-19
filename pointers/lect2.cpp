// studying stack and heap memory and how to use them 
#include <iostream>
using namespace std;

int main(){
    // lets create a 2d array dynamially using heap  array-(5 ,3);
    int** arr = new int* [5];
    for(int i=0;i<5;i++){
        arr[i] = new int [3];
    }


    return 0;
}