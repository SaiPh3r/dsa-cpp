#include <iostream>
using namespace std;


vector<int>printAllOddNumbers(const vector<int>& arr, int index) {
    //base case 
    if(index == arr.size())  return {}; ;
    // ek case me handle krleta hu
    if(arr[index]%2!=0){
        cout<<arr[index];
    }
    // rec jo h baaki smbhalega
    return printAllOddNumbers(arr , index+1);
}


int main(){
    int index =0;
    vector<int> arr = {1 , 2,3 ,4 ,5};
    printAllOddNumbers(arr , index);
    return 0;
}