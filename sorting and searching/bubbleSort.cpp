#include <iostream>
#include <vector>
using namespace std;

void  bubbleSort(vector <int> & arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                //swap
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}



int main(){
    vector<int> v = {5 , 4 , 2 , 1};
    bubbleSort(v);

    for(int val:v){
        cout<<val<<" ";
    }


    return 0;
}