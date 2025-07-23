#include <iostream>
using namespace std;
// 5! = 5*4*3*2*1
int factorial(int n){
    // sbse pehle base case 
    if(n==1) return 1;
    //me bus ek case ke liye handle krunga (5) baaki recursion smbhal lega 
    int rec = factorial(n-1); // recursive call
    int ans = n*rec;
    return ans; 
}
int main(){
    int check = factorial(6);
    cout<<check<<endl;
    return 0;
}