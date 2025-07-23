#include <iostream>
using namespace std;
//size-1 will give index of last element and size=0 will give index if first element
void max_rec(int arr[] , int size , int& maxi ){
    // basic case
    if(size-1<0) return ;
    // 1 case me handel krlu
    maxi = max(maxi , arr[size-1]);
    // baki case let rec handle
    max_rec(arr , size-1 , maxi );

}

int main(){
    int maxi = INT_MIN;
    int arr[5] = {1,2,3,7,454};
    max_rec(arr ,5 , maxi );
    cout<<maxi<<endl;
    
    return 0;
}