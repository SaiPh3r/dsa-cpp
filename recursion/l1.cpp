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

int two_power(int n){
    if(n==0) return 1;

    int pow =two_power(n-1);
    int ans = 2*pow;
    return ans;
}

int main(){
    int check = factorial(6);
    cout<<check<<endl;

    int power = two_power(4);
    cout<<power<<endl;
    return 0;
}