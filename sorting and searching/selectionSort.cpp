#include <iostream>
#include <vector>
using namespace std;


void selectionSort(vector<int> &arr){
    int n = arr.size();
    
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j; 
            }
            
        }
        swap(arr[i] , arr[minIndex]);
    } 
}

int main(){
    vector<int> v = {3,2,1 , 4, 7 ,5};
    selectionSort(v);
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}