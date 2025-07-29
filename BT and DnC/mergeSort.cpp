// MERGE SORT-> BT AND DNC
#include <iostream>
using namespace std;


void mergee(vector<int>& arr  , int s , int e){
    int mid = (s+e)/2;
    int leftLength = mid-s+1;
    int rightLength  = e-mid;

    int* arr1 = new int[leftLength];
    int* arr2 = new int[rightLength];

    int mainArrayIndex = s;
    for(int i =0;i<leftLength;i++){
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<rightLength;i++){
        arr2[i] = arr[mainArrayIndex];
        mainArrayIndex++;
        
    }
    

    // we get copies now just merge arr1 and arr2
    int i=0;
    int j=0;
    mainArrayIndex=s;
    while(i<leftLength && j<rightLength){
      if(arr1[i]<arr2[j]){
        arr[mainArrayIndex] = arr1[i];
        i++;
        mainArrayIndex++;
      }else{
        arr[mainArrayIndex] = arr2[j];
        j++;
        mainArrayIndex++;
      }

    }
    while(i<leftLength){
        arr[mainArrayIndex] = arr1[i];
        i++;
        mainArrayIndex;
    }
    while(j<rightLength){
        arr[mainArrayIndex] = arr2[j];
        j++;
        mainArrayIndex++;
    }
 

}

void mergeSort(vector<int>& arr  , int s , int e){
    // base case 
    if(s>=e) return;
    int mid = (s+e)/2;
    //left wala sorted lelo
    mergeSort(arr , s , mid);
    // righr walla lelo
    mergeSort(arr , mid+1 , e);

    // fir bus merge krana h sort krke
    mergee(arr ,  s,  e);
    
}

int main(){
    vector<int>arr = {1,5,3,6};
    int s =0;
    int e = arr.size()-1;
    mergeSort(arr , s , e);
    for(int val: arr){
        cout<<val<<endl;
    }
    return 0;
}