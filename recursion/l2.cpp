#include <iostream>
using namespace std;

void print(int arr[] , int size , int index){
    // lets handle base case
    if(index>=size) return;
    //lets handle one by ourselves
    cout<<arr[index]<<"  ";
    //let recersive approach handle rest of the cases
    print(arr, size, index+1);
}
void reversezPrint(int arr[] ,int size ){
    //base case
    if((size-1)<0)return;
    // lets handle case 1;
    cout<<arr[size-1]<<" ";
    // rest rec will handle
    reversezPrint(arr , size-1);
}

int main(){
    int arr[5] = { 1,2,3,4,5};
    int n = 5;
    // int index=0;
    reversezPrint(arr , n );
    return 0;
}
