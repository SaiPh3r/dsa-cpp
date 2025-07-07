#include <iostream>
using namespace std;


void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
}

int main(){
    vector<int> v = {3,2,1};
    insertionSort(v);
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}